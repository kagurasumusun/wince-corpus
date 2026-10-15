#!/usr/bin/env python3
"""tools/audit-value-misses.py -- "存在しているのに抽出されていない" detector.

For every constant family the review names (queues/family-prefixes-2026-10.txt),
walk the whole collected corpus row by row and report (name, value) pairs a
page PRINTS that knowledge/kb/constants.tsv does not hold.  Each row is a
review lead -- a table row that claims a value beside a constant name -- so
the extraction can be fixed shape by shape ("雑に放置した情報は情報の欠落").

PAIRING IS CELL-AWARE: a name pairs only with a CELL whose whole text is a
value (`0x00010000L`, `34`, `RASBASE+1`) or with the value tokens of a
"name value" single cell.  Numbers inside description prose never pair --
that noise ("see page 34") is what a careless scan reports as values.

The value is quoted exactly as the page prints it.  Nothing here is
inferred or computed: a lead is only ever a PRINTED pair.

Output: knowledge/reports/value-miss-candidates.tsv
  family <TAB> name <TAB> printed_value <TAB> page <TAB> row_quote

    python3 tools/audit-value-misses.py [--limit N]
"""

import argparse
import collections
import html
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
KB = os.path.join(ROOT, "knowledge", "kb")
REPORTS = os.path.join(ROOT, "knowledge", "reports")
CORPUS = os.path.join(ROOT, "corpus")

# a pure value cell: hex/dec literal or a printed expression like RASBASE+12
VALUE_CELL_RE = re.compile(
    r"^(?:"
    r"0x[0-9A-Fa-f]{1,16}[LlUu]{0,3}"
    r"|\d{1,10}"
    r"|[A-Z][A-Z0-9_]{1,40}\s*[+-]\s*\d{1,6}"
    r")$")
VALUE_TOKEN_RE = re.compile(
    r"0x[0-9A-Fa-f]{1,16}[LlUu]{0,3}"
    r"|[A-Z][A-Z0-9_]{1,40}\s*[+-]\s*\d{1,6}"
    r"|\b\d{1,10}\b")
ROW_HTML_RE = re.compile(r"<tr[^>]*>(.*?)</tr>", re.S | re.I)
CELL_HTML_RE = re.compile(r"<t[dh][^>]*>(.*?)</t[dh]>", re.S | re.I)
TAG_RE = re.compile(r"<[^>]+>")


def load_prefixes():
    path = os.path.join(ROOT, "queues", "family-prefixes-2026-10.txt")
    out = []
    with open(path, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if line.endswith("_") and line.replace("_", "").isalnum():
                out.append(line)
    return sorted(set(out))


def name_regex(prefixes):
    body = "|".join(re.escape(p) for p in prefixes)
    return re.compile(r"\b(?:" + body + r")[A-Z0-9_]{1,48}\b")


def known_values():
    """name -> set of printed values, and the set of all known names."""
    values = collections.defaultdict(set)
    names = set()
    path = os.path.join(KB, "constants.tsv")
    with open(path, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        ni, vi = header.index("name"), header.index("value")
        di = header.index("decimal") if "decimal" in header else None
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            if len(cells) <= max(ni, vi):
                continue
            values[cells[ni]].add(cells[vi].strip())
            if di is not None and len(cells) > di and cells[di].strip():
                # the decimal twin of a hex value is the same value
                values[cells[ni]].add(cells[di].strip())
            names.add(cells[ni])
    path = os.path.join(KB, "constant-names.tsv")
    if os.path.exists(path):
        with open(path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            ni = header.index("name")
            for line in fh:
                cells = line.rstrip("\n").split("\t")
                if len(cells) > ni:
                    names.add(cells[ni])
    return values, names


def row_cells(path):
    """Yield (kind, raw_row, [cells]) for each printed row of one page."""
    with open(path, "rb") as fh:
        raw = fh.read()
    text = raw.decode("utf-8", "replace")
    if path.endswith(".md"):
        for line in text.splitlines():
            if "|" in line:
                cells = [c for c in re.split(r"(?<!\\)\|", line)]
                yield "md", line, cells
            else:
                yield "md", line, [line]
    else:
        for match in ROW_HTML_RE.finditer(text):
            row = match.group(1)
            cells = [c for c in CELL_HTML_RE.findall(row)]
            yield "html", row, cells or [row]
        for line in text.splitlines():
            low = line.lower()
            if "<tr" in low:
                continue
            if "<dt" in low or "<li" in low or "<dd" in low:
                cells = CELL_HTML_RE.findall(line)
                yield "line", line, cells or re.split(r"\s{2,}|\t", line)


def flat(text):
    text = TAG_RE.sub(" ", text)
    text = html.unescape(text)
    return re.sub(r"\s+", " ", text).strip()


def pair_row(name_re, row, cells):
    """(name, value) pairs the row PRINTS -- cell-aware.

    Subject cells are cells whose text is (almost) only constant name(s):
    the row's topic.  A description cell merely MENTIONS a name and never
    pairs.  A value cell is a cell whose whole text is one printed value,
    or a subject cell whose leftovers beside the names are value tokens
    ("WS_BORDER 0x00800000L")."""
    pairs = []
    subjects = []     # (names, left, text)
    values = []       # printed value strings from pure value cells
    for cell in cells:
        text = flat(cell).strip()
        if not text or len(text) > 240:
            continue
        names = [m.group(0) for m in name_re.finditer(text)]
        if names:
            left = name_re.sub(" ", text)
            left = VALUE_TOKEN_RE.sub(" ", left)
            left = left.strip(" ,;:()[]\t")
            if len(left) <= 24:
                # subject cell; any value tokens beside the names pair
                tokens = VALUE_TOKEN_RE.findall(text)
                for name in names:
                    for value in tokens:
                        pairs.append((name, value))
                subjects.append(names)
            continue
        pure = text.replace(" ", "")
        if VALUE_CELL_RE.match(pure):
            values.append(pure)
    for names in subjects:
        for value in values:
            for name in names:
                pairs.append((name, value))
    return pairs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=0,
                    help="stop after N candidate rows (0 = no limit)")
    args = ap.parse_args()

    prefixes = load_prefixes()
    if not prefixes:
        print("[value-misses] no family prefixes queued", file=sys.stderr)
        return 1
    name_re = name_regex(prefixes)
    family_of = {p: p for p in prefixes}
    known, known_names = known_values()

    candidates = []
    per_family = collections.Counter()
    scanned = 0
    for dirpath, _dirs, files in os.walk(CORPUS):
        for fname in sorted(files):
            if not (fname.endswith(".html") or fname.endswith(".md")):
                continue
            path = os.path.join(dirpath, fname)
            rel = os.path.relpath(path, ROOT)
            try:
                for _kind, row, cells in row_cells(path):
                    scanned += 1
                    if "_" not in row:
                        continue
                    for name, value in pair_row(name_re, row, cells):
                        got = known.get(name)
                        if got and value in got:
                            continue
                        family = next((p for p in prefixes
                                       if name.startswith(p)), "")
                        if not family:
                            continue
                        candidates.append(
                            (family, name, value, rel, flat(row)[:180]))
                        per_family[family] += 1
                        if args.limit and len(candidates) >= args.limit:
                            break
                    if args.limit and len(candidates) >= args.limit:
                        break
            except Exception as exc:   # one broken page must not stop all
                print(f"[value-misses] {rel}: {exc}", file=sys.stderr)
            if args.limit and len(candidates) >= args.limit:
                break
        if args.limit and len(candidates) >= args.limit:
            break

    # de-duplicate (name, value): keep first page only
    seen = set()
    rows = []
    for row in candidates:
        key = (row[1], row[2])
        if key in seen:
            continue
        seen.add(key)
        rows.append(row)

    out = os.path.join(REPORTS, "value-miss-candidates.tsv")
    with open(out, "w", encoding="utf-8") as fh:
        fh.write("family\tname\tprinted_value\tpage\trow_quote\n")
        for row in rows:
            fh.write("\t".join(cell.replace("\t", " ") for cell in row) + "\n")

    print(f"[value-misses] rows scanned: {scanned:,}")
    print(f"[value-misses] candidate (name, printed value) leads: "
          f"{len(rows):,} -> {os.path.relpath(out, ROOT)}")
    print(f"[value-misses] families touched: {len(per_family):,}")
    for family, count in per_family.most_common(30):
        print(f"  {family:16} {count:6}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
