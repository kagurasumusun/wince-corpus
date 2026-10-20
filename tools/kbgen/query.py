"""Read-only queries over kb/kb.sqlite3 (the KB's reference interface).

    python3 -m tools.kbgen query symbol CreateFile
    python3 -m tools.kbgen query header Winbase.h [--layer ce]
    python3 -m tools.kbgen query module Coredll.dll
    python3 -m tools.kbgen query constant WM_CREATE
    python3 -m tools.kbgen query search Semaphore
    python3 -m tools.kbgen query sql "SELECT ... "
    python3 -m tools.kbgen export --table symbol_headers --format tsv
"""

from __future__ import annotations

import json
import sqlite3

from .common import symbol_key


def _sym(conn, name: str):
    return conn.execute(
        "SELECT symbol_key, display_name, parent_key FROM symbols"
        " WHERE symbol_key=?", (symbol_key(name),)).fetchone()


def cmd_symbol(conn, name: str) -> int:
    row = _sym(conn, name)
    if not row:
        print(f"no symbol: {name}")
        return 1
    key, display, parent = row
    kinds = [r[0] for r in conn.execute(
        "SELECT DISTINCT kind FROM symbol_kinds WHERE symbol_key=? ORDER BY kind", (key,))]
    print(f"{display}  [{key}] kinds={kinds} parent={parent}")
    spell = [r[0] for r in conn.execute(
        "SELECT DISTINCT spelling FROM symbol_spellings WHERE symbol_key=? ORDER BY spelling",
        (key,))]
    if len(spell) > 1:
        print(f"  spellings: {spell}")
    for layer, is_chosen, h, rank in conn.execute(
            "SELECT layer, is_chosen, header_key, rank_name FROM symbol_headers"
            " WHERE symbol_key=? ORDER BY layer, is_chosen DESC, rank", (key,)):
        print(f"  header[{layer}] {'CHOSEN' if is_chosen else 'candidate'}: {h} ({rank})")
    for layer, is_chosen, f, fk, rank in conn.execute(
            "SELECT layer, is_chosen, file_key, file_kind, rank_name FROM symbol_files"
            " WHERE symbol_key=? ORDER BY layer, is_chosen DESC, rank", (key,)):
        print(f"  file[{layer}] {'CHOSEN' if is_chosen else 'candidate'}: {f} ({fk}, {rank})")
    for layer, scope, vraw, vint, status in conn.execute(
            "SELECT layer, scope, value_raw, value_int, status FROM constant_values"
            " WHERE symbol_key=? ORDER BY layer, scope", (key,)):
        print(f"  value[{layer}/{scope}]: {vraw} (int={vint}, {status})")
    for layer, kind, cc, n_pages, primary in conn.execute(
            "SELECT layer, kind, calling_convention, n_pages, is_primary"
            " FROM declaration_variants WHERE symbol_key=? ORDER BY layer, is_primary DESC",
            (key,)):
        print(f"  declaration[{layer}] kind={kind} cc={cc} pages={n_pages} primary={primary}")
    for layer, min_v, max_v, raw, n in conn.execute(
            "SELECT layer, min_version, max_version, MIN(raw), COUNT(*)"
            " FROM symbol_versions WHERE symbol_key=?"
            " GROUP BY layer, min_version, max_version ORDER BY layer LIMIT 6",
            (key,)):
        print(f"  availability[{layer}]: {min_v}..{max_v} (x{n}) <- {raw[:100]}")
    for other, odisp, vk, basis in conn.execute(
            "SELECT r.other_key, s.display_name, r.variant_kind, r.basis"
            " FROM symbol_relations r JOIN symbols s ON s.symbol_key=r.other_key"
            " WHERE r.symbol_key=?", (key,)):
        print(f"  is {vk} variant of {odisp} ({basis})")
    for var, vdisp, vk, bases in conn.execute(
            "SELECT r.symbol_key, s.display_name, r.variant_kind,"
            " GROUP_CONCAT(DISTINCT r.basis)"
            " FROM symbol_relations r JOIN symbols s ON s.symbol_key=r.symbol_key"
            " WHERE r.other_key=? GROUP BY r.symbol_key, r.variant_kind", (key,)):
        print(f"  variant: {vdisp} ({vk}; {bases})")
    for kind, layer, detail, status in conn.execute(
            "SELECT kind, layer, detail, status FROM conflicts WHERE symbol_key=?"
            " ORDER BY kind", (key,)):
        print(f"  CONFLICT[{kind}/{layer}/{status}]: {detail[:200]}")
    pages = conn.execute(
        "SELECT COUNT(*) FROM page_subjects WHERE symbol_key=?", (key,)).fetchone()[0]
    obs = conn.execute(
        "SELECT COUNT(*) FROM observation_index oi WHERE oi.page_path IN"
        " (SELECT page_path FROM page_subjects WHERE symbol_key=?)", (key,)).fetchone()[0]
    print(f"  subject pages: {pages}; observations on those pages: {obs}")
    return 0


def cmd_header(conn, name: str, layer: str = "ce") -> int:
    rows = conn.execute(
        "SELECT display_name FROM v_header_symbols WHERE header_key=? AND layer=?"
        " ORDER BY display_name", (name.lower(), layer)).fetchall()
    print(f"{name} [{layer}]: {len(rows)} chosen symbols")
    for (d,) in rows:
        print(f"  {d}")
    return 0


def cmd_module(conn, name: str, layer: str = "ce") -> int:
    rows = conn.execute(
        "SELECT display_name FROM v_module_symbols WHERE file_key=? AND layer=?"
        " ORDER BY display_name", (name.lower(), layer)).fetchall()
    print(f"{name} [{layer}]: {len(rows)} chosen symbols")
    for (d,) in rows:
        print(f"  {d}")
    return 0


def cmd_constant(conn, name: str) -> int:
    row = _sym(conn, name)
    if not row:
        print(f"no symbol: {name}")
        return 1
    key, display = row[0], row[1]
    print(display)
    for layer, raw, vint, origin, page in conn.execute(
            "SELECT d.layer, co.value_raw, co.value_int, co.origin, co.page_path"
            " FROM constant_observations co JOIN pages p ON p.path=co.page_path"
            " JOIN doc_sets d ON d.book=p.book WHERE co.symbol_key=?"
            " ORDER BY d.layer, co.value_raw LIMIT 20", (key,)):
        print(f"  obs[{layer}] {raw} (int={vint}, {origin}) {page}")
    for layer, scope, vraw, vint, status in conn.execute(
            "SELECT layer, scope, value_raw, value_int, status FROM constant_values"
            " WHERE symbol_key=? ORDER BY layer, scope", (key,)):
        note = (" (CeGCC-adopted; not in CE docs)" if layer == "cegcc" else "")
        print(f"  resolved[{layer}/{scope}]: {vraw} (int={vint}, {status}){note}")
    compared = conn.execute(
        "SELECT source_id, ref_value_printed, comparison"
        " FROM v_constant_reference_compare WHERE symbol_key=?", (key,)).fetchall()
    adopted = bool(conn.execute(
        "SELECT 1 FROM constant_values WHERE symbol_key=? AND layer='cegcc'",
        (key,)).fetchone())
    for src, v, comp in compared:
        print(f"  reference[{src}]: {v} ({comp}; comparison only)")
    if not compared:
        for src, v, hdr, loc, guard in conn.execute(
                "SELECT source_id, value_printed, header_key, locator,"
                " ce_guard"
                " FROM reference_names WHERE name_key=?"
                " AND kind IN ('define','const') ORDER BY source_id"
                " LIMIT 10", (key,)):
            basis = ("adoption basis" if adopted
                     and src.startswith("w32api-") and guard != "not-wce"
                     else "comparison only")
            branch = f"; _WIN32_WCE guard: {guard}" if guard else ""
            print(f"  reference[{src}]: {v} in {hdr} ({loc}{branch}; {basis},"
                  " NOT a CE-documented value)")
    resolved = conn.execute(
        "SELECT COUNT(*) FROM constant_values WHERE symbol_key=? AND layer='ce'",
        (key,)).fetchone()[0]
    if not resolved:
        named = conn.execute(
            "SELECT COUNT(*) FROM constant_name_observations WHERE symbol_key=?",
            (key,)).fetchone()[0]
        subjects = conn.execute(
            "SELECT COUNT(*) FROM page_subjects WHERE symbol_key=?",
            (key,)).fetchone()[0]
        print(f"  no CE value recorded (subject pages: {subjects},"
              f" constant-name mentions: {named})")
    return 0


def cmd_search(conn, needle: str) -> int:
    rows = conn.execute(
        "SELECT display_name FROM symbols WHERE symbol_key LIKE ? ORDER BY display_name"
        " LIMIT 100", (f"%{symbol_key(needle)}%",)).fetchall()
    for (d,) in rows:
        print(d)
    print(f"-- {len(rows)} (max 100)")
    return 0


def cmd_sql(conn, sql: str) -> int:
    if not sql.strip().lower().startswith(("select", "with", "pragma")):
        print("read-only: SELECT/WITH/PRAGMA only")
        return 2
    cur = conn.execute(sql)
    cols = [d[0] for d in cur.description]
    print("\t".join(cols))
    for row in cur:
        print("\t".join("" if v is None else str(v) for v in row))
    return 0


def cmd_export(conn, table: str, fmt: str) -> int:
    tables = {r[0] for r in conn.execute(
        "SELECT name FROM sqlite_master WHERE type IN ('table','view')")}
    if table not in tables:
        print(f"no such table/view: {table}")
        return 1
    cur = conn.execute(f'SELECT * FROM "{table}"')
    cols = [d[0] for d in cur.description]
    if fmt == "tsv":
        print("\t".join(cols))
        for row in cur:
            print("\t".join("" if v is None else str(v) for v in row))
    else:
        for row in cur:
            print(json.dumps(dict(zip(cols, row)), ensure_ascii=False))
    return 0
