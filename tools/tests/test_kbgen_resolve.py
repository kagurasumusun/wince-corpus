"""Unit tests for tools/kbgen/resolve.py over a hand-built tiny DB.

The whole schema is created from kb/schema.sql and a handful of
observation rows are inserted; the resolver must produce the contract:
ranked choices, ties as open conflicts, review supremacy limited by
unanimous page evidence, version-scoped constants only on disjoint
version sets, and group-header tokens registered as headers (the FK
regression of the first full build).
"""

import os
import sqlite3
import sys
import unittest

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__)))))

from tools.kbgen import resolve  # noqa: E402
from tools.kbgen.common import CE_VERSIONS, SCHEMA_PATH, obs_id, sha256_text  # noqa: E402
from tools.kbgen.reviews import Reviews  # noqa: E402

_seq = [0]


def oid(prefix="d"):
    _seq[0] += 1
    return obs_id(prefix, "test", _seq[0])


class ResolveCase(unittest.TestCase):
    def setUp(self):
        self.conn = sqlite3.connect(":memory:")
        self.conn.executescript(open(SCHEMA_PATH, encoding="utf-8").read())
        self.conn.execute("PRAGMA foreign_keys=ON")
        self.conn.executemany("INSERT INTO ce_versions(version) VALUES (?)",
                              [(v,) for v in CE_VERSIONS])
        self.reviews = Reviews()
        self.blob = sha256_text("x")
        self.conn.execute("INSERT INTO text_blobs(sha256, text) VALUES (?,?)",
                          (self.blob, "x"))

    # ------------------------------------------------------------ fixtures
    def page(self, path, book, layer, version=None):
        self.conn.execute(
            "INSERT OR IGNORE INTO doc_sets(book, tree, layer, ce_version)"
            " VALUES (?,?,?,?)", (book, book.split("/")[0], layer, version))
        self.conn.execute(
            "INSERT INTO pages(path, page_id, book, title, sha256, size,"
            " license_scope) VALUES (?,?,?,?,?,1,'test')",
            (path, path, book, path, "0" * 64))
        return path

    def symbol(self, key, display=None):
        self.conn.execute(
            "INSERT OR IGNORE INTO symbols(symbol_key, display_name)"
            " VALUES (?,?)", (key, display or key))
        return key

    def req_header(self, sym, page, header, for_name=None):
        o = oid("r")
        self.conn.execute("INSERT INTO observation_index VALUES (?,?,?)",
                          (o, "requirement", page))
        self.conn.execute(
            "INSERT INTO requirement_observations VALUES (?,?,?,?,?,?,?,?,?)",
            (o, sym, for_name, page, "header", "Header", header,
             header.lower(), self.blob))
        self.conn.execute(
            "INSERT OR IGNORE INTO headers VALUES (?,?)",
            (header.lower(), header))
        self.conn.execute(
            "INSERT INTO requirement_files VALUES (?,?,?)",
            (o, header.lower(), "header"))
        return o

    def constant(self, sym, page, raw, vint, group_header=None):
        o = oid("k")
        self.conn.execute("INSERT INTO observation_index VALUES (?,?,?)",
                          (o, "constant", page))
        self.conn.execute(
            "INSERT INTO constant_observations VALUES (?,?,?,?,?,?,?,?,?,?)",
            (o, sym, page, raw, vint, None, "table", group_header,
             self.blob, self.blob))
        return o

    def run_resolve(self):
        resolve.resolve_all(self.conn, self.reviews, "/nonexistent.tsv")

    def chosen_header(self, sym, layer="ce"):
        row = self.conn.execute(
            "SELECT header_key FROM symbol_headers WHERE symbol_key=?"
            " AND layer=? AND is_chosen=1", (sym, layer)).fetchone()
        return row[0] if row else None

    def conflicts(self, sym, kind=None):
        sql = "SELECT kind, detail, status FROM conflicts WHERE symbol_key=?"
        args = [sym]
        if kind:
            sql += " AND kind=?"
            args.append(kind)
        return self.conn.execute(sql, args).fetchall()


class HeaderChoiceTests(ResolveCase):
    def test_subject_requirement_wins(self):
        p = self.page("corpus/learn/a/x.html", "learn/a", "ce", "5.0")
        self.symbol("foo", "Foo")
        self.req_header("foo", p, "Winbase.h")
        self.run_resolve()
        self.assertEqual(self.chosen_header("foo"), "winbase.h")

    def test_tie_is_open_conflict(self):
        p1 = self.page("corpus/learn/a/x.html", "learn/a", "ce", "5.0")
        p2 = self.page("corpus/learn/a/y.html", "learn/a", "ce", "5.0")
        self.symbol("foo", "Foo")
        self.req_header("foo", p1, "Winbase.h")
        self.req_header("foo", p2, "Winuser.h")
        self.run_resolve()
        self.assertIsNone(self.chosen_header("foo"))
        rows = self.conflicts("foo", "header-choice")
        self.assertEqual(len(rows), 1)
        self.assertIn("winbase.h", rows[0][1])

    def test_group_header_files_constant(self):
        # Regression: a constant's group_header token must be registered
        # in headers before symbol_headers references it (FK).
        p = self.page("corpus/learn/a/x.html", "learn/a", "ce", "5.0")
        self.symbol("my_const", "MY_CONST")
        self.constant("my_const", p, "1", 1, group_header="Limits.h")
        self.run_resolve()
        self.assertEqual(self.chosen_header("my_const"), "limits.h")
        rank = self.conn.execute(
            "SELECT rank_name FROM symbol_headers WHERE symbol_key='my_const'"
            " AND header_key='limits.h'").fetchone()[0]
        self.assertEqual(rank, "membership")

    def test_review_reject_suppresses(self):
        p = self.page("corpus/learn/a/x.html", "learn/a", "ce", "5.0")
        self.symbol("junk_const", "JUNK_CONST")
        self.constant("junk_const", p, "1", 1)
        self.req_header("junk_const", p, "Winbase.h")
        self.reviews.names["JUNK_CONST"] = {
            "scope": "name", "name": "JUNK_CONST", "verdict": "reject",
            "header": "", "evidence_page": "", "review_id": "v-test"}
        self.run_resolve()
        self.assertIsNone(self.chosen_header("junk_const"))


class ConstantValueTests(ResolveCase):
    def test_single_value_resolves(self):
        p = self.page("corpus/learn/a/x.html", "learn/a", "ce", "5.0")
        self.symbol("max_thing", "MAX_THING")
        self.constant("max_thing", p, "0x80", 128)
        self.run_resolve()
        row = self.conn.execute(
            "SELECT scope, value_int FROM constant_values"
            " WHERE symbol_key='max_thing'").fetchone()
        self.assertEqual(row, ("*", 128))

    def test_version_scoped_when_disjoint(self):
        p5 = self.page("corpus/learn/a/x.html", "learn/windows-ce-5.0", "ce", "5.0")
        p6 = self.page("corpus/learn/b/x.html", "learn/windows-embedded-ce-6.0", "ce", "6.0")
        self.symbol("gen_const", "GEN_CONST")
        self.constant("gen_const", p5, "10", 10)
        self.constant("gen_const", p6, "20", 20)
        self.run_resolve()
        rows = sorted(self.conn.execute(
            "SELECT scope, value_int FROM constant_values"
            " WHERE symbol_key='gen_const'"))
        self.assertEqual(rows, [("5.0", 10), ("6.0", 20)])
        self.assertEqual(self.conflicts("gen_const", "constant-value"), [])

    def test_unset_version_blocks_scoping(self):
        p5 = self.page("corpus/learn/a/x.html", "learn/windows-ce-5.0", "ce", "5.0")
        pu = self.page("corpus/site/a/x.html", "site/a", "ce", None)
        self.symbol("bad_const", "BAD_CONST")
        self.constant("bad_const", p5, "502", 502)
        self.constant("bad_const", pu, "0x502", 0x502)
        self.run_resolve()
        self.assertIsNone(self.conn.execute(
            "SELECT 1 FROM constant_values WHERE symbol_key='bad_const'"
        ).fetchone())
        self.assertEqual(len(self.conflicts("bad_const", "constant-value")), 1)

    def test_reviewed_value_must_be_printed(self):
        p5 = self.page("corpus/learn/a/x.html", "learn/windows-ce-5.0", "ce", "5.0")
        p6 = self.page("corpus/learn/b/x.html", "learn/windows-embedded-ce-6.0", "ce", "6.0")
        self.symbol("rev_const", "REV_CONST")
        self.constant("rev_const", p5, "7", 7)
        self.constant("rev_const", p5, "9", 9)
        self.constant("rev_const", p6, "9", 9)
        self.reviews.values["REV_CONST"] = {
            "name": "REV_CONST", "resolved_value": "9", "verdict": "ok",
            "review_id": "v-rev"}
        self.conn.execute(
            "INSERT INTO reviews(review_id, kind, name, name_key, source_file)"
            " VALUES ('v-rev','constant-value','REV_CONST','rev_const','test')")
        self.run_resolve()
        row = self.conn.execute(
            "SELECT value_int, status FROM constant_values"
            " WHERE symbol_key='rev_const'").fetchone()
        self.assertEqual(row, (9, "reviewed"))


if __name__ == "__main__":
    unittest.main()


class CegccAdoptionTests(ResolveCase):
    """The 'cegcc' layer: adopted only where CE docs are silent."""

    def reference(self, name, header, raw, vint, adoptable=1,
                  source="w32api-cegcc", ce_guard="", line=1):
        self.conn.execute(
            "INSERT OR IGNORE INTO reference_sources(source_id, description,"
            " archive, sha256) VALUES (?,?,?,?)",
            (source, "test", "x.tar.gz", "0" * 64))
        locator = f"inc/{header}:{line}"
        rid = obs_id("x", source, "define", locator, name, ce_guard)
        self.conn.execute(
            "INSERT INTO reference_names(reference_id, source_id, kind,"
            " name, name_key, header_key, module_name, value_printed,"
            " value_int, locator, adoptable, ce_guard)"
            " VALUES (?,?, 'define', ?, ?, ?, NULL, ?, ?, ?, ?, ?)",
            (rid, source, name, name.lower(), header, raw, vint,
             locator, adoptable, ce_guard))
        return rid

    def unnumbered(self, sym, page):
        o = oid("n")
        self.conn.execute("INSERT INTO observation_index VALUES (?,?,?)",
                          (o, "constant-name", page))
        self.conn.execute(
            "INSERT INTO constant_name_observations(obs_id, symbol_key,"
            " page_path, table_sha256, row_sha256) VALUES (?,?,?,?,?)",
            (o, sym, page, self.blob, self.blob))

    def cegcc_value(self, sym):
        return self.conn.execute(
            "SELECT value_int FROM constant_values WHERE symbol_key=?"
            " AND layer='cegcc'", (sym,)).fetchone()

    def test_adopted_when_documented_unnumbered(self):
        page = self.page("ce/a.html", "chm/test", "ce", "5.0")
        self.symbol("foo_const")
        self.unnumbered("foo_const", page)
        self.reference("FOO_CONST", "foo.h", "0x10", 16)
        self.run_resolve()
        self.assertEqual(self.cegcc_value("foo_const"), (16,))
        # and a 'cegcc' header choice from the same define
        self.assertEqual(self.chosen_header("foo_const", layer="cegcc"),
                         "foo.h")
        ev = self.conn.execute(
            "SELECT reference_id, obs_id, review_id"
            " FROM constant_value_evidence WHERE layer='cegcc'").fetchall()
        self.assertTrue(ev and ev[0][0] and ev[0][1] is None
                        and ev[0][2] is None)

    def test_not_adopted_when_ce_documents_value(self):
        page = self.page("ce/b.html", "chm/test", "ce", "5.0")
        self.symbol("bar_const")
        self.constant("bar_const", page, "7", 7)
        self.reference("BAR_CONST", "bar.h", "9", 9)
        self.run_resolve()
        self.assertIsNone(self.cegcc_value("bar_const"))

    def test_not_adopted_when_cegcc_disagrees(self):
        page = self.page("ce/c.html", "chm/test", "ce", "5.0")
        self.symbol("baz_const")
        self.unnumbered("baz_const", page)
        self.reference("BAZ_CONST", "a.h", "1", 1)
        self.reference("BAZ_CONST", "b.h", "2", 2, source="w32api-mingw")
        self.run_resolve()
        self.assertIsNone(self.cegcc_value("baz_const"))

    def test_ce_branch_value_wins_over_desktop_branch(self):
        # CeGCC prints THREAD_PRIORITY_*-style splits: one value under
        # #ifdef _WIN32_WCE, another in the desktop branch.  The old
        # unanimity rule refused the name; the CE branch now decides.
        page = self.page("ce/g.html", "chm/test", "ce", "5.0")
        self.symbol("split_const")
        self.unnumbered("split_const", page)
        self.reference("SPLIT_CONST", "s.h", "15", 15,
                       ce_guard="not-wce", line=10)
        self.reference("SPLIT_CONST", "s.h", "0", 0,
                       ce_guard="wce", line=12)
        self.run_resolve()
        self.assertEqual(self.cegcc_value("split_const"), (0,))
        cited = self.conn.execute(
            "SELECT rn.ce_guard FROM constant_value_evidence e"
            " JOIN reference_names rn ON rn.reference_id=e.reference_id"
            " WHERE e.layer='cegcc'").fetchall()
        self.assertEqual(cited, [("wce",)])

    def test_ce_excluded_branch_is_never_adopted(self):
        # A define CeGCC prints only for the desktop (#ifndef
        # _WIN32_WCE) must not give the CE-documented name a value.
        page = self.page("ce/h.html", "chm/test", "ce", "5.0")
        self.symbol("desk_const")
        self.unnumbered("desk_const", page)
        self.reference("DESK_CONST", "d.h", "0x200", 512,
                       ce_guard="not-wce")
        self.run_resolve()
        self.assertIsNone(self.cegcc_value("desk_const"))
        self.assertIsNone(self.chosen_header("desk_const", layer="cegcc"))

    def test_split_ce_branches_refuse_rather_than_fall_back(self):
        # Two CE-branch values under different version floors: the
        # single-scope adoption cannot express either, and the
        # desktop value is not a fallback.
        page = self.page("ce/i.html", "chm/test", "ce", "5.0")
        self.symbol("floor_const")
        self.unnumbered("floor_const", page)
        self.reference("FLOOR_CONST", "f.h", "1", 1,
                       ce_guard="wce>=0x400", line=3)
        self.reference("FLOOR_CONST", "f.h", "2", 2,
                       ce_guard="wce>=0x500", line=5)
        self.reference("FLOOR_CONST", "f.h", "9", 9,
                       ce_guard="not-wce", line=7)
        self.run_resolve()
        self.assertIsNone(self.cegcc_value("floor_const"))

    def test_not_adopted_from_excluded_or_undocumented(self):
        page = self.page("ce/d.html", "chm/test", "ce", "5.0")
        self.symbol("wsock_const")
        self.unnumbered("wsock_const", page)
        self.reference("WSOCK_CONST", "winsock.h", "3", 3, adoptable=0)
        self.symbol("ghost_const")  # never documented in CE
        self.reference("GHOST_CONST", "g.h", "5", 5)
        self.run_resolve()
        self.assertIsNone(self.cegcc_value("wsock_const"))
        self.assertIsNone(self.cegcc_value("ghost_const"))


class TypedefAliasTests(unittest.TestCase):
    def test_tag_alias_pairs(self):
        got = resolve._typedef_aliases_of(
            "typedef struct _WAVEHDR { LPSTR lpData; } WAVEHDR,"
            " *PWAVEHDR, FAR *LPWAVEHDR;")
        self.assertEqual(got, [("_WAVEHDR", "WAVEHDR"),
                               ("_WAVEHDR", "PWAVEHDR"),
                               ("_WAVEHDR", "LPWAVEHDR")])

    def test_nested_body(self):
        got = resolve._typedef_aliases_of(
            "typedef struct tagX { struct { int a; } inner; } X;")
        self.assertEqual(got, [("tagX", "X")])

    def test_no_tag_no_alias(self):
        self.assertEqual(resolve._typedef_aliases_of(
            "typedef struct { int x; } POINT;"), [])
        self.assertEqual(resolve._typedef_aliases_of(
            "typedef int BOOL;"), [])
