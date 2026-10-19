"""The isolated third-party references (comparison material only).

Two pinned snapshots under sources/ may be *compared* against the KB --
never used as evidence for a CE fact (schema: evidence FKs cannot point
at reference rows; validate.py checks the isolation):

* sources/w32api-cegcc/ -- the CeGCC w32api (public domain, pinned): the
  classic 32-bit Win32 headers adapted for Windows CE.  We record the
  names its include/ headers define (with the value as printed)
  and the export names of its lib/+libce/ .def lists.
* sources/dotnet-pinvoke/ -- the archived dotnet/pinvoke C# bindings
  (MIT): const/enum names with values as printed, and [DllImport] names.

STANDING PROHIBITION (2026-10, user order): Wine, ReactOS and MinGW-w64
are NOT Windows CE and must never be used as reference material here.
"""

from __future__ import annotations

import glob
import hashlib
import os
import re
import tarfile

from .common import ROOT, _fit_int64, parse_constant_value, symbol_key

W32API_GLOB = os.path.join(ROOT, "sources", "w32api-cegcc", "w32api-*-src.tar.gz")
PINVOKE_DIR = os.path.join(ROOT, "sources", "dotnet-pinvoke")

_REF_DEFINE_RE = re.compile(r"^\s*#\s*define\s+([A-Za-z_]\w*)(\([^)]*\))?\s*(.*?)\s*$")
_REF_COMMENT_RE = re.compile(r"/\*.*?\*/|//.*$")
_REF_ENUM_RE = re.compile(r"\benum\b[^{};]*\{([^{}]*)\}", re.S)
_REF_MEMBER_RE = re.compile(
    r"^\s*([A-Za-z_]\w*)\s*(?::\s*\d+\s*)?(?:=\s*([^,]+))?(?:,|$)")
_REF_GUARDISH = re.compile(r"_INC_[A-Z0-9_]+$|__?\S+_H(?:INCLUDED)?_+$")
_DEF_EXPORT_RE = re.compile(r"^([A-Za-z_@$?][\w@$?]*)")
_DEF_KEYWORDS = {"LIBRARY", "NAME", "EXPORTS", "SECTIONS", "VERSION",
                 "HEAPSIZE", "STACKSIZE", "DESCRIPTION"}


def _sha256_file(path: str) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def find_w32api() -> str | None:
    tarballs = sorted(glob.glob(W32API_GLOB))
    return tarballs[-1] if tarballs else None


def find_pinvoke() -> str | None:
    if not os.path.isdir(PINVOKE_DIR):
        return None
    archives = sorted(n for n in os.listdir(PINVOKE_DIR)
                      if n.endswith("-src.tar.gz"))
    return os.path.join(PINVOKE_DIR, archives[-1]) if archives else None


def _value_int(printed: str | None) -> int | None:
    if printed is None:
        return None
    parsed = parse_constant_value(printed.rstrip(",;"))
    return parsed[1] if parsed and parsed[0] == "integer" else None


def load_w32api(tarball: str):
    """Yield reference_names rows + return (source row, rows)."""
    rows = []
    rel = os.path.relpath(tarball, ROOT)
    with tarfile.open(tarball) as tar:
        for member in tar.getmembers():
            if not member.isfile():
                continue
            parts = member.name.split("/")
            if len(parts) < 2:
                continue
            handle = tar.extractfile(member)
            if handle is None:
                continue
            in_include = "include" in parts[:-1]
            in_lib = any(p in ("lib", "libce") for p in parts[:-1])
            if in_include and parts[-1].lower().endswith((".h", ".hpp", ".hxx", ".hh")):
                text = handle.read().decode("utf-8", "replace")
                header = parts[-1].lower()
                for lineno, line in enumerate(text.splitlines(), 1):
                    m = _REF_DEFINE_RE.match(line)
                    if not m:
                        continue
                    name, params, value = m.group(1), m.group(2), m.group(3)
                    if params:              # function-like macro
                        continue
                    if name.startswith("__") or _REF_GUARDISH.match(name):
                        continue
                    printed = _REF_COMMENT_RE.sub("", value).strip() or None
                    rows.append(("w32api-cegcc", "define", name,
                                 symbol_key(name), header, None, printed,
                                 _value_int(printed),
                                 f"{member.name}:{lineno}"))
                for em in _REF_ENUM_RE.finditer(text):
                    base = text.count("\n", 0, em.start(1)) + 1
                    for off, piece in enumerate(em.group(1).splitlines()):
                        m = _REF_MEMBER_RE.match(
                            piece.split("/*")[0].split("//")[0])
                        if not m:
                            continue
                        name = m.group(1)
                        if name.startswith("__"):
                            continue
                        printed = (m.group(2) or "").strip() or None
                        rows.append(("w32api-cegcc", "define", name,
                                     symbol_key(name), header, None, printed,
                                     _value_int(printed),
                                     f"{member.name}:{base + off}"))
            elif in_lib and parts[-1].lower().endswith(".def"):
                text = handle.read().decode("utf-8", "replace")
                module = parts[-1][:-4].lower()
                in_exports = False
                for line in text.splitlines():
                    s = line.strip()
                    if not s or s.startswith(";"):
                        continue
                    head = s.split()[0].upper()
                    if head == "EXPORTS":
                        in_exports = True
                        continue
                    if head in _DEF_KEYWORDS:
                        in_exports = False
                        continue
                    if not in_exports:
                        continue
                    m = _DEF_EXPORT_RE.match(s)
                    if m:
                        name = m.group(1)
                        rows.append(("w32api-cegcc", "export", name,
                                     symbol_key(name), None, module, None,
                                     None, member.name))
    source = ("w32api-cegcc",
              "CeGCC w32api (public domain; pinned; comparison only)",
              rel, _sha256_file(tarball))
    return source, rows


_CONST_RE = re.compile(
    r"^\s*(?:public|internal)\s+const\s+"
    r"(?P<type>[A-Za-z_][\w.<>,\[\] ]*?)\s+"
    r"(?P<name>[A-Za-z_]\w*)\s*=\s*(?P<value>.+?)\s*;")
_ENUM_BLOCK_RE = re.compile(
    r"(?:public|internal)\s+enum\s+(?P<enum>[A-Za-z_]\w*)"
    r"(?:\s*:\s*[A-Za-z_]\w*)?\s*\{(?P<body>.*?)\}", re.S)
_ENUM_MEMBER_RE = re.compile(
    r"^\s*(?P<name>[A-Za-z_]\w*)\s*=\s*(?P<value>.+?)(?:[,}])?\s*$")
_DLLIMPORT_RE = re.compile(r"^\s*\[DllImport\((?P<args>.*)\)\]")
_ENTRYPOINT_RE = re.compile(r"EntryPoint\s*=\s*\"(?P<entry>[^\"]+)\"")
_DLL_STRING_RE = re.compile(r"^\s*\"(?P<dll>[^\"]+)\"")
_SIGNATURE_RE = re.compile(
    r"^\s*public\s+(?:static\s+|unsafe\s+)+extern\s+"
    r"[\w.<>,\[\]\s*]+?\s+(?P<name>[A-Za-z_]\w*)\s*\(")
_CAST_RE = re.compile(
    r"^(?:unchecked\s*\(|(?:\(\s*(?:u?int(?:\d+)?|u?long|u?short|byte|sbyte)\s*\)))\s*(.+)$")
_NOT_A_LIBRARY = {"CodeGenerationAttributes", "CodeGeneration"}
_MAX_DEPTH = 24


def _strip_cast(value: str) -> str:
    expr = value.strip()
    while True:
        m = _CAST_RE.match(expr)
        if not m:
            return expr
        inner = m.group(1)
        while inner and expr.startswith("unchecked(") and \
                inner.count("(") < inner.count(")"):
            inner = inner[:-1]
        expr = inner.strip()


def _safe_eval(node):
    import ast
    if isinstance(node, ast.Constant):
        if not isinstance(node.value, (int, bool)):
            raise ValueError
        return int(node.value)
    if isinstance(node, ast.BinOp):
        left, right = _safe_eval(node.left), _safe_eval(node.right)
        op = node.op
        if isinstance(op, ast.Add):
            return left + right
        if isinstance(op, ast.Sub):
            return left - right
        if isinstance(op, ast.Mult):
            return left * right
        if isinstance(op, (ast.Div, ast.FloorDiv)):
            return left // right
        if isinstance(op, ast.Mod):
            return left % right
        if isinstance(op, ast.LShift):
            return left << min(right, 63)
        if isinstance(op, ast.RShift):
            return left >> min(right, 63)
        if isinstance(op, ast.BitOr):
            return left | right
        if isinstance(op, ast.BitAnd):
            return left & right
        if isinstance(op, ast.BitXor):
            return left ^ right
        raise ValueError
    if isinstance(node, ast.UnaryOp):
        operand = _safe_eval(node.operand)
        if isinstance(node.op, ast.USub):
            return -operand
        if isinstance(node.op, ast.UAdd):
            return operand
        if isinstance(node.op, ast.Invert):
            return ~operand
    raise ValueError


def _eval_value(value_text, env, _depth=0):
    """Best-effort numeric fold of a printed C# expression (comparison only).

    Ported from the old tools/pinvoke_extract.py: only literal arithmetic
    over numeric literals and same-file names is folded; the printed text
    is always what the row quotes.
    """
    import ast
    if _depth > _MAX_DEPTH:
        return None
    expr = _strip_cast(value_text)
    while expr.startswith("(") and expr.endswith(")"):
        depth, cut = 0, False
        for i, ch in enumerate(expr):
            if ch == "(":
                depth += 1
            elif ch == ")":
                depth -= 1
                if depth == 0 and i != len(expr) - 1:
                    cut = True
                    break
        if cut:
            break
        expr = expr[1:-1].strip()

    def substitute(match):
        name = match.group(0)
        if name in ("true", "false"):
            raise ValueError
        target = env.get(name)
        if target is None:
            raise ValueError
        folded = _eval_value(target, env, _depth + 1) \
            if isinstance(target, str) else target
        if folded is None:
            raise ValueError
        return f"({folded})"

    try:
        replaced = re.sub(r"\b(?!0[xX])[A-Za-z_]\w*\b", substitute, expr)
        if not re.fullmatch(r"[0-9xXa-fA-FuUlL\s()+\-*/%<>&|^~]+", replaced):
            return None
        replaced = re.sub(r"(?i)(\d+)[uUlL]+\b", r"\1", replaced)
        return _safe_eval(ast.parse(replaced, mode="eval").body)
    except (ValueError, SyntaxError, RecursionError, TypeError,
            ZeroDivisionError):
        return None


def _eol(text: str) -> str:
    return re.sub(r"//.*$", "", text).strip()


def load_pinvoke(tarball: str):
    rows: list[list] = []
    rel = os.path.relpath(tarball, ROOT)

    with tarfile.open(tarball, "r:gz") as tar:
        for info in tar.getmembers():
            if not info.isfile() or not info.name.endswith(".cs"):
                continue
            member = info.name
            parts = member.split("/")
            if "src" not in parts:
                continue
            src_at = parts.index("src")
            if src_at + 1 >= len(parts):
                continue
            module = parts[src_at + 1]
            if not module or module in _NOT_A_LIBRARY:
                continue
            handle = tar.extractfile(info)
            if handle is None:
                continue
            text = handle.read().decode("utf-8", "replace")
            lines = text.splitlines()
            line_starts = [i for i, ch in enumerate(text)
                           if i == 0 or text[i - 1] == "\n"]

            def line_no(offset, _starts=line_starts):
                lo, hi = 0, len(_starts)
                while lo + 1 < hi:
                    mid = (lo + hi) // 2
                    if _starts[mid] <= offset:
                        lo = mid
                    else:
                        hi = mid
                return lo + 1

            env: dict[str, str] = {}
            const_rows: list[int] = []
            in_enum_spans = []
            for block in _ENUM_BLOCK_RE.finditer(text):
                in_enum_spans.append((block.start(), block.end()))
                cursor = block.start("body")
                for body_line in block.group("body").splitlines(keepends=True):
                    m = _ENUM_MEMBER_RE.match(body_line)
                    if m:
                        printed = _eol(m.group("value"))
                        env[m.group("name")] = printed
                        rows.append(["dotnet-pinvoke", "const", m.group("name"),
                                     symbol_key(m.group("name")), None, module,
                                     printed, None,
                                     f"{member}:{line_no(cursor)}"])
                        const_rows.append(len(rows) - 1)
                    cursor += len(body_line)

            def in_enum(line_number, _starts=line_starts, _spans=in_enum_spans):
                offset = _starts[line_number - 1] if line_number - 1 < len(_starts) else 0
                return any(a <= offset < b for a, b in _spans)

            for i, line in enumerate(lines):
                lineno = i + 1
                m = _CONST_RE.match(line)
                if m:
                    if not in_enum(lineno):
                        printed = _eol(m.group("value"))
                        env[m.group("name")] = printed
                        rows.append(["dotnet-pinvoke", "const", m.group("name"),
                                     symbol_key(m.group("name")), None, module,
                                     printed, None, f"{member}:{lineno}"])
                        const_rows.append(len(rows) - 1)
                    continue
                m = _DLLIMPORT_RE.match(line)
                if m:
                    args = m.group("args") or ""
                    dll_m = _DLL_STRING_RE.match(args)
                    dll = dll_m.group("dll") if dll_m else module
                    entry_m = _ENTRYPOINT_RE.search(args)
                    for follow in lines[i + 1:]:
                        sig = _SIGNATURE_RE.match(follow)
                        if sig:
                            name = (entry_m.group("entry") if entry_m
                                    else sig.group("name"))
                            rows.append(
                                ["dotnet-pinvoke", "dllimport", name,
                                 symbol_key(name), None,
                                 dll.lower().removesuffix(".dll"),
                                 None, None, f"{member}:{lineno}"])
                            break
                        stripped = follow.strip()
                        if stripped and not stripped.startswith(("[", "//")):
                            break
            for idx in const_rows:
                folded = _eval_value(rows[idx][6], env)
                rows[idx][7] = _fit_int64(folded) if folded is not None else None
    source = ("dotnet-pinvoke",
              "dotnet/pinvoke C# bindings (MIT; archived; comparison only)",
              rel, _sha256_file(tarball))
    return source, [tuple(r) for r in rows]


def load_all():
    """[(source_row, [reference_names rows...]), ...] sorted for determinism."""
    out = []
    w = find_w32api()
    if w:
        out.append(load_w32api(w))
    p = find_pinvoke()
    if p:
        out.append(load_pinvoke(p))
    for _source, rows in out:
        rows.sort(key=lambda r: (r[0], r[1], r[8], r[2]))
    return out
