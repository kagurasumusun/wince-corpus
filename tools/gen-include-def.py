#!/usr/bin/env python3
"""tools/gen-include-def.py -- knowledge/ -> include/def material.

This is the first consumer of the knowledge base, and it exists to prove the
pipeline end to end: take the machine-readable statements in ``knowledge/`` and
write the material an include/def generator would be built from.

    python3 tools/gen-include-def.py --unified --out build/generated/wince
                                     # ONE tree for every CE generation:
                                     # the mode to use for a Windows CE
                                     # include/def surface
    python3 tools/gen-include-def.py --set learn/windows-ce-5.0 \
        --out build/generated/wince50       # the per-generation build
    python3 tools/gen-include-def.py --set chm/windows-ce-3.0 --out ... \
        --no-borrow            # only declarations from that set's own pages
    python3 tools/gen-include-def.py --list      # sets that can be generated

The **unified** mode answers "what is the include/def surface of Windows CE as
a whole?": a single tree, never one tree per generation.  Where generations
differ the tree carries a derived ``#if defined(_WIN32_WCE) && ...`` branch
(``_WIN32_WCE`` is the version macro the documentation itself prints -- the
CE .NET pages write ``#if (_WIN32_WCE < 300)``).  The Win32-shared half of the
surface lives in the SAME tree, marked as the desktop reference wherever it is
the only statement -- never a second tree.  A constant's derived ``#define``
is filed into the header the linkage table assigns it
(``kb/constant-headers.tsv``), with its evidence and the strength of the
linkage printed beside it; the weakest rank, the pinvoke weak auxiliary
hint, is marked loudly.  Differences in a constant's number between
generations become ``#if``/``#elif`` branches; disagreements within one
generation are conflicts and are listed, never guessed.

What it writes (nothing is added to the repository -- ``--out`` is yours):

    include/<Header>.h.fragment   the declarations of that header, verbatim,
                                  each with the page it was read from
    link/<Module>.def             EXPORTS material per library/DLL, with the
                                  source of every name (a *worklist*, see the
                                  warning the file itself carries)
    manifest.tsv                  entity <-> header files/libraries <-> declaration
                                  id <-> source page, for traceability
    report.md                     what was generated, what was skipped and why

Honesty rules (the same ones the knowledge base keeps):

* the declaration text is quoted verbatim; nothing is reformatted, completed
  or repaired.  A ``collapsed`` declaration is still written (with the flag in
  the manifest).  When ``--borrow`` is on, another CE page's copy is used
  instead only when, whitespace aside, it is the same text and that page kept
  the spaces.  A copy that also adds a calling convention, a parameter name
  or a different type is not a spacing repair, and the collapsed text stays;
* a declaration is borrowed from another corpus set only when the same entity
  is documented there, and the borrowing is recorded per declaration in
  ``manifest.tsv`` (``borrowed_from``) and in the fragment's comment.  A
  fallback to a Win32 reference page is used only when no CE set prints the
  declaration, and it is marked as such: those pages document the shared
  surface as *desktop* Windows, while Windows CE is not the whole of Win32;
* a header and a library are taken from the version being built.  Another
  CE set's statement is used only when this version's pages state none, and
  it is marked (``header_from`` / ``library_from``).  A Win32 reference
  header (``processthreadsapi.h``, ``windows.h``) is a marked fallback, never
  passed off as a Windows CE header.  Within the chosen statement, a page
  that names ``Wilhelm.h, Otto.h`` has the declaration written into each of
  those files, because that is what the page says.  A library cell that
  names several files (``Ole32.lib, Uuid.lib``, ``A.lib or B.lib``) likewise
  writes the export into each of those worklists.  ``Shell32.dll (version
  4.0 or later)`` names one file; the ``or`` is version prose and is not a
  second library.  A value that names no file at all (``Library: Developer
  Implemented``) is *not* turned into a file name, it is counted in
  ``report.md`` and stays visible in ``knowledge/reports/filtered-values.tsv``;
* a numbered constant is a table row the page prints (``kb/constants.jsonl``).
  The ``*.h.constants`` file quotes that row and, below it, a ``#define``
  whose keyword the page did not print -- the comment says so.  Pages that
  disagree on the number produce no ``#define``.  A number stated only by
  the Win32 reference is not borrowed: desktop and Windows CE values are
  not assumed to match;
* a library and a DLL are kept apart (``coredll.lib`` in the library field,
  ``coredll.dll`` in the DLL field) and the worklist file is named after the
  module both spellings refer to, with the spellings it was stated as printed
  at the top.  Only functions and callbacks become export lines -- a struct,
  a typedef or a C++/COM member (``Interface::Method``,
  ``MSMQMessage.Priority``) is not an export.  The page printed
  ``get_Priority`` inside the quoted prototype; that quote is not split
  into an export name the page did not print as one;
* everything the documents do not state is left out and listed in
  ``report.md``: no header, no declaration, no library -> a gap to collect,
  never a guess;
* symbol decoration (the ``_Name@N`` spelling of an exported stdcall function)
  and the export table of a real library are *not* in the documentation, so
  the ``.def`` output says so at the top instead of pretending to be complete.
  Ordinals are written **only** where a page prints them: the 94 rows of
  ``kb/export-ordinals.tsv`` (the floating point C run-time library) become
  ``name @ordinal`` with the page in the comment, and every other line is a
  name with no ordinal, because no document gives it one.
"""

import argparse
import collections
import gzip
import json
import os
import re
import shutil
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
# Splits a requirement *value* already stored in knowledge/.  It does not
# read a corpus page.  The generator still refuses corpus paths below.
import page_parse  # noqa: E402

KB = os.path.join(ROOT, "knowledge", "kb")

# The clean-room wall (docs/clean-room.md): this generator reads the
# *specification* (knowledge/), never the corpus pages the specification was
# built from.  Anything that reaches into corpus/ is counted and refused, so a
# build of a generated header cannot depend on a page a reader may not take.
CORPUS_READS = []

# Constants a Windows CE page states are not supported; filled in main().
UNSUPPORTED = {}


def is_corpus(path):
    rel = os.path.relpath(path, ROOT)
    return rel == "corpus" or rel.startswith("corpus" + os.sep)


def check_spec_path(path):
    """Refuse a corpus path: the generator reads knowledge/ only."""
    if is_corpus(path):
        CORPUS_READS.append(os.path.relpath(path, ROOT))
        raise RuntimeError(f"{os.path.relpath(path, ROOT)} is a corpus page: "
                           "the generator reads knowledge/ only "
                           "(docs/clean-room.md)")


def read_text(path):
    """Open a text file, refusing the corpus (the specification only)."""
    check_spec_path(path)
    with open(path, "r", encoding="utf-8") as fh:
        return fh.read()

DECLARATIONS = os.path.join(KB, "declarations.jsonl.gz")
ENTITIES = os.path.join(KB, "entities.jsonl.gz")
REQUIREMENTS = os.path.join(KB, "requirements.jsonl.gz")
CONSTANTS = os.path.join(KB, "constants.jsonl.gz")
CONSTANT_HEADERS = os.path.join(KB, "constant-headers.tsv")
PINVOKE_APIS = os.path.join(ROOT, "knowledge", "aux",
                            "pinvoke-apis.jsonl.gz")
PINVOKE_CONSTANTS = os.path.join(ROOT, "knowledge", "aux",
                                 "pinvoke-constants.jsonl.gz")

# The documentation prints header and library names as they are; these pull
# the file names out of a value and leave the prose alone.
HEADER_FILE = re.compile(r"[\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc)\b", re.I)
MODULE_FILE = re.compile(r"(?P<base>[\w.+-]+?)\.(?P<ext>lib|dll|drv|sys|ocx|tlb)\b",
                         re.I)
EXPORTABLE = ("function", "callback")


def load(path):
    check_spec_path(path)
    if not os.path.exists(path) and path.endswith(".gz"):
        path = path[:-3]
    if not os.path.exists(path):
        sys.exit(f"{os.path.relpath(path, ROOT)} not found -- run "
                 "python3 tools/build-kb.py first")
    opener = gzip.open if path.endswith(".gz") else open
    with opener(path, "rt", encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if line:
                yield json.loads(line)


def safe_name(value, extension=""):
    """A header/library value -> a file name.

    ``Winbase.h.`` -> ``Winbase.h``, and when the name already carries the
    extension the output adds (``Coredll.lib`` -> ``coredll.def``), it is
    dropped first so the file name is not doubled.
    """
    name = re.sub(r"[^A-Za-z0-9_.+-]", "_", value.strip().rstrip(". ")) \
        or "unnamed"
    if extension and name.lower().endswith(extension.lower()):
        name = name[:-len(extension)]
    return name or "unnamed"


def header_files(headers):
    """The file names inside the stated ``Header`` values, in stated order."""
    files = []
    for value in headers:
        for match in HEADER_FILE.findall(value):
            name = match.split("/")[-1].split("\\")[-1]
            if name and name.lower() not in [f.lower() for f in files]:
                files.append(name)
    return files


def module_of(value):
    """(module, extension) of a stated library/DLL value, or None."""
    match = MODULE_FILE.search(value or "")
    if not match:
        return None
    return match.group("base"), match.group("ext").lower()


CODE_SKIPPED = collections.Counter()


def grouped_keys(records, fields, target):
    """Requirement keys of one entity, split by who stated them.

    ``own`` is a page of the version being built.  ``ce`` is another Windows
    CE set.  ``win32`` is the desktop reference.  The first set that stated a
    key is kept, so a borrow can be named.  A key is the file name the
    requirement record already derived; a value that names no file has an
    empty key and never arrives here.  A library/DLL value that names
    several files contributes each of them: the derived key keeps only the
    first, and dropping the rest would omit a library the page assigned.
    """
    groups = {"own": [], "ce": [], "win32": []}
    sets = {"own": "", "ce": "", "win32": ""}
    for record in records:
        if record.get("field") not in fields or not record.get("key"):
            continue
        book = (record.get("source") or {}).get("set") or ""
        if book == target or book.startswith(target + "/"):
            slot = "own"
        elif record.get("layer") == "win32":
            slot = "win32"
        elif record.get("layer") == "ce":
            slot = "ce"
        else:
            continue
        names = [record["key"]]
        if record.get("field") in ("library", "dll"):
            stated = page_parse.assigned_files(record.get("value") or "")
            if stated:
                names = stated
        for name in names:
            if name.lower() not in [key.lower() for key in groups[slot]]:
                groups[slot].append(name)
                if not sets[slot]:
                    sets[slot] = book
    return groups, sets


def choose_keys(groups, sets, borrow):
    """(keys, borrowed_from) -- the version's own statement, or a marked borrow.

    A desktop header (``processthreadsapi.h``, ``windows.h``) is never treated
    as a Windows CE statement: it is used only when no CE page states a file,
    and the caller marks it ``win32-reference``.
    """
    if groups["own"]:
        return groups["own"], ""
    if borrow and groups["ce"]:
        return groups["ce"], "ce-set:" + sets["ce"]
    if borrow and groups["win32"]:
        return groups["win32"], "win32-reference"
    return [], ""


def choose_declarations(entity, declarations_of, target, borrow):
    """Declarations for one entity, best evidence first.

    Windows CE is the CE-specific surface plus the Win32 that CE documents
    share -- it is **not** all of Win32 -- so the order is deliberate:

    1. a declaration printed by the target CE set (the version being built);
    2. a declaration printed by another CE set in the corpus;
    3. a declaration from the Win32 reference (the shared surface, documented
       as desktop Windows: a fallback, and it is *marked*, never passed off as
       a CE statement).

    Returns (chosen, alternatives, borrowed_from) where ``borrowed_from`` is
    ``""``, ``"ce-set:<set>"`` or ``"win32-reference"``.  A win32 fallback is
    only used when the CE pages print no declaration for the entity at all.
    """
    records = [declarations_of[did] for did in entity["syntax_declarations"]
               if did in declarations_of]
    # Belt and braces: a record the extractor marked as implementation code is
    # never emitted, even if some older knowledge base still lists it (it may
    # still be *read* as evidence by a human -- it is simply not inlined here).
    sample_code = [r for r in records if r.get("implementation")]
    if sample_code:
        for record in sample_code:
            CODE_SKIPPED["declaration text is implementation code"] += 1
    def in_target(record):
        book = record["source"]["set"]
        return book == target or book.startswith(target + "/")

    def spaced_first(rows):
        return sorted(rows, key=lambda r: (
            r.get("spacing") != "preserved", r["source"]["path"]))

    def collapsed(record):
        return re.sub(r"\s+", "", record.get("text") or "")

    own = [r for r in records if in_target(r)]
    other_ce = [r for r in records
                if r not in own and r.get("layer") == "ce"]
    win32 = [r for r in records
             if r not in own and r not in other_ce and r.get("layer") == "win32"]
    rest = [r for r in records if r not in own and r not in other_ce
            and r not in win32]
    other = other_ce + win32 + rest
    # The version's own text wins.  Another CE page is used only when this
    # page lost the spaces and that page kept them, and the two texts are the
    # same once whitespace is removed.  A copy that also prints a calling
    # convention, a different type or a different parameter name is a different
    # quotation, not a spacing repair, so the collapsed text stays.
    if own:
        own = spaced_first(own)
        if own[0].get("spacing") == "preserved" or not borrow:
            return own, other, ""
        flat = collapsed(own[0])
        match = [r for r in other_ce
                 if r.get("spacing") == "preserved" and collapsed(r) == flat]
        if match:
            match = spaced_first(match)
            rest_ce = [r for r in other_ce if r is not match[0]]
            return [match[0]], own + rest_ce + win32 + rest, \
                "ce-set:" + match[0]["source"]["set"] + "|spacing"
        return own, other, ""
    if borrow and other_ce:
        other_ce = spaced_first(other_ce)
        return other_ce[:1], other_ce[1:] + win32 + rest, \
            "ce-set:" + other_ce[0]["source"]["set"]
    if borrow and win32:
        return win32[:1], win32[1:] + rest, "win32-reference"
    return [], other, ""


def write_includes(out, by_header, generated):
    include_dir = os.path.join(out, "include")
    os.makedirs(include_dir, exist_ok=True)
    for header, entries in sorted(by_header.items(), key=lambda kv: kv[0].lower()):
        path = os.path.join(include_dir, safe_name(header, ".h") +
                            ".h.fragment")
        lines = [
            f"/* {header} -- declarations documented for {generated['set']}",
            " *",
            " * Generated by tools/gen-include-def.py from wince-docs-corpus.",
            " * Every block below is quoted verbatim from the page named above",
            " * it; nothing here is written, completed or reformatted by the",
            " * generator.  This file is a *fragment*: include guards, include",
            " * order and the parts of the header the documentation does not",
            " * describe are the job of the generator built on top.",
            f" * {len(entries)} declaration(s).",
            " */",
        ]
        for entry in entries:
            entity, declaration = entry[0], entry[1]
            header_from = entry[2] if len(entry) > 2 else ""
            stated_libs = entry[3] if len(entry) > 3 else (
                entity["libraries"] or entity["dlls"])
            libs = ", ".join(stated_libs) or "-"
            lines += [
                "",
                "/*" + "-" * 68,
                f" * {entity['name']}  [{', '.join(entity['kinds']) or '?'}]",
                f" * library: {libs}",
                f" * source: {declaration['source']['path']}",
            ]
            for item in (item for item in entity.get("unicode_only") or []
                         if item.get("scope") == "this-api"):
                # quoted, because this is the sentence that forbids an A form
                lines.append(f" * {item['text']}  [{item['page']}]")
            if header_from.startswith("win32"):
                lines.append(
                    " * header borrowed from: the Win32 reference -- NOT a "
                    "header a Windows CE page states for this name")
            elif header_from.startswith("ce-set:"):
                lines.append(
                    f" * header borrowed from: {header_from[len('ce-set:'):]} "
                    "(this version's pages state no header file)")
            decl_from = entry[4] if len(entry) > 4 else ""
            if not declaration["source"]["set"].startswith(generated["set"]):
                if declaration.get("layer") == "win32":
                    lines.append(
                        " * borrowed from: the Win32 reference -- NOT from a "
                        "Windows CE page")
                    lines.append(
                        " *   (this name is on the shared surface; the CE "
                        "documents print no declaration for it, and the Win32 "
                        "page documents desktop Windows -- verify against the "
                        "CE SDK)")
                else:
                    lines.append(
                        f" * borrowed from: {declaration['source']['set']} "
                        "(another CE set declares it)")
                    if decl_from.endswith("|spacing"):
                        lines.append(
                            " *   (this version's page lost the spaces between "
                            "tokens; the declaration below is the other page's "
                            "text, quoted as printed, and it is the same text "
                            "once whitespace is removed)")
            if declaration["spacing"] != "preserved":
                lines.append(" * NOTE: the page lost the spaces in this "
                             "declaration (spacing: collapsed) -- prefer "
                             "another page's copy")
            lines.append(" */")
            lines.append(declaration["text"])
        with open(path, "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines) + "\n")
    return include_dir


def load_ordinal_rows():
    """The rows of ``kb/export-ordinals.tsv`` as dicts, in file order."""
    path = os.path.join(KB, "export-ordinals.tsv")
    if not os.path.exists(path):
        return []
    with open(path, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        return [dict(zip(header, line.rstrip("\n").split("\t")))
                for line in fh if line.strip()]


def write_ordinal_defs(out, target):
    """One ``.def`` per DLL whose export table a page of this set prints.

    These names reach the file from the printed ``Export | Ordinal`` table,
    not from a Requirements block, so they would otherwise never appear: no
    API page in the corpus states ``Fpcrt.dll``.  The table is the document's
    own export list, which is exactly what a module-definition file is, so it
    is written as one -- with the page on every line and no name added to it.
    """
    rows = [row for row in load_ordinal_rows()
            if in_set(row.get("set") or "", target)]
    if not rows:
        return 0, 0
    link_dir = os.path.join(out, "link")
    os.makedirs(link_dir, exist_ok=True)
    by_dll = collections.defaultdict(list)
    for row in rows:
        by_dll[row["dll"]].append(row)
    for dll, items in sorted(by_dll.items()):
        stem = safe_name(re.sub(r"(?i)\.(dll|lib|exe)$", "", dll))
        path = os.path.join(link_dir, stem + ".ordinals.def")
        pages = sorted({row["page"] for row in items})
        lines = [
            f"; {dll} -- EXPORTS read from the export table the documentation",
            "; prints for this DLL (name and ordinal both as printed).",
            ";",
            "; Generated by tools/gen-include-def.py from wince-docs-corpus.",
            "; Unlike the other .def files here this one is not a worklist",
            "; built from Requirements blocks: the page below lists the",
            "; exports of the library itself.  No name, ordinal or alias is",
            "; added to the list, and the documentation states that the",
            "; ordinal is the part that must match.",
            ";",
        ]
        lines += [f"; source: {page}" for page in pages]
        lines += [f"; {len(items)} name(s)", "EXPORTS"]
        for row in sorted(items, key=lambda r: int(r["ordinal"])):
            lines.append(f"    {row['name'] + ' @' + row['ordinal']:32s}"
                         f"; printed in table {row['table']}")
        with open(path, "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines) + "\n")
    return len(by_dll), len(rows)


def load_ordinals():
    """``kb/export-ordinals.tsv`` -> {(dll stem, name lower): (ordinal, page)}.

    The only ordinals in the corpus.  Keyed by the DLL the page names, so a
    name is given an ordinal only in the module the document printed it for.
    """
    path = os.path.join(KB, "export-ordinals.tsv")
    out = {}
    if not os.path.exists(path):
        return out
    with open(path, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            row = dict(zip(header, cells))
            dll = (row.get("dll") or "").lower()
            stem = dll[:-4] if dll.endswith(".dll") else dll
            out[(stem, (row.get("name") or "").lower())] = (
                row.get("ordinal") or "", row.get("page") or "")
    return out


def write_defs(out, by_module, generated, ordinals=None):
    link_dir = os.path.join(out, "link")
    os.makedirs(link_dir, exist_ok=True)
    for module, worklist in sorted(by_module.items()):
        entries = worklist["entries"]
        path = os.path.join(link_dir, safe_name(module) + ".def")
        lines = [
            f"; {module} -- EXPORTS worklist for {generated['set']}",
            ";",
            "; Generated by tools/gen-include-def.py from wince-docs-corpus:",
            "; one line per function or callback whose page states this",
            "; module, with the page behind every name.  The name is the",
            "; documented name -- NOT the decorated symbol: the documentation",
            "; does not state the _Name@N spelling or the export table of the",
            "; real library, so verify each line against the SDK before",
            "; linking.  An @ordinal appears only where a page prints one.",
            ";",
            f"; stated as: {', '.join(worklist['stated'])}",
            f"; {len(entries)} name(s)",
            "EXPORTS",
        ]
        module_stem = safe_name(module).lower()
        for entry in entries:
            entity, declaration = entry[0], entry[1]
            library_from = entry[2] if len(entry) > 2 else ""
            page = declaration["source"]["path"] if declaration else "-"
            kind = (entity["kinds"] or ["?"])[0]
            if declaration and declaration.get("layer") == "win32":
                page += "  [Win32 ref: verify against the CE SDK]"
            if library_from.startswith("win32"):
                page += "  [library: Win32 ref, not a CE page]"
            elif library_from.startswith("ce-set:"):
                page += "  [library borrowed from " + library_from[len("ce-set:"):] + "]"
            ordinal, ordinal_page = (ordinals or {}).get(
                (module_stem, entity["name"].lower()), ("", ""))
            if ordinal:
                # printed by the document, never derived from a position
                name_field = f"{entity['name']} @{ordinal}"
                page += f"  [ordinal printed by {ordinal_page}]"
            else:
                name_field = entity["name"]
            lines.append(f"    {name_field:32s}; {kind}  {page}")
        with open(path, "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines) + "\n")
    return link_dir


def in_set(book, target):
    return book == target or book.startswith(target + "/")


def load_unsupported():
    """``kb/unsupported-constants.tsv`` -> {name: [row, ...]}.

    A constant a CE page lists as not supported is still *documented* -- the
    number is on another page -- so it is written with the sentence that
    takes it away rather than silently dropped.  Which CE version said it
    matters, so the set is kept: a statement by the version being built
    comments the ``#define`` out, a statement by another CE version is
    printed as a note above a line that stays.
    """
    path = os.path.join(KB, "unsupported-constants.tsv")
    out = collections.defaultdict(list)
    if not os.path.exists(path):
        return out
    with open(path, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        for line in fh:
            row = dict(zip(header, line.rstrip("\n").split("\t")))
            if row.get("status") != "not-supported":
                continue
            out[row["name"]].append(row)
    return out


def write_constants(out, constants, target, borrow):
    """The numbers a page prints, grouped by the header that same page names.

    A ``#define`` line is *derived*: the page printed a table row, not a
    ``#define``.  The row is quoted above the line, and a row whose pages
    disagree on the number is listed and not turned into a ``#define``.  A
    constant whose page names no header stays in ``constants.tsv`` only -- it
    is not assigned a file.  A number stated only by the Win32 reference is
    not borrowed: desktop and Windows CE values are not assumed to match.
    """
    own = [c for c in constants
           if c.get("layer") == "ce" and in_set(c["source"]["set"], target)]
    own_names = {c["name"] for c in own}
    borrowed = []
    if borrow:
        for record in constants:
            if record.get("layer") != "ce":
                continue
            if in_set(record["source"]["set"], target):
                continue
            if record["name"] in own_names:
                continue
            borrowed.append(record)
    selected = [(c, "") for c in own] + [
        (c, "ce-set:" + c["source"]["set"]) for c in borrowed]

    by_key = collections.defaultdict(list)
    no_header = []
    for record, origin in selected:
        headers = record.get("headers") or []
        if not headers:
            no_header.append((record, origin))
            continue
        for header in headers:
            by_key[(header, record["name"])].append((record, origin))

    conflicts = 0
    written = 0
    unsupported_written = 0
    include_dir = os.path.join(out, "include")
    os.makedirs(include_dir, exist_ok=True)
    by_header = collections.defaultdict(list)
    for (header, name), rows in by_key.items():
        values = {row["value"] for row, _origin in rows}
        if len(values) > 1:
            conflicts += 1
        by_header[header].append((name, rows, len(values) > 1))
    for header, items in by_header.items():
        path = os.path.join(include_dir, safe_name(header, ".h") +
                            ".h.constants")
        lines = [
            f"/* {header} -- numbers documented for {target}",
            " *",
            " * Each block quotes a table row a page prints (name and value in",
            " * separate columns).  The #define line below a block is derived",
            " * from that row: the page did not print a #define, so the keyword",
            " * is marked as derived and a row whose pages disagree on the",
            " * number is not turned into one.",
            " */",
        ]
        for name, rows, conflict in sorted(items, key=lambda item: item[0].lower()):
            lines.append("")
            lines.append(f"/* {name}")
            for record, origin in rows:
                borrowed_note = f"  borrowed from {origin[len('ce-set:'):]}" \
                    if origin.startswith("ce-set:") else ""
                lines.append(f" * row: {record['row']}")
                lines.append(f" * source: {record['source']['path']}"
                             f"{borrowed_note}")
            if conflict:
                lines.append(" * CONFLICT: the pages do not agree on the "
                             "number -- no #define is written")
                lines.append(" */")
                continue
            taken_away = UNSUPPORTED.get(name) or []
            here = [row for row in taken_away if in_set(row["set"], target)]
            elsewhere = [row for row in taken_away if row not in here]
            for row in here:
                lines.append(f" * NOT SUPPORTED: {row['statement']}")
                lines.append(f" * source: {row['page']}")
            for row in elsewhere:
                lines.append(f" * not supported in {row['set']}: "
                             f"{row['statement']}")
                lines.append(f" * source: {row['page']}")
            if here:
                # this version's own page takes the value away: both facts
                # are printed and the #define is commented out rather than
                # quietly emitted
                lines.append(" */")
                record = rows[0][0]
                lines.append(f"/* #define {record['name']} "
                             f"{record['value']} */")
                unsupported_written += 1
                continue
            lines.append(" * derived: the #define keyword is not on the page")
            lines.append(" */")
            record = rows[0][0]
            lines.append(f"#define {record['name']} {record['value']}")
            written += 1
        with open(path, "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines) + "\n")

    with open(os.path.join(out, "constants.tsv"), "w", encoding="utf-8") as fh:
        fh.write("name\tvalue\tdecimal\theaders\tborrowed_from\tpage\trow\t"
                 "conflict\n")
        seen_conflict = set()
        for (header, name), rows in by_key.items():
            values = {row["value"] for row, _origin in rows}
            conflict = "yes" if len(values) > 1 else ""
            if conflict:
                seen_conflict.add(name)
            for record, origin in rows:
                fh.write("\t".join((
                    record["name"], record["value"], record["decimal"] or "",
                    header, origin, record["source"]["path"], record["row"],
                    conflict)) + "\n")
        for record, origin in no_header:
            fh.write("\t".join((
                record["name"], record["value"], record["decimal"] or "",
                "", origin, record["source"]["path"], record["row"],
                "")) + "\n")
    return {
        "unsupported": unsupported_written,
        "rows": len(selected),
        "defines": written,
        "conflicts": conflicts,
        "no_header": len(no_header),
        "headers": len(by_header),
    }


def split_libraries(entity):
    """(libraries, dlls, modules, unstated) for one entity.

    ``modules`` maps the lower-case module name to the spellings the pages
    state (``coredll.lib`` and ``coredll.dll`` are one module).  ``unstated``
    counts values that name no file -- they are not a library, so they never
    become a worklist file.
    """
    modules = {}
    unstated = 0
    for value in entity["libraries"]:
        parsed = module_of(value)
        if parsed:
            modules.setdefault(parsed[0].lower(), set()).add(value)
        else:
            unstated += 1
    for value in entity["dlls"]:
        parsed = module_of(value)
        if parsed:
            modules.setdefault(parsed[0].lower(), set()).add(value)
        else:
            unstated += 1
    return modules, unstated


# ------------------------------------------------------------------ #
# Unified tree: one include/def surface for every Windows CE version  #
#                                                                     #
# The generation-specific build above answers "what does CE 5.0       #
# document?"  The unified build answers a different question: "what   #
# is the include/def surface of Windows CE as a whole?" -- one tree   #
# where differences between CE generations are carried by             #
# ``#if defined(_WIN32_WCE) && ...`` branches, not by duplicating the #
# tree.  ``_WIN32_WCE`` is the version macro the documentation itself #
# prints (the VCCE SDK pages define it; the CE .NET pages write       #
# ``#if (_WIN32_WCE < 300)``).  The mapping from a corpus set to its  #
# version interval is generator wiring, printed here and in every     #
# report -- it is derived structure, not a page quotation, exactly    #
# like the ``#define`` keyword above a quoted table row.              #
# ------------------------------------------------------------------ #

# corpus set (book prefix) -> [lo, hi) interval of _WIN32_WCE values the
# set's documentation covers.  Values follow the SDK convention the
# pages print: CE 1.0 -> 100, CE 2.0 -> 200, CE 2.11/2.12 -> 211/212,
# CE 3.0 -> 300, CE .NET 4.x -> 400..420, CE 5.0 -> 500, Embedded CE
# 6.0 -> 600, Embedded Compact 7 -> 700.
SET_WCE_INTERVAL = (
    ("mvb/windows-ce-1.0/", 100, 200),
    ("msdn-library/techshelps/CEGUIDE/", 100, 200),
    ("mvb/windows-ce-2.0-sdk/", 200, 210),
    ("msdn-library/techshelps/", 200, 210),      # the CE 2.0-era sets
    ("msdn-library/wcedevcon-99/", 211, 213),    # CE 2.11/2.12 SDK
    ("msdn-library/datadungeon-2000-04/", 212, 400),  # the 2.12/3.0 library
    ("chm/windows-ce-3.0/", 300, 400),
    ("chm/windows-ce-4.2/", 420, 500),
    ("learn/windows-ce-net-4x/", 400, 500),
    ("learn/windows-ce-5.0/", 500, 600),
    ("chm/windows-ce-5.0/", 500, 600),
    ("msdn-library/2010-05/windows-ce-5.0/", 500, 600),
    ("learn/windows-embedded-ce-6.0/", 600, 700),
    ("learn/windows-embedded-compact-7/", 700, 800),
    ("booklet/", None, None),
)
WCE_FIRST, WCE_LAST = 100, 800

# CE-layer sets that carry no version statement an include file could
# branch on: the KB article tree (each article names its own versions in
# prose, not reliably), the developer web sites, the harvested pages the
# harvester could not classify, and the Windows Mobile add-on library (a
# layer on top of the OS, not an OS version).
WCE_NEUTRAL_PREFIXES = ("kb/", "site/", "learn/unclassified",
                        "msdn-library/windows-mobile-6.5")


def wce_interval(book):
    """[lo, hi) interval of a corpus set, or None when the set is neutral."""
    if not book:
        return None
    for prefix in WCE_NEUTRAL_PREFIXES:
        if book == prefix or book.startswith(prefix.rstrip("/") + "/"):
            return None
    best = None
    for prefix, lo, hi in SET_WCE_INTERVAL:
        if lo is None:
            continue
        if book == prefix.rstrip("/") or book.startswith(prefix):
            if best is None or len(prefix) > len(best[0]):
                best = (prefix, lo, hi)
    return (best[1], best[2]) if best else None


def merge_intervals(intervals):
    """Union of [lo, hi) intervals, sorted; adjacent ranges merge."""
    merged = []
    for lo, hi in sorted(i for i in intervals if i):
        if merged and lo <= merged[-1][1]:
            merged[-1][1] = max(merged[-1][1], hi)
        else:
            merged.append([lo, hi])
    return merged


def wce_guard(sets):
    """``#if`` condition for the versions the sets cover, or None.

    ``sets`` are the CE sets that document the item.  A version-neutral
    set neither proves nor denies a generation, so it does not widen the
    condition; it is named by the caller in a comment instead.  Coverage
    of every generation the corpus documents produces no guard at all.
    """
    merged = merge_intervals([wce_interval(s) for s in sets])
    if not merged:
        return None, []
    everywhere = merged[0][0] <= WCE_FIRST and merged[-1][1] >= WCE_LAST
    conds = []
    for lo, hi in merged:
        if hi >= WCE_LAST:
            conds.append(f"_WIN32_WCE >= {lo}")
        elif lo <= WCE_FIRST:
            conds.append(f"_WIN32_WCE < {hi}")
        else:
            conds.append(f"_WIN32_WCE >= {lo} && _WIN32_WCE < {hi}")
    return None if everywhere else "defined(_WIN32_WCE) && (" + \
        " || ".join(f"({c})" for c in conds) + ")", merged


# A _WIN32_WCE boundary value -> the generation a reader calls it.
WCE_VERSION_NAMES = {100: "1.0", 200: "2.0", 210: "2.10", 211: "2.11",
                     212: "2.12", 300: "3.0", 400: "4.0", 410: "4.1",
                     420: "4.2", 500: "5.0", 600: "6.0",
                     700: "Compact 7"}


def wce_range_comment(merged):
    """Human-readable version list of merged intervals (for comments)."""
    parts = []
    for lo, hi in merged:
        lo_name = WCE_VERSION_NAMES.get(lo, str(lo))
        if hi >= WCE_LAST:
            parts.append(f">= {lo_name}")
            continue
        hi_name = WCE_VERSION_NAMES.get(hi - 1, str(hi - 1))
        parts.append(lo_name if lo_name == hi_name else
                     f"{lo_name}..{hi_name}")
    return ", ".join(parts)


def load_constant_links():
    """``kb/constant-headers.tsv`` -> {name: [{header, strength, sets}]}.

    The linkage table the knowledge base derives (best rank per name);
    the generator consumes it to file derived ``#define`` lines under a
    header, always with the rank printed beside it.
    """
    out = collections.defaultdict(list)
    if not os.path.exists(CONSTANT_HEADERS):
        return out
    with open(CONSTANT_HEADERS, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            if len(cells) < len(header):
                continue
            row = dict(zip(header, cells))
            out[row["name"]].append({
                "header": row["header"], "strength": row.get("strength"),
                "statements": row.get("statements"),
                "example_page": row.get("example_page"),
                "sets": [s for s in (row.get("sets") or "").split(";") if s],
            })
    return out


def load_pinvoke_aux(path):
    """The isolated weak-auxiliary pinvoke material, when harvested."""
    if not os.path.exists(path) and path.endswith(".gz"):
        path = path[:-3]
    if not os.path.exists(path):
        return []
    check_spec_path(path)
    return list(load(path))


def unified_scope(all_entities):
    """The entities of the unified tree, with A/W variants folded.

    Everything a Windows CE page documents (``ce_sets``), plus the
    Win32-spelling pages of those names, belongs to the one surface --
    not a per-generation slice, and not a separate Win32 output.  A
    name the CE documents never claim (desktop-only) stays out even
    here.  Variant spellings (``CreateSemaphoreW``) are folded into
    their base entity as documented-spelling comments: a *copy* of the
    API, never a second entry.
    """
    variants = collections.defaultdict(list)
    by_id = {e["id"]: e for e in all_entities}
    for entity in all_entities:
        base = (entity.get("variants_of") or {}).get("name")
        if base:
            variants[base.lower()].append(entity)
    scope, folded = [], collections.Counter()
    for entity in all_entities:
        if entity.get("noise"):
            continue
        if (entity.get("variants_of") or {}).get("name"):
            continue          # folded into the base entry
        if entity.get("dotnet_pages") and not entity.get("ce_sets") \
                and not entity.get("win32_pages"):
            continue          # the .NET layer is a separate tree
        if not entity.get("ce_sets") and not entity.get("win32_pages"):
            continue
        if not entity.get("ce_sets") and \
                (entity.get("surface") or "") not in (
                    "shared", "win32-spelling"):
            continue          # desktop-only: not part of Windows CE
        folded[entity["id"]] = variants.get(entity["name"].lower(), [])
        scope.append(entity)
    return scope, folded


def unified_versions(entity, declarations_of, reqs_of):
    """The CE sets that document the entity with interface material.

    A set counts when it prints a syntax declaration of the name or a
    header/library/DLL requirement for it -- the evidence a generated
    include/def entry rests on.  A page that merely mentions the name
    does not version-gate it.
    """
    sets = set()
    for did in entity.get("syntax_declarations") or []:
        record = declarations_of.get(did)
        if record and record.get("layer") == "ce" and \
                record.get("role") == "syntax":
            sets.add(record["source"]["set"])
    for record in reqs_of.get(entity["id"], ()):
        if record.get("layer") == "ce" and record.get("field") in (
                "header", "library", "dll"):
            sets.add((record.get("source") or {}).get("set") or "")
    return sets


def choose_unified_declaration(entity, declarations_of, borrow):
    """One representative declaration for the whole-of-CE tree.

    Order: a spacing-preserved CE copy (newest documented generation
    first), then a collapsed CE copy (repaired across sets by the same
    whitespace-only rule the per-version build uses), then -- marked --
    the Win32 reference.  Nothing is ever written that a page did not
    print; the choice between printed copies is recorded in
    ``borrowed_from`` exactly as before.
    """
    records = [d for d in
               (declarations_of.get(did) for did in
                entity["syntax_declarations"])
               if d and not d.get("implementation")]
    ce = [r for r in records if r.get("layer") == "ce"
          and r.get("role") == "syntax"]
    win32 = [r for r in records if r.get("layer") == "win32"
             and r.get("role") == "syntax"]

    def set_age(record):
        interval = wce_interval(record["source"]["set"])
        return -(interval[0] if interval else 0)

    spaced = sorted([r for r in ce if r.get("spacing") == "preserved"],
                    key=lambda r: (set_age(r), r["source"]["path"]))
    if spaced:
        return spaced[0], "", ce, win32
    if ce:
        chosen = sorted(ce, key=lambda r: (set_age(r), r["source"]["path"]))[0]
        if borrow:
            flat = re.sub(r"\s+", "", chosen.get("text") or "")
            match = [r for r in spaced
                     if re.sub(r"\s+", "", r.get("text") or "") == flat]
            if match:
                return match[0], "ce-set:" + \
                    match[0]["source"]["set"] + "|spacing", ce, win32
        return chosen, "", ce, win32
    if borrow and win32:
        chosen = sorted(win32, key=lambda r: r["source"]["path"])[0]
        message = "win32-reference" if chosen.get("layer") == "win32" else ""
        return chosen, message, ce, win32
    return None, "", ce, win32


def _int_of(value):
    """Numeric value of a printed constant, without reformatting it.

    Used for *grouping* printed rows that state the same number
    (``0x01`` and ``0x0001``) and for detecting genuine conflicts.  The
    text emitted is always a printed form, never a recomputed one.
    """
    try:
        text = str(value).strip()
        if text.lower().startswith("0x") or text.lower().startswith("-0x"):
            return int(text, 16)
        return int(text, 10)
    except (ValueError, TypeError):
        return None


_ORIGIN_RANK = {"define": 0, "enum": 1, "table": 2, "cell": 3, "prose": 4}


def constant_value_groups(rows):
    """Group one constant's CE rows by the number they state.

    Each group: the number (for comparison), the printed forms, the CE
    sets stating it, the rows as evidence, and whether some rows of a
    *different* number overlap its versions -- a documentation conflict
    the generator lists instead of guessing.
    """
    groups = {}
    for record in rows:
        key = _int_of(record.get("value"))
        if key is None:
            continue
        slot = groups.setdefault(key, {"forms": collections.Counter(),
                                       "sets": set(), "rows": [],
                                       "license": set()})
        slot["sets"].add(record["source"]["set"])
        slot["forms"][(record["value"], _ORIGIN_RANK.get(
            record.get("origin"), 9))] += 1
        slot["license"].add(record.get("license") or "?")
        quote = (record["row"], record["source"]["path"],
                 record.get("origin") or "table")
        if quote not in slot["rows"]:
            slot["rows"].append(quote)
    out = []
    for key in sorted(groups, key=lambda k: -len(groups[k]["rows"])):
        slot = groups[key]
        best = sorted(slot["forms"].items(),
                      key=lambda kv: (kv[0][1], -kv[1], kv[0][0]))[0]
        out.append({
            "number": key,
            "print": best[0][0],
            "sets": slot["sets"],
            "merged": merge_intervals(wce_interval(s) for s in slot["sets"]),
            "neutral": sorted(s for s in slot["sets"]
                              if wce_interval(s) is None),
            "rows": slot["rows"],
            "license": slot["license"],
        })
    return out


def groups_conflict(groups):
    """Two values for one constant whose documented versions overlap.

    Disjoint intervals are version branches (``#if``/``#elif``); the same
    set stating two numbers, or overlapping intervals with two numbers,
    is a conflict -- the pages disagree and no ``#define`` is written.
    """
    mine = [g for g in groups]
    for i, first in enumerate(mine):
        for second in mine[i + 1:]:
            if first["sets"] & second["sets"]:
                return True
            for lo1, hi1 in first["merged"]:
                for lo2, hi2 in second["merged"]:
                    if lo1 < hi2 and lo2 < hi1:
                        return True
    return False


def run_unified(args):
    """One include/def tree for every Windows CE generation at once."""
    declarations_of = {d["id"]: d for d in load(DECLARATIONS)}
    reqs_of = collections.defaultdict(list)
    for record in load(REQUIREMENTS):
        if record.get("entity"):
            reqs_of[record["entity"]].append(record)
    constants = list(load(CONSTANTS)) if os.path.exists(CONSTANTS) else []
    all_entities = list(load(ENTITIES))
    UNSUPPORTED.update(load_unsupported())
    links = load_constant_links()
    pinvoke_apis = load_pinvoke_aux(PINVOKE_APIS)
    pinvoke_consts = load_pinvoke_aux(PINVOKE_CONSTANTS)
    borrow = not args.no_borrow

    entities, variants = unified_scope(all_entities)
    if args.limit:
        entities = entities[:args.limit]

    # The tree is rebuilt wholesale: drop leftovers from previous runs so
    # no stale fragment survives a case-fix or a removed header.
    for subtree in (os.path.join(args.out, "include"),
                    os.path.join(args.out, "link")):
        shutil.rmtree(subtree, ignore_errors=True)
        os.makedirs(subtree, exist_ok=True)
    by_header = collections.defaultdict(list)
    printed_forms = {}
    by_module = collections.defaultdict(
        lambda: {"entries": [], "stated": set()})
    skipped = collections.Counter()
    borrowed = collections.Counter()
    pages = set()
    manifest = []
    by_id = {e["id"]: e for e in all_entities}

    for entity in sorted(entities, key=lambda e: e["name"].lower()):
        chosen, borrowed_from, ce_recs, win32_recs = \
            choose_unified_declaration(entity, declarations_of, borrow)
        page_decl = chosen["source"]["path"] if chosen else ""
        if chosen:
            pages.add(chosen["source"]["path"])
        if borrowed_from:
            borrowed[borrowed_from.split(":")[0].split("|")[0]] += 1
            if "|spacing" in borrowed_from:
                borrowed["spacing"] += 1

        versions = unified_versions(entity, declarations_of, reqs_of)
        neutral_ce = sorted(s for s in entity.get("ce_sets") or ()
                            if wce_interval(s) is None)

        # -- headers: every CE statement across the generations; the primary
        # file is the statement of the newest documented generation, the
        # rest are listed beside it (never dropped, never invented).
        header_stmts = collections.defaultdict(set)
        win32_headers = []
        for record in reqs_of.get(entity["id"], ()):
            if record.get("field") != "header":
                continue
            files = header_files([record.get("value") or ""])
            if record.get("layer") == "ce":
                for name in files:
                    book = (record.get("source") or {}).get("set") or ""
                    header_stmts[name.lower()].add(book)
                    header_stmts[name.lower()].add(name)
            elif record.get("layer") == "win32":
                for name in files:
                    if name.lower() not in [h.lower() for h in win32_headers]:
                        win32_headers.append(name)
        header_cands = {}
        for key, items in header_stmts.items():
            books = {b for b in items if "/" in b}
            printed = max((i for i in items if "/" not in i), key=len,
                          default=key)
            newest = max((wce_interval(b) or (0, 0))[0] for b in books)
            header_cands[key] = {"printed": printed, "sets": books,
                                 "newest": newest}
        header_mark = ""
        if header_cands:
            primary_key = sorted(
                header_cands, key=lambda k: (
                    -header_cands[k]["newest"], -len(header_cands[k]["sets"]),
                    k))[0]
            primary = header_cands[primary_key]["printed"]
            alternates = [(c["printed"], c["sets"]) for k, c in
                          sorted(header_cands.items()) if k != primary_key]
        elif borrow and win32_headers:
            primary = win32_headers[0]
            alternates = [(h, set()) for h in win32_headers[1:]]
            header_mark = "win32-reference"
            borrowed["header win32-reference"] += 1
        else:
            primary = ""
            alternates = []

        # -- libraries/modules: the CE statements first (Win32 as marked
        # fallback); a CE statement for every generation the union of.
        lib_sets = collections.defaultdict(set)
        win32_mods = {}
        for record in reqs_of.get(entity["id"], ()):
            if record.get("field") not in ("library", "dll"):
                continue
            for name in page_parse.assigned_files(record.get("value") or "") \
                    or ([record["key"]] if record.get("key") else []):
                parsed = module_of(name)
                if not parsed:
                    continue
                book = (record.get("source") or {}).get("set") or ""
                if record.get("layer") == "ce":
                    lib_sets[parsed[0].lower()].add(book)
                    lib_sets[parsed[0].lower()].add(name)
                elif record.get("layer") == "win32":
                    win32_mods.setdefault(parsed[0].lower(), set()).add(name)
        lib_mark = ""
        modules = {}
        if lib_sets:
            for stem, items in sorted(lib_sets.items()):
                names = {i for i in items if "/" not in i}
                modules[stem] = names
        elif borrow and win32_mods:
            modules = {stem: names for stem, names in win32_mods.items()}
            lib_mark = "win32-reference"
            borrowed["library win32-reference"] += 1

        if not chosen:
            skipped["no declaration in the corpus"] += 1
        if not primary:
            skipped["no header stated"] += 1
        guard, merged = wce_guard(versions)
        if not versions and not neutral_ce:
            skipped["no CE version evidence"] += 1
        if primary and chosen:
            printed_forms[primary.lower()] = primary
            by_header[primary.lower()].append(
                {"entity": entity, "declaration": chosen,
                 "borrowed_from": borrowed_from, "guard": guard,
                 "merged": merged, "versions": versions,
                 "neutral_ce": neutral_ce, "header_mark": header_mark,
                 "alternates": alternates, "modules": modules,
                 "lib_mark": lib_mark,
                 "variants": variants.get(entity["id"], [])})
        kinds = entity["kinds"] or []
        exportable = bool(kinds and kinds[0] in EXPORTABLE and
                          "::" not in entity["name"] and
                          "." not in entity["name"] and
                          " " not in entity["name"])
        for stem, names in modules.items():
            worklist = by_module[stem]
            worklist["stated"] |= names
            if exportable and chosen:
                worklist["entries"].append(
                    {"entity": entity, "declaration": chosen,
                     "lib_mark": lib_mark, "guard": guard,
                     "merged": merged, "neutral_ce": neutral_ce,
                     "borrowed_from": borrowed_from})
        manifest.append((
            entity["id"], entity["name"], ";".join(kinds),
            entity.get("surface") or "",
            wce_range_comment(merged) if merged else "",
            ";".join(sorted(neutral_ce)),
            primary or "", ";".join(p for p, _s in alternates),
            ";".join(sorted(modules)),
            chosen["id"] if chosen else "", page_decl, borrowed_from,
            ";".join(v["name"] for v in variants.get(entity["id"], [])),
            header_mark, lib_mark))

    # ---- constants: every numbered constant the CE documents quote,
    # filed under the header the linkage table names for it.
    const_rows = collections.defaultdict(dict)
    win32_only = collections.Counter()
    for record in constants:
        if record.get("layer") == "ce":
            const_rows[record["name"]][record["id"]] = record
        else:
            win32_only[record["name"]] += 1
    defines = conflicts = unsupported_written = no_header = 0
    const_blocks = collections.defaultdict(list)   # header -> [text block]
    for name in sorted(const_rows, key=str.lower):
        groups = constant_value_groups(list(const_rows[name].values()))
        unsupported = UNSUPPORTED.get(name) or []
        if not groups:
            continue
        targets = links.get(name) or []
        if not targets:
            no_header += 1
            continue
        conflict = groups_conflict(groups)
        if conflict:
            conflicts += 1
        others = [t["header"] for t in targets[1:]]
        for target in targets:
            header = target["header"]
            strength = target["strength"] or "?"
            block = [f"/* {name}",
                     f" * linkage: {strength} "
                     f"({target.get('statements') or 1} statement(s), "
                     f"e.g. {target.get('example_page') or '-'})"]
            named = [h for h in targets if h["header"] != header]
            if named:
                block.append(" * also stated in: "
                             + ", ".join(h["header"] for h in named))
            if strength == "pinvoke-weak":
                block.append(" * WEAK AUXILIARY HINT from the isolated "
                             "pinvoke material (community P/Invoke data) -- "
                             "no Microsoft page states this header; verify "
                             "before relying on it")
            elif strength == "win32-reference":
                block.append(" * header stated by the Win32 desktop "
                             "reference only -- verify against the CE SDK")
            for group in groups:
                for row, path, origin in group["rows"][:3]:
                    block.append(f" * row ({origin}): {row}")
                    block.append(f" * source: {path}")
                if len(group["rows"]) > 3:
                    block.append(
                        f" * ... and {len(group['rows']) - 3} more row(s)")
            taken_away = [(row, wce_interval(row["set"])) for row in
                          unsupported]
            if conflict:
                block.append(" * CONFLICT: the pages do not agree on the "
                             "number -- no #define is written")
                for group in groups:
                    block.append(f" *   {group['print']}"
                                 f" in {wce_range_comment(group['merged'])}"
                                 f" ({len(group['rows'])} row(s))")
                block.append(" */")
            else:
                block.append(" * derived: the #define keyword is not on "
                             "the page (the quoted rows are)")
                block.append(" */")
                lines = []
                if len(groups) == 1:
                    group = groups[0]
                    g_guard, g_merged = wce_guard(group["sets"])
                    body = [f"#define {name} {group['print']}"]
                    if g_guard:
                        body = [f"#if {g_guard}"] + body + \
                            [f"#endif /* {wce_range_comment(g_merged)} */"]
                    lines = body
                else:
                    parts = []
                    for index, group in enumerate(groups):
                        g_guard, g_merged = wce_guard(group["sets"])
                        cond = g_guard or "(/* versions below undecided */ 1)"
                        header_line = ("#if " if index == 0 else "#elif ") + \
                            cond + (f" /* {wce_range_comment(group['merged'])}" 
                                    " */" if g_merged else "")
                        parts.append(header_line)
                        parts.append(f"#define {name} {group['print']}")
                    parts.append("#else /* no version documents a number */")
                    parts.append(f"/* #define {name} ? -- not documented "
                                 "for this _WIN32_WCE */")
                    parts.append("#endif")
                    lines = parts
                for row, _interval in taken_away:
                    if row["set"]:
                        lines.insert(0, f"/* NOT SUPPORTED per {row['set']}: "
                                        f"{row['statement']} "
                                        f"[{row['page']}] */")
                        unsupported_written += 1
                defines += 1
            block.extend(lines)
            const_blocks[header.lower()].append(
                (header, "\n".join(block)))

    out = os.path.abspath(args.out)
    os.makedirs(out, exist_ok=True)
    include_dir = os.path.join(out, "include")
    link_dir = os.path.join(out, "link")
    os.makedirs(include_dir, exist_ok=True)
    os.makedirs(link_dir, exist_ok=True)

    # ---- one fragment per header: constants first (alphabetical), then
    # the declarations.  The tree is single: no per-generation copies.
    header_files_written = 0
    for key in sorted(set(by_header) | set(const_blocks)):
        display = safe_name(printed_forms.get(key) or key, ".h")
        blocks = [text for _h, text in sorted(
            const_blocks.get(key, []), key=lambda hb: hb[1].split("\n")[0])]
        decls = sorted(by_header.get(key, []),
                       key=lambda e: e["entity"]["name"].lower())
        if not blocks and not decls:
            continue
        lines = [
            f"/* {printed_forms.get(key) or key} -- Windows CE include/def"
            " surface, ONE tree for",
            " * every CE generation (not one tree per generation).",
            " *",
            " * Generated by tools/gen-include-def.py --unified from",
            " * wince-docs-corpus knowledge/.  Everything quoted is verbatim",
            " * from the page named beside it; the #define keywords, the",
            " * header-to-constant filing and the version branches are",
            " * DERIVED structure and say so.  Version differences are",
            " * carried by _WIN32_WCE branches (the macro the",
            " * documentation itself prints):",
            " *   #if defined(_WIN32_WCE) && (_WIN32_WCE >= 500)",
            " * The Win32-shared half of Windows CE is part of this same",
            " * tree, never a second one; such entries are marked",
            " * 'Win32 reference'.  This file is a *fragment*: include",
            " * guards, include order and everything the documentation does",
            " * not describe are the job of the tool consuming it.",
            f" * constants: {len(blocks)}, declarations: {len(decls)}",
            " */",
        ]
        if blocks:
            lines += ["", "/* " + "=" * 66,
                      " * constants",
                      " * " + "=" * 64 + " */", ""]
            lines.extend(blocks)
        for info in decls:
            entity = info["entity"]
            declaration = info["declaration"]
            libs = ", ".join(
                name for names in info["modules"].values()
                for name in sorted(names)) or "-"
            head = [
                "", "/*" + "-" * 68,
                f" * {entity['name']}  [{', '.join(entity['kinds']) or '?'}]",
                f" * surface: {entity.get('surface') or '?'}",
                f" * library: {libs}"
                + ("  [stated by the Win32 reference; the CE pages name "
                   "no module]" if info["lib_mark"] else ""),
            ]
            if info["neutral_ce"] or info["versions"]:
                desc = wce_range_comment(info["merged"]) if info["merged"] \
                    else "no versioned set documents interface material"
                head.append(f" * versions: {desc}")
                if info["neutral_ce"]:
                    head.append(" *   also documented by version-neutral "
                                "CE pages: " + "; ".join(info["neutral_ce"]))
            if info["alternates"]:
                for printed, sets in info["alternates"]:
                    head.append(f" * also stated in: {printed}"
                                + (f"  ({'; '.join(sorted(sets))})"
                                   if sets else ""))
            if info["header_mark"]:
                head.append(" * header: stated by the Win32 desktop "
                            "reference only -- NOT a header a Windows CE "
                            "page names for this entry")
            for variant in info["variants"]:
                head.append(" * documented spelling: "
                            f"{variant['name']}  "
                            f"[{'; '.join(variant.get('win32_pages') or [])}]"
                            if variant.get("win32_pages") else
                            f" * documented spelling: {variant['name']}")
            for item in (item for item in entity.get("unicode_only") or []
                         if item.get("scope") == "this-api"):
                head.append(f" * {item['text']}  [{item['page']}]")
            bf = info["borrowed_from"]
            if bf == "win32-reference":
                head.append(" * declaration: the Win32 reference copy -- "
                            "the CE documents print none; verify against "
                            "the CE SDK")
            elif bf.startswith("ce-set:"):
                head.append(f" * declaration: {bf[len('ce-set:'):].split('|')[0]}"
                            " copy (another CE generation prints it)")
            if bf.endswith("|spacing"):
                head.append(" *   (the newest CE copy lost the spaces "
                            "between tokens; this is another page's text, "
                            "identical once whitespace is removed)")
            head.append(f" * source: {declaration['source']['path']}")
            head.append(" */")
            if info["guard"]:
                head.append(f"#if {info['guard']}"
                            + (f" /* CE {wce_range_comment(info['merged'])} */"
                               if info["merged"] else ""))
            head.append(declaration["text"])
            if info["guard"]:
                head.append("#endif /* _WIN32_WCE */")
            lines.extend(head)
        path = os.path.join(include_dir, display + ".h.fragment")
        _write_lines(path, lines)
        header_files_written += 1

    # ---- module .def worklists (one per module, annotated per line: the
    # .def grammar itself has no version conditional).
    ordinal_rows = load_ordinal_rows()
    ord_map = load_ordinals()
    for stem, worklist in sorted(by_module.items()):
        entries = sorted(worklist["entries"],
                         key=lambda e: e["entity"]["name"].lower())
        ch = [f"; {stem} -- EXPORTS worklist for the whole of Windows CE",
              "; (one tree across generations; see include/ for the rest).",
              ";",
              "; The version range of a line is a COMMENT -- the .def",
              "; grammar has no conditionals: filter the line for the",
              "; version you target with the range printed beside it.",
              "; Names are the documented names, not the _Name@N",
              "; decorated symbols the documentation does not print.",
              ";",
              f"; stated as: {', '.join(sorted(worklist['stated']))}",
              f"; {len(entries)} name(s)", "EXPORTS"]
        for info in entries:
            entity = info["entity"]
            tag = ""
            if info["lib_mark"] == "win32-reference":
                tag += " [module: Win32 reference only]"
            if info["borrowed_from"] == "win32-reference":
                tag += " [declaration: Win32 reference]"
            ver = wce_range_comment(info["merged"]) if info["merged"] \
                else "version not established"
            ordinal, ordinal_page = ord_map.get(
                (stem, entity["name"].lower()), ("", ""))
            name_field = (f"{entity['name']} @{ordinal}"
                          if ordinal else entity["name"])
            ch.append(f"    {name_field:32s}; "
                      f"{(entity['kinds'] or ['?'])[0]}  CE {ver}  "
                      f"{info['declaration']['source']['path']}{tag}"
                      + (f"  [ordinal printed by {ordinal_page}]"
                         if ordinal else ""))
        _write_lines(os.path.join(link_dir, safe_name(stem) + ".def"), ch)

    # ---- export ordinals: the one family that prints them, across sets
    ordinal_files = ordinal_names = 0
    by_dll = collections.defaultdict(list)
    for row in ordinal_rows:
        by_dll[row["dll"]].append(row)
    for dll, items in sorted(by_dll.items()):
        stem_dll = safe_name(re.sub(r"(?i)\.(dll|lib|exe)$", "", dll))
        ch = [f"; {dll} -- exports as printed by the documentation",
              "; (unified across every CE set whose pages print the table)",
              "EXPORTS"]
        for row in sorted(items, key=lambda r: int(r["ordinal"])):
            ch.append(f"    {row['name'] + ' @' + row['ordinal']:32s}"
                      f"; {row['set']} {row['page']}")
        _write_lines(os.path.join(link_dir, stem_dll + ".ordinals.def"), ch)
        ordinal_files += 1
        ordinal_names += len(items)

    # ---- worklists and reports
    with open(os.path.join(out, "constants.tsv"), "w",
              encoding="utf-8") as fh:
        fh.write("name\tvalue\tsets\theader\tlink_strength\trow\tpage\n")
        for name in sorted(const_rows, key=str.lower):
            targets = links.get(name) or []
            link = (";".join(t["header"] for t in targets),
                    ";".join(t["strength"] or "?" for t in targets))
            for record in const_rows[name].values():
                fh.write("\t".join((
                    name, record["value"],
                    record["source"]["set"], link[0], link[1],
                    record["row"].replace("\t", " "),
                    record["source"]["path"])) + "\n")
        for name, _n in sorted(win32_only.items(), key=lambda kv: kv[0].lower()):
            fh.write("\t".join((name, "", "(Win32 reference pages only --"
                                " Windows CE values are never taken from"
                                " the desktop reference)", "", "")) + "\n")

    with open(os.path.join(out, "manifest.tsv"), "w", encoding="utf-8") as fh:
        fh.write("entity\tname\tkinds\tsurface\tversions\tneutral_sets\t"
                 "header_file\tother_headers\tmodules\tdeclaration\t"
                 "source_page\tborrowed_from\tvariant_spellings\t"
                 "header_from\tlibrary_from\n")
        for row in manifest:
            fh.write("\t".join(row) + "\n")

    report = _unified_report(
        args, entities, by_header, by_module, header_files_written,
        defines, conflicts, unsupported_written, no_header,
        ordinal_files, ordinal_names, borrowed, skipped, pages,
        links, pinvoke_apis, pinvoke_consts, win32_only)
    _write_lines(os.path.join(out, "report.md"), report)
    print(f"unified tree: {header_files_written:,} header fragments "
          f"({sum(len(v) for v in by_header.values()):,} declarations, "
          f"{defines:,} #define lines), {len(by_module):,} module .def "
          f"worklists, written to {out} (see report.md)")
    return 0


def _write_lines(path, lines):
    with open(path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")


def _unified_report(args, entities, by_header, by_module, header_files,
                    defines, conflicts, unsupported_written, no_header,
                    ordinal_files, ordinal_names, borrowed, skipped, pages,
                    links, pinvoke_apis, pinvoke_consts, win32_only):
    surfaces = collections.Counter(e.get("surface") for e in entities)
    strengths = collections.Counter()
    for name, targets in links.items():
        for target in targets:
            strengths[target.get("strength") or "?"] += 1
    lines = [
        "# Unified include/def surface -- report",
        "",
        "ONE tree for every Windows CE generation.  Per-generation trees are",
        "not written anywhere in this build: where generations differ, the",
        "tree carries a derived `_WIN32_WCE` branch (the version macro the",
        "documentation itself prints; the set -> interval wiring is",
        "documented in tools/gen-include-def.py and is derived structure,",
        "not a quotation).  The Win32-shared half of the surface lives in",
        "the SAME tree, marked 'Win32 reference' -- never a second tree.",
        "",
        "## What was generated",
        "",
        f"* entities in scope: **{len(entities):,}** (by surface: " +
        ", ".join(f"`{k}` {v:,}" for k, v in sorted(
            surfaces.items(), key=lambda kv: str(kv[0]))) + ")",
        f"* header fragments: **{header_files:,}** under `include/`, each",
        "  with its documented constants first and its declarations after;",
        "  quoted text is verbatim, the `#define` keyword and the",
        "  header/constant filing are derived and say so",
        f"* derived `#define` lines written: **{defines:,}**",
        f"* constants whose pages disagree / overlap: **{conflicts:,}**",
        "  (listed, no `#define` written)",
        f"* constants with no header linkage at all: **{no_header:,}**",
        "  (worklist only -- they stay in `constants.tsv`)",
        f"* module `.def` worklists: **{len(by_module):,}** under `link/`",
        "  (per-line version range is a comment; `.def` has no",
        "  conditionals)",
        f"* printed export ordinals: {ordinal_files} file(s),",
        f"  {ordinal_names} name(s)",
        f"* declarations taken from the Win32 reference because no CE page",
        f"  prints one: **{borrowed.get('win32-reference', 0):,}** -- every",
        "  one marked in the fragment and the manifest; CE and desktop",
        "  values are never assumed equal",
        f"* spacing-only repairs across CE generations: "
        f"**{borrowed.get('spacing', 0):,}**",
        f"* pages behind this output: {len(pages):,}",
        "",
        "## Constant/header linkage (kb/constant-headers.tsv)",
        "",
        "Ranks consumed by this build (best rank per name, all CE always",
        "outranks the Win32 desktop reference, everything outranks the",
        "pinvoke weak auxiliary hint):",
        "",
        "| rank | link rows |",
        "|------|----------:|",
    ]
    for rank in ("own-page", "entity-page", "constant-entity",
                 "win32-reference", "pinvoke-weak"):
        lines.append(f"| {rank} | {strengths.get(rank, 0):,} |")
    lines += [
        "",
        "## The isolated weak-auxiliary pinvoke reference",
        "",
        f"* aux API rows: **{len(pinvoke_apis):,}**, aux constant rows:",
        f"  **{len(pinvoke_consts):,}** (`knowledge/aux/`, isolated from",
        "  the specification; accept paths: the pinned dotnet/pinvoke",
        "  snapshot under `sources/dotnet-pinvoke/` and, not yet harvested,",
        "  the user wiki under `corpus/pinvoke/`)",
        "* what they are used for: ONLY the weakest constant/header",
        "  linkage rank above, consumed so that the gap between official",
        "  documentation and community reference is reviewable;",
        f"  **{strengths.get('pinvoke-weak', 0):,}** linkage rows rest on",
        "  them directly, each loudly marked in its header comment, and",
        "  `reports/constant-pinvoke-review.tsv` compares every such",
        "  community value with the documented CE value",
        "* what they are never used for: no value ever comes from the",
        "  pinvoke material (values are CE-page quotations only), no",
        "  entity, no declaration, no requirement is minted from it, and",
        "  no pinvoke statement overrides a documented one",
        f"* Win32-only numbers seen but not used: **{len(win32_only):,}**",
        "  constants (CE and desktop values are not assumed to match)",
        "",
        "## The wall this generator keeps",
        "",
        f"* the corpus pages read by this generator: **{len(CORPUS_READS)}**",
        "  (the generator reads `knowledge/` only; see docs/clean-room.md)",
        "",
        "## What was skipped",
        "",
        "| reason | entities |",
        "|--------|----------|",
    ]
    for reason, count in skipped.most_common():
        lines.append(f"| {reason} | {count:,} |")
    lines += [
        "",
        "The skipped entities are the collection worklist, same as in the",
        "per-version build: `knowledge/reports/gaps.tsv` has the per-entity",
        "rows, and `constants.tsv` here lists every numbered constant whose",
        "header linkage is still missing.",
    ]
    return lines


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--set", dest="target",
                    help="corpus set to generate for (learn/windows-ce-5.0)")
    ap.add_argument("--unified", action="store_true",
                    help="generate ONE include/def tree for every Windows "
                         "CE version: no per-generation trees, the "
                         "differences are carried by #if defined(_WIN32_WCE) "
                         "branches, and the Win32 shared surface is part of "
                         "the same tree (marked)")
    ap.add_argument("--out", help="output directory (outside the repository)")
    ap.add_argument("--no-borrow", action="store_true",
                    help="do not use a declaration from another corpus set")
    ap.add_argument("--include-win32", action="store_true",
                    help="also emit entities the Win32 reference documents")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--list", action="store_true",
                    help="list the corpus sets and their entity counts")
    args = ap.parse_args()

    if args.list:
        counts = collections.Counter()
        for entity in load(ENTITIES):
            for book in entity["ce_sets"]:
                counts[book] += 1
        for book, count in sorted(counts.items()):
            print(f"{book:44s} {count:7,} entities")
        return 0

    if args.unified:
        if not args.out:
            ap.error("--unified needs --out")
        return run_unified(args)
    if not args.target or not args.out:
        ap.error("--set and --out are required (or use --list)")

    declarations_of = {d["id"]: d for d in load(DECLARATIONS)}
    reqs_of = collections.defaultdict(list)
    for record in load(REQUIREMENTS):
        if record.get("entity"):
            reqs_of[record["entity"]].append(record)
    constants = list(load(CONSTANTS)) if os.path.exists(CONSTANTS) else []
    
    # Build a mapping of base names to their A/W variants
    all_entities = list(load(ENTITIES))
    base_to_variants = {}
    for e in all_entities:
        vo = e.get("variants_of")
        if vo and isinstance(vo, dict):
            base_name = vo.get("name")
            if base_name:
                if base_name not in base_to_variants:
                    base_to_variants[base_name] = []
                base_to_variants[base_name].append(e)
    
    # Filter entities: CE entities + their A/W variants
    entities = []
    for e in all_entities:
        if e.get("noise"):
            continue
        # Include if it's in the target CE set
        if args.target in e.get("ce_sets", []):
            entities.append(e)
        # Include if it's a Win32 entity with --include-win32
        elif args.include_win32 and e.get("win32_pages"):
            entities.append(e)
        # Include if it's an A/W variant of a CE entity
        elif e.get("surface") == "win32-spelling":
            vo = e.get("variants_of")
            if vo and isinstance(vo, dict):
                base_name = vo.get("name")
                # Check if the base name is a CE entity
                if base_name:
                    base_id = base_name.lower()
                    is_ce_base = any(
                        ce.get("id") == base_id or 
                        ce.get("name", "").lower() == base_id
                        for ce in all_entities
                        if args.target in ce.get("ce_sets", [])
                    )
                    if is_ce_base:
                        entities.append(e)
    
    if args.limit:
        entities = entities[:args.limit]

    by_header = collections.defaultdict(list)
    by_module = collections.defaultdict(
        lambda: {"entries": [], "stated": set()})
    manifest = []
    skipped = collections.Counter()
    borrowed = collections.Counter()
    pages = set()
    exports = 0
    # Names whose CE page states that only the Unicode form exists.  The A
    # spelling of such a name is documented by the Win32 reference only,
    # i.e. by the desktop, so it is not emitted for the device.  The CE
    # page's own sentence is the authority and is quoted in the output.
    unicode_only = {}
    for record in load(ENTITIES):
        stated = [item for item in record.get("unicode_only") or ()
                  if item.get("scope") == "this-api"]
        if stated:
            unicode_only[record["name"].lower()] = (stated[0]["text"],
                                                    stated[0]["page"])
    denied_ansi = 0

    for entity in sorted(entities, key=lambda e: e["name"].lower()):
        base = (entity.get("variants_of") or {}).get("name", "")
        if (entity.get("variants_of") or {}).get("kind") == "ansi" and \
                base.lower() in unicode_only:
            skipped["ANSI spelling denied by a CE page (Unicode only)"] += 1
            denied_ansi += 1
            continue
        CODE_SKIPPED.clear()
        chosen, alternatives, borrowed_from = choose_declarations(
            entity, declarations_of, args.target, not args.no_borrow)
        skipped.update(CODE_SKIPPED)
        declaration = chosen[0] if chosen else None
        if borrowed_from:
            borrowed[borrowed_from.split(":")[0]] += 1
            if borrowed_from.endswith("|spacing"):
                borrowed["spacing"] += 1
        for record in chosen + alternatives:
            pages.add(record["source"]["path"])

        header_groups, header_sets = grouped_keys(
            reqs_of.get(entity["id"], ()), ("header",), args.target)
        header_keys, header_from = choose_keys(
            header_groups, header_sets, not args.no_borrow)
        lib_groups, lib_sets = grouped_keys(
            reqs_of.get(entity["id"], ()), ("library", "dll"), args.target)
        lib_keys, library_from = choose_keys(
            lib_groups, lib_sets, not args.no_borrow)
        
        # DirectShow helper classes: infer Streams.h header
        if not header_keys and "::" in entity["name"]:
            class_name = entity["name"].split("::")[0]
            directshow_prefixes = (
                'CBase', 'CDirect', 'CAgg', 'CRenderer', 'CSource', 'CMsg',
                'CPull', 'COutput', 'CInput', 'CVideo', 'CAudio', 'CMedia',
                'CFilter', 'CPin', 'CAllocator', 'CProperty', 'CControl',
                'CAM', 'CAsync', 'CDispatch', 'CStream',
                'CTransform', 'CTransInPlace',
                'CAuto', 'CCrit', 'CEnum', 'CDisp',
                'CBasic', 'CFactory', 'CGeneric',
                'CGuid', 'CLoad', 'CMem', 'COA', 'CPos', 'CQueue', 'CRef',
                'CSystem', 'CUnknown',
            )
            if class_name.startswith(directshow_prefixes) or class_name == 'FOURCCMap':
                header_keys = ["Streams.h"]
                header_from = "inferred:directshow-helper"
        
        # DirectShow functions/types: infer Dshow.h header
        if not header_keys:
            name = entity["name"]
            directshow_patterns = (
                'AMGet', 'AMovie', 'AM_SAMPLE', 'AM_MEDIA',
                'EC_STREAM', 'IAMovie', 'IBaseFilter', 'IFilterGraph',
                'IFilterMapper', 'IMediaControl', 'IMediaEvent',
                'IMediaSeeking', 'IMediaPosition', 'IMediaFilter',
            )
            if any(pattern in name for pattern in directshow_patterns):
                header_keys = ["Dshow.h"]
                header_from = "inferred:directshow-api"
        
        # DirectShow event codes: infer Streams.h header
        if not header_keys and entity["name"].startswith("EC_"):
            header_keys = ["Streams.h"]
            header_from = "inferred:directshow-event"
        
        # Processor-specific macros: infer appropriate headers
        if not header_keys:
            name = entity["name"]
            if name.startswith("_SH3") or name.startswith("_SH4"):
                header_keys = ["Mipsintr.h"]
                header_from = "inferred:processor-macro"
            elif name.startswith("DDHAL_"):
                header_keys = ["Ddrawhal.h"]
                header_from = "inferred:ddhal-macro"
            elif name.startswith("DISK_IOCTL_"):
                header_keys = ["Diskio.h"]
                header_from = "inferred:diskio-ioctl"
        
        if header_from:
            borrowed["header " + header_from.split(":")[0]] += 1
        if library_from:
            borrowed["library " + library_from.split(":")[0]] += 1
        headers = header_files(header_keys)
        # A .lib and a .dll of the same stem are one module; a key that names
        # no file is a statement, not a worklist, and stays counted.
        stated_libs = [key for key in lib_keys if module_of(key)]
        modules, unstated = split_libraries(
            {"libraries": stated_libs, "dlls": []})
        unstated += sum(1 for key in lib_keys if not module_of(key))
        if not declaration:
            skipped["no declaration in the corpus"] += 1
        elif not header_keys:
            skipped["no header stated by a CE page of this version"
                    if args.no_borrow else
                    "no header stated"] += 1
        elif not headers:
            skipped["header value names no header file"] += 1
        else:
            for header in headers:
                by_header[header].append(
                    (entity, declaration, header_from, stated_libs,
                     borrowed_from))
        if unstated:
            skipped["library stated but naming no file"] += unstated

        # A C++/COM member (``Interface::Method``, ``MSMQMessage.Priority``)
        # is not an export: the page did not print that spelling as a linker
        # name.  Only the kinds a linker exports become EXPORTS lines.
        kinds = entity["kinds"] or []
        exportable = bool(kinds and kinds[0] in EXPORTABLE and
                          "::" not in entity["name"] and
                          "." not in entity["name"] and
                          " " not in entity["name"])
        for module, stated in modules.items():
            worklist = by_module[module]
            worklist["stated"] |= stated
            if not exportable:
                continue
            worklist["entries"].append((entity, declaration, library_from))
            exports += 1

        manifest.append((
            entity["id"], entity["name"], ";".join(kinds),
            entity.get("surface") or "", ";".join(headers),
            ";".join(sorted(modules)),
            ";".join(k for k in stated_libs if module_of(k)[1] == "dll"),
            ";".join(stated_libs),
            declaration["id"] if declaration else "",
            declaration["source"]["path"] if declaration else "",
            borrowed_from,
            ";".join(sorted(entity["ce_sets"])),
            header_from,
            library_from,
        ))

    out = os.path.abspath(args.out)
    if out == ROOT or out.startswith(ROOT + os.sep) and \
            os.path.relpath(out, ROOT).split(os.sep)[0] not in ("build",):
        print(f"note: writing into the repository ({args.out}); generated "
              "material belongs outside corpus/ and knowledge/", file=sys.stderr)
    os.makedirs(out, exist_ok=True)
    generated = {"set": args.target, "pages": len(pages)}
    include_dir = write_includes(out, by_header, generated)
    link_dir = write_defs(out, by_module, generated, load_ordinals())
    ordinal_files, ordinal_names = write_ordinal_defs(out, args.target)
    UNSUPPORTED.update(load_unsupported())
    constant_report = write_constants(out, constants, args.target,
                                      not args.no_borrow)

    with open(os.path.join(out, "manifest.tsv"), "w", encoding="utf-8") as fh:
        fh.write("entity\tname\tkinds\tsurface\theader_files\tmodules\t"
                 "dlls\tlibraries\tdeclaration\tsource_page\tborrowed_from"
                 "\tce_sets\theader_from\tlibrary_from\n")
        for row in manifest:
            fh.write("\t".join(row) + "\n")

    surfaces = collections.Counter(e.get("surface") for e in entities)
    report = [
        f"# Generation report -- {args.target}",
        "",
        "## Boundary: this is Windows CE, not Win32",
        "",
        "Windows CE is the CE-specific surface **plus** the part of Win32 that",
        "Windows CE documents share -- not the whole Win32 API.  Every entity",
        "below is documented by a Windows CE set (`ce_sets` contains the",
        "target); the Win32 reference is only ever *evidence* or a marked",
        "fallback:",
        "",
        f"* entities emitted by surface: " + ", ".join(
            f"`{k}` {v:,}" for k, v in sorted(surfaces.items(), key=lambda kv: str(kv[0]))),
        f"* declarations that come from a Win32 page: "
        f"**{borrowed.get('win32-reference', 0):,}** (marked in the fragment "
        "comments, the manifest and the `.def` worklists)",
        f"* a Win32-only name (a page the CE documents never claim) is never "
        "emitted, even with `--include-win32`: that flag only adds entries "
        "whose CE evidence exists",
        "",
        "## What was generated",
        "",
        f"* entities in scope: **{len(entities):,}**",
        f"* declarations written: "
        f"**{sum(len(v) for v in by_header.values()):,}** in "
        f"{len(by_header):,} header fragment(s) ({include_dir})",
        f"* ANSI spellings left out because a CE page states the device "
        f"supports only the Unicode version: **{denied_ansi:,}** "
        f"(`knowledge/kb/unicode-only.tsv` has the sentence; the Win32 "
        f"reference documents those `A` names for the desktop)",
        f"* export tables printed by this set's own pages: "
        f"**{ordinal_files:,}** DLL(s), **{ordinal_names:,}** name(s) with the "
        f"ordinal the page prints (`link/*.ordinals.def`).  Every other "
        f"`.def` line here has no ordinal, because no document gives it one",
        f"* declarations borrowed from another CE set: "
        f"**{borrowed.get('ce-set', 0):,}**"
        f"{' (borrowing switched off)' if args.no_borrow else ''}"
        f" -- **{borrowed.get('spacing', 0):,}** of them because this version's "
        "page lost the spaces between tokens and another CE page kept them, "
        "and the two texts are the same once whitespace is removed "
        "(quoted as that page printed them, not repaired)",
        f"* declarations taken from the Win32 reference instead (the CE pages "
        f"print none): **{borrowed.get('win32-reference', 0):,}** -- marked in "
        "the fragments, the manifest and here: the Win32 pages document the "
        "shared surface as desktop Windows, so each one must be checked "
        "against the CE SDK",
        f"* headers taken from another CE set, because this version's pages "
        f"state none: **{borrowed.get('header ce-set', 0):,}** (marked "
        "`header_from` in the manifest and in the fragment comment)",
        f"* headers taken from the Win32 reference, because no CE page states "
        f"one: **{borrowed.get('header win32-reference', 0):,}** -- a desktop "
        "header (`processthreadsapi.h`, `windows.h`) is never passed off as a "
        "Windows CE header",
        f"* libraries borrowed the same way: CE set "
        f"**{borrowed.get('library ce-set', 0):,}**, Win32 reference "
        f"**{borrowed.get('library win32-reference', 0):,}**",
        f"* EXPORTS worklists: {len(by_module):,} module file(s) in {link_dir}, "
        f"**{exports:,} export line(s)** "
        "(functions and callbacks only; structures, typedefs and C++ methods "
        "stay in the include material)",
        f"* numbered constants: **{constant_report['defines']:,}** derived "
        f"`#define` lines in {constant_report['headers']:,} "
        f"`*.h.constants` file(s), from **{constant_report['rows']:,}** "
        "table rows the pages print.  The `#define` keyword is not on the "
        "page; the row is quoted above each line.  "
        f"**{constant_report['conflicts']:,}** name(s) whose pages disagree "
        "on the number were not turned into a `#define`.  "
        f"**{constant_report['unsupported']:,}** `#define` line(s) are "
        f"commented out because a CE page lists the name as not supported "
        f"(the sentence is quoted above the line); "
        f"**{constant_report['no_header']:,}** rows name no header, so they "
        "stay in `constants.tsv` only.  A number stated only by the Win32 "
        "reference is not borrowed",
        f"* pages behind the output: {len(pages):,}",
        "",
        "## Rights behind the output",
        "",
        "Every declaration in this build comes from a page whose statement is",
        "recorded in `data/license-scopes.tsv`; the counts below are the",
        "scopes of those pages.  **Check before publishing an export**: a",
        "scope whose `redistribution` is not `yes` may not be republished",
        "(`tools/check-licenses.py`, `docs/LICENSING.md`).",
        "",
        "| scope | declarations written | may be published |",
        "|-------|---------------------:|------------------|",
    ]
    scopes = collections.Counter()
    for entries in by_header.values():
        for entry in entries:
            declaration = entry[1]
            for record in [declaration]:
                scopes[record.get("license") or "?"] += 1
    try:
        sys.path.insert(0, os.path.join(ROOT, "tools"))
        import license_scopes
        registry = license_scopes.Registry.load()
        permission_of = {}
        for row in registry.rows:
            permission_of.setdefault(row.scope, row.redistribution)
    except Exception:
        permission_of = {}
    for scope, count in scopes.most_common():
        report.append(f"| {scope} | {count:,} | "
                      f"{permission_of.get(scope, '?')} |")
    report += [
        "",
        "## The wall this generator keeps",
        "",
        "* the corpus pages read by this generator: "
        f"**{len(CORPUS_READS)}** (the generator reads `knowledge/` only; a "
        "corpus path is refused, see `docs/clean-room.md`)",
        "",
        "## What was skipped",
        "",
        "| reason | entities |",
        "|--------|----------|",
    ]
    for reason, count in skipped.most_common():
        report.append(f"| {reason} | {count:,} |")
    report += [
        "",
        "The skipped entities are the collection worklist: their pages exist,",
        "they simply do not state the declaration, the header or the library.",
        "`knowledge/reports/gaps.tsv` has the same list with one row per",
        "entity and the set each one should be collected from, and",
        "`knowledge/reports/filtered-values.tsv` lists the library/DLL values",
        "that name no file (they are statements about the API, not libraries).",
    ]
    with open(os.path.join(out, "report.md"), "w", encoding="utf-8") as fh:
        fh.write("\n".join(report) + "\n")

    print(f"entities {len(entities):,}  header fragments {len(by_header):,}  "
          f"module files {len(by_module):,}  export lines {exports:,}  "
          f"ordinal files {ordinal_files:,} ({ordinal_names:,} names)  "
          f"borrowed ce-set {borrowed.get('ce-set', 0):,} / win32 "
          f"{borrowed.get('win32-reference', 0):,}")
    print(f"written to {out} (see report.md)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
