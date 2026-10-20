"""Constant tables and #define/enum/prose constant rows, listed type rows, export ordinal and offset tables."""

import collections
import re
from ._code import (
    CONSTANT_DECIMAL_COLUMNS,
    CONSTANT_HEX_COLUMNS,
    CONSTANT_NAME_COLUMNS,
    CONSTANT_VALUE_COLUMNS,
    CORRESPONDENCE_VALUE_COLUMNS,
    HTML_TABLE,
    NAME_COLUMN,
    OFFSET_COLUMN,
    SIZE_COLUMN,
    SIZE_VALUE,
    _CORRESPONDENCE_LABEL,
    _calling_convention,
    _cell_int,
    _kind_of,
    _members,
    _spacing,
    abi_flags,
    declared_names,
)
from ._declarations import (
    declarations,
)
from ._requirements import (
    requirements,
)
from ._text import (
    CELL,
    ROW,
    TABLE,
    text_of,
)



def _is_correspondence_label(label):
    lab = re.sub(r"\s+", " ", (label or "").strip().rstrip(":").lower())
    if lab in CORRESPONDENCE_VALUE_COLUMNS:
        return True
    return bool(_CORRESPONDENCE_LABEL.search(lab))



def _correspondence_indices(labels):
    return {i for i, lab in enumerate(labels) if _is_correspondence_label(lab)}

CONSTANT_IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")

# A printed number is more than ``0x..`` or ``digits``: the Data Type
# Constants page prints ``-32768`` (typed with a dash that is not
# hyphen-minus), ``2.2204460492503131e-016`` and ``255 (0xff)``.  The cell
# is read as printed; every dash-like sign mark is accepted, and a C number
# suffix may trail.
_NUM_CORE = (r"(?:0[xX][0-9A-Fa-f]+|\d+\.\d*(?:[eE][+-]?\d+)?"
             r"|\d+[eE][+-]?\d+|\.\d+(?:[eE][+-]?\d+)?|\d+)")

_DASHS = "[-\u2010-\u2015\u2212]"

_NUM = "(" + _DASHS + "?" + _NUM_CORE + "[uUlLfF]*)"

_NUM_TOKEN = re.compile("^" + _NUM + "$")

_NUM_PAIR = re.compile(
    "^\(?\s*" + _NUM + "\s*\(\s*" + _NUM + "\s*\)\s*\)?$")



def number_cell(cell):
    """Read one printed number cell -> (value, paired) or (None, None).

    ``value`` is the number as printed (sign marks normalised to ``-`` so
    the text stays valid in a generated ``#define``); ``row`` evidence
    keeps the original cell.  A compound ``255 (0xff)`` prints one number
    two ways: the hexadecimal becomes ``value`` (hexadecimal preferred,
    like the columns rule) and the decimal becomes ``paired`` -- both are
    printed beside each other, so both are read.
    """
    text = re.sub(r"\s+", " ", (cell or "").replace("\xa0", " ")).strip()
    for dash in "\u2010\u2011\u2012\u2013\u2014\u2015\u2212":
        text = text.replace(dash, "-")
    if not text:
        return None, None
    pair = _NUM_PAIR.match(text)
    if pair:
        first, second = pair.group(1), pair.group(2)
        if first.lower().startswith(("0x", "-0x")):
            return first, second
        if second.lower().startswith(("0x", "-0x")):
            return second, first
        return first, second
    token = _NUM_TOKEN.match(text)
    if token:
        return token.group(1), None
    return None, None



def _column(labels, names):
    for index, label in enumerate(labels):
        if label in names:
            return index
    return None



def constant_tables(fragment, raw_row=False):
    """Rows of a name/value table a page prints, quoted as printed.

    One dict per row that states both: ``name`` (the identifier cell),
    ``value`` (the number cell, hexadecimal preferred when the page prints
    one), ``decimal`` (only when a decimal column prints a decimal), ``table``
    and ``row`` (the evidence a checker re-reads).
    """
    out = []
    for table in HTML_TABLE.finditer(fragment):
        rows = ROW.findall(table.group(1))
        if len(rows) < 2:
            continue
        headers = [text_of(cell, keep_newlines=False).strip()
                   for cell in CELL.findall(rows[0])]
        labels = [re.sub(r"\s+", " ", header).strip().rstrip(":").lower()
                  for header in headers]
        if any(OFFSET_COLUMN.search(label) for label in labels):
            continue
        name_i = _column(labels, CONSTANT_NAME_COLUMNS)
        hex_i = _column(labels, CONSTANT_HEX_COLUMNS)
        dec_i = _column(labels, CONSTANT_DECIMAL_COLUMNS)
        val_i = _column(labels, CONSTANT_VALUE_COLUMNS)
        corr_is = _correspondence_indices(labels)
        # LOGFONT weight tables print the constant in the column headed
        # ``Value`` and the number in the column headed ``Weight``
        # (``FW_THIN | 100``).  ``Value`` is not a name column anywhere else;
        # this pair is the only table in the corpus that uses ``Weight``.
        if name_i is None and "value" in labels and "weight" in labels:
            name_i = labels.index("value")
            val_i = labels.index("weight")
            hex_i = dec_i = None
        if hex_i in corr_is:
            hex_i = None
        if val_i in corr_is:
            val_i = None
        if dec_i in corr_is:
            dec_i = None
        value_is = [i for i in (hex_i, val_i, dec_i) if i is not None]
        header = " ".join(headers)
        body = list(ROW.finditer(table.group(1)))[1:]
        body_cells = [[text_of(cell, keep_newlines=False).strip()
                       for cell in CELL.findall(row.group(1))]
                      for row in body]
        if name_i is None or not value_is or name_i in value_is:
            # The headers do not name the columns ("Level description",
            # "Raster operation", a value column ahead of the name).  Fall
            # back to the CELLS: a name column is one whose cells are
            # constant identifiers; a value column is one whose cells are
            # all printed values (number or expression).  A table read
            # this way is still only ever read as printed.
            def ident_column(i):
                seen = 0
                for cells in body_cells:
                    if i >= len(cells):
                        return False
                    text = cells[i]
                    if not text:
                        continue
                    if not CONSTANT_IDENT.match(text) or \
                            not _constant_name(text) or \
                            (text.upper() != text and "_" not in text):
                        return False
                    seen += 1
                return seen >= 2

            def value_column(i):
                if i in corr_is or (i < len(labels)
                                    and _is_correspondence_label(labels[i])):
                    return False
                seen = 0
                for cells in body_cells:
                    if i >= len(cells):
                        return False
                    text = cells[i]
                    if not text:
                        continue
                    if not (number_cell(text)[0] or expression_cell(text)):
                        return False
                    seen += 1
                return seen >= 2

            width = max((len(c) for c in body_cells), default=0)
            if name_i is None:
                # A column LABELED as a value ("Value | Bitmask |
                # Description") may hold the constant names while an
                # unlisted label holds the numbers -- the cells
                # decide: an identifier column under a value label is
                # the name column, and the number column is then
                # found by cell shape below.  (The "Value"/"Weight"
                # LOGFONT pair above is the same shape, read earlier.)
                mislabeled = [i for i in value_is
                              if i not in corr_is and ident_column(i)]
                if mislabeled:
                    name_i = mislabeled[0]
                    value_is = []
                    hex_i = val_i = dec_i = None
            if name_i is None or name_i in value_is or \
                    (name_i is not None and not ident_column(name_i)):
                # also when a HEADER match points at a non-name column
                # ("Error code" holding 0xC00CE508L beside "Error string"
                # holding MSG_E_BADCHARDATA)
                name_i = next((i for i in range(width)
                               if i not in value_is and ident_column(i)),
                              None)
            if not value_is or name_i in value_is:
                value_is = [i for i in range(width)
                            if i != name_i and value_column(i)]
                hex_i = value_is[0] if value_is else None
                val_i = (value_is[1] if len(value_is) > 1
                         else (value_is[0] if value_is else None))
                dec_i = (value_is[2] if len(value_is) > 2 else None)
        if name_i is None or not value_is or name_i in value_is:
            continue
        for row_match, cells in zip(body, body_cells):
            row = row_match.group(1)
            row_quote = _raw_row_text(row_match.group(0))
            if len(cells) <= name_i or not CONSTANT_IDENT.match(cells[name_i]):
                continue

            def number_at(index):
                if index is None or index >= len(cells):
                    return None, None
                return number_cell(cells[index])

            value = None
            value_from = None
            paired = None
            for index in (hex_i, val_i, dec_i):
                got, pair = number_at(index)
                if got:
                    value = got
                    paired = pair
                    value_from = index
                    break
            if not value:
                # printed expression values (``RASBASE+1``): quoted as
                # printed, never computed (values: never derived)
                for index in (val_i, hex_i, dec_i):
                    if index is None or index >= len(cells):
                        continue
                    got = expression_cell(cells[index])
                    if got:
                        value = got
                        value_from = index
                        break
            if not value:
                continue
            # A cell from a column the table labels hex ("Value (Hex)")
            # prints hexadecimal digits ("08", "4F", "20").  The row is
            # quoted as printed; the value recorded is the C literal of
            # those printed digits (0x08) so the surface compiles to the
            # number the page states.  Pure digits only -- an expression
            # cell is left exactly as printed.
            if value_from == hex_i and \
                    re.fullmatch(r"-?[0-9A-Fa-f]{1,16}", value) and \
                    not value.lower().lstrip("-").startswith("0x"):
                sign = "-" if value.startswith("-") else ""
                value = sign + "0x" + (value[1:] if sign else value)
            # A decimal is kept only when the page prints one *beside* the
            # value (a separate decimal column, or the second half of a
            # compound ``255 (0xff)`` cell), never by converting a
            # hexadecimal and never by repeating the only number printed.
            decimal = number_at(dec_i)[0]
            if not decimal or decimal.lower().startswith("0x") \
                    or value_from == dec_i:
                decimal = paired
            elif paired:
                decimal = paired
            out.append({
                "name": cells[name_i],
                "value": value,
                "decimal": decimal,
                "table": header,
                "origin": "table",
                "pos": table.start(),
                "row": (row_quote if raw_row else " ".join(cells)),
            })
        # one name cannot stand for two different values in one table
        # (a DIP-switch chart whose columns read Setting|Position is not
        # a constant table)
        table_rows = [row for row in out if row["table"] == header and
                      row.get("origin") == "table" and
                      row.get("pos") == table.start()]
        counts = collections.defaultdict(set)
        for row in table_rows:
            counts[row["name"]].add(row["value"])
        out = [row for row in out if row not in table_rows or
               len(counts[row["name"]]) == 1]
    out.extend(_constants_in_cells(fragment, out, raw_row=raw_row))
    return out



# The reference pages of the message surface print the DEFINITION as the
# syntax block itself: ``#define WM_CREATE 0x0001`` (winmsg) or
# ``#define EM_... (WM_USER + 255)``.  The page PRINTS the #define -- the
# line is not derived; it is quoted.  The value is taken exactly as
# printed (an expression stays an expression: values are never computed).
# not line-anchored: a table cell can quote the definition inline
# (``<code>#define TBSTYLE_EX_VERTICAL 0x00000004</code>`` in a note)
DEFINE_LINE_RE = re.compile(
    r"#\s*define\s+([A-Z][A-Z0-9_]{1,60})\s+(.+)")

_ANY_TAG = re.compile(r"<[^>]+>")

_VALUE_TOKEN = re.compile(
    r"^(?:0x[0-9A-Fa-f]{1,16}[uUlL]{0,3}|-?\d+[uUlL]{0,3}"
    r"|[A-Z][A-Z0-9_]{1,60}(?:\s*[+\-]\s*\d+)?"
    r"|\([A-Z][A-Z0-9_]{1,60}(?:\s*[+\-]\s*\d+)?\))")



_PRE_BLOCK = re.compile(r"(?is)<pre[^>]*>.*?</pre>")

_FENCE_BLOCK = re.compile(r"(?ms)^```.*?^```")



_DEFINE_NUMERIC = re.compile(
    r"^(0[xX][0-9A-Fa-f]+|0[bB][01]+|-?\d+(?:\.\d*)?(?:[eE][+-]?\d+)?"
    r"|-?\d+[eE][+-]?\d+)[uUlLfF]*$")

_DEFINE_ALIAS = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")

# Example code never yields constants: a define line announced by "the
# following code fragment / sample code ..." is an example, not a spec.
_EXAMPLE_LOOKBEHIND = re.compile(
    r"(?i)(code fragment|code sample|sample code|following sample"
    r"|example code|example application)\W{0,40}[^#]{0,220}$")



def define_line_constants(text, quote_stripped=False):
    """``#define NAME value`` lines a page prints OUTSIDE code blocks ->
    constant rows.

    ``quote_stripped``: the row quote is the tag-free line -- the .html
    reader's ground (``kbgen check``'s re-extraction compares against
    ``text_of(article_html())``).  The markdown reader quotes the raw
    line (its page text is the raw markdown).

    ``<pre>`` and fenced code are the syntax/example readers' ground
    (syntax_constant_rows keeps the no-example-code rule); this reader
    covers the definitions a page prints inline -- a table note quoting
    ``#define TBSTYLE_EX_VERTICAL 0x00000004`` for a style the header
    does not define.  The trailing C comment is not part of the value;
    the value is otherwise quoted as printed.  A line whose right side is
    not a number, a printed expression or a single identifier (an alias
    another page defines) is skipped -- prose macro bodies are not
    constants."""
    out = []
    if not text:
        return out
    text = _PRE_BLOCK.sub(" ", text or "")
    text = _FENCE_BLOCK.sub(" ", text)
    for line in text.splitlines():
        raw = line.strip()
        clean = _ANY_TAG.sub(" ", line)
        for match in DEFINE_LINE_RE.finditer(clean):
            name, rest = match.group(1), match.group(2)
            value = re.split(r"//|/\*", rest, 1)[0].strip()
            value = re.sub(r"\s+", " ", value).strip()
            # the docstring contract: the value head is a number, a
            # printed expression or a single identifier (an alias
            # another page defines) -- nothing else.  Kept as printed,
            # never truncated at a token boundary: TEXT("X") is a prose
            # macro body, not a constant; RASBASE+127 is kept whole.
            # Table-row residue after the value ("0x4 | ") is not part
            # of the head.
            ctor = re.match(
                r"^([A-Z][A-Z0-9_]{2,60})\s*\(\s*(0[xX][0-9A-Fa-f]+|-?\d+)\s*\)\s*;?$",
                value)
            if ctor:
                head = re.sub(r"\s+", "", value).rstrip(";")
            else:
                if re.match(r"^[A-Za-z_][A-Za-z0-9_]*\s*\(", value):
                    continue
                head = re.split(r"[\s;|]", value, 1)[0].strip()
                if not (_DEFINE_NUMERIC.match(head) or _EXPR_VALUE.match(head)
                        or _DEFINE_ALIAS.match(head)):
                    continue
            if _EXAMPLE_LOOKBEHIND.search(clean[:match.start()]):
                continue
            out.append({
                "name": name,
                "value": head,
                "decimal": None,
                "table": "printed #define",
                "origin": "define",
                "row": (clean.strip()[:240] if quote_stripped
                        else raw[:240])
            })
    return out



# A page also prints a constant as one cell, ``NAME = 0x0001`` or
# ``NAME (0x0001)``, instead of a name column and a value column.  The cell
# has to be that and nothing else: a sentence that mentions a number is not
# split apart.  The name is the all-caps identifier the page prints.  A
# one-letter cell (``A=0``, a setting, not a constant) is left out; a name
# with an underscore or at least four characters is kept (``S_OK``, ``TRUE``).
# A printed value can be an EXPRESSION the page prints instead of a
# number: the RAS error table prints ``RASBASE+1`` under "Code".  The
# expression is quoted exactly as printed -- never computed (values:
# never derived).  A C header defines the name exactly this way.
_EXPR_VALUE = re.compile(r"^[A-Z][A-Z0-9_]{1,40}\s*[+-]\s*\d{1,6}$")



def expression_cell(text):
    """The cell is one printed expression value (``RASBASE+1``) -> the
    text as printed.  Anything else -> None."""
    text = (text or "").strip()
    if _EXPR_VALUE.match(text):
        return re.sub(r"\s+", "", text)
    return None



_CELL_EQ = re.compile(
    r"^([A-Z][A-Z0-9_]*)\s*=\s*(0x[0-9A-Fa-f]+|-?\d+"
    r"|[A-Z][A-Z0-9_]{1,40}\s*[+-]\s*\d{1,6})$")

_CELL_PAR = re.compile(
    r"^([A-Z][A-Z0-9_]*)\s*\(\s*(0x[0-9A-Fa-f]+|-?\d+"
    r"|[A-Z][A-Z0-9_]{1,40}\s*[+-]\s*\d{1,6})\s*\)$")

# The sdk-api style prints the pair in ONE cell of the "Value" column:
# ``KLF_ACTIVATE 0x00000001``.  Same honesty: the whole cell is the
# name and one number and nothing else.
_CELL_NAME_VALUE = re.compile(
    r"^([A-Z][A-Z0-9_]*)\s+((?:0x[0-9A-Fa-f]+|-?\d+)\s*[uUlL]*"
    r"|[A-Z][A-Z0-9_]{1,40}\s*[+-]\s*\d{1,6})$")



def _constant_name(name):
    return "_" in name or len(name) >= 4



def _raw_row_text(raw):
    """One whitespace-normalised line of the row as the page printed it
    (markup included): the quote a markdown page can carry verbatim."""
    return re.sub(r"\s+", " ", raw).strip()



def _constants_in_cells(fragment, already, raw_row=False):
    seen = {(item["name"], item["value"]) for item in already}
    out = []
    for table in HTML_TABLE.finditer(fragment):
        rows = list(ROW.finditer(table.group(1)))
        if not rows:
            continue
        headers = [text_of(cell, keep_newlines=False).strip()
                   for cell in CELL.findall(rows[0].group(1))]
        labels = [header.lower() for header in headers]
        if any(OFFSET_COLUMN.search(label) for label in labels):
            continue
        header = " ".join(headers)
        for row_match in rows:
            row = row_match.group(1)
            cells = [text_of(cell, keep_newlines=False).strip()
                     for cell in CELL.findall(row)]
            for cell in cells:
                match = (_CELL_EQ.match(cell) or _CELL_PAR.match(cell)
                         or _CELL_NAME_VALUE.match(cell))
                if not match or not _constant_name(match.group(1)):
                    continue
                name, value = match.group(1), match.group(2)
                if (name, value) in seen:
                    continue
                seen.add((name, value))
                out.append({
                    "name": name,
                    "value": value,
                    "decimal": None,
                    "table": header,
                    "origin": "cell",
                    # the evidence is the row as the page printed it; on
                    # a markdown page that includes its markup, which is
                    # exactly what the page carries (the verbatim-quote rule,
                    # docs/kb-design.ja.md)
                    "row": (_raw_row_text(row_match.group(0)) if raw_row
                            else cell),
                })
    return out



# ------------------------------------------------------------------ #
# Constant name lists: rows that state a constant name and its        #
# meaning but print no number.                                        #
# ------------------------------------------------------------------ #

# A page also documents constants it does NOT number: the Control Styles
# mother table (twenty `X styles | Description` tables of BS_/ES_/SS_/...
# names), the `Value | Description` flag tables whose "Value" column
# holds symbolic names (MF_BYCOMMAND, KLF_ACTIVATE), and their kin.  The
# row states the name and what it means but prints no number, so the
# numbered reader rightly passes it by -- yet the name is a documented
# constant and must not be lost ("情報の欠落").  Each row is filed as its
# own tuple (name, no value, the row's own text), never merged into a
# page blob.
#
# Shape gates (a type table must not be stolen by this reader): the
# header must NOT use a type-name label (listed_type_rows owns those),
# and the name cell must look like a constant -- an all-caps identifier
# with an underscore (BS_3STATE, MF_BYCOMMAND, WH_CALLWNDPROC).
CONSTANT_NAME_CELL = re.compile(r"^[A-Z][A-Z0-9_]*_[A-Z0-9_]+$")

# Tables headed "Value | Description", "Error code | Description" and kin
# carry the identifier itself in the first cell: PATCOPY, BLACKNESS,
# S_OK, WSANOTINITIALISED... the underscore form above rejects the
# unhyphenated spellings; this tier takes all-caps identifiers, and the
# event tier takes positioned event/message/command names (onclick...).
UPPER_NAME_CELL = re.compile(r"^[A-Z][A-Z0-9_]+$")

EVENT_NAME_CELL = re.compile(r"^[A-Za-z_][A-Za-z0-9_]+$")

EVENT_LABELS = {"event", "events", "message", "messages", "command", "commands",
                "notification", "notifications", "element", "elements"}



def _const_name_cell_ok(name, name_label):
    if TYPEISH_NAME.match(name):
        return False
    return bool(CONSTANT_NAME_CELL.match(name) or UPPER_NAME_CELL.match(name)
                or (name_label in EVENT_LABELS and EVENT_NAME_CELL.match(name)))

# A base type is not a constant: LONG_PTR, DWORD_PTR, SIZE_T and kin are
# documented in type tables this reader must never claim.  (The type
# tables this reader is walled off from via TYPE_NAME_COLUMNS carry the
# obvious spellings; this blocklist catches the stragglers.)
TYPEISH_NAME = re.compile(
    r"^(LONG|ULONG|DWORD|WORD|SHORT|USHORT|INT|UINT|U?INT8|U?INT16|"
    r"U?INT32|U?INT64|CHAR|UCHAR|WCHAR|TCHAR|BYTE|BOOL|BOOLEAN|FLOAT|"
       r"DOUBLE|SIZE|SSIZE|HANDLE|SOCKET|HRESULT|LRESULT|WPARAM|LPARAM|"
    r"FILETIME|SYSTEMTIME|LARGE_INTEGER|ULARGE_INTEGER|POINTER)_"
    r"|_(PTR|T|TA|TW)$")

_DESC_LABELS = {"description", "meaning", "definition", "remarks",
                "comments", "comment", "notes"}

_CONST_LIST_LABELS = {
    "value", "flag", "flags", "constant", "constants", "style", "styles",
    "identifier", "code", "command", "message", "event", "notification",
    "symbol", "name", "option", "options", "attribute", "attributes",
    "id", "constant name", "flag name", "style name",
    # "Element | Description" heads both structure member lists (the
    # CONSTANT_NAME_CELL gate below keeps those out) and flag/constant
    # name lists; the name is a documented identifier either way.
    "element", "elements",
    "error code", "error codes", "return code", "return codes",
    "status code", "status codes", "code name",
}



def constant_name_rows(fragment, raw_row=False):
    """One dict per documented-but-unnumbered constant row of the page.

    ``name`` (the identifier cell), ``value`` None (the page prints no
    number -- nothing is ever computed), ``table`` (the header row) and
    ``row`` (the evidence).
    """
    out = []
    header = None
    header_name_i = 0
    header_name_label = ""
    for match in ROW.finditer(fragment):
        cells = [text_of(cell, keep_newlines=False).strip()
                 for cell in CELL.findall(match.group(1))]
        if not cells:
            continue
        labels = [re.sub(r"\s+", " ", c).strip().rstrip(":").lower()
                  for c in cells]
        if any(OFFSET_COLUMN.search(label) for label in labels):
            header = None
            continue
        # a header row: one column names constants (or styles/flags), one
        # is a description -- and no type-name label (those are type rows)
        desc_i = [i for i, label in enumerate(labels)
                  if label in _DESC_LABELS]
        name_i = [i for i, label in enumerate(labels)
                  if (label in _CONST_LIST_LABELS or
                      label.endswith(("style", "styles", "flags",
                                      "constants")))
                  and i not in desc_i]
        if name_i and len(labels) >= 2 and \
                not any(label in TYPE_NAME_COLUMNS for label in labels):
            header = " ".join(cells)
            header_name_i = name_i[0]
            header_name_label = labels[name_i[0]]
            continue
        if header is None:
            continue
        if header_name_i >= len(cells):
            continue
        name = cells[header_name_i]
        if not _const_name_cell_ok(name, header_name_label):
            continue
        out.append({
            "name": name,
            "value": None,
            "decimal": None,
            "table": header,
            "origin": "table-name-list",
            "row": (_raw_row_text(match.group(0)) if raw_row
                    else " ".join(cells)),
        })
    return out



# Markdown pipe tables (the MicrosoftDocs/win32 guide style): the readers
# below walk them as rows of cells the way the HTML readers do.  A cell may
# carry inline HTML (`<span id="CBS_AUTOHSCROLL"></span><dl> <dt>**CBS\_
# AUTOHSCROLL**</dt> </dl>`) -- the name is read from the cleaned text
# (`CBS_AUTOHSCROLL`), and the row is quoted as the raw line the page
# printed.  Bold markers and backslash escapes are presentation only and
# are removed before a name or number is matched, never in the quote.
_MD_PIPE_ROW = re.compile(r"^[ \t]*\|.*\|[ \t]*$")

_MD_PIPE_RULE = re.compile(r"^[ \t]*\|[ \t:|-]+\|[ \t]*$")

_MD_BOLD = re.compile(r"\*\*([^*]+)\*\*")

_MD_CODE = re.compile(r"`([^`]*)`")



def _md_cell_clean(cell):
    """One pipe-table cell as text: tags and emphasis off, escapes open."""
    text = text_of(cell, keep_newlines=False)
    text = _MD_BOLD.sub(r"\1", text)
    text = _MD_CODE.sub(r"\1", text)
    return text.replace("\\_", "_").replace("\\*", "*").strip()



def _md_pipe_cells(line):
    inner = line.strip()
    if inner.startswith("|"):
        inner = inner[1:]
    if inner.endswith("|"):
        inner = inner[:-1]
    return [_md_cell_clean(c) for c in inner.split("|")]



def _md_pipe_tables(text):
    """Yield (header_line, header_cells, [(raw_line, cells), ...])."""
    lines = text.splitlines()
    i = 0
    while i < len(lines) - 1:
        if not _MD_PIPE_ROW.match(lines[i]) or \
                not _MD_PIPE_RULE.match(lines[i + 1]):
            i += 1
            continue
        header_line = lines[i]
        header_cells = _md_pipe_cells(header_line)
        i += 2
        rows = []
        while i < len(lines) and _MD_PIPE_ROW.match(lines[i]):
            rows.append((lines[i], _md_pipe_cells(lines[i])))
            i += 1
        yield header_line, header_cells, rows



def constant_tables_text(text):
    """The numbered-constant readers for a markdown page: the embedded
    HTML tables (the sdk-api style, fence stripped) AND the markdown pipe
    tables (the guide style).  Pipe rows are quoted as the raw line the
    page printed."""
    body = _MD_FENCE.sub("", text)
    out = constant_tables(body, raw_row=True)
    seen = {(item["name"], item["value"]) for item in out}
    for _header_line, header_cells, rows in _md_pipe_tables(text):
        labels = [re.sub(r"\s+", " ", c).strip().rstrip(":").lower()
                  for c in header_cells]
        if any(OFFSET_COLUMN.search(label) for label in labels):
            continue
        name_i = _column(labels, CONSTANT_NAME_COLUMNS)
        hex_i = _column(labels, CONSTANT_HEX_COLUMNS)
        dec_i = _column(labels, CONSTANT_DECIMAL_COLUMNS)
        val_i = _column(labels, CONSTANT_VALUE_COLUMNS)
        corr_is = _correspondence_indices(labels)
        if name_i is None and "value" in labels and "weight" in labels:
            name_i = labels.index("value")
            val_i = labels.index("weight")
            hex_i = dec_i = None
        if hex_i in corr_is:
            hex_i = None
        if val_i in corr_is:
            val_i = None
        if dec_i in corr_is:
            dec_i = None
        header = " ".join(header_cells)
        for raw, cells in rows:
            row_quote = re.sub(r"\s+", " ", raw).strip()
            # the pair in one cell: `**WS\_BORDER** 0x00800000L`
            for cell in cells:
                match = (_CELL_EQ.match(cell) or _CELL_PAR.match(cell)
                         or _CELL_NAME_VALUE.match(cell))
                if not match or not _constant_name(match.group(1)):
                    continue
                key = (match.group(1), match.group(2))
                if key in seen:
                    continue
                seen.add(key)
                out.append({
                    "name": match.group(1),
                    "value": match.group(2),
                    "decimal": None,
                    "table": header,
                    "origin": "cell",
                    "row": row_quote,
                })
            value_is = [i for i in (hex_i, val_i, dec_i) if i is not None]
            if name_i is None or not value_is or name_i in value_is:
                continue
            if len(cells) <= name_i or not CONSTANT_IDENT.match(cells[name_i]):
                continue

            def number_at(index):
                if index is None or index >= len(cells):
                    return None, None
                return number_cell(cells[index])

            value = paired = value_from = None
            for index in (hex_i, val_i, dec_i):
                got, pair = number_at(index)
                if got:
                    value = got
                    paired = pair
                    value_from = index
                    break
            if not value:
                # printed expression values (``RASBASE+1``) stay printed
                for index in (val_i, hex_i, dec_i):
                    if index is None or index >= len(cells):
                        continue
                    got = expression_cell(cells[index])
                    if got:
                        value = got
                        value_from = index
                        break
            if not value:
                continue
            # hex-labelled column: the C literal of the printed digits
            if value_from == hex_i and \
                    re.fullmatch(r"-?[0-9A-Fa-f]{1,16}", value) and \
                    not value.lower().lstrip("-").startswith("0x"):
                sign = "-" if value.startswith("-") else ""
                value = sign + "0x" + (value[1:] if sign else value)
            decimal = number_at(dec_i)[0]
            if not decimal or decimal.lower().startswith("0x") \
                    or value_from == dec_i:
                decimal = paired
            elif paired:
                decimal = paired
            key = (cells[name_i], value)
            if key in seen:
                continue
            seen.add(key)
            out.append({
                "name": cells[name_i],
                "value": value,
                "decimal": decimal,
                "table": header,
                "origin": "table",
                "row": row_quote,
            })
    # one name cannot stand for two different values in one table
    counts = collections.defaultdict(lambda: collections.defaultdict(set))
    for row in out:
        counts[(row.get("table"), row["name"])][row["value"]].add(id(row))
    drop = {key for key, values in counts.items() if len(values) > 1}
    out = [row for row in out
           if (row.get("table"), row["name"]) not in drop]
    return out



def constant_name_rows_text(text):
    """The name-list reader for a markdown page: the embedded HTML tables
    AND the markdown pipe tables.  Rows are quoted as printed (markup
    included) -- the page carries them verbatim."""
    body = _MD_FENCE.sub("", text)
    out = constant_name_rows(body, raw_row=True)
    seen = {item["name"] for item in out}
    for _header_line, header_cells, rows in _md_pipe_tables(text):
        labels = [re.sub(r"\s+", " ", c).strip().rstrip(":").lower()
                  for c in header_cells]
        if any(OFFSET_COLUMN.search(label) for label in labels):
            continue
        desc_i = [i for i, label in enumerate(labels)
                  if label in _DESC_LABELS]
        name_i = [i for i, label in enumerate(labels)
                  if (label in _CONST_LIST_LABELS or
                      label.endswith(("style", "styles", "flags",
                                      "constants")))
                  and i not in desc_i]
        if not name_i or len(labels) < 2 or \
                any(label in TYPE_NAME_COLUMNS for label in labels):
            continue
        header = " ".join(header_cells)
        header_name_i = name_i[0]
        header_name_label = labels[name_i[0]]
        for raw, cells in rows:
            if header_name_i >= len(cells):
                continue
            name = cells[header_name_i]
            if not _const_name_cell_ok(name, header_name_label):
                continue
            if name in seen:
                continue
            seen.add(name)
            out.append({
                "name": name,
                "value": None,
                "decimal": None,
                "table": header,
                "origin": "table-name-list",
                "row": re.sub(r"\s+", " ", raw).strip(),
            })
    return out



# ------------------------------------------------------------------ #
# Name-list tables: the pages that document many types at once.       #
#                                                                      #
# "Windows Data Types" is one table (Data type | Description) whose    #
# rows carry the type name, what it means, often the typedef behind    #
# it ("This type is declared in WinNT.h as follows: <code>typedef     #
# PVOID HANDLE;</code>") and sometimes the header it lives in.  The    #
# name/value readers read none of this: there is no value column.     #
# Each row is read as printed -- the name, the description, any        #
# declaration the description quotes, any header it states.            #
# ------------------------------------------------------------------ #

# The name column of a name|description *data-type* list.  Bare ``type``
# is deliberately absent: a member table (Field | Type | Description) and
# an option table (Type | Description) carry a Type column whose cells are
# not the documented names -- reading them mints noise (``std``, ``tzi``).
TYPE_NAME_COLUMNS = {
    "data type", "data types", "datatype", "data type name",
    "generic-text data type name", "structure",
}

_FIELD_COLUMNS = {"field", "member", "offset", "option", "parameter",
                  "bit", "flag name", "value"}

_TYPE_DESC_COLUMNS = {
    "description", "definition", "comments", "comment",
    "unicode defined", "ansi defined", "_unicode defined", "_ansi defined",
}

# A row quotes one declaration: a typedef, or a #define whose value is the
# one token that follows the name (``#define CALLBACK __stdcall``).  A
# ``#ifdef``-guarded block is read whole (see _pre_blocks below).
_ROW_DECL = re.compile(
    r"typedef\s+[^;{}]+;|#define\s+[A-Za-z_][A-Za-z0-9_]*\s+[A-Za-z_][A-Za-z0-9_]*")

_ROW_HEADER = re.compile(
    r"(?i)(?:declared|defined|prototype\s+d)?\s*in\s+([A-Za-z][A-Za-z0-9_]*\.h)"
    r"|(?:header|headers)\s*:\s*([A-Za-z][A-Za-z0-9_,\.\s]*\.h)")

_PRE_IN_CELL = re.compile(r"(?is)<pre\b[^>]*>(.*?)</pre>")



def _row_code_spans(cell):
    """The <code>...</code> / `...` spans of one cell, tags stripped."""
    out = []
    for match in re.finditer(r"(?is)<code\b[^>]*>(.*?)</code>", cell):
        out.append(text_of(match.group(1), keep_newlines=False).strip())
    for match in re.finditer(r"`([^`\n]+)`", cell):
        out.append(match.group(1).strip())
    return out



def _pre_blocks(cell):
    """The <pre> blocks of one cell, newlines preserved (a ``#ifdef``
    branch block is only readable line by line)."""
    out = []
    for match in _PRE_IN_CELL.finditer(cell):
        inner = re.sub(r"(?is)</?code\b[^>]*>", "", match.group(1))
        text = text_of(inner, keep_newlines=True).strip("\n")
        if text.strip():
            out.append(text)
    return out



def _block_names(text):
    """Every name a declaration block defines (branch by branch)."""
    names = []
    # only the conditional directives are stripped -- a #define line is
    # the declaration, not scaffolding
    body = re.sub(r"(?m)^\s*#\s*(?:if|ifdef|ifndef|elif|else|endif)\b.*$",
                  "", text)
    # statement by statement: a typedef with a braced body declares its tag
    # *and* its tail aliases (``} UNICODE_STRING;``)
    for statement in re.findall(r"typedef\s+(?:[^;{}]|\{[^}]*\})*;|"
                               r"#define\s+[A-Za-z_][A-Za-z0-9_]*\b[^;\n]*",
                                body):
        for name in declared_names(statement):
            if name not in names:
                names.append(name)
    for name in declared_names(text):
        if name not in names:
            names.append(name)
    return names



def _decl_of(text):
    kind = _kind_of(text)
    if re.match(r"\s*#\s*(?:if|ifdef|ifndef)\b", text):
        # a conditional block: its kind is what the branches define,
        # not the ``defined(...)`` parentheses _kind_of would read
        stripped = re.sub(
            r"(?m)^\s*#\s*(?:if|ifdef|ifndef|elif|else|endif)\b.*$", "",
            text)
        if re.search(r"typedef\b", stripped):
            kind = "typedef"
        elif re.search(r"#\s*define\b", stripped):
            kind = "macro"
        else:
            kind = None
    elif kind is None and _block_names(text):
        kind = "typedef"
    return {
        "text": text,
        "markup": "table-row",
        "spacing": _spacing(text),
        "role": "syntax",
        "calling_convention": _calling_convention(text),
        "kind": kind,
        "members": _members(text),
        "member_types": [],
        "abi_flags": abi_flags(text),
        # a name-list row quotes the declaration the *reference table*
        # states for the type -- never sample code
        "implementation": False,
    }



def listed_type_rows(fragment):
    """Rows of a name|description table: one dict per documented name.

    Each row states ``name`` (the identifier cell), ``description`` (the
    remaining cells, as printed), ``declarations`` (the C declarations the
    row's own text quotes -- a typedef body, a #define, or a whole
    ``#ifdef`` branch block), ``requirements`` (the headers the row's text
    states) and ``row`` (the evidence).  The reader walks the *rows* of
    the page, not the <table> elements: the archived pages nest a code
    table inside a row, and the outer table's HTML never closes again.

    A continuation row that prints only a declaration block (the
    ``#ifdef _WIN64`` shape) is read as documentation of the names the
    block defines.
    """
    out = []
    header = None
    for match in ROW.finditer(fragment):
        cells = [text_of(cell, keep_newlines=False).strip()
                 for cell in CELL.findall(match.group(1))]
        if not cells:
            continue
        labels = [re.sub(r"\s+", " ", c).strip().rstrip(":").lower()
                  for c in cells]
        if any(OFFSET_COLUMN.search(label) for label in labels) \
                or any(label in _FIELD_COLUMNS for label in labels):
            header = None
            continue
        name_i = None
        for index, label in enumerate(labels):
            if label in TYPE_NAME_COLUMNS:
                name_i = index
                break
        if name_i is not None and (len(cells) > 1 or
                                   any(l in _TYPE_DESC_COLUMNS
                                       for l in labels)):
            header = " ".join(cells)
            header_name_i = name_i
            continue
        if header is None:
            continue
        name = cells[0].strip().strip("`") if cells else ""
        # the description side of the row (the raw cell markup, so that
        # <pre> blocks keep their lines and <code> spans keep their text)
        desc_markup = match.group(1)
        raw_cells = CELL.findall(match.group(1))
        desc_raw = " ".join(raw_cells[1:] if len(raw_cells) > 1 else raw_cells)
        declarations = []
        blocks = _pre_blocks(desc_raw)
        if blocks:
            declarations = [_decl_of(block) for block in blocks]
        else:
            for span in _row_code_spans(desc_raw):
                for piece in _ROW_DECL.findall(span) or [span.strip()]:
                    piece = piece.strip()
                    if piece and _block_names(piece):
                        declarations.append(_decl_of(piece))
        plain = text_of(desc_raw, keep_newlines=False)
        if not blocks:
            for piece in _ROW_DECL.findall(plain):
                piece = piece.strip()
                if piece and _block_names(piece) \
                        and not any(d["text"].find(piece) >= 0
                                    for d in declarations):
                    declarations.append(_decl_of(piece))
        requirements = []
        for row_header in _ROW_HEADER.finditer(plain):
            for group in row_header.groups():
                if not group:
                    continue
                for item in re.split(r",", group):
                    item = item.strip().strip(".")
                    if item and item.lower().endswith(".h"):
                        requirements.append({
                            "field": "header",
                            "label": "declared in",
                            "value": item,
                            "evidence": row_header.group(0).strip(),
                        })
        if CONSTANT_IDENT.match(name):
            out.append({
                "name": name,
                "description": plain,
                "declarations": declarations,
                "requirements": requirements,
                "table": header,
                "row": " ".join(cells),
            })
        elif declarations:
            # a continuation row: the block documents the names it defines
            for block_name in _block_names(declarations[0]["text"]):
                out.append({
                    "name": block_name,
                    "description": plain,
                    "declarations": declarations,
                    "requirements": requirements,
                    "table": header,
                    "row": " ".join(cells),
                })
        else:
            header = None
    # A row whose HTML nests the code block splits into two reads (the name
    # row and the block's own row): same name, union of what was read.
    merged = {}
    order = []
    for row in out:
        key = row["name"]
        if key not in merged:
            merged[key] = row
            order.append(key)
            continue
        keep = merged[key]
        if len(row["description"]) > len(keep["description"]):
            keep["description"] = row["description"]
        if len(row["row"]) > len(keep["row"]):
            keep["row"] = row["row"]
        for decl in row["declarations"]:
            if not any(d["text"] == decl["text"]
                       for d in keep["declarations"]):
                keep["declarations"].append(decl)
        for req in row["requirements"]:
            if not any(q["value"] == req["value"]
                       and q["evidence"] == req["evidence"]
                       for q in keep["requirements"]):
                keep["requirements"].append(req)

    return [merged[key] for key in order]



def listed_type_rows_text(text):
    """The same reader for a markdown page: strip fences so code spans and
    tables are the only carriers, then read the HTML tables embedded in
    the markdown (the sdk-api style)."""
    body = _MD_FENCE.sub("", text)
    return listed_type_rows(body)



# ------------------------------------------------------------------ #
# More numbered constants: the definitions a *syntax declaration*      #
# quotes, and the values a page prints in running prose.               #
#                                                                      #
# A page prints a number for a constant in more shapes than a          #
# name/value table: the `#define NAME <number>` line of a macro        #
# declaration, the `NAME = <number>` member of an enum body it         #
# quotes, and the inline spelling `NAME (0x0400)` / `NAME = 0x0400` of #
# a paragraph.  The same honesty rule as the table reader applies:     #
# the quote is the text the page printed, only a numeric right-hand    #
# side is a value, and example code is never read (these readers are   #
# given syntax declarations and prose only, by kbgen/extract.py).    #
# ------------------------------------------------------------------ #

# ``#define NAME (0x0400)`` / ``#define NAME MAKE_D3DMHRESULT(2158)`` /
# ``#define NAME (WM_USER + 255)``.  The value is quoted as printed --
# never computed.  A function-like macro (``#define SIZEOF(x)``) is not
# a numbered constant.  Collapsed pages glue several #define tokens on
# one line, so the reader is not line-anchored.
_DEFINE_VALUE = (
    r"(?:"
    r"\(?\s*(?:0[xX][0-9A-Fa-f]+|-?\d+)\s*[uUlL]*\s*\)?"
    r"|[A-Z][A-Z0-9_]{1,60}\s*[+-]\s*(?:0[xX][0-9A-Fa-f]+|\d+)[uUlL]*"
    r"|\(\s*[A-Z][A-Z0-9_]{1,60}\s*[+-]\s*(?:0[xX][0-9A-Fa-f]+|\d+)[uUlL]*\s*\)"
    r"|[A-Z][A-Z0-9_]{2,60}\s*\(\s*(?:0[xX][0-9A-Fa-f]+|-?\d+)\s*\)"
    r")"
)

_DEFINE_ROW = re.compile(
    r"^\s*#\s*define\s+([A-Za-z_][A-Za-z0-9_]*)\s+"
    + _DEFINE_VALUE +
    r"\s*(?:(?:/\*[^*]*\*/|//[^\n]*)\s*)?$")

_DEFINE_ANY = re.compile(
    r"#\s*define\s+([A-Za-z_][A-Za-z0-9_]*)(?!\s*\()\s+" + _DEFINE_VALUE)

_ENUM_MEMBER_ANY = re.compile(
    r"\b([A-Z][A-Z0-9_]{2,})\s*=\s*"
    r"\(?\s*(0[xX][0-9A-Fa-f]+|-?\d+)\s*[uUlL]*\s*\)?")


# ``NAME = 0x01,`` -- an enum member that carries its value.  Applied
# only inside a declaration that has an ``enum`` and a ``{`` (the
# caller's check), so an initialiser in a struct body or a default
# argument of a prototype is never taken for one.
_ENUM_MEMBER_ROW = re.compile(
    r"^\s*([A-Za-z_][A-Za-z0-9_]*)\s*=\s*"
    r"\(?\s*(0[xX][0-9A-Fa-f]+|-?\d+)\s*[uUlL]*\)?\s*,\s*"
    r"(?:(?:/\*[^*]*\*/|//[^\n]*)\s*)?$|"
    r"^\s*([A-Za-z_][A-Za-z0-9_]*)\s*=\s*"
    r"\(?\s*(0[xX][0-9A-Fa-f]+|-?\d+)\s*[uUlL]*\)?\s*"
    r"(?:/\*[^*]*\*/\s*)?$")



def define_value_rows(text):
    """``#define NAME <number-or-printed-expression>`` in a syntax block.

    Collapsed pages (several ``#define`` tokens on one line) are split with
    finditer.  ``MAKE_D3DMHRESULT(2158)`` and ``WM_USER+255`` stay as
    printed -- never computed.  ``#define FOO(x)`` is skipped.
    """
    out = []
    seen = set()
    blob = text or ""
    for match in _DEFINE_ANY.finditer(blob):
        name = match.group(1)
        value = match.group(0)
        # value is the RHS of this match
        rhs = blob[match.start():match.end()]
        parts = re.split(r"#\s*define\s+" + re.escape(name) + r"\s+", rhs, 1)
        rhs_text = parts[-1] if parts else match.group(2)
        rhs_text = re.split(r"//|/\*", rhs_text, 1)[0].strip()
        rhs_text = re.sub(r"\s+", " ", rhs_text).strip()
        # prefer a compact form for ctor / sum expressions
        if re.match(r"^[A-Z]", rhs_text) or rhs_text.startswith("("):
            compact = re.sub(r"\s+", "", rhs_text)
        else:
            compact = rhs_text
        key = (name, compact)
        if key in seen:
            continue
        seen.add(key)
        out.append({"name": name, "value": compact,
                    "table": "#define", "origin": "define",
                    "row": match.group(0).strip()[:240]})
    return out



def enum_value_rows(text):
    """``NAME = <number>`` members of an enum body a syntax block quotes.

    Collapsed ``typedef enum { A = 1, B = 2 }`` on one line is split with
    finditer.  The number is quoted as printed.
    """
    if not text or "{" not in text or "enum" not in text.lower():
        return []
    out = []
    seen = set()
    for match in _ENUM_MEMBER_ANY.finditer(text):
        name, value = match.group(1), match.group(2)
        key = (name, value)
        if key in seen:
            continue
        seen.add(key)
        out.append({"name": name, "value": value, "table": "enum member",
                    "origin": "enum", "row": match.group(0).strip()[:240]})
    return out



# Running prose also numbers a constant, ``WM_USER (0x0400)`` /
# ``WM_USER = 0x0400``.  Precision over recall: hexadecimal only (a
# decimal in parentheses is too often "(2)" a version), the name is an
# all-caps identifier of at least four characters, and without an
# underscore it has to be at least six (``HTERROR`` borders on fine,
# ``BYTE`` at length four does not).  PRE/TABLE/CODE regions are read by
# the other readers and are stripped before this one runs, so a value is
# not recorded twice.
_PROSE_REGION = re.compile(r"(?is)<(pre|table|code)\b[^>]*>.*?</\1>")

_PROSE_EQ = re.compile(
    r"(?<![\w(\[])([A-Z][A-Z0-9_]{3,})\s*=\s*(0[xX][0-9A-Fa-f]+)\b")

_PROSE_PAREN = re.compile(
    r"(?<![\w(\[])([A-Z][A-Z0-9_]{3,})\s*\(\s*(0[xX][0-9A-Fa-f]+)\s*\)")

_PROSE_NAME_OK = re.compile(r"^(?:[A-Z][A-Z0-9]*_[A-Z0-9_]*|[A-Z0-9_]{6,})$")



def prose_constants(fragment):
    """``NAME (0x...)`` / ``NAME = 0x...`` spelled in running prose.

    The evidence ``row`` is the matched span itself.  A matched name is
    still only a *documented* constant: a name the page does not number
    has no row here, and a win32-only number is never treated as a
    Windows CE value by the generator.
    """
    out = []
    seen = set()
    fragment = _PROSE_REGION.sub(" ", fragment)
    text = text_of(fragment, keep_newlines=False)
    for pattern in (_PROSE_EQ, _PROSE_PAREN):
        for match in pattern.finditer(text):
            name, value = match.group(1), match.group(2)
            if not _PROSE_NAME_OK.match(name) or (name, value) in seen:
                continue
            seen.add((name, value))
            out.append({"name": name, "value": value,
                        "table": "prose value", "origin": "prose",
                        "row": match.group(0)})
    return out



def syntax_constant_rows(declarations):
    """The constant definitions a page's *syntax* declarations quote.

    kbgen/extract.py hands this reader the declarations a page already
    classified, so the verbatim-quote rule is kept by construction: a
    ``role: "example"`` or ``implementation`` block is sample code and
    yields nothing here -- sample ``#define cEvents 3`` is not a
    documented constant of the SDK.
    """
    out = []
    for decl in declarations or []:
        if decl.get("role") != "syntax" or decl.get("implementation"):
            continue
        out.extend(define_value_rows(decl.get("text") or ""))
        out.extend(enum_value_rows(decl.get("text") or ""))
    return out



_MD_FENCE = re.compile(r"(?ms)^```.*?^```")

_MD_CODE = re.compile(r"`([^`\n]+)`")



def prose_constants_text(text):
    """The markdown twin of :func:`prose_constants` (no HTML to strip).

    Fenced code (````` ``` `````) is blanked and the backticks of inline
    code spans are blanked (their content is ordinary prose: ``NAME
    (0x0001)`` inside a code span is a printed constant) -- but every
    blanking keeps the character count, so a match's offsets still point
    into the raw page and the row quote is the page's own characters,
    backticks included (``kbgen check`` compares the quote against the
    raw markdown file by re-extraction).
    """
    out = []
    seen = set()
    raw = text or ""
    masked = _MD_FENCE.sub(lambda m: " " * (m.end() - m.start()), raw)
    masked = _MD_CODE.sub(lambda m: m.group(0).replace("`", " "), masked)
    for pattern in (_PROSE_EQ, _PROSE_PAREN):
        for match in pattern.finditer(masked):
            name, value = match.group(1), match.group(2)
            if not _PROSE_NAME_OK.match(name) or (name, value) in seen:
                continue
            seen.add((name, value))
            out.append({"name": name, "value": value,
                        "table": "prose value", "origin": "prose",
                        "row": re.sub(r"\s+", " ",
                                      raw[match.start():match.end()]).strip()})
    return out



_ORDINAL_COLUMN = re.compile(r"(?i)^ordinals?$")

_EXPORT_COLUMN = re.compile(r"(?i)^(?:export|export name|function|symbol|"
                            r"entry point)s?$")

# ``the floating point C run-time library, Fpcrt.dll`` -- the DLL the
# exports on this page belong to.  Only a sentence on the same page counts.
_EXPORTS_OF_DLL = re.compile(
    r"(?i)exports?\s+(?:that\s+are\s+)?(?:required\s+)?for\s+[^.]{0,80}?"
    r"\b([A-Za-z0-9_]+\.dll)\b")



def export_ordinal_tables(fragment):
    """``Export | Ordinal`` rows: the one place the documents print ordinals.

    ``Exports from the Floating Point C Run-Time Library`` lists the exports
    of ``Fpcrt.dll`` with the ordinal each one must use.  Every other page
    of this corpus states no ordinal, and none is invented: only a table
    with an ordinal column and an export column is read, the number is kept
    as printed, and the DLL comes from a sentence on the same page (empty
    when the page names none).
    """
    out = []
    plain = text_of(fragment, keep_newlines=False)
    dll_match = _EXPORTS_OF_DLL.search(plain)
    dll = dll_match.group(1) if dll_match else ""
    dll_evidence = (re.sub(r"\s+", " ", dll_match.group(0)).strip()
                    if dll_match else "")
    for table in TABLE.finditer(fragment):
        rows = ROW.findall(table.group(1))
        if len(rows) < 2:
            continue
        headers = [re.sub(r"\s+", " ", text_of(cell, keep_newlines=False))
                   .strip() for cell in CELL.findall(rows[0])]
        labels = [header.lower() for header in headers]
        ordinal_i = next((i for i, label in enumerate(labels)
                          if _ORDINAL_COLUMN.match(label)), None)
        name_i = next((i for i, label in enumerate(labels)
                       if _EXPORT_COLUMN.match(label)), None)
        if ordinal_i is None or name_i is None or ordinal_i == name_i:
            continue
        header = " ".join(headers)
        for row in rows[1:]:
            cells = [re.sub(r"\s+", " ", text_of(cell, keep_newlines=False))
                     .strip() for cell in CELL.findall(row)]
            if len(cells) <= max(ordinal_i, name_i):
                continue
            name, printed = cells[name_i], cells[ordinal_i]
            if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_@?$]*", name):
                continue
            if not re.fullmatch(r"\d+", printed):
                continue
            out.append({
                "name": name,
                "ordinal": int(printed),
                "ordinal_printed": printed,
                "dll": dll,
                "dll_evidence": dll_evidence,
                "table": header,
                "row": " ".join(cell for cell in cells if cell),
            })
    return out



def offset_tables(fragment):
    """Layout tables: ``Offset | Field | Size | …`` rows, quoted as printed.

    Returns one dict per data row of a table that has both an *Offset* column
    and a *member/field/name* column: ``member``, ``offset`` (int, derived from
    the printed cell), ``offset_printed``, ``size``/``size_unit`` when the table
    prints one, ``table`` (the header cells, as printed) and ``row`` (all cells
    of the row, as printed -- the evidence a checker re-reads).
    """
    out = []
    for table in HTML_TABLE.finditer(fragment):
        rows = ROW.findall(table.group(1))
        if len(rows) < 2:
            continue
        headers = [text_of(cell, keep_newlines=False).strip()
                   for cell in CELL.findall(rows[0])]
        labels = [header.lower() for header in headers]
        offset_i = next((i for i, label in enumerate(labels)
                         if OFFSET_COLUMN.search(label)), None)
        name_i = next((i for i, label in enumerate(labels)
                       if NAME_COLUMN.search(label)), None)
        size_i = next((i for i, label in enumerate(labels)
                       if SIZE_COLUMN.search(label)), None)
        if offset_i is None or name_i is None or offset_i == name_i:
            continue
        header = " ".join(headers)
        for row in rows[1:]:
            cells = [text_of(cell, keep_newlines=False).strip()
                     for cell in CELL.findall(row)]
            if len(cells) <= max(offset_i, name_i):
                continue
            offset = _cell_int(cells[offset_i])
            member = cells[name_i]
            if offset is None or not member:
                continue
            size = size_unit = None
            size_printed = (cells[size_i]
                            if size_i is not None and len(cells) > size_i
                            else "")
            if size_printed:
                match = SIZE_VALUE.match(size_printed)
                if match:
                    value = match.group(1)
                    size = (int(value, 16) if value.lower().startswith("0x")
                            else int(value))
                    size_unit = (match.group(2) or "bytes").lower()
                    if size_unit.startswith("bit"):
                        size_unit = "bits"
            out.append({
                "member": member,
                "offset": offset,
                "offset_printed": cells[offset_i],
                "size": size,
                "size_unit": size_unit,
                "size_printed": size_printed or None,
                "table": header,
                "row": " ".join(cells),
            })
    return out
