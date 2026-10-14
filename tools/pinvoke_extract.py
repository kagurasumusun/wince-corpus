#!/usr/bin/env python3
"""The dotnet/pinvoke weak-auxiliary extractor.

Reads the pinned snapshot
``sources/dotnet-pinvoke/pinvoke-<sha>-src.tar.gz`` (see its
``PROVENANCE.md``; an archived github.com/dotnet/pmirror project -- the
.NET Foundation's community-maintained re-formatting of the classic
pinvoke.net P/Invoke reference) and yields the two isolated aux record
families written to ``knowledge/aux/``:

* ``pinvoke_api``       -- one record per ``[DllImport]`` entry
* ``pinvoke_constant``  -- one record per ``public const`` field or
  ``public enum`` member value the snapshot prints

The snapshot is kept as a ``sources/`` tarball (PROVENANCE) and is NOT
part of ``corpus/``: it is source code under the MIT license, and the
corpus stays documentation-only.  Everything here is the weak auxiliary
layer of ``docs/COLLECTION-POLICY.md``: records quote verbatim lines,
carry the module (the Windows library the file is filed under), and the
``header`` field is DERIVED from the module
(page_parse.pinvoke_header_from_module) and used only at the weakest
constant/header linkage rank, marking it, and never to establish a value.
"""

import ast
import hashlib
import json
import os
import re
import tarfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
SOURCES = os.path.join(ROOT, "sources", "dotnet-pinvoke")

# ---------------------------------------------------------------------------
# The .cs text -> values.  Names are as printed (no folding: the weak layer
# compares against the documented names as the documentation prints them).
# ---------------------------------------------------------------------------

_CONST_RE = re.compile(
    r"^\s*(?:public|internal)\s+const\s+"
    r"(?P<type>[A-Za-z_][\w.<>,\[\] ]*?)\s+"
    r"(?P<name>[A-Za-z_]\w*)\s*=\s*(?P<value>.+?)\s*;")
_ENUM_OPEN_RE = re.compile(
    r"^\s*(?:public|internal)\s+enum\s+(?P<enum>[A-Za-z_]\w*)"
    r"(?:\s*:\s*[A-Za-z_]\w*)?\s*$")
_ENUM_MEMBER_RE = re.compile(
    r"^\s*(?P<name>[A-Za-z_]\w*)\s*=\s*(?P<value>.+?)(?:[,}])?\s*$")
_DLLIMPORT_RE = re.compile(r"^\s*\[DllImport\((?P<args>.*)\)\]")
_SIGNATURE_RE = re.compile(
    r"^\s*public\s+(?:static\s+|unsafe\s+)+extern\s+"
    r"[\w.<>,\[\]\s*]+?\s+(?P<name>[A-Za-z_]\w*)\s*\(")
_MAX_DEPTH = 24


def recent_archive(sources=SOURCES):
    """The pinned snapshot tarball, or None when never fetched."""
    if not os.path.isdir(sources):
        return None
    archives = sorted(name for name in os.listdir(sources)
                      if name.endswith("-src.tar.gz"))
    if not archives:
        return None
    return os.path.join(sources, archives[-1])


def read_cs_archive(archive):
    """member path -> [(line number, text line)]; lazily decoded once."""
    members = {}
    with tarfile.open(archive, "r:gz") as tar:
        for info in tar:
            if not info.isfile() or not info.name.endswith(".cs"):
                continue
            rel = info.name
            if "/" in rel:
                rel = rel.split("/", 1)[1]  # drop the "pinvoke-main/" root
            if not rel.startswith("src/"):
                continue
            extracted = tar.extractfile(info)
            if extracted is None:
                continue
            text = extracted.read().decode("utf-8", "replace")
            members[rel] = list(enumerate(text.splitlines(), start=1))
    return members


def _strip_cast_prefix(value):
    """`unchecked((int)0x80000000)` -> `0x80000000` (value as printed)."""
    expr = value.strip()
    while True:
        match = re.match(
            r"^(?:unchecked\s*\(|(?:\(\s*(?:u?int(?:\d+)?|u?long|u?short|"
            r"byte|sbyte)\s*\)))\s*(.+)$", expr)
        if not match:
            break
        inner = match.group(1)
        # unchecked( ... ) keeps the closing paren -- balance it away.
        while inner and expr.startswith("unchecked(") and \
                inner.count("(") < inner.count(")"):
            inner = inner[:-1]
        expr = inner.strip()
    return expr


def value_of(value_text, env, _depth=0):
    """Best-effort numeric evaluation of the printed expression.

    Only literal arithmetic over numeric literals and same-library names
    is folded (hex/dec ints, + - * / % << >> | & ^ ~, parentheses).  A
    value that spells anything else stays ``None`` -- and either way the
    record keeps the printed text; a community value is review material
    only, never a value that lands in a generated header.
    """
    if _depth > _MAX_DEPTH:
        return None
    expr = _strip_cast_prefix(value_text)
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
        folded = value_of(target, env, _depth + 1) if \
            isinstance(target, str) else target
        if folded is None:
            raise ValueError
        return f"({folded})"

    try:
        replaced = re.sub(r"\b(?!0[xX])[A-Za-z_]\w*\b", substitute, expr)
        if not re.fullmatch(r"[0-9xXa-fA-FuUlL\s()+\-*/%<>&|^~]+",
                            replaced):
            return None
        replaced = re.sub(r"(?i)(\d+)[uUlL]+\b", r"\1", replaced)
        tree = ast.parse(replaced, mode="eval")
        return _safe_eval(tree.body)
    except (ValueError, SyntaxError, RecursionError, TypeError,
            ZeroDivisionError):
        return None


def _safe_eval(node):
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


def _eol(text):
    """A verbatim line trimmed of its trailing comment, for the quote."""
    line = re.sub(r"//.*$", "", text).rstrip()
    return line.strip()


_ENUM_BLOCK_RE = re.compile(
    r"(?:public|internal)\s+enum\s+(?P<enum>[A-Za-z_]\w*)"
    r"(?:\s*:\s*[A-Za-z_]\w*)?\s*\{(?P<body>.*?)\}", re.S)


# Directories of the snapshot that are NOT Windows libraries (project
# support only): no row may pretend to be a Windows module fact.
_NOT_A_LIBRARY = {"CodeGenerationAttributes", "CodeGeneration"}


def parse_archive(archive):
    """Yield (apis, constants) aux records for the whole snapshot."""
    archive = os.path.abspath(archive)   # so the recorded path is stable
    members = read_cs_archive(archive)
    apis, constants = [], []
    archive_rel = os.path.relpath(archive, ROOT)
    for member, lines in sorted(members.items()):
        module = member.split("/")[1] if "/" in member else ""
        if not module or module in _NOT_A_LIBRARY:
            continue  # build props and other non-library files
        page_id = "dotnet-pinvoke:" + member
        file_text = "\n".join(text for _n, text in lines)
        # line number of each character offset, for quotes on spans.
        line_starts = [i for i, ch in enumerate(file_text)
                       if i == 0 or file_text[i - 1] == "\n"]

        def line_no(offset):
            lo, hi = 0, len(line_starts)
            while lo + 1 < hi:
                mid = (lo + hi) // 2
                if line_starts[mid] <= offset:
                    lo = mid
                else:
                    hi = mid
            return lo + 1

        in_enum_spans = []
        for block in _ENUM_BLOCK_RE.finditer(file_text):
            enum_name = block.group("enum")
            in_enum_spans.append((block.start(), block.end()))
            cursor = block.start("body")
            for body_line in block.group("body").splitlines(
                    keepends=True):
                match = _ENUM_MEMBER_RE.match(body_line)
                if match:
                    name = match.group("name")
                    value_text = _eol(match.group("value"))
                    constants.append(_constant_record(
                        archive_rel, module, member, line_no(cursor),
                        name, value_text, "pinvoke enum member",
                        enum_name, page_id))
                cursor += len(body_line)

        def in_enum(line_number):
            offset = line_starts[line_number - 1]
            return any(start <= offset < end
                       for start, end in in_enum_spans)

        for i, (number, text) in enumerate(lines):
            stripped = text.strip()
            match = _CONST_RE.match(text)
            if match:
                name = match.group("name")
                value_text = _eol(match.group("value"))
                constants.append(_constant_record(
                    archive_rel, module, member, number,
                    name, value_text, "pinvoke const", None, page_id))
                continue
            dimp = _DLLIMPORT_RE.match(text)
            if dimp:
                for follow_no, follow in lines[i + 1:]:
                    follow_stripped = follow.strip()
                    signature = _SIGNATURE_RE.match(follow)
                    if signature:
                        if not in_enum(follow_no):
                            apis.append(_api_record(
                                archive_rel, module, member, number,
                                follow_no, signature.group("name"),
                                stripped, follow_stripped, page_id))
                        break
                    if (follow_stripped and
                            not follow_stripped.startswith(("[", "//"))):
                        break  # the attribute applies to something else
    # the numeric fold resolves references INSIDE one file, which is how
    # the snapshot expresses flags unions (STATUS_WAIT_0 + 0 ...).
    env_by_member = {}
    for record in constants:
        env_by_member.setdefault(
            record["source"]["archive_member"], {})[
            record["name"]] = record["value"]
    for record in constants:
        record["value_eval"] = value_of(
            record["value"],
            env_by_member[record["source"]["archive_member"]])
    apis.sort(key=lambda r: (r["name"].lower(), r["module"]))
    constants.sort(key=lambda r: (r["name"].lower(), r["module"]))
    return apis, constants


def _constant_record(archive_rel, module, member, line_number,
                     name, value_text, table, enum, page_id):
    key = hashlib.sha1(
        f"constant\x00{member}\x00{line_number}\x00{name}"
        .encode("utf-8")).hexdigest()[:12]
    record = {
        "id": "p" + key,
        "name": name,
        "value": value_text,
        "decimal": None,
        "module": module,
        "header": module and _header_of(module) or "",
        "table": table,
        "row": f"{name} = {value_text}",
        "page_id": page_id,
        "layer": "pinvoke",
        "license": "dotnet-pinvoke-mit",
        "source": {
            "path": archive_rel,
            "site": "dotnet-pinvoke",
            "set": "sources/dotnet-pinvoke",
            "archive_member": member,
            "line": line_number,
        },
    }
    if enum:
        record["enum"] = enum
    return record


def _api_record(archive_rel, module, member, attr_line, sig_line,
                name, attr_text, sig_text, page_id):
    key = hashlib.sha1(
        f"api\x00{member}\x00{sig_line}\x00{name}"
        .encode("utf-8")).hexdigest()[:12]
    return {
        "id": "p" + key,
        "name": name,
        "module": module,
        "dll": "",
        "header": module and _header_of(module) or "",
        "evidence": f"{attr_text} {sig_text}",
        "page_id": page_id,
        "layer": "pinvoke",
        "license": "dotnet-pinvoke-mit",
        "source": {
            "path": archive_rel,
            "site": "dotnet-pinvoke",
            "set": "sources/dotnet-pinvoke",
            "archive_member": member,
            "line": sig_line,
        },
        "quote": f"{attr_text}\n{sig_text}",
        "attribute_line": attr_line,
    }


def _header_of(module):
    import page_parse  # the shared weak module->header map
    return page_parse.pinvoke_header_from_module(module)


def jsonl_write(path, records, compress=True):
    import gzip as _gzip
    opener = _gzip.open if compress else open
    with opener(path, "wt", encoding="utf-8") as fh:
        for record in records:
            fh.write(json.dumps(record, ensure_ascii=False,
                                sort_keys=True) + "\n")


def main():
    import argparse
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--archive", default=None,
                        help="the pinned snapshot tarball "
                             "(default: the newest in sources/dotnet-pinvoke)")
    parser.add_argument("--out", default=os.path.join(
        ROOT, "knowledge", "aux"))
    parser.add_argument("--plain", action="store_true",
                        help="write the .jsonl files uncompressed")
    args = parser.parse_args()
    archive = args.archive or recent_archive()
    if archive is None:
        parser.exit("no snapshot under sources/dotnet-pinvoke/ -- "
                    "fetch it first (see its PROVENANCE.md)")
    apis, constants = parse_archive(archive)
    os.makedirs(args.out, exist_ok=True)
    compress = not args.plain
    jsonl_write(os.path.join(args.out, "pinvoke-apis.jsonl" +
                             ("" if args.plain else ".gz")),
                apis, compress)
    jsonl_write(os.path.join(args.out, "pinvoke-constants.jsonl" +
                             ("" if args.plain else ".gz")),
                constants, compress)
    print(f"aux: {len(apis):,} API rows, {len(constants):,} constant rows "
          f"(from {os.path.basename(archive)})")


if __name__ == "__main__":
    main()
