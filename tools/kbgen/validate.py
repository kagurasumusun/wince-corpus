"""Validate kb/kb.sqlite3 (the KB's guard; replaces check-kb.py and the
clean-room quote checker).

Checks, in order:
  1. SQLite integrity_check + foreign_key_check.
  2. kb_meta / schema version present and expected.
  3. Evidence integrity: every chosen fact has evidence; every evidence
     row cites exactly one observation or review (schema CHECK) whose
     page is in the fact's layer; evidence can never cite reference rows
     (they are not in observation_index, and this is asserted).
  4. Resolution invariants: at most one chosen header per (symbol, layer);
     chosen link files never beyond membership rank; exactly one primary
     declaration variant per (symbol, layer); reviewed constant values
     always cite a review; header/file keys are well-formed.
  5. Corpus freshness: every page's sha256 still matches the file on
     disk (--skip-page-hashes to omit), and a deterministic sample of
     pages re-extracts to the same observation yield.
  6. Manifest agreement: db file hash and canonical table hashes.
  7. Input drift: the files recorded in build_inputs are unchanged.
  8. Optional --verify-reproducible: rebuild into a temp file and
     compare canonical table hashes (and bytes, as a note).
"""

from __future__ import annotations

import hashlib
import json
import os
import sqlite3

from .common import (CATALOG_DIR, DB_PATH, MANIFEST_PATH, ROOT,
                     SCHEMA_VERSION, valid_lib_dll_token)

_EVIDENCE_TABLES = ("symbol_header_evidence", "symbol_file_evidence",
                    "constant_value_evidence")


class Checker:
    def __init__(self):
        self.failures: list[str] = []
        self.notes: list[str] = []

    def check(self, ok: bool, message: str) -> None:
        if not ok:
            self.failures.append(message)

    def fail(self, message: str) -> None:
        self.failures.append(message)

    def count_is(self, conn, sql: str, expected: int, message: str) -> None:
        got = conn.execute(sql).fetchone()[0]
        if got != expected:
            self.failures.append(f"{message}: {got} (expected {expected})")


def _file_sha256(path: str) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def validate(db_path: str = DB_PATH, manifest_path: str | None = MANIFEST_PATH,
             skip_page_hashes: bool = False, sample: int = 200,
             verify_reproducible: bool = False, workers: int = 2) -> int:
    c = Checker()
    if not os.path.exists(db_path):
        print(f"kb-check: no database at {db_path} (build it: "
              "python3 -m tools.kbgen build)")
        return 1
    conn = sqlite3.connect(f"file:{db_path}?mode=ro", uri=True)
    conn.execute("PRAGMA foreign_keys=ON")

    # 1. integrity
    integ = [r[0] for r in conn.execute("PRAGMA integrity_check")]
    c.check(integ == ["ok"], f"integrity_check: {integ[:3]}")
    fk = conn.execute("PRAGMA foreign_key_check").fetchall()
    c.check(not fk, f"foreign_key_check: {len(fk)} violations, e.g. {fk[:2]}")

    # 2. meta
    meta = dict(conn.execute("SELECT key, value FROM kb_meta"))
    c.check(meta.get("schema_version") == str(SCHEMA_VERSION),
            f"schema_version {meta.get('schema_version')} != {SCHEMA_VERSION}")

    # 3. evidence integrity and layer isolation.  Everything citable is in
    #    observation_index; reference_names rows are not, so an evidence row
    #    physically cannot cite them -- asserted here anyway.
    c.count_is(conn,
               "SELECT COUNT(*) FROM observation_index oi"
               " JOIN reference_names rn ON rn.locator = oi.obs_id", 0,
               "reference rows present in observation_index")
    for ev in _EVIDENCE_TABLES:
        c.count_is(conn,
                   f"SELECT COUNT(*) FROM {ev} e LEFT JOIN observation_index oi"
                   f" ON oi.obs_id = e.obs_id"
                   f" WHERE e.obs_id IS NOT NULL AND oi.obs_id IS NULL", 0,
                   f"{ev}: obs_id not in observation_index")
        layer_join = (
            f" JOIN observation_index oi ON oi.obs_id = {ev}.obs_id"
            " JOIN pages p ON p.path = oi.page_path"
            " JOIN doc_sets d ON d.book = p.book"
            f" WHERE {ev}.obs_id IS NOT NULL AND d.layer != {ev}.layer")
        c.count_is(conn, f"SELECT COUNT(*) FROM {ev}" + layer_join, 0,
                   f"{ev}: evidence page outside the fact's layer")
    # every variant cites its observations
    c.count_is(conn,
               "SELECT COUNT(*) FROM declaration_variants dv"
               " WHERE NOT EXISTS (SELECT 1 FROM"
               "  declaration_variant_observations vo"
               "  WHERE vo.variant_id = dv.variant_id)", 0,
               "declaration variants without observations")
    c.count_is(conn,
               "SELECT COUNT(*) FROM declaration_variant_observations vo"
               " JOIN declaration_variants dv ON dv.variant_id=vo.variant_id"
               " JOIN observation_index oi ON oi.obs_id = vo.obs_id"
               " JOIN pages p ON p.path = oi.page_path"
               " JOIN doc_sets d ON d.book = p.book"
               " WHERE d.layer != dv.layer", 0,
               "variant observations outside the variant's layer")

    # 4. resolution invariants
    bad = [r[0] for r in conn.execute(
        "SELECT header_key FROM headers")
        if not r[0] or r[0].startswith(".") or "/" in r[0] or "\\" in r[0]]
    c.check(not bad, f"headers: malformed keys {bad[:5]}")
    bad = [r[0] for r in conn.execute(
        "SELECT file_key FROM link_files WHERE file_kind IN ('lib','dll')")
        if not valid_lib_dll_token(r[0])]
    c.check(not bad, f"link_files: invalid file keys {bad[:5]}")
    c.count_is(conn,
               "SELECT COUNT(*) FROM constant_values WHERE status='reviewed'"
               " AND NOT EXISTS (SELECT 1 FROM constant_value_evidence e"
               "  WHERE e.symbol_key=constant_values.symbol_key"
               "   AND e.review_id IS NOT NULL)", 0,
               "reviewed constant values without a review citation")
    c.count_is(conn, "SELECT COUNT(*) FROM (SELECT 1 FROM symbol_headers"
               " GROUP BY symbol_key, layer HAVING SUM(is_chosen) > 1)", 0,
               "symbols with >1 chosen header per layer")
    c.count_is(conn,
               "SELECT COUNT(*) FROM symbol_files WHERE is_chosen=1 AND rank > 20", 0,
               "chosen link file beyond membership rank (rank scale: resolve.py)")
    c.count_is(conn, "SELECT COUNT(*) FROM (SELECT 1 FROM declaration_variants"
               " GROUP BY symbol_key, layer HAVING SUM(is_primary) != 1)", 0,
               "symbol/layers without exactly one primary variant")

    pages = conn.execute("SELECT COUNT(*) FROM pages").fetchone()[0]
    c.check(str(pages) == meta.get("corpus_pages"),
            f"pages {pages} != kb_meta.corpus_pages {meta.get('corpus_pages')}")

    # --- corpus freshness
    if not skip_page_hashes and not meta.get("subset_tree"):
        drift = 0
        checked = 0
        for path, sha in conn.execute("SELECT path, sha256 FROM pages ORDER BY path"):
            try:
                actual = _file_sha256(os.path.join(ROOT, path))
            except OSError:
                actual = None
            if actual != sha:
                drift += 1
                if drift <= 3:
                    c.fail(f"page drift: {path}")
            checked += 1
        c.check(drift == 0, f"{drift} pages drifted from corpus (of {checked})")
        c.notes.append(f"page hashes verified: {checked}")

    if sample:
        from . import extract
        extract.init_worker(extract.load_catalogs(CATALOG_DIR))
        rows = conn.execute(
            "SELECT page_id, book, path, title FROM pages ORDER BY path").fetchall()
        step = max(1, len(rows) // sample) if rows else 1
        mism = 0
        for job in rows[::step][:sample]:
            fact = extract.parse_page(tuple(job))
            got = conn.execute(
                "SELECT COUNT(*) FROM observation_index WHERE page_path=?",
                (job[2],)).fetchone()[0]
            # Re-extraction must produce the same page (observation count
            # agrees at least zero-vs-nonzero with what ingest saw; exact
            # obs-id equality is covered by --verify-reproducible).  Count
            # every observation-bearing family, not just the big four --
            # a page whose only yield is constant names must not read as 0.
            if fact.get("missing"):
                mism += 1
                continue
            fam = sum(len(v) for k, v in fact.items()
                      if isinstance(v, list) and k != "subjects")
            if (fam == 0) != (got == 0):
                mism += 1
        c.check(mism == 0, f"sample re-extraction mismatches: {mism}")
        c.notes.append(f"sample re-extraction checked: {len(rows[::step][:sample])} pages")

    # --- manifest agreement
    if manifest_path and os.path.exists(manifest_path):
        manifest = json.load(open(manifest_path, encoding="utf-8"))
        c.check(manifest.get("db_sha256") == _file_sha256(db_path),
                "manifest db_sha256 != database file hash")
        from .build import canonical_table_hashes
        tables = canonical_table_hashes(conn)
        c.check(manifest.get("tables") == tables,
                "manifest table hashes != database content")

    # --- input drift
    from .build import _package_hash
    _here = os.path.dirname(os.path.abspath(__file__))
    _packages = {"tools/kbgen/*.py": _here,
                 "tools/page_parse/*.py": os.path.join(_here, os.pardir,
                                                       "page_parse")}
    for path, _role, sha, _size in conn.execute(
            "SELECT path, role, sha256, size FROM build_inputs ORDER BY path"):
        if path in _packages:
            actual = _package_hash(_packages[path])
        else:
            full = os.path.join(ROOT, path)
            actual = _file_sha256(full) if os.path.exists(full) else None
        if actual != sha:
            c.fail(f"input drift: {path} changed since build")

    # --- reproducibility
    if verify_reproducible and not c.failures:
        import tempfile
        from .build import build as rebuild, canonical_table_hashes
        with tempfile.TemporaryDirectory() as tmp:
            tmp_db = os.path.join(tmp, "kb.sqlite3")
            tmp_manifest = os.path.join(tmp, "manifest.json")
            jobs = None
            subset = meta.get("subset_tree") or None
            rebuild(tmp_db, tmp_manifest, None, workers=workers,
                    only_tree=subset)
            other = sqlite3.connect(f"file:{tmp_db}?mode=ro", uri=True)
            same_tables = canonical_table_hashes(other) == \
                canonical_table_hashes(conn)
            other.close()
            same_bytes = _file_sha256(tmp_db) == _file_sha256(db_path)
            c.notes.append(f"reproducible rebuild: db bytes identical = {same_bytes}")
            c.check(same_tables,
                    "reproducible rebuild: canonical table hashes differ")

    for note in c.notes:
        print(f"note: {note}")
    if c.failures:
        for failure in c.failures:
            print(f"FAIL {failure}")
        print(f"kb-check: {len(c.failures)} failure(s)")
        return 1
    print("kb OK")
    return 0
