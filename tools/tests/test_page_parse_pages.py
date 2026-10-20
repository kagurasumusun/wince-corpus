"""Golden-page tests: real corpus pages through the kbgen extractor.

These pin *behaviour on representative page formats*, one assertion per
format fact a reader is supposed to find.  When a parser fix lands it
adds its page here first (red), then fixes the reader (green).  Pages are
referenced in the corpus, not copied -- the corpus is the fixture.
"""
import os
import sys
import unittest

_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(_ROOT, "tools"))

from kbgen import extract  # noqa: E402

_INDEX = None


def _fact(path_suffix):
    global _INDEX
    if _INDEX is None:
        extract.init_worker(extract.load_catalogs(
            os.path.join(_ROOT, "data", "catalogs")))
        _INDEX = {row[2]: row for row in extract.read_index(
            os.path.join(_ROOT, "data", "index", "INDEX.tsv"), None)}
    for path, row in _INDEX.items():
        if path.endswith(path_suffix):
            return extract.parse_page(row)
    raise AssertionError(f"page not indexed: {path_suffix}")


def _syntax(fact):
    return [d for d in fact["declarations"] if d["role"] == "syntax"]


class NameRowAttributionTests(unittest.TestCase):
    """windows-data-types.md lists ~176 typedefs row by row; each row's
    declaration declares its own row name (they must never be attributed
    to a page-level 'first subject')."""

    @classmethod
    def setUpClass(cls):
        cls.fact = _fact("windows-data-types.md")

    def test_every_listed_decl_declares_its_row_name(self):
        decls = self.fact["declarations"]
        self.assertGreater(len(decls), 100)
        for d in decls:
            self.assertTrue(d.get("declares"), d["text"][:60])
            # (textual containment is *not* asserted: the page itself
            # prints e.g. `typedef HANDLE WINSTA;` in the HWINSTA row --
            # quoted verbatim, associated by the row.)

    def test_bool_and_byte(self):
        by_name = {d["declares"]: d["text"] for d in self.fact["declarations"]}
        self.assertEqual(by_name["BOOL"], "typedef int BOOL;")
        self.assertEqual(by_name["BYTE"], "typedef unsigned char BYTE;")


class MvbTablePrototypeTests(unittest.TestCase):
    """CE 1.0 Books Online (mvb/windows-ce-1.0/PEGSDK) prints the prototype
    as a two-column table (code line | // comment); the first row's
    comment is the header file."""

    def test_function_page(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AB104C.html")  # CommandBar_GetMenu
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1)
        self.assertIn("HMENU CommandBar_GetMenu(", syntax[0]["text"])
        self.assertIn("HWND hwndCB,", syntax[0]["text"])
        self.assertTrue(syntax[0]["text"].rstrip().endswith(");"))
        headers = [r for r in fact["requirements"] if r["field"] == "header"]
        self.assertTrue(any("commctrl.h" in r["value"] for r in headers),
                        headers)

    def test_prototype_without_header_comment(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AA20N.html")  # TransportCount
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1)
        self.assertIn("BOOL TransportCount(", syntax[0]["text"])
        self.assertNotIn("The TransportCount routine", syntax[0]["text"])

    def test_typedef_struct_split_lines(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AA57L.html")  # PFF_CONVERTINFO
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1, [d["text"][:60] for d in syntax])
        self.assertIn("typedef struct tagPFF_CONVERTINFO", syntax[0]["text"])
        self.assertIn("HWND hwndParent;", syntax[0]["text"])
        self.assertTrue(syntax[0]["text"].rstrip().endswith("PFF_CONVERTINFO;"))
        self.assertIn("hwndParent", " ".join(syntax[0]["members"]))

    def test_corresponding_macro(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AD73Q.html")  # TVM_SETIMAGELIST
        named = [d for d in fact["declarations"]
                 if d.get("declares") == "TreeView_SetImageList"]
        self.assertEqual(len(named), 1, fact["declarations"])
        self.assertIn("HIMAGELIST TreeView_SetImageList(", named[0]["text"])


if __name__ == "__main__":
    unittest.main()
