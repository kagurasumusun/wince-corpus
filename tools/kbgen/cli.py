"""python3 -m tools.kbgen {build,check,query,export} ..."""

from __future__ import annotations

import argparse
import os
import sqlite3
import sys

from .common import DB_PATH, KB_DIR, MANIFEST_PATH, REPORTS_DIR


def _open_ro(db: str) -> sqlite3.Connection:
    if not os.path.exists(db):
        raise SystemExit(f"kbgen: no database at {db}; run: python3 -m tools.kbgen build")
    return sqlite3.connect(f"file:{db}?mode=ro", uri=True)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="python3 -m tools.kbgen")
    sub = parser.add_subparsers(dest="cmd", required=True)

    b = sub.add_parser("build", help="build kb/kb.sqlite3 from the corpus")
    b.add_argument("--workers", type=int, default=2)
    b.add_argument("--tree", default=None,
                   help="only corpus/<tree> (e.g. chm/windows-ce-3.0)")
    b.add_argument("--out", default=KB_DIR,
                   help="output directory (default kb/)")

    c = sub.add_parser("check", help="validate kb/kb.sqlite3")
    c.add_argument("--db", default=DB_PATH)
    c.add_argument("--manifest", default=MANIFEST_PATH)
    c.add_argument("--sample", type=int, default=200,
                   help="pages to re-extract (0 = none)")
    c.add_argument("--skip-page-hashes", action="store_true")
    c.add_argument("--verify-reproducible", action="store_true")
    c.add_argument("--workers", type=int, default=2)

    q = sub.add_parser("query", help="ask the KB about one thing")
    q.add_argument("kind",
                   choices=("symbol", "header", "module", "constant",
                            "search", "sql"))
    q.add_argument("name")
    q.add_argument("--layer", default="ce")
    q.add_argument("--db", default=DB_PATH)

    e = sub.add_parser("export", help="dump one table/view as tsv/jsonl")
    e.add_argument("--table", required=True)
    e.add_argument("--format", choices=("tsv", "jsonl"), default="tsv")
    e.add_argument("--db", default=DB_PATH)

    args = parser.parse_args(argv)

    if args.cmd == "build":
        from .build import build
        out_dir = args.out
        os.makedirs(out_dir, exist_ok=True)
        db_path = os.path.join(out_dir, "kb.sqlite3")
        manifest = os.path.join(out_dir, "manifest.json")
        reports = os.path.join(out_dir, "reports") \
            if os.path.abspath(out_dir) == os.path.abspath(KB_DIR) \
            else os.path.join(out_dir, "reports")
        digest = build(db_path, manifest, reports,
                       workers=args.workers, only_tree=args.tree)
        size_mb = os.path.getsize(db_path) / 1e6
        rel = os.path.relpath(db_path)
        print(f"kbgen: wrote {rel} ({size_mb:.1f} MB), manifest "
              f"{os.path.relpath(manifest)} sha256 {digest[:16]}…")
        return 0

    if args.cmd == "check":
        from .validate import validate
        return validate(db_path=args.db, manifest_path=args.manifest,
                        skip_page_hashes=args.skip_page_hashes,
                        sample=args.sample,
                        verify_reproducible=args.verify_reproducible,
                        workers=args.workers)

    if args.cmd == "query":
        from . import query
        conn = _open_ro(args.db)
        if args.kind == "symbol":
            return query.cmd_symbol(conn, args.name)
        if args.kind == "header":
            return query.cmd_header(conn, args.name, args.layer)
        if args.kind == "module":
            return query.cmd_module(conn, args.name, args.layer)
        if args.kind == "constant":
            return query.cmd_constant(conn, args.name)
        if args.kind == "search":
            return query.cmd_search(conn, args.name)
        if args.kind == "sql":
            return query.cmd_sql(conn, args.name)

    if args.cmd == "export":
        from . import query
        conn = _open_ro(args.db)
        return query.cmd_export(conn, args.table, args.format)

    return 2


if __name__ == "__main__":
    sys.exit(main())
