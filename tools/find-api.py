#!/usr/bin/env python3
"""tools/find-api.py -- look up an API name across the whole corpus.

Answers the question the corpus exists for: *where* is this name documented —
in Windows CE, in Win32, or both?

    $ python3 tools/find-api.py CreateFile
    CreateFile  [win32-shared: windows-ce-5.0;windows-embedded-ce-6.0]
      ce        aa517318(v=msdn.10)   learn/windows-ce-5.0
                CreateFile (Windows CE 5.0)
                corpus/learn/windows-ce-5.0/aa517318(v=msdn.10).html
      ce        _wcesdk_Win32_CreateFile   chm/windows-ce-3.0
                CreateFile
                corpus/chm/windows-ce-3.0/_wcesdk_Win32_CreateFile.html
      win32     nf-fileapi-createfilew   win32/api/fileapi
                CreateFileW function
                corpus/win32/api/fileapi/nf-fileapi-createfilew.md

Search modes:

    python3 tools/find-api.py NAME      exact API name (case-insensitive)
    python3 tools/find-api.py --grep STR  substring match on API names
    python3 tools/find-api.py --prefix Cr   prefix match (min 3 characters)

Options:

    --ce / --win32        restrict to one side of the corpus
    --shared              only names from data/reports/win32-shared.tsv
    --limit N             max names to print (default 20)
    --json                machine-readable output
    --db PATH             SQL index to use (default data/index/corpus.sqlite3)

Uses the SQL index built by ``tools/build-index-sql.py``; falls back to
``data/index/INDEX.tsv`` when the DB is missing.
"""
import argparse
import collections
import gzip
import json
import os
import sqlite3
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DB = os.path.join(ROOT, "data", "index", "corpus.sqlite3")
TSV = os.path.join(ROOT, "data", "index", "INDEX.tsv")
SHARED = os.path.join(ROOT, "data", "reports", "win32-shared.tsv")
KB = os.path.join(ROOT, "kb", "kb.sqlite3")


def open_kb():
    """The knowledge base (kb/kb.sqlite3), or None when it is not built."""
    if not os.path.exists(KB):
        return None
    try:
        return sqlite3.connect(f"file:{KB}?mode=ro", uri=True)
    except sqlite3.Error:
        return None


def _symbol_key(name):
    # the KB's identity rule (tools/kbgen/common.py): casefold, drop
    # whitespace, keep punctuation
    return "".join((name or "").lower().split())


def kb_line(conn, name):
    """One line summarizing what the knowledge base has for a name."""
    if conn is None:
        return None
    key = _symbol_key(name)
    row = conn.execute(
        "SELECT display_name FROM symbols WHERE symbol_key=?",
        (key,)).fetchone()
    if not row:
        return None
    parts = [f"kb: {row[0]}"]
    surf = conn.execute(
        "SELECT has_ce_page, has_win32_page FROM v_symbol_surface"
        " WHERE symbol_key=?", (key,)).fetchone()
    if surf:
        surface = ("shared" if surf[0] and surf[1] else
                   "ce-only" if surf[0] else "win32-only (reference only)")
        parts.append(f"surface: {surface}")
    kinds = [r[0] for r in conn.execute(
        "SELECT DISTINCT kind FROM symbol_kinds WHERE symbol_key=?"
        " ORDER BY kind", (key,))]
    if kinds:
        parts.append("/".join(kinds[:4]))
    decls = conn.execute(
        "SELECT COUNT(*) FROM declaration_variants WHERE symbol_key=?"
        " AND is_primary=1", (key,)).fetchone()[0]
    if decls:
        parts.append(f"{decls} chosen CE declaration")
    headers = [r[0] for r in conn.execute(
        "SELECT header_key FROM symbol_headers WHERE symbol_key=?"
        " AND layer='ce' AND is_chosen=1", (key,))]
    if headers:
        spell = [conn.execute(
            "SELECT display_name FROM headers WHERE header_key=?",
            (h,)).fetchone()[0] for h in headers]
        parts.append("header: " + ", ".join(spell[:3]))
    libs = [r[0] for r in conn.execute(
        "SELECT DISTINCT file_key FROM symbol_files WHERE symbol_key=?"
        " AND layer='ce' AND is_chosen=1 AND file_kind='lib' ORDER BY file_key",
        (key,))]
    if libs:
        disp = []
        for lib in libs[:3]:
            r = conn.execute(
                "SELECT display_name FROM link_files WHERE file_key=?"
                " AND file_kind='lib'", (lib,)).fetchone()
            disp.append(r[0] if r else lib)
        parts.append("lib: " + ", ".join(disp))
    sets = [r[0] for r in conn.execute(
        "SELECT DISTINCT p.book FROM page_subjects ps JOIN pages p"
        " ON p.path=ps.page_path JOIN doc_sets d ON d.book=p.book"
        " WHERE ps.symbol_key=? AND d.layer='ce' ORDER BY p.book LIMIT 3",
        (key,))]
    if sets:
        parts.append("sets: " + ",".join(sets))
    variant = conn.execute(
        "SELECT s.display_name, r.variant_kind, r.basis FROM symbol_relations r"
        " JOIN symbols s ON s.symbol_key=r.other_key WHERE r.symbol_key=?",
        (key,)).fetchone()
    if variant:
        parts.append(f"{variant[1]} spelling of {variant[0]} ({variant[2]})")
    members = conn.execute(
        "SELECT COUNT(*) FROM documented_members WHERE subject_key=?",
        (key,)).fetchone()[0]
    if members:
        parts.append(f"{members} documented member(s), no offsets")
    conflicts = conn.execute(
        "SELECT COUNT(*) FROM conflicts WHERE symbol_key=? AND status='open'",
        (key,)).fetchone()[0]
    if conflicts:
        parts.append(f"{conflicts} open conflict(s)")
    return "  ".join(parts)


def load_shared():
    """name -> (ce_sets, ce_page_ids, win32_pages)"""
    shared = {}
    if not os.path.exists(SHARED):
        return shared
    with open(SHARED, encoding="utf-8") as fh:
        next(fh, None)
        for line in fh:
            parts = line.rstrip("\n").split("\t")
            if len(parts) == 4:
                shared[parts[0].lower()] = parts[1:]
    return shared


def query_db(db_path, mode, needle):
    """Return rows (name, kind, page_id, section, title, path)."""
    con = sqlite3.connect(f"file:{db_path}?mode=ro", uri=True)
    where = {"exact": "lower(n.name) = ?",
             "grep": "lower(n.name) LIKE ?",
             "prefix": "lower(n.name) LIKE ?"}[mode]
    if mode == "grep":
        param = f"%{needle}%"
    elif mode == "prefix":
        param = f"{needle}%"
    else:
        param = needle
    sql = f"""
        SELECT n.name, n.kind, p.page_id, p.section, p.title, p.path
        FROM names n JOIN pages p ON p.path = n.path
        WHERE {where}
        ORDER BY n.name, p.section
    """
    rows = con.execute(sql, (param,)).fetchall()
    con.close()
    return rows


def query_tsv(mode, needle):
    """Fallback: INDEX.tsv only has ids/titles, matched loosely."""
    rows = []
    with open(TSV, encoding="utf-8") as fh:
        next(fh, None)
        for line in fh:
            parts = line.rstrip("\n").split("\t")
            if len(parts) < 4:
                continue
            page_id, section, path, title = parts
            if needle in page_id.lower() or needle in title.lower():
                rows.append((page_id, "tsv", page_id, section, title, path))
    return rows


def pretty_id(page_id):
    """aa517318|msdn.10 -> aa517318(v=msdn.10)"""
    if "|" in page_id:
        stem, ver = page_id.split("|", 1)
        return f"{stem}(v={ver})"
    return page_id


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("name", nargs="?")
    ap.add_argument("--grep")
    ap.add_argument("--prefix")
    ap.add_argument("--ce", action="store_true", help="only CE trees")
    ap.add_argument("--win32", action="store_true", help="only corpus/win32")
    ap.add_argument("--shared", action="store_true",
                    help="only names in data/reports/win32-shared.tsv")
    ap.add_argument("--limit", type=int, default=20)
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--db", default=DB)
    args = ap.parse_args()

    if not (args.name or args.grep or args.prefix):
        ap.error("give a NAME, --grep or --prefix")

    needle = (args.name or args.grep or args.prefix).lower()
    mode = "exact" if args.name else ("grep" if args.grep else "prefix")
    if mode == "prefix" and len(needle) < 3:
        ap.error("--prefix needs at least 3 characters")

    shared = load_shared()
    if os.path.exists(args.db):
        rows = query_db(args.db, mode, needle)
    elif os.path.exists(TSV):
        rows = query_tsv(mode, needle)
    else:
        sys.exit("no index found: run tools/build-index-sql.py first")

    def is_ce(section):
        return not section.startswith("win32/")

    filtered = []
    for row in rows:
        name, kind, page_id, section, title, path = row
        if args.ce and not is_ce(section):
            continue
        if args.win32 and is_ce(section):
            continue
        if args.shared and name.lower() not in shared:
            continue
        filtered.append(row)

    by_name = {}
    for row in filtered:
        by_name.setdefault(row[0], []).append(row)

    # Names that are catalogued on the CE side but whose Win32 page is filed
    # under an A/W variant (CreateFile -> CreateFileW) come from the shared
    # map instead of the name join.
    if not args.ce and not args.grep:
        for name in list(by_name):
            sh = shared.get(name.lower())
            if not sh or not sh[2]:
                continue
            have = {r[5] for r in by_name[name]}
            for path in sh[2].split(";"):
                if path and path not in have:
                    by_name[name].append(
                        (name, "shared", os.path.splitext(
                            os.path.basename(path))[0],
                         os.path.dirname(path).replace("corpus/", ""),
                         "", path))

    names = list(by_name)[:args.limit]
    if args.json:
        out = []
        for name in names:
            out.append({
                "name": name,
                "shared": shared.get(name.lower()),
                "pages": [
                    {"kind": kind, "page_id": page_id, "section": section,
                     "title": title, "path": path}
                    for _n, kind, page_id, section, title, path in by_name[name]
                ],
            })
        print(json.dumps(out, ensure_ascii=False, indent=2))
        return 0

    kb = open_kb()
    for name in names:
        sh = shared.get(name.lower())
        print(f"{name}" + (f"  [win32-shared: {sh[0]}]" if sh else ""))
        line = kb_line(kb, name)
        if line:
            print(f"  {line}")
        for _n, kind, page_id, section, title, path in by_name[name]:
            side = "ce   " if is_ce(section) else "win32"
            print(f"  {side} {kind:5s} {pretty_id(page_id):32s} {section}")
            if title:
                print(f"        {title}")
            print(f"        {path}")
    if len(by_name) > len(names):
        print(f"... and {len(by_name) - len(names)} more names "
              f"(raise --limit)")
    total_pages = sum(len(v) for v in by_name.values())
    print(f"\n{len(by_name)} name(s), {total_pages} page(s)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
