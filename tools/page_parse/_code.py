"""Reading C code text: spacing, calling convention, members, ABI facts, and classifying a block as declaration vs implementation."""

import re



# ------------------------------------------------------------- declarations

PRE = re.compile(r"(?is)(<pre\b[^>]*>)(.*?)</pre>")

PARA = re.compile(r"(?is)<p\b[^>]*>(.*?)</p>")



def _spacing(text):
    """'collapsed' when a code block lost the spaces between tokens.

    All four rules are properties of the text itself, e.g. the archived CE 5.0
    page that renders ``HANDLE CreateFile(LPCTSTR lpFileName,`` as
    ``HANDLECreateFile(LPCTSTRlpFileName,``.
    """
    if text.count(",") >= 2 and not re.search(r",\s", text):
        return "collapsed"
    if len(text) > 40 and " " not in text:
        return "collapsed"
    if re.search(r"\)[A-Za-z_]", text) and not re.search(r"\)\s", text):
        return "collapsed"
    if re.search(r"\btypedef\s*struct\b", text, re.I) and \
            re.search(r";[A-Za-z_]", text):
        return "collapsed"
    # a type and its declarator glued together: LPCTSTRlpFileName, HANDLECreateFile
    if re.search(r"\b[A-Z_]{2,}[a-z_][A-Za-z0-9_]*\s*[,);]", text):
        return "collapsed"
    if re.search(r"\b[A-Z_]{3,}[A-Z][a-z][A-Za-z0-9_]*\s*\(", text):
        return "collapsed"
    return "preserved"



CALLING_CONVENTION = (
    ("winapi", r"\bWINAPI\b|\bAPIENTRY\b|\bSTDAPICALLTYPE\b|\bWINAPIV\b"),
    ("cdecl", r"\b_cdecl\b|\b__cdecl\b|\bCDECL\b"),
    ("stdcall", r"\b_stdcall\b|\b__stdcall\b|\bSTDAPI\b|\bCALLBACK\b|"
                r"\bPASCAL\b|\b_export\b"),
    ("fastcall", r"\b_fastcall\b|\b__fastcall\b"),
    ("this", r"\bthis\b\s*\("),
    ("extern-c", r'extern\s+"C"'),
)



def _calling_convention(text):
    """Which calling convention the declaration *prints*, if any.

    The declaration text is quoted verbatim; this only reports which of the
    documented spellings occur (``WINAPI``, ``CALLBACK``, ``_stdcall``, ...).
    When the text says nothing, the answer is None -- not a guess.
    """
    found = [name for name, pattern in CALLING_CONVENTION
             if re.search(pattern, text)]
    return found[0] if found else None



def _members(text):
    """Struct/enum member lines, quoted as they appear (no interpretation)."""
    if not re.search(r"(?i)\b(typedef\s+)?(struct|enum|union)\b",
            text) and not re.search(r"(?i)\btypedef\b", text):
        return []
    members = []
    depth = 0
    for line in text.splitlines():
        stripped = line.strip()
        if not stripped:
            continue
        depth += stripped.count("{") - stripped.count("}")
        if depth <= 0 or stripped in ("{", "}"):
            continue
        if "{" in stripped and "}" in stripped:
            continue            # a whole nested declaration on one line
        if stripped.lower().startswith("typedef"):
            continue            # the declaration line, not a member
        if re.match(r"^[A-Za-z_#].*;\s*$", stripped) or \
                re.match(r"^[A-Za-z_][A-Za-z0-9_]*\s*(=[^;]*)?,?\s*$", stripped):
            members.append(stripped.rstrip(","))
    if members:
        return members
    # A page can print the body without line breaks too: the archived CE pages
    # lose the spaces *and* the newlines (``typedef struct X {DWORD a;INT b;} X;``),
    # and some blocks use literal ``\n`` escapes.  The member declarations are
    # then the pieces between the semicolons inside the outermost braces, and an
    # enum's between the commas.  Nothing is completed or reordered; a piece
    # that carries a brace (a nested declaration) is left out rather than
    # guessed at.
    start, end = text.find("{"), text.rfind("}")
    if start == -1 or end <= start:
        return members
    body = text[start + 1:end]
    if "\n" not in body:   # the page lost the newlines too
        body = body.replace(chr(92) + "n", " ")
    for piece in body.split(";"):
        piece = re.sub(r"\s+", " ", piece).strip()
        if not piece or "{" in piece or "}" in piece:
            continue
        if re.search(r"\benum\b", text) and "," in piece:
            members.extend(part.strip() for part in piece.split(",")
                           if part.strip())
        else:
            members.append(piece)
    return members



# ------------------------------------------------------------- ABI readers
#
# What an ABI consumer needs is: the calling convention, the member list with
# its types, and any alignment/packing/size statement the page makes.  The
# first two are read out of the declaration text itself (exact); the third is
# only kept as a quoted sentence and only when it names a concrete fact (a
# number of bytes, a byte order, a pointer width) -- loose prose ("alignment"
# in the UI sense and similar) is deliberately not collected.

TYPE_WORDS = frozenset("""
    void char short int long float double signed unsigned bool
    BOOL BOOLEAN BYTE WORD DWORD QWORD WCHAR TCHAR LPSTR LPCSTR LPWSTR
    LPCWSTR LPVOID LPCVOID HANDLE HWND HMODULE HINSTANCE FARPROC WPARAM
    LPARAM LRESULT INT8 INT16 INT32 INT64 UINT8 UINT16 UINT32 UINT64 SIZE_T
    ULONG LONG USHORT SHORT UINT PSTR PCSTR PWSTR PCWSTR PVOID
""".split())



def member_parts(line):
    """(type, name) a member line declares, or (None, None) when there is none.

    ``"DWORD dwFlags;"`` -> ``("DWORD", "dwFlags")``;
    ``"unsigned int LAP : 24;"`` -> ``("unsigned int", "LAP")``;
    ``"unsigned int : 3;"`` -> ``("unsigned int", None)`` (anonymous bitfield);
    ``"};"`` -> ``(None, None)``.  The type is quoted as printed; a member
    whose type the declaration does not spell out is None.
    """
    text = line.strip().rstrip(",").rstrip(";").strip()
    if not text or set(text) <= set("{}"):
        return None, None
    text = re.sub(r":\s*\d+$", "", text).strip()          # bitfield width
    text = re.sub(r"\[[^\]]*\]$", "", text).strip()       # array extent
    tokens = text.split()
    if not tokens:
        return None, None
    if len(tokens) == 1:
        token = tokens[0].rstrip("*&")
        return (tokens[0], None) if token in TYPE_WORDS else (None, tokens[0])
    name = tokens[-1].rstrip("*&")
    pointer = re.match(r"^([*&]+)", tokens[-1])
    type_text = " ".join(tokens[:-1])
    if pointer:                       # ``struct _foo *pNext``: the ``*`` is
        name = tokens[-1][len(pointer.group(1)):]     # part of the type
        type_text = (type_text + " " + pointer.group(1)).strip()
    if name in TYPE_WORDS and len(tokens) == 2 and tokens[0] in TYPE_WORDS:
        # ``unsigned int`` -- a two-word type with no declarator name
        return text, None
    if not type_text:
        return (text, None) if name in TYPE_WORDS else (None, name)
    return type_text, name



def member_type(line):
    """The type part of a member line, or None when it names no type."""
    return member_parts(line)[0]



# A page can also *state* an ABI fact in prose.  Only a sentence that names a
# concrete fact is kept -- a number of bytes, a byte order, a pointer width --
# because loose prose is not an ABI fact.  The sentence is quoted, never
# summarised, and no fact is inferred from it.
ABI_PROSE = (
    ("alignment", re.compile(
        r"\balign(?:ed|ment)\b[^.]{0,60}\b\d+\s*-?\s*byte|"
        r"\b\d+\s*-?\s*byte[- ]aligned\b|"
        r"__declspec\s*\(\s*align|#pragma\s+pack", re.I)),
    ("byte-order", re.compile(r"\b(?:little|big)[- ]endian\b|\bbyte order\b",
                              re.I)),
    ("pointer-size", re.compile(
        r"\b(?:32|64)[- ]bit\s+(?:pointers?|addresses)\b", re.I)),
    # Only a sentence that *defines* the size of a structure counts: "the size
    # of this structure is 68 bytes", "the structure is 128 bytes in length".
    # Loose size talk ("a packet size is recommended to be less than 8,000
    # bytes", "not including the initial 8 bytes") is deliberately not
    # collected -- it states no size of a structure.
    ("structure-size", re.compile(
        r"\bsize\s+of\s+(?:this|the)\s+structure\s+is\s+\d+\s*-?\s*bytes\b"
        r"|\b(?:this|the)\s+structure\s+is\s+(?:a\s+total\s+of\s+)?"
        r"\d+\s*-?\s*bytes\b", re.I)),
)


ABI_FLAGS = (
    ("bitfield", re.compile(r"\w+\s*:\s*\d+\s*[;,]?(?=\s*\}?\s*$)", re.M)),
    ("pack", re.compile(r"#pragma\s+pack\b", re.I)),
    ("align", re.compile(r"__declspec\s*\(\s*align\b", re.I)),
    ("pragma-once", re.compile(r"#pragma\s+once\b", re.I)),
)



def abi_flags(text):
    """Which ABI-relevant constructs the declaration text itself prints."""
    return [name for name, pattern in ABI_FLAGS if pattern.search(text)]



def abi_notes(text):
    """Sentences of a page that state an alignment/byte-order/pointer fact."""
    notes = []
    flat = re.sub(r"\s+", " ", text)
    for sentence in re.split(r"(?<=[.!?])\s+", flat):
        sentence = sentence.strip()
        if not sentence or len(sentence) > 400:
            continue
        for pattern_name, pattern in ABI_PROSE:
            if pattern.search(sentence):
                notes.append({"pattern": "abi: " + pattern_name,
                              "text": sentence})
                break
    return notes



# A second kind of ABI fact a page can carry: a layout *table*.  Many CE pages
# document a structure or a wire format as ``Offset | Field | Size | …``
# instead of (or beside) a C declaration.  What the page states is kept as
# printed -- the offset cell, the field name, the size cell and the whole row --
# and nothing is computed: no offset is inferred for a row the page gives none
# for, and no member is invented.

HTML_TABLE = re.compile(r"(?is)<table\b[^>]*>(.*?)</table>")

OFFSET_COLUMN = re.compile(r"\boffsets?\b", re.I)

NAME_COLUMN = re.compile(r"\b(?:member|field|name)s?\b", re.I)

SIZE_COLUMN = re.compile(r"\b(?:size|length)\b", re.I)

OFFSET_VALUE = re.compile(r"^\s*(0x[0-9A-Fa-f]+|\d+)\s*$")

SIZE_VALUE = re.compile(r"^\s*(0x[0-9A-Fa-f]+|\d+)\s*(bits?|bytes?)?\s*$", re.I)



def _cell_int(text):
    match = OFFSET_VALUE.match(text or "")
    if not match:
        return None
    value = match.group(1)
    return int(value, 16) if value.lower().startswith("0x") else int(value)



# A constant a page *numbers*.  Only a table that names the constant in one
# column and prints its value in another is read, and only a row whose name
# cell is one identifier and whose value cell is one number -- a cell that
# mixes prose with a number is left on the page, not parsed apart.  A layout
# table (it has an Offset column) is not a constant table; offset_tables owns
# those rows.  Nothing is computed: a decimal is recorded only when the page
# prints one, never by converting the hexadecimal.
CONSTANT_NAME_COLUMNS = {
    "flag", "name", "constant", "symbolic constant", "resource identifier",
    # the MicrosoftDocs/win32 style tables head them "Constant name" /
    # "Constant value"; the classic tables head them "Constant" / "Value"
    "constant name",
    "notification flag", "error code", "return code", "identifier",
    "message", "macro", "symbol", "symbolic name",
    # The same shape under a more specific heading.  Each label was checked
    # against the tables that use it: the name cell is the symbol and the
    # other cell is the number the page assigns to it.  A correspondence
    # (a character set beside a code page, a virtual key beside a scan code,
    # a locale beside an LCID, a buffer index beside a type name) is not in
    # this set -- those numbers are not the symbol's value.
    "symbolic constant name", "screen identifier", "control code",
    "message identifier", "virtual key code", "status identifier",
    "hresult name", "version identifier", "escape code", "dwmessage",
    "power notification type", "device generating notification",
    "propvariant type", "message text", "visual basic constant",
    "constant (button)", "constant (shift)", "system color",
    "ioctl call", "event", "element", "error",
}

CONSTANT_HEX_COLUMNS = {
    "hexadecimal", "hexadecimal value", "hex value", "hex",
    "value (hex)", "value (hexadecimal)", "hex code",
}

CONSTANT_DECIMAL_COLUMNS = {"decimal"}

CONSTANT_VALUE_COLUMNS = {
    "value", "numeric value", "code", "win32 value", "registry order",
    # the MicrosoftDocs/win32 style tables head it "Constant value"
    "constant value",
}

# Columns that number a *different* thing sitting next to the symbol
# (charset -> ANSI code page, VK -> OEM scan code, locale -> LCID).
# Those numbers are not the constant's value and must not become #define.
CORRESPONDENCE_VALUE_COLUMNS = {
    "code page", "code pages", "codepage", "ansi code page", "oem code page",
    "scan code", "scan codes", "scancode", "oem scan",
    "lcid", "locale id", "locale identifier",
}

_CORRESPONDENCE_LABEL = re.compile(
    r"code\s*pages?|scan\s*codes?|\blcid\b|locale\s+id", re.I)



# ------------------------------------------------- what is implementation code
#
# A page prints two kinds of code block: the *declaration* of an interface
# (what include/def material is built from) and *sample code* (what it is not).
# The test below is deliberately blunt and conservative: it only fires when the
# block is unmistakably an implementation -- a preprocessor include, or a
# statement form (`return`, `if`, `for`, `while`, `switch`, `goto`, `break;`,
# `continue;`).  A ``#define``/``#pragma`` block is a declaration; an
# ``#ifdef``-fenced block is treated as code because the corpus uses those
# fences around sample sources.

IMPLEMENTATION_STATEMENT = re.compile(
    r"\b(?:return|if|for|while|switch|goto)\b\s*[\s(\w*&=;]|"
    r"\b(?:break|continue)\s*;")



def is_implementation(text):
    """True when a code block is implementation code, not a declaration."""
    if re.search(r"#\s*include\b", text):
        return True
    if re.match(r"\s*#\s*(define|pragma)\b", text):
        return False            # a #define/#pragma block is a declaration
    if re.match(r"\s*#", text):
        # An #ifdef/#if-fenced block is code unless every branch only
        # declares: the conditional typedefs a reference header prints
        # (``#ifdef _WIN64 typedef int HALF_PTR; #else ...``) are interface
        # material, and the branch keywords are scaffolding, not statements.
        body = re.sub(
            r"(?m)^\s*#\s*(?:if|ifdef|ifndef|elif|else|endif)\b.*$", "",
            text)
        body = body.replace("#if", "\n#if")  # inline forms, one per line
        body = re.sub(
            r"(?m)^\s*#\s*(?:if|ifdef|ifndef|elif|else|endif)\b.*$", "",
            body)
        if re.search(r"#\s*include\b", body):
            return True
        if not body.strip():
            return True
        return bool(IMPLEMENTATION_STATEMENT.search(body))
    if not re.search(r"[;{}]", text):
        return False            # prose, a field list, a documentation header
    return bool(IMPLEMENTATION_STATEMENT.search(text))



def _is_build_script(text):
    """True when a block is makefile/Sources-file variable assignments.

    The Sources, Makefile and .bat pages print blocks like
    ``TARGETLIBS=$(_COMMONOAKROOT)\\lib\\$(_CPUDEPPATH)\\blcommon.lib``.  They
    contain ``(`` and ``)`` only because of ``$(...)`` expansion, so the
    generic "has parentheses -> function" rule used to call them C functions
    and gave the build variable an entity of kind ``function``.  A build
    variable is not an exported symbol and must not reach a header or a .def,
    so it is named for what it is.

    A line of C (a ``;``, a brace, a type before the name) disqualifies the
    block; the reader never rewrites it, it only labels it.
    """
    if "$(" not in text or "=" not in text:
        return False
    saw = False
    for line in text.splitlines():
        stripped = line.strip().rstrip("\\").strip()
        if not stripped or stripped.startswith(("#", "!", "//", "rem ", "REM ")):
            continue
        if any(ch in stripped for ch in ";{}"):
            return False
        if re.match(r"^[A-Za-z_][A-Za-z0-9_]*\s*=", stripped):
            saw = True
            continue
        # a continuation line of a previous assignment: a bare path/token
        if re.match(r"^[-$()A-Za-z0-9_.\\/:*]+$", stripped):
            continue
        return False
    return saw



def _kind_of(text):
    lowered = text.lower()
    if _is_build_script(text):
        return "build-variable"
    if re.search(r"\btypedef\s+struct\b|\bstruct\s+[A-Za-z_]", lowered):
        return "struct"
    if "typedef enum" in lowered or re.search(r"\benum\s+[A-Za-z_]", lowered):
        return "enum"
    if re.match(r"\s*#\s*define\b", text):
        return "macro"
    if re.search(r"\(\s*\*\s*[A-Za-z_]", text) and "typedef" in lowered:
        return "callback"
    if re.search(r"\bDECLARE_INTERFACE|\binterface\s+[A-Za-z_]", text):
        return "interface"
    if re.match(r"\s*typedef\b", text):
        return "typedef"
    if "(" in text and ")" in text:
        return "function"
    return None



def _is_macro_block(text):
    """True when a block is only ``#define`` / ``#pragma`` / ``#undef`` lines.

    A comment and a backslash continuation belong to the macro.  A ``typedef``,
    a statement or an ``#include`` does not -- those stay whatever role the
    rest of the reader gives them.  The page printed a declaration; this does
    not repair or complete it.
    """
    if not text or not re.search(r"#\s*define\b", text):
        return False
    continued = False
    saw = False
    for line in text.splitlines():
        stripped = line.strip()
        if not stripped:
            continue
        if continued:
            continued = stripped.endswith("\\")
            continue
        if stripped.startswith(("//", "/*", "*", "*/")):
            continue
        if re.match(r"#\s*(define|pragma|undef)\b", stripped):
            saw = True
            continued = stripped.endswith("\\")
            continue
        return False
    return saw



_EXAMPLE_SECTION = ("example", "examples", "code example", "sample",
                    "samples", "example code")


# The prose *immediately before* a code block can say what the block is
# without a heading: "The following code example shows how the Free method
# is usually implemented."  A block introduced this way is example code
# even on a page with no Example heading and even when it is the page's
# only block -- its ``#define MEM_HEIGHT 1000`` is the sample's own, not a
# documented constant of the SDK.  Promotion to ``syntax`` is refused when
# the introducing sentence carries one of these cues (checked in the
# ~400 characters before the block, cutting at the previous heading).
_EXAMPLE_CUE = re.compile(
    r"(?i)\b(?:code\s+example|following\s+example|following\s+code|"
    r"example\s+(?:shows|demonstrates|illustrates|implements|sets|uses|"
    r"creates|declares)|sample\s+(?:code|application|program|function|"
    r"shows|demonstrates)|the\s+following\s+sample|shows\s+how|"
    r"shown\s+in\s+(?:the\s+)?following|as\s+shown|usually\s+implemented|"
    r"implementation\s+of\s+the\s+following|is\s+implemented\s+as\s+follows|"
    r"following\s+(?:program|listing|function)\s+shows)")



def _looks_like_declaration(text):
    if _is_macro_block(text):
        return 8 <= len(text) <= 4000
    if len(text) < 8 or len(text) > 4000:
        return False
    return ("(" in text and ")" in text) or ";" in text or "{" in text


_C_ID = re.compile(r"[A-Za-z_]\w*")

_C_KEYWORD = {"if", "for", "while", "switch", "return", "sizeof", "defined",
              "typedef", "struct", "union", "enum", "const", "void", "int",
              "char", "short", "long", "float", "double", "unsigned", "signed",
              "bool", "static", "extern", "inline", "register", "volatile",
              "this", "class", "public", "private", "protected", "virtual"}

_TAG = re.compile(r"\b(?:struct|union|enum)\s+([A-Za-z_]\w*)")

# the aliases of a typedef: everything between the closing brace (or the
# declaration start) and the final semicolon
_TAIL = re.compile(r"([A-Za-z_\w\s,*]+)\s*;$", re.S)



def declared_names(text):
    """The identifier(s) a C declaration defines, as printed.

    Used to answer "which name does this page's declaration define?" for pages
    whose title is prose (``AVI Main Header``) -- the answer is the tag and the
    typedef alias (``MainAVIHeader``), and both are read from the text, never
    guessed.  A declaration that defines nothing recognisable returns [].
    """
    if not text or not text.strip():
        return []
    text = text.strip()
    names = []

    def add(name):
        name = (name or "").strip()
        if name and name not in _C_KEYWORD and name not in names:
            names.append(name)

    if text.startswith("#"):
        match = re.match(r"#\s*define\s+([A-Za-z_]\w*)", text)
        if match:
            add(match.group(1))
        return names
    if re.match(r"\s*typedef\b", text) and "{" not in text:
        # ``typedef unsigned long DWORD, *PDWORD;`` -- every alias of a
        # brace-less typedef is declared by it.  A function-pointer
        # typedef (``typedef int (*FARPROC)();``) is read by the
        # pointer-name rule below instead.
        body = text.split(";", 1)[0]
        body = re.sub(r"^\s*typedef\s+", "", body)
        for part in body.split(","):
            if "(" in part:
                continue
            ids = _C_ID.findall(part)
            if ids:
                add(ids[-1])
        if names:
            return [name for name in names if not name.startswith("__")]
    for match in _TAG.finditer(text):
        add(match.group(1))
    if re.match(r"^\s*(?:extern\s+|static\s+|inline\s+)*[A-Za-z_]",
                text) and "(" in text and "}" not in text.split("(", 1)[0]:
        head = text.split("(", 1)[0]
        ids = _C_ID.findall(head)
        if ids:
            add(ids[-1])
    for match in re.finditer(
            r"\(\s*[A-Za-z_]*\s*\*+\s*([A-Za-z_]\w*)\s*\)", text):
        add(match.group(1))
    tail = _TAIL.search(text)
    if tail and "}" in text[:tail.start()]:
        for part in tail.group(1).split(","):
            part = part.strip().strip("*").strip()
            match = re.search(r"([A-Za-z_]\w*)\s*\)?$", part)
            if match:
                add(match.group(1))
    return [name for name in names if not name.startswith("__")]
