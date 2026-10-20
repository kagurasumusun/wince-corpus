"""tools/tests/test_build_index_sql.py -- the names index is per page.

Regression: names used to be deleted by page_id when a page was
re-extracted.  Two doc sets holding the same topic file name
(the techshelps and MSDN-January-2002 copies of WCEMFC both have
cfndrdlg_17.htm) wiped each other's names -- which surfaced as
check-policy suddenly reporting long-standing win32 pages as
'not-ce-shared' in the Jan-2002 import run of 2026-10-21.
"""

import importlib.util
import os
import sqlite3
import sys
import tempfile
import unittest

_HERE = os.path.dirname(os.path.abspath(__file__))
_SPEC = importlib.util.spec_from_file_location(
    "build_index_sql", os.path.join(_HERE, "..", "build-index-sql.py"))
index_sql = importlib.util.module_from_spec(_SPEC)
_SPEC.loader.exec_module(index_sql)


def write_page(path, title, filler=""):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(f"<html><head><title>{title}</title></head>"
                 f"<body>{filler}</body></html>")


class CollisionTests(unittest.TestCase):
    def setUp(self):
        self.box = tempfile.TemporaryDirectory()
        self.root = self.box.name
        self.corpus = os.path.join(self.root, "corpus")
        self.db = os.path.join(self.root, "corpus.sqlite3")
        self.page_a = os.path.join(
            self.corpus, "set-a", "WCEMFC", "cfndrdlg_17.html")
        self.page_b = os.path.join(
            self.corpus, "set-b", "wcemfc", "cfndrdlg_17.html")
        write_page(self.page_a, "FINDREPLACE")
        write_page(self.page_b, "Printing Support")

    def tearDown(self):
        self.box.cleanup()

    def run_index(self):
        old_root, old_corpus, old_argv = (
            index_sql.ROOT, index_sql.CORPUS, sys.argv)
        index_sql.ROOT, index_sql.CORPUS = self.root, self.corpus
        sys.argv = ["build-index-sql.py", "--db", self.db]
        try:
            index_sql.main()
        finally:
            index_sql.ROOT, index_sql.CORPUS, sys.argv = (
                old_root, old_corpus, old_argv)

    def name_rows(self):
        con = sqlite3.connect(self.db)
        try:
            return sorted(con.execute(
                "SELECT name, kind, path FROM names").fetchall())
        finally:
            con.close()

    def test_same_page_id_in_two_books_keeps_both_pages_names(self):
        self.run_index()
        rows = self.name_rows()
        self.assertIn(("FINDREPLACE", "title",
                       "corpus/set-a/WCEMFC/cfndrdlg_17.html"), rows)

    def test_old_schema_db_is_rebuilt(self):
        con = sqlite3.connect(self.db)
        con.executescript(
            "CREATE TABLE pages(path TEXT PRIMARY KEY, page_id TEXT,"
            " section TEXT, title TEXT, size INTEGER);"
            "CREATE TABLE names(name TEXT, page_id TEXT, kind TEXT,"
            " PRIMARY KEY(name, page_id, kind));"
            "CREATE TABLE meta(key TEXT PRIMARY KEY, value TEXT);"
            "INSERT INTO names VALUES('STALE', 'gone', 'title');")
        con.commit()
        con.close()
        self.run_index()
        rows = self.name_rows()
        self.assertNotIn(("STALE", "title", "gone"), rows)
        self.assertIn(("FINDREPLACE", "title",
                       "corpus/set-a/WCEMFC/cfndrdlg_17.html"), rows)

    def test_reextracting_one_page_keeps_the_others_names(self):
        self.run_index()
        # same page_id, changed size -> re-extracted on the next run
        write_page(self.page_b, "Printing Support", filler="x" * 64)
        self.run_index()
        rows = self.name_rows()
        self.assertIn(("FINDREPLACE", "title",
                       "corpus/set-a/WCEMFC/cfndrdlg_17.html"), rows)


if __name__ == "__main__":
    unittest.main()
