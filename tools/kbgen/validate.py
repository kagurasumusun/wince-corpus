"""Validate kb/kb.sqlite3 (the KB's guard; replaces check-kb.py and the
clean-room quote checker).

Checks, in order:
  1. SQLite integrity_check + foreign_key_check.
  2. kb_meta / schema version present and expected.
  3. Evidence integrity: every chosen fact has evidence; every evidence
     row cites exactly one observation, review or reference row (schema
     CHECK).  Observation evidence must come from a page in the fact's
     layer.  Reference evidence is allowed only on 'cegcc'-layer rows
     (the adoption layer), which in turn may cite nothing else, must
     never coexist with a documented 'ce' answer for the same symbol,
     and must agree with the CeGCC rows they cite.
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
import re
import sqlite3

from .common import (CATALOG_DIR, DB_PATH, MANIFEST_PATH, ROOT,
                     SCHEMA_VERSION, parse_constant_value, symbol_key,
                     valid_lib_dll_token)

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


def _obs_bearing_yield(fact) -> int:
    """Whether ingest would write observation_index rows for a fact.

    Mirrors Builder._ingest_* (tools/kbgen/build.py) at zero-vs-
    nonzero granularity; keep in step with its register_obs sites.
    Subjects never bear observations, and neither do name_rows
    themselves (the declarations/requirements a row carries are in
    their own families) -- a page whose only yield is name|description
    rows for unregistrable names ingests zero observations, which
    the sample check below must not read as extractor drift (the
    173k-page full build tripped on exactly that: mobilesdk5's
    wce51grfStartTokensOnCodePage0).  Constants need a parseable
    value on a registrable name, constant_names a registrable name,
    family_headers count only their "prefix" entries, and an
    unsupported_constants entry without names states nothing.
    """
    total = 0
    for key, val in fact.items():
        if not isinstance(val, list) or key in ("subjects", "name_rows"):
            continue
        if key == "constants":
            for item in val:
                raw = item.get("value")
                parsed = parse_constant_value(
                    None if raw is None
                    else re.sub(r"^0X", "0x", str(raw)))
                if parsed is not None and symbol_key(item.get("name")):
                    total += 1
        elif key == "constant_names":
            total += sum(1 for item in val if symbol_key(item.get("name")))
        elif key == "family_headers":
            total += sum(1 for item in val if item.get("kind") == "prefix")
        elif key == "unsupported_constants":
            total += sum(1 for item in val if item.get("names"))
        else:
            total += len(val)
    return total


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

    # 3. evidence integrity and layer isolation.  Reference rows are not
    #    observations (never in observation_index); they are citable only
    #    through the reference_id evidence slot of 'cegcc'-layer rows.
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

    # 3b. CeGCC adoption boundary (docs/kb-design.ja.md section 12).
    for ev in ("symbol_header_evidence", "constant_value_evidence"):
        c.count_is(conn,
                   f"SELECT COUNT(*) FROM {ev}"
                   " WHERE reference_id IS NOT NULL AND layer != 'cegcc'", 0,
                   f"{ev}: reference evidence outside layer 'cegcc'")
        c.count_is(conn,
                   f"SELECT COUNT(*) FROM {ev} WHERE layer='cegcc'"
                   " AND (obs_id IS NOT NULL OR review_id IS NOT NULL)", 0,
                   f"{ev}: 'cegcc' rows citing pages or reviews")
        c.count_is(conn,
                   f"SELECT COUNT(*) FROM {ev} e"
                   " JOIN reference_names rn"
                   "  ON rn.reference_id = e.reference_id"
                   " WHERE rn.adoptable = 0", 0,
                   f"{ev}: cites a non-adoptable reference row")
    c.count_is(conn,
               "SELECT COUNT(*) FROM constant_values cg"
               " WHERE cg.layer='cegcc' AND EXISTS"
               "  (SELECT 1 FROM constant_values ce"
               "   WHERE ce.symbol_key=cg.symbol_key AND ce.layer='ce'"
               "    AND ce.scope='*')", 0,
               "'cegcc' constant value beside a documented CE value")
    c.count_is(conn,
               "SELECT COUNT(*) FROM symbol_headers cg"
               " WHERE cg.layer='cegcc' AND EXISTS"
               "  (SELECT 1 FROM symbol_headers ce"
               "   WHERE ce.symbol_key=cg.symbol_key AND ce.layer='ce')", 0,
               "'cegcc' header beside documented CE header candidates")
    c.count_is(conn,
               "SELECT COUNT(*) FROM constant_values cg"
               " WHERE cg.layer='cegcc' AND NOT EXISTS"
               "  (SELECT 1 FROM constant_value_evidence e"
               "   WHERE e.symbol_key=cg.symbol_key AND e.layer='cegcc')", 0,
               "'cegcc' constant values without evidence")
    c.count_is(conn,
               "SELECT COUNT(*) FROM symbol_headers cg"
               " WHERE cg.layer='cegcc' AND NOT EXISTS"
               "  (SELECT 1 FROM symbol_header_evidence e"
               "   WHERE e.symbol_key=cg.symbol_key AND e.layer='cegcc'"
               "    AND e.header_key=cg.header_key)", 0,
               "'cegcc' headers without evidence")
    c.count_is(conn,
               "SELECT COUNT(*) FROM constant_value_evidence e"
               " JOIN reference_names rn ON rn.reference_id=e.reference_id"
               " JOIN constant_values cg"
               "  ON cg.symbol_key=e.symbol_key AND cg.layer='cegcc'"
               " WHERE rn.value_int IS NULL OR rn.value_int != cg.value_int",
               0, "'cegcc' value disagreeing with its cited CeGCC rows")
    c.count_is(conn,
               "SELECT COUNT(*) FROM symbol_header_evidence e"
               " JOIN reference_names rn ON rn.reference_id=e.reference_id"
               " WHERE e.layer='cegcc' AND rn.header_key != e.header_key", 0,
               "'cegcc' header disagreeing with its cited CeGCC rows")
    for ev in ("constant_value_evidence", "symbol_header_evidence"):
        c.count_is(conn,
                   f"SELECT COUNT(*) FROM {ev} e"
                   " JOIN reference_names rn ON rn.reference_id=e.reference_id"
                   " WHERE e.layer='cegcc' AND rn.ce_guard='not-wce'", 0,
                   f"{ev}: 'cegcc' row citing a CE-excluded CeGCC branch")

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
            # a page whose only yield is constant names must not read as 0
            # -- but only the yield ingest can actually register as
            # observations (_obs_bearing_yield).
            if fact.get("missing"):
                mism += 1
                continue
            fam = _obs_bearing_yield(fact)
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
