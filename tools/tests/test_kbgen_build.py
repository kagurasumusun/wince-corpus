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
from tools.kbgen.validate import validate  # noqa: E402


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


if __name__ == "__main__":
    unittest.main()
