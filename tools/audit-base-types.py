#!/usr/bin/env python3
"""tools/audit-base-types.py -- the base types, generation by generation.

The user's standing model of the CE/Win32 surface (2026-10): the generated
header is wince固有部分 + w32共通部分 + w32共通(ce固有値)部分 -- and for the
base types the VALUES may be Windows CE specific and may differ by
generation ("基底型などの部分はwince固有値注意。各世代の基底型の値などを
調べる必要がある").  This tool is that investigation, as far as the
collected documents print it:

* every name|description table row a page prints for a base type -- the
  description is the page's own statement of what the type IS (its width,
  its meaning, sometimes the typedef body);
* the rows are grouped by type name and compared across the CE sets and
  the Win32-common reference.  Rows that say different things about one
  name are the w32共通(ce固有値) candidates -- they are listed, never
  merged.

Output: knowledge/reports/base-type-generations.tsv
  type <TAB> set <TAB> row_quote <TAB> page <TAB> differs
and a printed summary.  Nothing here reaches the generator: this is the
review ledger behind docs/constant-value-review.md and the generation
branching rules.

    python3 tools/audit-base-types.py
"""

import collections
import gzip
import html
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import page_parse  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
KB = os.path.join(ROOT, "knowledge", "kb")
REPORTS = os.path.join(ROOT, "knowledge", "reports")
INDEX = os.path.join(ROOT, "data", "index", "INDEX.tsv")


def book_of_index():
    """path -> book (the set), from the corpus index."""
    out = {}
    if not os.path.exists(INDEX):
        return out
    with open(INDEX, encoding="utf-8") as fh:
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            if len(cells) >= 3 and cells[2].startswith("corpus/"):
                out[cells[2]] = cells[1]
    return out


def type_table_pages():
    """Pages a type name-list was read from: the union of the pages behind
    every typedef-kind entity (entities.jsonl.gz)."""
    pages = set()
    path = os.path.join(KB, "entities.jsonl.gz")
    with gzip.open(path, "rt", encoding="utf-8") as fh:
        for line in fh:
            entity = json.loads(line)
            if "typedef" not in (entity.get("kinds") or []):
                continue
            for page in (entity.get("ce_pages") or []) + \
                    (entity.get("win32_pages") or []):
                pages.add(page)
    return sorted(pages)


def rows_of(path):
    """The name|description rows one page prints, as printed."""
    with open(os.path.join(ROOT, path), "rb") as fh:
        raw = fh.read()
    if path.endswith(".md"):
        return page_parse.listed_type_rows_text(page_parse.decode(raw))
    return page_parse.listed_type_rows(page_parse.article_html(raw))


def flat(text):
    """Whitespace and markup aside, for comparing two printings."""
    text = re.sub(r"<[^>]+>", " ", text or "")
    text = html.unescape(text)
    return re.sub(r"\s+", " ", text).strip().lower()


_NUMBER = re.compile(r"\d[\d,]*(?:\.\d+)?")


def numbers(text):
    """The numbers the row prints (widths, sizes, limits) -- the VALUE
    statements of a base type row.  Commas and decimal points kept as
    printed."""
    return tuple(sorted(_NUMBER.findall(flat(text))))


def main():
    pages = type_table_pages()
    books = book_of_index()
    per_name = collections.defaultdict(list)   # name -> [(set, row, page)]
    scanned = 0
    for path in pages:
        try:
            rows = rows_of(path)
        except Exception as exc:               # one broken page must not
            print(f"[base-types] {path}: {exc}", file=sys.stderr)  # stop all
            continue
        scanned += 1
        book = books.get(path) or (path.split("/")[1] if "/" in path
                                   else path)
        for row in rows:
            per_name[row["name"]].append((book, row["row"], path))

    out_rows = []
    differing = []
    for name in sorted(per_name, key=str.lower):
        entries = per_name[name]
        printings = {flat(row) for _set, row, _page in entries}
        nums = {numbers(row) for _set, row, _page in entries}
        if len(nums) > 1:
            differs = "numbers"
            differing.append((name, entries))
        elif len(printings) > 1:
            differs = "wording"
        else:
            differs = ""
        for book, row, path in entries:
            out_rows.append((name, book, row, path, differs))

    ts_path = os.path.join(REPORTS, "base-type-generations.tsv")
    with open(ts_path, "w", encoding="utf-8") as fh:
        fh.write("type\tset\trow_quote\tpage\tdiffers\n")
        for row in out_rows:
            fh.write("\t".join(cell.replace("\t", " ") for cell in row) + "\n")

    print(f"[base-types] {scanned:,} type-table page(s) scanned, "
          f"{len(per_name):,} type name(s) documented")
    print(f"[base-types] rows written: {len(out_rows):,} -> "
          f"{os.path.relpath(ts_path, ROOT)}")
    print(f"[base-types] names whose printed NUMBERS differ across pages "
          f"(w32共通(ce固有値) candidates): {len(differing):,}")
    wording = sum(1 for row in out_rows if row[4] == "wording")
    print(f"[base-types] wording-only differences (no number moves): "
          f"{wording:,} row(s) marked 'wording'")
    for name, entries in differing[:40]:
        print(f"  {name}:")
        shown = set()
        for book, row, path in entries:
            key = flat(row)
            if key in shown:
                continue
            shown.add(key)
            print(f"    [{book}] {row[:100]}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
