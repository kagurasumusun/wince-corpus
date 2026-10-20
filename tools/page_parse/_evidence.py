"""Header/membership evidence stated in prose: group, name, family and exclusion statements, links, module tables."""

import re
from ._entities import (
    _title_core,
)
from ._text import (
    CELL,
    ROW,
    _LISTED_NAME,
    text_of,
)



# ---------------------------------------------- header evidence in prose
#
# A page often *states* where a name lives without a Requirements block:
# "The following constants give the ranges for the integral data types and
# are defined in Limits.h.", "Include Raserror.h for definitions of the RAS
# error codes.", "To use the predefined MFT_* type values, include the
# following statement in your .rc file: #include "Winuser.h"", "The cursor
# functions ... are not included in Winuser.h for the Handheld PC ...".
# These are header-membership statements of the page -- quoted, never
# inferred -- and they are the strongest evidence a constant can have
# short of its own Requirements block.  Everything here is read, nothing
# is guessed: a sentence that names no file yields nothing.

_HDR_FILE = r"([A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc))"

_LIB_FILE = r"([A-Za-z_][\w.+-]*\.(?:lib|dll))"


# "The following constants ... are defined in Limits.h."  The sentence
# both introduces the rows that follow and names their header.  The
# region it governs runs from just after the header token to the next
# such sentence -- the match ends AT the header on purpose: table cells
# follow immediately ("... in Float.h: Constant Value Description
# DBL_DIG ...") and any trailing run would swallow the table it governs.
_GROUP_STATEMENT = re.compile(
    r"[^.]{0,300}\bfollowing\b[^.]{0,220}?\b(?:defined|declared|specified)"
    r"\s+in\s+(?:the\s+)?"
    r"(?P<header>[A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc))\b",
    re.I)

_GROUP_FAMILY = re.compile(
    r"(?i)\b(?:constants?|values?|flags?|styles?|messages?|identifiers?|"
    r"macros?|symbols?|codes?|errors?|names?|elements?)\b")


# "FOO is defined in X.h" / "the FOO structure is declared in X.h" --
# one name, one header, same sentence.
_NAME_HEADER_STATEMENT = re.compile(
    r"\b(?P<name>[A-Z][A-Z0-9_]{2,})\b(?:\s+\w+){0,6}?\s+"
    r"(?:is|are|was|were)?\s*(?:also\s+)?"
    r"(?:defined|declared|specified)\s+in\s+(?:the\s+)?"
    r"(?P<header>[A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc))\b")


# "Include Raserror.h for definitions of the RAS error codes." -- a
# family statement: the header of the names the sentence names.
_INCLUDE_FOR_DEFS = re.compile(
    r"(?i)\binclude\s+(?P<header>[A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc))\b"
    r"[^.]{0,120}\bfor\s+(?:the\s+)?definitions?\s+of\s+(?:the\s+)?"
    r"(?P<family>[^.]{2,120}?)\s*[.]")


# "To use the predefined MFT_* type values, include ... #include "Winuser.h""
# -- the page names a name prefix and the header that defines it.  The
# bridge spans ".rc file:" (a period inside a file name), so it is any
# short run up to the quoted include.
_PREFIX_INCLUDE = re.compile(
    r"(?i)\bpredefined\s+(?P<prefix>[A-Z][A-Z0-9_]*)_\*\s*"
    r"(?:type\s+|state\s+|style\s+|option\s+)*"
    r"(?:values?|flags?|styles?|options?)"
    r".{0,200}?"
    r"#?\s*include\s+[<\"](?P<header>[A-Za-z_][\w.+-]*"
    r"\.(?:h|hpp|hh|hxx|idl|inc))[>\"]")


# "The cursor functions ... are not included in Winuser.h ..." -- a
# negative membership statement; kept as a quoted exclusion so no
# generator files the names into that header on family resemblance.
_NOT_IN_HEADER = re.compile(
    r"[^.]{0,200}\bnot\s+(?:be\s+)?included\s+in\s+(?:the\s+)?"
    r"(?P<header>[A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc))\b[^.]{0,140}",
    re.I)



def header_group_statements(fragment):
    """Header-per-family sentences and the fragment regions they govern.

    Returns one dict per sentence: ``header`` as printed, ``start`` /
    ``end`` (the region of ``fragment`` the sentence governs -- from just
    after the sentence to the next family-header sentence), and ``text``
    (the sentence, quoted).  A table inside the region belongs to that
    header; nothing is attached to a table outside every region.
    """
    text = text_of(fragment, keep_newlines=False)
    out = []
    for match in _GROUP_STATEMENT.finditer(text):
        sentence = re.sub(r"\s+", " ", match.group(0)).strip()
        if not _GROUP_FAMILY.search(sentence):
            continue
        out.append({"header": match.group("header"),
                    "start": match.end(), "end": len(text),
                    "text": sentence})
    for index, item in enumerate(out):
        if index + 1 < len(out):
            item["end"] = out[index + 1]["start"]
    return out



def attach_group_headers(fragment, rows):
    """Annotate constant rows with the header their family sentence names.

    Each row carries ``pos`` (its table's position in ``fragment``).  The
    governing sentence is the last family sentence printed before the
    table, and only when the table follows it closely (under 2,500
    characters of the flattened text): a table of a later section is not
    claimed by a sentence that governs an earlier one.  Rows get
    ``group_header`` (as printed) or nothing -- no header is inferred.
    """
    if not rows:
        return rows
    groups = header_group_statements(fragment)
    if not groups:
        return rows
    flat = text_of(fragment, keep_newlines=False)
    # Approximate the table's position in the flattened text by counting
    # the flattened length of the fragment prefix: text_of keeps document
    # order, so the mapping is monotone even if not exact.
    prefix_cache = {}

    def flat_len(upto):
        if upto not in prefix_cache:
            prefix_cache[upto] = len(text_of(fragment[:upto],
                                            keep_newlines=False))
        return prefix_cache[upto]

    for row in rows:
        pos = row.get("pos")
        if pos is None:
            continue
        target = flat_len(pos)
        match = None
        for group in groups:
            if group["start"] <= target and target - group["start"] < 2500:
                match = group
        if match:
            row["group_header"] = match["header"]
            row["group_evidence"] = match["text"][:240]
    return rows



def name_header_statements(fragment, plain=False):
    """Per-name header sentences: ``NAME ... defined in X.h``.

    The name has to be an identifier-shaped token and the sentence has to
    name a file.  The sentence is quoted as the evidence.  This is
    ``own-page`` material for the name it names -- the page states the
    header of that name.
    """
    text = statement_text(fragment, plain)
    out = []
    seen = set()
    for match in _NAME_HEADER_STATEMENT.finditer(text):
        name, header = match.group("name"), match.group("header")
        key = (name, header.lower())
        if key in seen:
            continue
        seen.add(key)
        out.append({"name": name, "header": header,
                    "text": re.sub(r"\s+", " ", match.group(0)).strip()})
    return out



def family_header_statements(fragment, plain=False):
    """Family sentences (``Include X.h for definitions of the ...``) and
    prefix sentences (``predefined MFT_* ... #include "X.h"``).

    Each row quotes the sentence.  The consumer attaches the header only
    to names the family/prefix actually covers -- never to a name that
    merely resembles it.
    """
    text = statement_text(fragment, plain)
    out = []
    for match in _INCLUDE_FOR_DEFS.finditer(text):
        family = re.sub(r"\s+", " ", match.group("family")).strip()
        out.append({"kind": "family", "family": family,
                    "header": match.group("header"),
                    "text": re.sub(r"\s+", " ", match.group(0)).strip()})
    for match in _PREFIX_INCLUDE.finditer(text):
        out.append({"kind": "prefix", "family": match.group("prefix") + "_*",
                    "prefix": match.group("prefix"),
                    "header": match.group("header"),
                    "text": re.sub(r"\s+", " ", match.group(0)).strip()})
    return out



def header_exclusion_statements(fragment, plain=False):
    """``not included in X.h`` sentences -- negative membership, quoted."""
    text = statement_text(fragment, plain)
    out = []
    for match in _NOT_IN_HEADER.finditer(text):
        out.append({"header": match.group("header"),
                    "text": re.sub(r"\s+", " ", match.group(0)).strip()})
    return out



# "To import these functions, you need to link to the fsdmgr.lib file."
# is already read by listed_function_requirements; this weaker sentence
# shape ("you must add Uuid.lib to your project") is kept only as a
# quoted module statement -- a name is never minted from it.
_LINK_STATEMENT = re.compile(
    r"[^.\n]{0,160}\b(?:must|need\s+to|have\s+to|required\s+to)\s+"
    r"(?:also\s+)?(?:link|add|include)[^.\n]{0,80}?\b"
    r"(?P<file>[A-Za-z_][\w.+-]*\.(?:lib|dll))\b[^.\n]{0,80}",
    re.I)



def statement_text(fragment, plain=False):
    """The text a quote-taking statement reader matches over.

    ``plain=True``: *fragment* is already the page's own text (the
    markdown reader's raw file) and is passed through untouched -- the
    ``kbgen check`` quote verification compares markdown records against the raw
    .md page, so ``#include <winsock2.h>`` must keep every character
    (running the HTML tag stripper over it would delete ``<winsock2.h>``
    and the quote would no longer be on the page).  An HTML fragment is
    read with its tags removed, the check's ground for .html pages.
    """
    if plain:
        return fragment
    return text_of(fragment, keep_newlines=False)



def link_statements(fragment, plain=False):
    """``you must link to X.lib`` sentences, quoted -- module evidence."""
    text = statement_text(fragment, plain)
    out = []
    seen = set()
    for match in _LINK_STATEMENT.finditer(text):
        sentence = re.sub(r"\s+", " ", match.group(0)).strip()
        key = (match.group("file").lower(), sentence)
        if key in seen:
            continue
        seen.add(key)
        out.append({"file": match.group("file"), "text": sentence})
        if len(out) >= 8:
            break
    return out



_MODULE_TITLE = re.compile(
    r"(?i)^([A-Za-z_][A-Za-z0-9_]*)\s+(?:Module|Components)$")

# ``The coredll module contains the following components.`` and
# ``The msmqrt module includes functions for application developers, which
# are defined in the Mq.h header file.``
_MODULE_COMPONENTS = re.compile(
    r"(?i)the\s+([A-Za-z_][A-Za-z0-9_]*)\s+module\s+contains\s+the\s+"
    r"following\s+components")

_MODULE_FUNCTIONS = re.compile(
    r"(?i)the\s+([A-Za-z_][A-Za-z0-9_]*)\s+module\s+(?:contains|includes)\s+"
    r"(?:the\s+following\s+)?functions[^.]{0,120}?defined\s+in\s+(?:the\s+)?"
    r"([A-Za-z0-9_]+\.h)\b")

_MODULE_IMPORT_LIB = re.compile(
    r"(?i)to\s+import\s+(?:this|these)\s+functions?\s*,\s*you\s+"
    r"(?:must|need\s+to)\s+link\s+to\s+the\s+([A-Za-z0-9_]+\.lib)\b")



def module_facts(fragment, page_title=None):
    """What a Windows CE *module* page states about the module's build.

    A CE module page is the one place the documents describe the binary
    rather than the API: ``The coredll module contains the following
    components`` with a ``Component | Description | Notes | Library`` table,
    and ``defined in the Mq.h header file`` / ``link to the Msmqapix.lib
    file`` for the module itself.  Each row is kept as printed; the ``Notes``
    cell (``Exposes no public functions.``, ``Required``) is the page's own
    words and is not interpreted into a flag.  A module is never turned into
    a DLL name: the pages name ``coredll`` the module, and
    ``Coredll.dll`` only where they print it.
    """
    out = []
    plain = text_of(fragment, keep_newlines=False)
    title_module = None
    if page_title:
        match = _MODULE_TITLE.match(_title_core(page_title))
        if match:
            title_module = match.group(1)

    def add(record):
        if record not in out:
            out.append(record)

    for match in _MODULE_FUNCTIONS.finditer(plain):
        add({"module": match.group(1), "component": "", "field": "header",
             "value": match.group(2),
             "evidence": re.sub(r"\s+", " ", match.group(0)).strip()})
        tail = plain[match.end():match.end() + 400]
        lib = _MODULE_IMPORT_LIB.search(tail)
        if lib:
            add({"module": match.group(1), "component": "", "field": "library",
                 "value": lib.group(1),
                 "evidence": re.sub(r"\s+", " ", lib.group(0)).strip()})

    for match in _MODULE_COMPONENTS.finditer(plain):
        module = match.group(1)
        index = fragment.lower().find("following components")
        if index < 0:
            continue
        rows = _component_rows(fragment, index)
        for component, library, notes, quote in rows:
            add({"module": module, "component": component,
                 "field": "library" if library else "component",
                 "value": library or component, "notes": notes,
                 "evidence": quote})
    # A page titled ``winsock Module`` whose sentence names no module still
    # states the module: the title does.  Only the file facts are kept, and
    # only when the sentence that states them names no other module.
    if title_module and not any(r["module"] for r in out):
        for pattern, field in ((_MODULE_IMPORT_LIB, "library"),):
            found = pattern.search(plain)
            if found:
                add({"module": title_module, "component": "", "field": field,
                     "value": found.group(1),
                     "evidence": re.sub(r"\s+", " ", found.group(0)).strip()})
    for record in out:
        record.setdefault("notes", "")
    return out



def _component_rows(fragment, index):
    """``Component | Description | Notes | Library`` rows of the next table."""
    rest = fragment[index:index + 30000]
    table = re.search(r"(?is)<table\b[^>]*>(.*?)</table>", rest)
    if not table:
        return []
    rows = ROW.findall(table.group(1))
    if not rows:
        return []
    header = [re.sub(r"\s+", " ", text_of(cell, keep_newlines=False))
              .strip().lower() for cell in CELL.findall(rows[0])]
    if "component" not in header:
        return []
    file_column = None
    for name in ("library", "import file", "import library", "library file"):
        if name in header:
            file_column = header.index(name)
            break
    notes_column = header.index("notes") if "notes" in header else None
    component_column = header.index("component")
    out = []
    for body in rows[1:]:
        cells = [re.sub(r"\s+", " ", text_of(cell, keep_newlines=False)).strip()
                 for cell in CELL.findall(body)]
        if len(cells) <= component_column:
            continue
        # The quote is the row as the page prints it, so it stays a
        # verbatim substring of the page (a joined-with-bars string would
        # not be).
        quote = re.sub(r"\s+", " ", text_of(body, keep_newlines=False)).strip()
        component = cells[component_column]
        # The CE 3.0 table prints the link text twice in one cell
        # (``Accel_c Accel_c``).  One repeated identifier is that
        # identifier; two different words are not a component name.
        words = component.split()
        if len(words) == 2 and words[0] == words[1]:
            component = words[0]
        if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", component):
            continue
        library = ""
        if file_column is not None and file_column < len(cells):
            value = cells[file_column]
            if re.fullmatch(r"(?i)[A-Za-z_][\w.+-]*\.lib", value):
                library = value
        notes = ""
        if notes_column is not None and notes_column < len(cells):
            notes = cells[notes_column]
        out.append((component, library, notes, quote))
    return out



def _names_in_next_table(fragment, start, limit=12000):
    """Identifier cells of the first table after ``start``, before See Also."""
    rest = fragment[start:start + limit]
    see = rest.lower().find("see also")
    chunk = rest[:see] if see >= 0 else rest
    table = re.search(r"(?is)<table\b[^>]*>(.*?)</table>", chunk)
    if not table:
        return []
    names = []
    for row in ROW.finditer(table.group(1)):
        for cell in CELL.findall(row.group(1)):
            name = text_of(cell, keep_newlines=False).strip()
            if _LISTED_NAME.match(name) and name.lower() not in (
                    "function", "functions", "description"):
                names.append(name)
    return names
