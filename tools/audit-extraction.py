#!/usr/bin/env python3
"""tools/audit-extraction.py -- per-page accounting of what the extractors
read versus what the pages print.

Every page of the corpus is examined one file at a time (the standing
requirement: a page must never be recorded as fully extracted when it is
not).  For each page the report states:

* what the page *prints* -- table rows, ``<pre>`` code blocks, ``#define``
  lines, ``typedef`` lines, a Requirements heading, a Syntax heading,
  prose constants (``NAME (0x0001)``);
* what the knowledge base *recorded* from that page -- declarations,
  constants, name-list rows, requirements, export ordinals, ABI offsets
  (read from ``knowledge/kb/``);
* a verdict -- ``no-content`` / ``extracted`` / ``partial`` /
  ``unextracted`` -- and one gap flag per printed structure class the
  extractors took nothing from (``pre-unread``, ``tables-unread``,
  ``defines-unread``, ``requirements-unread``, ``prose-constants-unread``).

Output: ``knowledge/reports/extraction-audit.tsv`` (one row per page) and
``knowledge/reports/extraction-audit.md`` (the summary: totals, every gap
class with counts and example pages, per-tree tables).  A page with a gap
flag is *not* claimed to be incomplete documentation -- it is a page the
next extraction pass must open again.

    python3 tools/audit-extraction.py                  # whole corpus
    python3 tools/audit-extraction.py --tree windows-ce-5.0
"""

import argparse
import collections
import gzip
import html
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

INDEX = os.path.join(ROOT, "data", "index", "INDEX.tsv")
KB = os.path.join(ROOT, "knowledge", "kb")
REPORTS = os.path.join(ROOT, "knowledge", "reports")

TAG = re.compile(r"(?s)<[^>]+>")
SCRIPT = re.compile(r"(?is)<(script|style|noscript)\b.*?</\1>")
PAPERWORK = {"index.md", "toc.md", "TOC.md"}

RE_HEADINGS = re.compile(
    r"(?is)<h[1-6][^>]*>\s*(?:<[^>]+>\s*)*([^<]{2,40}?)\s*(?:<[^>]+>\s*)*</h[1-6]>")
RE_TABLE = re.compile(r"(?is)<table\b")
RE_TROW = re.compile(r"(?is)<tr\b")
RE_PRE = re.compile(r"(?is)<pre\b")
RE_DEFINE = re.compile(r"(?m)^\s*#\s*define\s+[A-Za-z_]")
RE_TYPEDEF = re.compile(r"\btypedef\b")
RE_PROSE_CONST = re.compile(
    r"\b[A-Z][A-Z0-9_]{3,}\s*(?:\(|=\s*)\s*(?:0x[0-9A-Fa-f]+|\d{2,})")
RE_MD_FENCE = re.compile(r"(?ms)^```.*?^```")
RE_MD_TABLE_ROW = re.compile(r"(?m)^\s*\|.*\|\s*$")

# A table is *candidate* material (a constant/name list) when its header
# carries a name-ish column and a value/description-ish column and no
# member/parameter column.  A parameter table (Name | Type | Description),
# a layout table or a property sheet is not extraction material, and is
# never reported as an unread gap.
NAME_LABELS = {
    "name", "constant", "constants", "flag", "flags", "value", "element",
    "symbol", "message", "identifier", "data type", "data types",
    "data type name", "structure", "code", "macro", "error code",
    "return code", "event", "ioctl", "generic-text data type name",
}
VALUE_LABELS = {
    "value", "description", "numeric value", "hexadecimal", "decimal",
    "hex", "hex value", "definition", "meaning", "number",
    "unicode defined", "ansi defined", "_unicode defined", "_ansi defined",
}
MEMBER_LABELS = {
    "type", "parameter", "parameters", "field", "fields", "member",
    "members", "property", "option", "bit", "attribute", "function",
    "return type", "offset", "size", "width", "length",
}
RE_FIRST_ROW = re.compile(r"(?is)<tr\b[^>]*>(.*?)</tr>")
RE_CELL = re.compile(r"(?is)<t[dh]\b[^>]*>(.*?)</t[dh]>")

# Example code is read (it is on the page) but it is not extraction
# material: a sample's ``#define MEM_HEIGHT 1000`` is the sample's own,
# and a call sequence is not a declaration.  A pre block introduced by
# one of these cues (the sentence before it) is an example block and is
# never reported as a pre/defines gap.  (tools/page_parse.py keeps the
# same cue list for the promotion rules.)
EXAMPLE_CUE = re.compile(
    r"(?i)\b(?:code\s+example|following\s+example|following\s+code|"
    r"example\s+(?:shows|demonstrates|illustrates|implements|sets|uses|"
    r"creates|declares)|sample\s+(?:code|application|program|function|"
    r"shows|demonstrates)|the\s+following\s+sample|shows\s+how|"
    r"shown\s+in\s+(?:the\s+)?following|as\s+shown|usually\s+implemented|"
    r"implementation\s+of\s+the\s+following|is\s+implemented\s+as\s+follows|"
    r"following\s+(?:program|listing|function)\s+shows)")

RE_PRE_ANY = re.compile(r"(?is)<pre\b[^>]*>(.*?)</pre>")
RE_REQ_NONE = re.compile(
    r"(?is)requirements\b[^<]{0,40}</h[1-6]>\s*(?:<[^>]+>\s*)*"
    r"(?:none|not applicable|n/a)\s*[.!?]?\s*(?:<|$)")


def page_text(path):
    """The readable text of one page (tags stripped)."""
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            raw = fh.read(2_000_000)
    except OSError:
        return "", ""
    if path.endswith(".md"):
        body = RE_MD_FENCE.sub(lambda m: m.group(0), raw)
        return raw, TAG.sub(" ", html.unescape(body))
    body = SCRIPT.sub(" ", raw)
    return raw, html.unescape(TAG.sub(" ", body))


def candidate_tables(raw, is_md):
    """How many tables of the page carry constant/name-list material."""
    count = 0
    for table in re.finditer(r"(?is)<table\b[^>]*>(.*?)</table>", raw):
        first = RE_FIRST_ROW.search(table.group(1))
        if not first:
            continue
        labels = set()
        for cell in RE_CELL.findall(first.group(1)):
            text = html.unescape(TAG.sub(" ", cell)).strip().rstrip(":")
            labels.add(re.sub(r"\s+", " ", text).lower())
        if (labels & NAME_LABELS) and (labels & VALUE_LABELS) \
                and not (labels & MEMBER_LABELS) \
                and not any("requirement" in label for label in labels):
            count += 1
    if is_md:
        rows = RE_MD_TABLE_ROW.findall(raw)
        if len(rows) >= 2:
            labels = {re.sub(r"\s+", " ", c).strip().rstrip(":").lower()
                      for c in rows[0].strip().strip("|").split("|")}
            if (labels & NAME_LABELS) and (labels & VALUE_LABELS) \
                    and not (labels & MEMBER_LABELS) \
                    and not any("requirement" in label for label in labels):
                count += 1
    return count


def decl_shaped_pre(raw):
    """How many code blocks look like a declaration (not a sample call).

    Blocks the introducing prose announces as an example ("The following
    code example shows how ...") are sample code: readable, not
    extraction material, and never a gap.
    """
    count = 0
    for match in RE_PRE_ANY.finditer(raw):
        block, start = match.group(1), match.start()
        cue = TAG.sub(" ", raw[max(0, start - 400):start])
        if EXAMPLE_CUE.search(cue):
            continue
        text = TAG.sub(" ", block)
        if re.search(r"typedef\b|#\s*define\s+\w+|\w+\s+\w+\s*\([^;]*\)\s*;",
                     text):
            count += 1
    for match in RE_MD_FENCE.finditer(raw):
        block, start = match.group(0), match.start()
        cue = raw[max(0, start - 400):start]
        if EXAMPLE_CUE.search(cue):
            continue
        if re.search(r"typedef\b|#\s*define\s+\w+|\w+\s+\w+\s*\([^;]*\)\s*;",
                     block):
            count += 1
    return count


def example_pre(raw):
    """How many code blocks the prose introduces as example code."""
    count = 0
    for match in RE_PRE_ANY.finditer(raw):
        cue = TAG.sub(" ", raw[max(0, match.start() - 400):match.start()])
        if EXAMPLE_CUE.search(cue):
            count += 1
    for match in RE_MD_FENCE.finditer(raw):
        cue = raw[max(0, match.start() - 400):match.start()]
        if EXAMPLE_CUE.search(cue):
            count += 1
    return count


def loose_define_lines(raw, is_md):
    """``#define`` lines OUTSIDE code blocks -- the ``printed #define``
    reader's ground (page_parse.define_line_constants strips <pre> and
    fences first).  A ``#define`` inside sample code is the sample's own
    and never a defines gap."""
    stripped = RE_PRE_ANY.sub(" ", raw)
    stripped = RE_MD_FENCE.sub(" ", stripped)
    return len(re.findall(r"(?m)^\s*#\s*define\s+[A-Za-z_]", stripped))


def page_shapes(path):
    """What the page prints: one counter of structure classes."""
    raw, _text = page_text(path)
    if path.endswith(".md"):
        fences = len(RE_MD_FENCE.findall(raw))
        tables = raw.count("<table")
        md_rows = len(RE_MD_TABLE_ROW.findall(raw))
        return {
            "tables": tables + (1 if md_rows >= 2 else 0),
            "table_rows": len(RE_TROW.findall(raw)) + md_rows,
            "pre_blocks": fences + len(RE_PRE.findall(raw)),
            "define_lines": loose_define_lines(raw, True),
            "typedef_lines": len(RE_TYPEDEF.findall(raw)),
            "requirements_heading": int(bool(re.search(
                r"(?im)^#{1,6}\s*-?\s*requirements\s*$", raw))),
            "requirements_none": int(bool(re.search(
                r"(?im)^#{1,6}\s*-?\s*requirements\s*$\s*"
                r"(?:\r?\n\s*)*(?:\*\*)?(?:none|not applicable|n/a)",
                raw))),
            "syntax_heading": int(bool(re.search(
                r"(?im)^#{1,6}\s*-?\s*syntax\s*$", raw))),
            "prose_constants": len(RE_PROSE_CONST.findall(raw)),
            "candidate_tables": candidate_tables(raw, True),
            "decl_shaped_pre": decl_shaped_pre(raw),
            "example_pre": example_pre(raw),
        }
    headings = [m.group(1).strip().lower() for m in RE_HEADINGS.finditer(raw)]
    return {
        "tables": len(RE_TABLE.findall(raw)),
        "table_rows": len(RE_TROW.findall(raw)),
        "pre_blocks": len(RE_PRE.findall(raw)),
        "define_lines": loose_define_lines(raw, False),
        "typedef_lines": len(RE_TYPEDEF.findall(raw)),
        "requirements_heading": int(any(
            h.startswith("requirement") for h in headings)),
        "requirements_none": int(bool(RE_REQ_NONE.search(raw))),
        "syntax_heading": int(any(h.startswith("syntax") for h in headings)),
        "prose_constants": len(RE_PROSE_CONST.findall(raw)),
        "candidate_tables": candidate_tables(raw, False),
        "decl_shaped_pre": decl_shaped_pre(raw),
        "example_pre": example_pre(raw),
    }


def load_kb():
    """Per-page extraction counts read from knowledge/kb/."""
    got = collections.defaultdict(lambda: collections.Counter())

    def open_kb(name):
        path = os.path.join(KB, name)
        if not os.path.exists(path):
            return []
        opener = gzip.open if path.endswith(".gz") else open
        with opener(path, "rt", encoding="utf-8") as fh:
            for line in fh:
                line = line.strip()
                if line:
                    yield json.loads(line)

    def source_path(record):
        # The re-harvest files write "source" as the path string, the
        # quote store as a {path: ...} dict; both name the same page.
        src = record.get("source")
        if isinstance(src, dict):
            return src.get("path") or ""
        return src or ""

    for record in open_kb("declarations.jsonl.gz"):
        if record.get("implementation"):
            continue
        path = source_path(record)
        if path:
            got[path]["declarations"] += 1
    for record in open_kb("declarations-dotnet.jsonl.gz"):
        path = source_path(record)
        if path:
            got[path]["declarations"] += 1
    for record in open_kb("constants.jsonl.gz"):
        path = source_path(record)
        if path:
            got[path]["constants"] += 1
    # name|description rows a page documents (constant-names.tsv): the
    # counted twin of fact["constant_names"]/fact["name_rows"].  Without
    # this the audit flags every name-list page as tables-unread even
    # though the reader took the rows (the old stale counter).
    names_path = os.path.join(KB, "constant-names.tsv")
    if os.path.exists(names_path):
        with open(names_path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            try:
                page_i = header.index("page")
            except ValueError:
                page_i = 1
            for line in fh:
                cells = line.rstrip("\n").split("\t")
                if len(cells) > page_i and cells[page_i]:
                    got[cells[page_i]]["name_rows"] += 1
    for record in open_kb("requirements.jsonl.gz"):
        path = source_path(record)
        if path:
            got[path]["requirements"] += 1
    for record in open_kb("abi-offsets.jsonl.gz"):
        path = source_path(record)
        if path:
            got[path]["abi_offsets"] += 1
    for record in open_kb("export-ordinals.jsonl.gz"):
        path = source_path(record)
        if path:
            got[path]["export_ordinals"] += 1
    for record in open_kb("entities.jsonl.gz"):
        for page in (record.get("ce_pages") or []) + \
                (record.get("win32_pages") or []):
            got[page]["entity_mentions"] += 1
        for item in record.get("evidence") or []:
            path = item.get("path")
            if path:
                got[path]["entity_mentions"] += 1
    # The re-harvest pass (harvest-*.jsonl) and the extra defines/
    # declarations worklists are recorded facts of knowledge/kb/ too:
    # a page whose material sits there is read, not unread.
    for record in open_kb("harvest-declarations.jsonl"):
        path = source_path(record)
        if path:
            got[path]["declarations"] += 1
    for record in open_kb("harvest-constants.jsonl"):
        path = source_path(record)
        if path:
            got[path]["constants"] += 1
    for record in open_kb("extra-declarations.jsonl"):
        path = source_path(record)
        if not path:
            path = record.get("source") if isinstance(
                record.get("source"), str) else None
        if path:
            got[path]["declarations"] += 1
    extra_defines = os.path.join(KB, "extra-defines.tsv")
    if os.path.exists(extra_defines):
        with open(extra_defines, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            try:
                page_i = header.index("source")
            except ValueError:
                page_i = len(header) - 1
            for line in fh:
                cells = line.rstrip("\n").split("\t")
                if len(cells) > page_i and cells[page_i]:
                    got[cells[page_i]]["constants"] += 1
    return got


def audit_page(path, shapes, got):
    """Verdict and gap flags for one page."""
    counter = got if got is not None else collections.Counter()
    decls = counter.get("declarations", 0)
    consts = counter.get("constants", 0)
    reqs = counter.get("requirements", 0)
    rows_got = counter.get("name_rows", 0)
    offsets = counter.get("abi_offsets", 0)
    ordinals = counter.get("export_ordinals", 0)
    entities = counter.get("entity_mentions", 0)

    flags = []
    if shapes["decl_shaped_pre"] and not decls:
        flags.append("pre-unread")
    if shapes["candidate_tables"] and not (consts or rows_got or offsets
                                          or ordinals):
        flags.append("tables-unread")
    if shapes["define_lines"] and not (decls or consts):
        flags.append("defines-unread")
    # "Requirements: None." is the page stating it has none -- read, not
    # a gap.  Only a Requirements section with content nothing was
    # recorded from is requirements-unread.
    if shapes["requirements_heading"] and not reqs \
            and not shapes["requirements_none"]:
        flags.append("requirements-unread")
    if shapes["prose_constants"] >= 3 and not consts:
        flags.append("prose-constants-unread")

    seen_any = any(shapes[k] for k in
                   ("candidate_tables", "decl_shaped_pre", "define_lines",
                    "typedef_lines", "prose_constants"))
    got_any = bool(decls or consts or reqs or rows_got or offsets
                   or ordinals or entities)
    if not seen_any and not got_any:
        verdict = "no-content"
    elif not got_any:
        verdict = "unextracted"
    elif flags:
        verdict = "partial"
    else:
        verdict = "extracted"
    return verdict, flags


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--tree", help="only pages under corpus/<tree>/")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--examples", type=int, default=8,
                    help="example pages per gap class in the summary")
    args = ap.parse_args()

    rows = []
    with open(INDEX, encoding="utf-8") as fh:
        for line in fh:
            if line.startswith("#") or not line.strip():
                continue
            parts = line.rstrip("\n").split("\t")
            if len(parts) < 4:
                continue
            page_id, book, path, title = parts[:4]
            if os.path.basename(path) in PAPERWORK:
                continue
            if args.tree and not path.startswith("corpus/" + args.tree):
                continue
            rows.append((page_id, book, path, title))
    if args.limit:
        rows = rows[:args.limit]
    print(f"[audit] {len(rows):,} page(s)", flush=True)

    got = load_kb()
    os.makedirs(REPORTS, exist_ok=True)
    out_path = os.path.join(REPORTS, "extraction-audit.tsv")
    verdicts = collections.Counter()
    flag_pages = collections.defaultdict(list)
    per_book = collections.defaultdict(collections.Counter)
    shape_totals = collections.Counter()

    with open(out_path, "w", encoding="utf-8") as out:
        out.write("page_id\tbook\tpath\ttitle\t"
                  "tables\ttable_rows\tpre_blocks\tdefine_lines\t"
                  "typedef_lines\tprose_constants\tcandidate_tables\t"
                  "decl_shaped_pre\texample_pre\t"
                  "syntax_heading\trequirements_heading\trequirements_none\t"
                  "declarations\tconstants\tname_rows\trequirements\t"
                  "export_ordinals\tabi_offsets\tentities\t"
                  "verdict\tgaps\n")
        for index, (page_id, book, path, title) in enumerate(rows, 1):
            full = os.path.join(ROOT, path)
            shapes = page_shapes(full)
            counter = got.get(path)
            verdict, flags = audit_page(path, shapes, counter)
            verdicts[verdict] += 1
            per_book[book][verdict] += 1
            for flag in flags:
                if len(flag_pages[flag]) < 40:
                    flag_pages[flag].append(path)
            for key in shapes:
                shape_totals[key] += shapes[key]
            row = counter or collections.Counter()
            out.write("\t".join(str(cell) for cell in (
                page_id, book, path, title.replace("\t", " "),
                shapes["tables"], shapes["table_rows"], shapes["pre_blocks"],
                shapes["define_lines"], shapes["typedef_lines"],
                shapes["prose_constants"], shapes["candidate_tables"],
                shapes["decl_shaped_pre"], shapes["example_pre"],
                shapes["syntax_heading"],
                shapes["requirements_heading"], shapes["requirements_none"],
                row.get("declarations", 0), row.get("constants", 0),
                row.get("name_rows", 0), row.get("requirements", 0),
                row.get("export_ordinals", 0), row.get("abi_offsets", 0),
                row.get("entity_mentions", 0),
                verdict, ",".join(flags),
            )) + "\n")
            if index % 20000 == 0:
                print(f"  {index:,}/{len(rows):,}", flush=True)

    # summary
    flag_counts = collections.Counter()
    with open(out_path, encoding="utf-8") as fh:
        header = fh.readline()
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            for flag in cells[-1].split(","):
                if flag:
                    flag_counts[flag] += 1
    summary = os.path.join(REPORTS, "extraction-audit.md")
    with open(summary, "w", encoding="utf-8") as out:
        out.write("# Extraction audit -- every page, one file at a time\n\n")
        out.write("Generated by `tools/audit-extraction.py`.  The TSV beside "
                  "this file carries one row per page: what the page prints "
                  "(tables, code blocks, `#define`/`typedef` lines, prose "
                  "constants) and what `knowledge/kb/` recorded from it.  "
                  "A page is never recorded as fully extracted while a "
                  "structure class on it is unread.\n\n")
        out.write("## Verdicts\n\n")
        out.write("| verdict | pages |\n|---|---:|\n")
        for name in ("extracted", "partial", "unextracted", "no-content"):
            out.write(f"| {name} | {verdicts.get(name, 0):,} |\n")
        out.write(f"| **total** | **{sum(verdicts.values()):,}** |\n\n")
        out.write("## Structure classes printed on the pages\n\n")
        out.write("| structure | occurrences |\n|---|---:|\n")
        for key in ("tables", "table_rows", "pre_blocks", "define_lines",
                    "typedef_lines", "prose_constants",
                    "candidate_tables", "decl_shaped_pre", "example_pre",
                    "requirements_none"):
            out.write(f"| {key} | {shape_totals[key]:,} |\n")
        out.write("\n## Gap flags (printed, nothing recorded)\n\n")
        out.write("| flag | pages | examples |\n|---|---:|---|\n")
        for flag, count in flag_counts.most_common():
            examples = "; ".join(f"`{p}`" for p in
                                 flag_pages.get(flag, [])[:args.examples])
            out.write(f"| {flag} | {count:,} | {examples} |\n")
        out.write("\n## Per tree\n\n")
        out.write("| tree | extracted | partial | unextracted | no-content "
                  "| total |\n|---|---:|---:|---:|---:|---:|\n")
        for book in sorted(per_book):
            c = per_book[book]
            total = sum(c.values())
            out.write(f"| {book} | {c.get('extracted', 0):,} "
                      f"| {c.get('partial', 0):,} "
                      f"| {c.get('unextracted', 0):,} "
                      f"| {c.get('no-content', 0):,} | {total:,} |\n")
    print(f"[audit] {out_path}")
    print(f"[audit] {summary}")
    for name in ("extracted", "partial", "unextracted", "no-content"):
        print(f"  {name:12} {verdicts.get(name, 0):,}")
    for flag, count in flag_counts.most_common():
        print(f"  {flag:22} {count:,}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
