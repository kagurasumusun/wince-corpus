#!/usr/bin/env python3
"""Quality filters for extra macros / declarations pulled from corpus pages.

The extra extractors scan whole pages, so they pick up sample code, HTML
artifacts, incomplete continuations and demo identifiers.  The generator
and the extractors share these predicates so junk never reaches a fragment.
"""

from __future__ import annotations

import re
import sys
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import html_clean  # noqa: E402

# Sample / placeholder identifiers.
_SAMPLE_NAME = re.compile(
    r"^(MY|YOUR|DEMO|SAMPLE|TEST|FOO|BAR|BAZ|TODO|XXX|TMP|TEMP|"
    r"EXAMPLE|DUMMY|PLACEHOLDER)_|"
    r"(MYNEWMESSAGE|CONSTANT_NAME|BOTTESINI|myEnum)",
    re.I,
)

_GUARD_NAME = re.compile(
    r"^(_+)?[A-Z][A-Z0-9]*(_H|_HPP|_INCLUDED|_INTERNAL)(_+)?$|"
    r"_INCLUDED_|_INTERNAL_FILE",
    re.I,
)

_API_CONST = re.compile(r"^[A-Z][A-Z0-9]*(_[A-Z0-9]+)+$")
_API_SINGLE = re.compile(r"^[A-Z][A-Z0-9]{1,30}$")

_HTML_LEFTOVER = re.compile(
    r"</?\s*[a-zA-Z][^>]*>|&(?:lt|gt|amp|quot|nbsp|#\d+);|</PRE>|</pre>|<PRE",
    re.I,
)

_INCOMPLETE = re.compile(r"\\\s*$")

# A C declaration / prototype / typedef, not a usage snippet.
_DECL_START = re.compile(
    r"^\s*(typedef|struct|enum|union|interface|class|template|"
    r"#\s*define|#\s*pragma|"
    r"(?:(?:const|volatile|static|extern|inline|virtual|unsigned|signed|"
    r"WINAPI|STDAPI|CALLBACK|APIENTRY|FAR|NEAR|PASCAL|CDECL|__cdecl|"
    r"__stdcall|__fastcall)\s+)*"
    r"(?:[A-Za-z_]\w*::)*[A-Za-z_]\w*[\s\*]+)",
    re.I,
)
_ASSIGNMENT = re.compile(r"^\s*[A-Za-z_]\w*\s*=")
_CALL_NO_TYPE = re.compile(r"^\s*[A-Za-z_]\w*\s*\([^;]*\)\s*;?\s*$")


def strip_markup(text: str) -> str:
    if not text:
        return ""
    if "<" in text or "&" in text:
        text = html_clean.clean_html(text)
    text = text.replace("\xa0", " ")
    text = re.sub(r"[ \t]+", " ", text)
    return text.strip()


def is_sample_name(name: str) -> bool:
    if not name:
        return True
    if _SAMPLE_NAME.search(name):
        return True
    if _GUARD_NAME.match(name):
        return True
    if len(name) > 80 or len(name) < 2:
        return True
    if any(c in name for c in "<>&\"'`"):
        return True
    return False


def is_language_runtime_constant(name: str) -> bool:
    """eVB / VBCE / ADO automation constants -- no C header."""
    if not name:
        return False
    if name.startswith(("vb", "ad")) and len(name) > 2 and name[2:3].isupper():
        return True
    if name.startswith("vb") and name[2:].isalpha():
        return True
    return False


def is_windows_style_name(name: str, function_like: bool = False) -> bool:
    if not name or is_sample_name(name):
        return False
    if function_like:
        # ARRAYSIZE, MAKEINTRESOURCE, LOWORD, HIWORD, RGB, TEXT, ...
        if re.match(r"^[A-Z][A-Z0-9_]*$", name):
            return True
        if re.match(r"^__[A-Za-z]", name):
            return True
        return False
    if _API_CONST.match(name) or name in {
        "INFINITE", "MAX_PATH", "TRUE", "FALSE", "NULL", "S_OK", "S_FALSE",
        "NOERROR", "CALLBACK", "WINAPI", "APIENTRY", "FAR", "NEAR", "PASCAL",
        "INVALID_HANDLE_VALUE", "INVALID_SOCKET", "SOCKET_ERROR",
    }:
        return True
    if _API_SINGLE.match(name) and len(name) >= 3:
        return True
    return False


def sanitize_define_line(definition: str, name: str = "", args: str = "",
                         value: str = "") -> str | None:
    """Return a clean `#define` line, or None if the macro is junk."""
    definition = strip_markup(definition or "")
    value = strip_markup(value or "")
    if _HTML_LEFTOVER.search(definition) or _HTML_LEFTOVER.search(value):
        return None
    if not name or is_sample_name(name):
        return None
    function_like = bool(args) or (
        definition.startswith("#define") and re.search(
            r"#define\s+\w+\s*\(", definition)
    )
    if not is_windows_style_name(name, function_like=function_like):
        return None
    # Incomplete continuation with nothing after the backslash.
    if value in ("\\", "\\\\") or definition.rstrip().endswith("\\") and \
            len(definition) < len(name) + 20:
        return None
    if _INCOMPLETE.search(value) and "{" in value and "}" not in value:
        return None
    if not definition:
        if function_like:
            definition = f"#define {name}({args}) {value}".rstrip()
        else:
            definition = f"#define {name} {value}".rstrip()
    # Drop macros whose replacement is still markup / preprocessor junk.
    body = definition.split(None, 2)
    if len(body) >= 3 and any(tok in body[2] for tok in
                              ("#include", "</", "/* Provide your")):
        return None
    if len(definition) > 500:
        return None
    # Two #define tokens glued together (parser ate a line break).
    if definition.count("#define") > 1:
        return None
    return definition


_SAMPLE_PATH = re.compile(
    r"(?i)(?:^|/)(?:sample|examples?|demo|walkthrough|tutorial|howto|how-to)(?:/|_)"
    r"|_Sample_|Sample_Application|Code_Sample|NLSDemo"
)


def is_sample_source(path: str) -> bool:
    return bool(path) and bool(_SAMPLE_PATH.search(path.replace("\\", "/")))


_GENERIC_MACRO = re.compile(
    r"^(BUFFER|BLOCK|BUTTON|CACHE|DEFAULT|MAX|MIN|SIZE|LEN|COUNT|NUM|"
    r"WIDTH|HEIGHT|OFFSET|CLASSNAME|CARET|DEPTH|DEADLINE|COMM)(_|$)"
)
_NUMERIC_VALUE = re.compile(r"^(0x[0-9A-Fa-f]+|-?\d+)[uUlL]*$")


def is_keepable_unassigned_macro(name: str, value: str, definition: str) -> bool:
    """Leftover ExtraDefines: only numbered API-style names, no sample glue."""
    if not _API_CONST.match(name or ""):
        return False
    if _GENERIC_MACRO.match(name):
        return False
    val = (value or "").strip().split()[0] if value else ""
    if not _NUMERIC_VALUE.match(val):
        return False
    if any(tok in (definition or "") for tok in
           ('"', "'", "cyAveChar", "cxAveChar", "sizeof")):
        return False
    return True


def looks_like_c_declaration(text: str) -> bool:
    """True if *text* is a prototype / typedef / struct, not a usage snippet."""
    text = strip_markup(text or "")
    if not text or len(text) < 8:
        return False
    if _HTML_LEFTOVER.search(text):
        text = strip_markup(text)
    first = text.lstrip()
    if _ASSIGNMENT.match(first):
        return False
    if first.startswith(("if ", "if(", "for ", "for(", "while ", "while(",
                         "switch ", "return ", "else", "case ", "goto ",
                         "printf", "TRACE", "DEBUGMSG", "ASSERT", "NKDbg")):
        return False
    if first.startswith(("#define", "#pragma", "typedef", "struct", "enum",
                         "union", "interface", "class")):
        return True
    if re.search(r"\b(WINAPI|STDAPI|CALLBACK|APIENTRY|HRESULT|BOOL|DWORD|"
                 r"HANDLE|HWND|LRESULT|UINT|INT|LONG|void|VOID|int|char|"
                 r"WCHAR|TCHAR|LPWSTR|LPCWSTR|LPTSTR|LPCTSTR)\b", first):
        if "(" in first:
            return True
        if first.strip().endswith(";") and "typedef" in first:
            return True
    # "Type Name(args);" with a type token before the name.
    if re.search(r"\w+\s+\*?\s*\w+\s*\([^;]*\)\s*;", first):
        return True
    # collapsed "BOOLCreateFile(...);"
    if re.search(r"^[A-Za-z_]\w+\s*\([^;]*\)\s*;", first) and \
            re.match(r"^(BOOL|DWORD|HANDLE|HWND|HRESULT|LRESULT|UINT|INT|"
                     r"LONG|void|VOID|int|WINAPI|STDAPI|APIENTRY)", first):
        return True
    return False


def sanitize_declaration(text: str, name: str = "",
                         dtype: str = "") -> str | None:
    text = strip_markup(text or "")
    if not text:
        return None
    if name and is_sample_name(name):
        return None
    if dtype == "function" and name and name[:1].islower() and \
            not name.startswith(("wave", "midi", "mixer", "time", "keybd",
                                 "mouse", "snd")):
        # likely a local / sample identifier
        if "_" not in name:
            return None
    if not looks_like_c_declaration(text) and dtype != "typedef":
        return None
    if dtype == "typedef" and "typedef" not in text:
        return None
    cleaned = html_clean.clean_declaration(text) if hasattr(
        html_clean, "clean_declaration") else text
    cleaned = cleaned.strip()
    if not cleaned or _HTML_LEFTOVER.search(cleaned):
        return None
    if len(cleaned) > 8000:
        return None
    return cleaned


def pick_best_define(rows):
    """Among several extra-define rows for one name, keep the cleanest."""
    best = None
    best_score = -1
    for row in rows:
        defn = sanitize_define_line(
            row.get("definition") or "",
            row.get("name") or "",
            row.get("args") or "",
            row.get("value") or "",
        )
        if not defn:
            continue
        score = len(defn)
        if defn.rstrip().endswith("\\"):
            score -= 100
        if score > best_score:
            best_score = score
            best = dict(row)
            best["definition"] = defn
    return best
