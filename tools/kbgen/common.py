"""Shared definitions for tools/kbgen: identity, layers, tokens, grammar.

Nothing here reads the corpus; these are the pure rules the builder, the
resolver and the validator all agree on (one definition each, so the three
can never drift apart the way the old build-kb/kb_unify/gen-include-def
copies did).
"""

from __future__ import annotations

import hashlib
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
KB_DIR = os.path.join(ROOT, "kb")
SCHEMA_PATH = os.path.join(KB_DIR, "schema.sql")
DB_PATH = os.path.join(KB_DIR, "kb.sqlite3")
MANIFEST_PATH = os.path.join(KB_DIR, "manifest.json")
REPORTS_DIR = os.path.join(KB_DIR, "reports")
REVIEWS_DIR = os.path.join(KB_DIR, "inputs", "reviews")
INDEX_PATH = os.path.join(ROOT, "data", "index", "INDEX.tsv")
CATALOG_DIR = os.path.join(ROOT, "data", "catalogs")
SHARED_MAP_PATH = os.path.join(ROOT, "data", "reports", "win32-shared.tsv")
LICENSE_REGISTRY = os.path.join(ROOT, "data", "license-scopes.tsv")

SCHEMA_VERSION = 3
EXTRACTOR_VERSION = 4
BUILDER_VERSION = 2


# ---------------------------------------------------------------- identity

_WS = re.compile(r"\s+")


def symbol_key(name: str | None) -> str | None:
    """Canonical identity of a documented name.

    Casefolded, whitespace removed, punctuation *preserved*: ``Foo::Bar``
    and ``FooBar`` are different names, and ``CComPtr::operator !`` differs
    from ``CComPtr::operator *``.  (The old normaliser stripped every
    non-alphanumeric character, collapsing distinct names into one.)
    """
    if not name:
        return None
    key = _WS.sub("", name.strip().lower())
    return key or None


def parent_and_local(display: str) -> tuple[str | None, str | None]:
    """``IDirectDrawVideo::CanUseOverlayStretch`` -> (parent, local) displays."""
    if "::" not in display:
        return None, None
    parent, local = display.rsplit("::", 1)
    parent, local = parent.strip(), local.strip()
    if not parent or not local:
        return None, None
    return parent, local


def sha256_text(text: str) -> str:
    return hashlib.sha256(text.encode("utf-8")).hexdigest()


def obs_id(prefix: str, *parts) -> str:
    raw = "\x00".join("" if p is None else str(p) for p in parts)
    return prefix + hashlib.sha256(raw.encode("utf-8")).hexdigest()[:32]


def ws_norm(text: str) -> str:
    """Whitespace-free form used to group declaration variants.

    The same declaration reaches us as ``HANDLE CreateFile(`` on one page
    and ``HANDLECreateFile(`` (spacing collapsed by the archive's HTML)
    or ``__emit( const`` (a space after the parenthesis) on another;
    dropping whitespace entirely is what makes those one variant.  The
    verbatim text is of course kept beside it.
    """
    return _WS.sub("", text)


# ------------------------------------------------------------------- layers

CE_VERSIONS = ["1.0", "2.0", "2.11", "2.12", "3.0", "4.0", "4.1", "4.2",
               "5.0", "6.0", "6.5", "7.0"]

# Corpus trees the KB knows how to layer.  Anything else (e.g. a future
# corpus/pinvoke/ of third-party wiki pages) must be designed for
# explicitly: defaulting it to 'ce' would launder unvetted pages into CE
# facts, so the build refuses instead.
_CE_TREES = {"learn", "chm", "mvb", "kb", "site", "msdn-library"}


def tree_of(book: str) -> str:
    return book.split("/", 1)[0]


def layer_of(book: str) -> str:
    """Corpus book (relative dir) -> KB layer.  Raises on unmapped trees."""
    tree = tree_of(book)
    if tree == "win32":
        return "win32"
    if tree == "dotnet":
        return "dotnet"
    if tree == "oss":
        return "oss"
    if tree in _CE_TREES:
        return "ce"
    raise ValueError(
        f"unmapped corpus tree {tree!r} (book {book!r}): the KB has no layer"
        " for it; design its isolation before harvesting it (docs/kb-design.ja.md)")


# Doc-set -> the CE version its pages document (for version-scoped facts).
# Books that mix versions stay None: their prints cannot be version-scoped.
DOC_SET_VERSIONS = {
    "learn/windows-ce-5.0": "5.0",
    "learn/windows-ce-net-4x": "4.2",
    "learn/windows-embedded-ce-6.0": "6.0",
    "learn/windows-embedded-compact-7": "7.0",
    "chm/windows-ce-3.0": "3.0",
    "chm/windows-ce-4.2": "4.2",
    "chm/windows-ce-5.0": "5.0",
    "mvb/windows-ce-1.0": "1.0",
    "mvb/windows-ce-2.0-sdk": "2.0",
    "msdn-library/wcedevcon-99": "2.12",
    "msdn-library/datadungeon-2000-04": "3.0",
    "msdn-library/windows-mobile-6.5": "6.5",
    "msdn-library/vs2008-sp1": "5.0",
    "msdn-library/jan-2002": "3.0",
    "msdn-library/vsnet-2003": "4.1",
}


def doc_set_version(book: str) -> str | None:
    while book:
        if book in DOC_SET_VERSIONS:
            return DOC_SET_VERSIONS[book]
        book = book.rsplit("/", 1)[0] if "/" in book else ""
    return None


# ------------------------------------------------------------- file tokens

_HEADER_TOKEN = re.compile(r"[\w+-][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc)\b", re.I)
_FILE_TOKEN = re.compile(r"[\w.+-]+\.(?:lib|dll|drv|sys|ocx|tlb)\b", re.I)
_VALUE_TAIL = re.compile(r"[\s.,;:]+$")
_DLLISH = {"dll", "drv", "sys", "ocx", "tlb"}


def header_tokens(value: str | None) -> list[tuple[str, str]]:
    """(header_key, spelling) pairs a requirement value names, in order.

    Parentheticals are instructions, not headers ("Winuser.h (include
    Windows.h)" names Winuser.h only).  A bare ".h" is not a header.
    """
    if not value:
        return []
    cleaned = re.sub(r"\([^)]*\)", " ", value)
    out: list[tuple[str, str]] = []
    seen: set[str] = set()
    for match in _HEADER_TOKEN.finditer(cleaned):
        spelling = match.group(0)
        key = spelling.lower()
        if key not in seen:
            seen.add(key)
            out.append((key, spelling))
    return out


def file_tokens(value: str | None) -> list[tuple[str, str, str]]:
    """(file_key, file_kind, display) for lib/dll tokens in a value."""
    if not value:
        return []
    out: list[tuple[str, str, str]] = []
    seen: set[tuple[str, str]] = set()
    for match in _FILE_TOKEN.finditer(value):
        display = match.group(0)
        ext = display.rsplit(".", 1)[1].lower()
        kind = "lib" if ext == "lib" else "dll"
        key = display.lower()
        if (key, kind) not in seen:
            seen.add((key, kind))
            out.append((key, kind, display))
    return out


def valid_lib_dll_token(name: str) -> bool:
    return bool(re.fullmatch(
        r"[a-z0-9_.+\-]+\.(?:lib|dll|drv|sys|ocx|tlb)", name or ""))


def normalize_value(value: str, field: str | None = None) -> str:
    """DERIVED grouping key for a requirement value (verbatim stays stored).

    Ported semantics from the old build-kb.normalize_value: trailing
    punctuation/whitespace removed; library/dll keys are the file token
    the value contains; a header key is its first header token; a value
    that names no file gets an empty key.
    """
    value = _VALUE_TAIL.sub("", re.sub(r"\s+", " ", value or "")).strip()
    if field in ("library", "dll"):
        tokens = file_tokens(value)
        return tokens[0][0] if tokens else ""
    if field == "header":
        tokens = header_tokens(value)
        return tokens[0][0] if tokens else ""
    if field == "component":
        return value if re.fullmatch(r"[A-Za-z][A-Za-z0-9_]*", value) else ""
    return value


# --------------------------------------------------------- constant grammar

_DEC = re.compile(r"^-?\d+$")
_HEX = re.compile(r"^-?0[xX][0-9a-fA-F]+$")
_SUFFIX = re.compile(r"^(.*?[\da-fA-F])[uUlLfF]+$")
_EXPR_TOKEN = re.compile(
    r"\s*(?:0[xX][0-9a-fA-F]+|\d+|[A-Za-z_]\w*|<<|>>|[-+*/%|&^~(),])")


def _fit_int64(value: int) -> int | None:
    """SQLite INTEGER is signed 64-bit; bigger prints keep only their text."""
    return value if -(2 ** 63) <= value <= 2 ** 63 - 1 else None


_BARE_HEX = re.compile(r"\d[0-9A-Fa-f]*[A-Fa-f][0-9A-Fa-f]*")
_FLOAT = re.compile(r"^-?(?:(?:\d+\.\d*|\.\d+|\d+)(?:[eE][+-]?\d+)|\d+\.\d+)[fF]?$")


def parse_constant_value(raw: str | None) -> tuple[str, int | None] | None:
    """Classify one printed constant value.

    Returns ("integer", value) for an unambiguous decimal or 0x-hex
    literal (C suffixes are print marks), ("expression", None) for an
    expression over names/numbers (``RASBASE+153``, ``(1 << 4)``), or
    None when the print is not a constant at all (``compile`` -- the value
    side of ``UNICODE = compile``).  Rejects are recorded, never silently
    dropped.

    A digit-led token made only of hex digits and containing a letter
    (``8009100F``) is a bare-hex integer: a decimal literal cannot
    contain letters and an identifier cannot start with a digit, so the
    reading is not a guess.  An all-digit token stays decimal here --
    HRESULT tables print ``80091008`` for 0x80091008, and only the
    table's own column (see build._reconcile_hex_columns) can prove it.
    """
    if raw is None:
        return None
    text = str(raw).strip().rstrip(";,")
    if not text:
        return None
    bare = text
    if re.match(r"^-?(?:0[xX]|\d)", text):
        # A C suffix (0x0001L, 34UL) is a print mark, not part of the
        # number; u/l are never hex digits, so stripping is unambiguous.
        bare = re.sub(r"[uUlL]+$", "", text)
    if _HEX.match(bare):
        try:
            return "integer", _fit_int64(int(bare, 16))
        except ValueError:
            return None
    if _DEC.match(bare):
        try:
            return "integer", _fit_int64(int(bare, 10))
        except ValueError:
            return None
    if _FLOAT.match(bare):
        # A real-number print (DBL_EPSILON): kept as an observation with
        # no integer reading, not dropped as junk.
        return "float", None
    if len(bare) >= 4 and _BARE_HEX.fullmatch(bare):
        try:
            return "integer", _fit_int64(int(bare, 16))
        except ValueError:
            return None
    if text[0].isdigit():
        return None          # other digit-led junk (dates, versions...)
    # Expression: must tokenise completely and contain an operator.
    pos = 0
    has_op = False
    while pos < len(text):
        m = _EXPR_TOKEN.match(text, pos)
        if not m or m.end() == pos:
            return None
        tok = m.group(0).strip()
        if tok in ("+", "-", "*", "/", "%", "|", "&", "^", "~", "<<", ">>"):
            has_op = True
        pos = m.end()
    if has_op:
        return ("expression", None)
    if re.match(r"\s*[A-Za-z_]\w*\s*\(", text):
        # A maker-macro call (MAKE_HRESULT(...), MAKE_D3DMHRESULT(2158)):
        # a constant expression with no top-level operator.
        return ("expression", None)
    return None


def value_int(raw: str | None) -> int | None:
    parsed = parse_constant_value(raw)
    return parsed[1] if parsed and parsed[0] == "integer" else None


# ------------------------------------------------------- availability (OS)

_VERSION_RE = re.compile(r"(\d+\.\d\d?)")
_RANGE_SEP = re.compile(r"\b(?:through|to|until)\b|[-–—]|\.\.")
# Version numbers the era's pages print next to "CE" but that are not
# canonical ce_versions rows.  They are kept as printed labels; only
# membership in the recognised set decides whether a bare number in a
# statement is a CE version at all.
_PRINTED_CE_VERSIONS = {"1.01", "1.02", "1.9", "2.01", "2.1", "2.10",
                        "3.1", "4.10", "5.01"}
_CE_CONTEXT_RE = re.compile(
    r"(?:\bce(?:\s+\.net|\s+os)?|\bwince)\s*(\d+\.\d\d?)")
_DESKTOP_RE = re.compile(
    r"\bwindows\s+(?:nt|9[58]\b|2000|xp|vista|server|me\b)|\bnt\s+\d")
# Shell platforms whose release fixes the CE version underneath:
# Pocket PC 2000/2002 and Smartphone 2002 are CE 3.0 shells,
# Windows Mobile 2003 is CE 4.2.  A statement in shell terms is
# 'partial' by construction (the mapping is documented here, the
# print itself is preserved verbatim beside it).  Every qualified
# shell name denotes a distinct platform, so a statement naming
# several (a Platform list "H/PC Pro, Palm-size PC, Pocket PC",
# a range "Pocket PC 2000 through Windows Mobile 2003 SE") floors
# at the earliest of them.  Bare "Pocket PC" is the exception: it
# may merely re-describe a branded shell ("Windows Mobile 2003
# for Pocket PC" is one CE 4.2 shell, not two platforms), so it
# decides only when no qualified name matched.  Palm-size PC is
# deliberately unmapped: the brand spans CE 2.0 devices and the
# lists never need it (the shells beside it decide).
_SHELL_VERSIONS = (
    (re.compile(r"\bwindows mobile 2003\b"), "4.2"),
    (re.compile(r"\bpocket pc 200[02]\b"), "3.0"),
    (re.compile(r"\bsmartphone 2002\b"), "3.0"),
    (re.compile(r"\bwindows mobile 200[02]\b"), "3.0"),
    (re.compile(r"\bh/pc pro\b"), "2.11"),
)
_BARE_POCKET_PC_RE = re.compile(r"\bpocket pc\b")


def _recognised(version: str) -> bool:
    return version in CE_VERSIONS or version in _PRINTED_CE_VERSIONS


_NOT_SUPPORTED_CE_RE = re.compile(
    r"not supported (?:in|on|for) windows ce"
    r"|windows ce[^.]{0,40}not supported"
    r"|not (?:available|supported) (?:in|on) (?:windows )?ce\b")


_DOTNET_AVAILABLE_RE = re.compile(
    r"available in\b[^\n]*?versions?\s+"
    r"((?:\d+\.\d+)(?:\s*,\s*(?:and\s+)?\d+\.\d+|\s+and\s+\d+\.\d+)*)",
    re.I)
_DOTNET_SUPPORTED_RE = re.compile(r"supported in[:\s]*([\d.,\s]+)", re.I)


def parse_dotnet_versions(raw: str) -> tuple[str | None, str | None, str]:
    """A managed page's Version Information statement -> (min, max, status).

    The printed shapes are few: "Available in .NET Micro Framework
    version 2.5", "Available in the .NET Micro Framework versions
    3.0, 4.0, and 4.1." and "Supported in: 3.5, 3.0, 2.0" -- floors
    and lists whose minimum is the floor.  Numbers are framework
    versions, kept as printed; anything else stays unparsed with
    the statement verbatim in the observation (MFDeploy tool
    versions included: a deployment tool's release is not a
    framework availability bound).
    """
    if not raw:
        return None, None, "unparsed"
    m = _DOTNET_AVAILABLE_RE.search(raw)
    if m:
        nums = re.findall(r"\d+\.\d+", m.group(1))
        floor = min(nums, key=lambda v: tuple(int(x) for x in v.split(".")))
        return floor, None, "parsed"
    m = _DOTNET_SUPPORTED_RE.search(raw)
    if m:
        nums = re.findall(r"\d+\.\d+", m.group(1))
        if nums:
            floor = min(nums, key=lambda v: tuple(int(x) for x in v.split(".")))
            return floor, None, "parsed"
    return None, None, "unparsed"


def parse_availability(raw: str) -> tuple[str | None, str | None, str]:
    """Parse one printed availability statement -> (min, max, status).

    Only version numbers printed in a CE context count (``Windows
    CE 5.0``, ``CE .NET 4.0``, ``wince 2.0``).  In mixed lists
    (``Windows 95, Windows NT 4.0, Windows CE 2.12``) the desktop
    numbers must not become CE bounds.  A statement with no CE context
    at all counts its bare numbers only when it also names no desktop
    Windows (a Versions-column cell like ``2.10 and later``).
    Unrecognised statements stay verbatim with status 'unparsed'; a
    statement that mentions a version without a clear shape is
    'partial'.
    """
    if not raw:
        return None, None, "unparsed"
    text = raw.lower()
    if _NOT_SUPPORTED_CE_RE.search(text):
        # The statement positively denies CE support ("Not supported
        # in Windows CE"): that is a fact, not an absence of one.
        return None, None, "not_supported"

    found = [v for v in _CE_CONTEXT_RE.findall(text) if _recognised(v)]
    if not _DESKTOP_RE.search(text):
        # The statement names no desktop Windows, so bare numbers belong
        # to the CE context it does name ("CE 2.12 through .NET 4.1",
        # "CE OS 1.0 and 1.01") or to the CE column it was printed in.
        found = [v for v in _VERSION_RE.findall(text) if _recognised(v)]
    if not found:
        shells = [version for pattern, version in _SHELL_VERSIONS
                  if pattern.search(text)]
        if shells:
            return min(shells, key=CE_VERSIONS.index), None, "partial"
        if _BARE_POCKET_PC_RE.search(text):
            return "3.0", None, "partial"
        if re.search(r"\bce\b|wince", text):
            # CE asserted without a version bound ("Windows CE OS").
            return None, None, "partial"
        return None, None, "unparsed"

    def order(v: str) -> tuple[int, int]:
        major, minor = v.split(".", 1)
        return int(major), int(minor)

    first = found[0]
    if re.search(r"\band later\b|\bor later\b|\band above\b|\+", text):
        return first, None, "parsed"
    if re.search(r"\bonly\b", text) and len(found) == 1:
        return first, first, "parsed"
    if re.search(r"\b(?:and|or) earlier\b|\b(?:before|prior to)\b", text):
        return None, first, "partial"
    if len(found) >= 2 and _RANGE_SEP.search(text):
        lo, hi = sorted(found[:2], key=order)
        return lo, hi, "parsed"
    if len(found) == 1:
        return first, None, "partial"
    lo, hi = sorted(found, key=order)[0], sorted(found, key=order)[-1]
    return lo, hi, "partial"
