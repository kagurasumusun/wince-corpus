"""End-to-end: a subset build validates and is byte-for-byte reproducible.

Uses the real corpus tree chm/windows-ce-3.0's first pages via explicit
job lists so the test stays fast, then the win32/api/winuser subset via
the tree argument.
"""

import os
import sqlite3
import sys
import tempfile
import unittest

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__)))))

from tools.kbgen import extract  # noqa: E402
from tools.kbgen.build import build  # noqa: E402
from tools.kbgen.common import INDEX_PATH  # noqa: E402
from tools.kbgen.validate import _obs_bearing_yield, validate  # noqa: E402


class BuildTests(unittest.TestCase):
    def _build_into(self, tmp, jobs):
        db = os.path.join(tmp, "kb.sqlite3")
        manifest = os.path.join(tmp, "manifest.json")
        digest = build(db, manifest, None, workers=1, page_jobs=jobs)
        return db, manifest, digest

    def test_subset_build_validates_and_reproduces(self):
        jobs = extract.read_index(INDEX_PATH, "chm/windows-ce-3.0")[:60]
        self.assertTrue(jobs)
        with tempfile.TemporaryDirectory() as t1, \
                tempfile.TemporaryDirectory() as t2:
            db1, m1, d1 = self._build_into(t1, jobs)
            conn = sqlite3.connect(f"file:{db1}?mode=ro", uri=True)
            pages = conn.execute("SELECT COUNT(*) FROM pages").fetchone()[0]
            conn.close()
            self.assertEqual(pages, len(jobs))
            rc = validate(db_path=db1, manifest_path=m1,
                          skip_page_hashes=True, sample=5)
            self.assertEqual(rc, 0)
            _db2, _m2, d2 = self._build_into(t2, jobs)
            self.assertEqual(d1, d2, "two builds of the same inputs differ")




class SampleYieldTests(unittest.TestCase):
    """The sample re-extraction check counts only observation-bearing
    yield: what Builder._ingest_* would register in
    observation_index."""

    def test_name_rows_alone_bear_no_observation(self):
        fact = {"subjects": [{"name": "0x00"}], "declarations": [],
                "name_rows": [{"name": "0x00", "description": "x"}] * 5}
        self.assertEqual(_obs_bearing_yield(fact), 0)

    def test_constants_need_parseable_values_and_names(self):
        self.assertEqual(_obs_bearing_yield(
            {"constants": [{"name": "FOO", "value": "soon"}]}), 0)
        self.assertEqual(_obs_bearing_yield(
            {"constants": [{"name": "FOO", "value": "0x10"}]}), 1)
        self.assertEqual(_obs_bearing_yield(
            {"constant_names": [{"name": ""}]}), 0)

    def test_conditional_families(self):
        self.assertEqual(_obs_bearing_yield(
            {"family_headers": [{"kind": "exact"}]}), 0)
        self.assertEqual(_obs_bearing_yield(
            {"family_headers": [{"kind": "prefix"}]}), 1)
        self.assertEqual(_obs_bearing_yield(
            {"unsupported_constants": [{"names": []}]}), 0)
        self.assertEqual(_obs_bearing_yield({"notes": [{}]}), 1)

    def test_wbxml_token_page_validates(self):
        # mobilesdk5's WBXML token tables yield name_rows for numeric
        # tokens and nothing else: ingest writes zero observations
        # and the sample check must agree (full-build regression at
        # 173k pages).
        jobs = [j for j in extract.read_index(
            INDEX_PATH, "msdn-library/vs2008-sp1")
            if j[2].endswith("wce51grfStartTokensOnCodePage0.html")]
        self.assertEqual(len(jobs), 1)
        with tempfile.TemporaryDirectory() as tmp:
            db = os.path.join(tmp, "kb.sqlite3")
            manifest = os.path.join(tmp, "manifest.json")
            build(db, manifest, None, workers=1, page_jobs=jobs)
            conn = sqlite3.connect(f"file:{db}?mode=ro", uri=True)
            obs = conn.execute("SELECT COUNT(*) FROM observation_index"
                               ).fetchone()[0]
            conn.close()
            self.assertEqual(obs, 0)
            rc = validate(db_path=db, manifest_path=manifest,
                          skip_page_hashes=True, sample=1)
            self.assertEqual(rc, 0)


class HexColumnTests(unittest.TestCase):
    """HRESULT tables print bare hex; the letter prints prove the radix
    of the whole column, including its all-digit prints."""

    SCHEMA = """
    CREATE TABLE constant_observations(
        obs_id TEXT PRIMARY KEY, symbol_key TEXT, page_path TEXT,
        value_raw TEXT, value_int INTEGER, decimal_raw TEXT,
        origin TEXT, group_header TEXT, table_sha256 TEXT,
        row_sha256 TEXT) STRICT;
    """

    def _conn(self, rows):
        import sqlite3 as _sq
        conn = _sq.connect(":memory:")
        conn.execute(self.SCHEMA)
        conn.executemany(
            "INSERT INTO constant_observations(obs_id, symbol_key,"
            " page_path, value_raw, value_int, decimal_raw, table_sha256)"
            " VALUES (?,?,?,?,?,?,?)", rows)
        return conn

    def test_all_digit_prints_follow_their_column(self):
        from tools.kbgen.build import _reconcile_hex_columns
        conn = self._conn([
            ("o1", "a", "p1", "80091008", 80091008, None, "T"),
            ("o2", "b", "p1", "8009100F", 0x8009100F, None, "T"),
            # same value on another page/table: stays decimal
            ("o3", "c", "p2", "80091008", 80091008, None, "U"),
            # a row with a printed decimal is never re-read
            ("o4", "d", "p1", "80091010", 80091010, "80091010", "T"),
            # not the 8-digit HRESULT shape
            ("o5", "e", "p1", "1234567", 1234567, None, "T"),
        ])
        _reconcile_hex_columns(conn)
        got = dict(conn.execute(
            "SELECT obs_id, value_int FROM constant_observations"))
        self.assertEqual(got["o1"], 0x80091008)
        self.assertEqual(got["o2"], 0x8009100F)
        self.assertEqual(got["o3"], 80091008)
        self.assertEqual(got["o4"], 80091010)
        self.assertEqual(got["o5"], 1234567)

    def test_define_lines_without_a_table_never_form_a_column(self):
        from tools.kbgen.build import _reconcile_hex_columns
        from tools.kbgen.common import sha256_text
        empty = sha256_text("")
        conn = self._conn([
            ("o1", "a", "p1", "80091008", 80091008, None, empty),
            ("o2", "b", "p9", "8009BEEF", 0x8009BEEF, None, empty),
        ])
        _reconcile_hex_columns(conn)
        got = dict(conn.execute(
            "SELECT obs_id, value_int FROM constant_observations"))
        self.assertEqual(got["o1"], 80091008)


if __name__ == "__main__":
    unittest.main()
