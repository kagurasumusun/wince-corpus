"""Generated human-facing reports (kb/reports/).

The database is the source of truth; these files exist so the shape of
the KB, its open conflicts and its collection gaps can be read (and
diffed) without a query tool.  Never edit them by hand.
"""

from __future__ import annotations

import os


def _write(path: str, text: str) -> None:
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(text)


def _tsv(rows) -> str:
    return "".join("\t".join("" if c is None else str(c) for c in row) + "\n"
                   for row in rows)


def write_reports(conn, reports_dir: str) -> None:
    os.makedirs(reports_dir, exist_ok=True)
    q = lambda sql, *a: conn.execute(sql, a).fetchone()[0]
    meta = dict(conn.execute("SELECT key, value FROM kb_meta"))

    pages = q("SELECT COUNT(*) FROM pages")
    symbols = q("SELECT COUNT(*) FROM symbols")
    is_api = q("SELECT COUNT(*) FROM symbols WHERE is_api=1")
    ce_subjects = q(
        "SELECT COUNT(DISTINCT ps.symbol_key) FROM page_subjects ps"
        " JOIN pages p ON p.path=ps.page_path JOIN doc_sets d ON d.book=p.book"
        " WHERE d.layer='ce'")
    win_subjects = q(
        "SELECT COUNT(DISTINCT ps.symbol_key) FROM page_subjects ps"
        " JOIN pages p ON p.path=ps.page_path JOIN doc_sets d ON d.book=p.book"
        " WHERE d.layer='win32'")
    both = q("SELECT COUNT(*) FROM v_symbol_surface"
             " WHERE has_ce_page=1 AND has_win32_page=1")
    decl_obs = q("SELECT COUNT(*) FROM declaration_observations")
    decl_syntax = q("SELECT COUNT(*) FROM declaration_observations"
                    " WHERE role='syntax'")
    decl_collapsed = q("SELECT COUNT(*) FROM declaration_observations"
                       " WHERE spacing='collapsed'")
    variants_primary = q("SELECT COUNT(*) FROM declaration_variants"
                         " WHERE layer='ce' AND is_primary=1")
    req_obs = q("SELECT COUNT(*) FROM requirement_observations")
    const_obs = q("SELECT COUNT(*) FROM constant_observations")
    const_names = q("SELECT COUNT(DISTINCT symbol_key)"
                    " FROM constant_observations")
    resolved_ce = q("SELECT COUNT(*) FROM constant_values WHERE layer='ce'")
    scoped = q("SELECT COUNT(*) FROM constant_values"
               " WHERE layer='ce' AND scope != '*'")
    unnumbered = q("SELECT COUNT(DISTINCT symbol_key)"
                   " FROM constant_name_observations")
    headers = q("SELECT COUNT(*) FROM headers")
    chosen_headers = q("SELECT COUNT(*) FROM symbol_headers"
                       " WHERE layer='ce' AND is_chosen=1")
    files = q("SELECT COUNT(*) FROM link_files")
    chosen_files = q("SELECT COUNT(*) FROM symbol_files"
                     " WHERE layer='ce' AND is_chosen=1")
    av = {r[0]: r[1] for r in conn.execute(
        "SELECT parse_status, COUNT(*) FROM symbol_versions"
        " GROUP BY parse_status")}
    rel_page = q("SELECT COUNT(*) FROM symbol_relations"
                 " WHERE basis='page-statement'")
    rel_import = q("SELECT COUNT(*) FROM symbol_relations"
                   " WHERE basis='import-rule'")
    conflicts_open = q("SELECT COUNT(*) FROM conflicts WHERE status='open'")
    conflicts_reviewed = q("SELECT COUNT(*) FROM conflicts"
                           " WHERE status='reviewed'")
    rejects = q("SELECT COALESCE(SUM(n),0) FROM ingest_rejects")
    ref_names = q("SELECT COUNT(*) FROM reference_names")
    agree = q("SELECT COUNT(*) FROM v_constant_reference_compare"
              " WHERE comparison='agree'")
    differ = q("SELECT COUNT(*) FROM v_constant_reference_compare"
               " WHERE comparison='differ'")

    summary = f"""# KB summary (generated; do not edit)

Counts from `kb/kb.sqlite3`. The database is the source of truth;
this file exists so a reader can see the shape without a query tool.

- schema version: {meta.get('schema_version')} (extractor {meta.get('extractor_version')}, builder {meta.get('builder_version')})
- corpus pages indexed: {pages:,}
- symbols: {symbols:,} (is_api: {is_api:,})
- symbols with a CE subject page: {ce_subjects:,}; with a Win32 page: {win_subjects:,}; with both: {both:,}
- declaration observations: {decl_obs:,} (syntax: {decl_syntax:,}, collapsed spacing: {decl_collapsed:,})
- chosen declaration variants (CE primary): {variants_primary:,}
- requirement observations: {req_obs:,}
- constant observations: {const_obs:,} over {const_names:,} names
- resolved CE constant values: {resolved_ce:,} (version-scoped rows: {scoped:,})
- constants documented but unnumbered: {unnumbered:,} names
- headers: {headers:,}; chosen CE symbol->header: {chosen_headers:,}
- link files: {files:,}; chosen CE symbol->file: {chosen_files:,}
- availability statements parsed/partial/unparsed: {av.get('parsed', 0):,}/{av.get('partial', 0):,}/{av.get('unparsed', 0):,}
- Unicode/ANSI variant relations: {rel_page + rel_import:,} (page-statement: {rel_page:,}, import-rule: {rel_import:,})
- conflicts open: {conflicts_open:,}; reviewed: {conflicts_reviewed:,}
- ingest rejects: {rejects:,} (see ingest_rejects table)
- reference names (isolated, comparison only): {ref_names:,}; CE values agreeing/differing: {agree:,}/{differ:,}

See coverage.tsv (per doc set), conflicts.tsv (review worklist) and
gaps.tsv (collection worklist). Query everything else with
`python3 -m tools.kbgen query ...`.
"""
    _write(os.path.join(reports_dir, "summary.md"), summary)

    coverage = [("book", "tree", "layer", "ce_version", "pages",
                 "subject_pages", "observations")]
    for row in conn.execute(
            "SELECT d.book, d.tree, d.layer, COALESCE(d.ce_version,''),"
            " COUNT(DISTINCT p.path), COUNT(DISTINCT ps.page_path),"
            " (SELECT COUNT(*) FROM observation_index oi JOIN pages p2"
            "   ON p2.path = oi.page_path WHERE p2.book = d.book)"
            " FROM doc_sets d JOIN pages p ON p.book = d.book"
            " LEFT JOIN page_subjects ps ON ps.page_path = p.path"
            " GROUP BY d.book ORDER BY d.book"):
        coverage.append(row)
    _write(os.path.join(reports_dir, "coverage.tsv"), _tsv(coverage))

    conflicts = [("kind", "symbol", "layer", "status", "detail")]
    for row in conn.execute(
            "SELECT c.kind, s.display_name, c.layer, c.status, c.detail"
            " FROM conflicts c JOIN symbols s ON s.symbol_key = c.symbol_key"
            " ORDER BY c.kind, s.display_name"):
        conflicts.append(row)
    _write(os.path.join(reports_dir, "conflicts.tsv"), _tsv(conflicts))

    gaps = [("name", "gap", "detail")]
    for row in conn.execute(
            "SELECT s.display_name, 'unnumbered-constant',"
            " COUNT(*) || ' name mentions, no numbered print'"
            " FROM constant_name_observations o"
            " JOIN symbols s ON s.symbol_key = o.symbol_key"
            " WHERE NOT EXISTS (SELECT 1 FROM constant_values cv"
            "   WHERE cv.symbol_key = o.symbol_key AND cv.layer='ce')"
            " GROUP BY o.symbol_key ORDER BY s.display_name"):
        gaps.append(row)
    for row in conn.execute(
            "SELECT s.display_name, 'no-ce-header', 'subject page but no chosen CE header'"
            " FROM v_symbol_surface v JOIN symbols s"
            "   ON s.symbol_key = v.symbol_key"
            " WHERE v.has_ce_page=1 AND NOT EXISTS"
            "   (SELECT 1 FROM symbol_headers sh WHERE sh.symbol_key=v.symbol_key"
            "     AND sh.layer='ce' AND sh.is_chosen=1)"
            " ORDER BY s.display_name"):
        gaps.append(row)
    for row in conn.execute(
            "SELECT s.display_name, 'value-conflict', c.detail"
            " FROM conflicts c JOIN symbols s ON s.symbol_key=c.symbol_key"
            " WHERE c.kind='constant-value' AND c.status='open'"
            " ORDER BY s.display_name"):
        gaps.append(row)
    _write(os.path.join(reports_dir, "gaps.tsv"), _tsv(gaps))
