"""Tests for the constant extractors of tools/page_parse.py.

Every special-format table shape that carries constant values must be
read completely -- a shape missed is a shape lost ("存在しているのに抽出
されていない").  The fixtures are the real committed corpus pages, one per
shape:

* window-styles.md -- markdown pipe value table (0x values);
* cbtproc.md -- the HTML value table with span-id names (HCBT_*);
* nf-winuser-setwindowshookexw.md -- the <dl><dt> value pairs (WH_*);
* button-styles.md -- the names-only style list (constant-names.tsv).

build-kb feeds these with ``constant_tables`` (html), ``constant_tables_text``
(markdown) and ``constant_name_rows``/``_text`` (the name lists).
"""

import os
import sys
import unittest

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                ".."))

import page_parse  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__))))


def _load(path):
    full = os.path.join(ROOT, path)
    if not os.path.exists(full):
        raise unittest.SkipTest(f"corpus page not committed: {path}")
    with open(full, "rb") as fh:
        return fh.read()


class MarkdownPipeValueTests(unittest.TestCase):
    def test_window_styles_values(self):
        text = page_parse.decode(_load("corpus/win32/common/"
                                       "window-styles.md"))
        rows = page_parse.constant_tables_text(text)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertGreaterEqual(len(out), 24, sorted(out))
        self.assertEqual(out.get("WS_BORDER"), "0x00800000L")
        self.assertEqual(out.get("WS_CAPTION"), "0x00C00000L")
        self.assertTrue(any(v.startswith("0x") for v in out.values()))

    def test_extended_window_styles_values(self):
        text = page_parse.decode(_load("corpus/win32/common/"
                                       "extended-window-styles.md"))
        rows = page_parse.constant_tables_text(text)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertGreaterEqual(len(out), 24, sorted(out))
        self.assertEqual(out.get("WS_EX_DLGMODALFRAME"), "0x00000001L")


class HtmlValueTableTests(unittest.TestCase):
    def test_cbt_codes(self):
        frag = page_parse.article_html(_load("corpus/win32/common/"
                                             "cbtproc.md"))
        rows = page_parse.constant_tables(frag)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertEqual(len(out), 10, sorted(out))
        for name, value in (("HCBT_MOVESIZE", "0"), ("HCBT_MINMAX", "1"),
                            ("HCBT_CREATEWND", "3"), ("HCBT_ACTIVATE", "5")):
            self.assertEqual(out.get(name), value, (name, out))


class DlValuePairTests(unittest.TestCase):
    def test_wh_hook_codes(self):
        text = page_parse.decode(_load("corpus/win32/common/"
                                       "nf-winuser-setwindowshookexw.md"))
        rows = page_parse.constant_tables_text(text)
        wh = {r["name"]: r.get("value") for r in rows
              if r["name"].startswith("WH_")}
        self.assertGreaterEqual(len(wh), 15, sorted(wh))
        self.assertEqual(wh.get("WH_CALLWNDPROC"), "4")
        self.assertEqual(wh.get("WH_CBT"), "5")


class ExpressionValueTests(unittest.TestCase):
    def test_ras_expression_values(self):
        """The RAS error table prints "Code" values as printed
        expressions (RASBASE+1).  The expression is quoted as printed --
        never computed (values: never derived)."""
        import glob
        found = glob.glob(os.path.join(
            ROOT, "corpus", "**", "*RAS_Error_Values*"), recursive=True)
        if not found:
            raise unittest.SkipTest("RAS error page not committed")
        frag = page_parse.article_html(open(found[0], "rb").read())
        rows = page_parse.constant_tables(frag)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertGreaterEqual(len(out), 150, len(out))
        self.assertEqual(out.get("ERROR_INVALID_PORT_HANDLE"), "RASBASE+1")
        self.assertEqual(out.get("PENDING"), "RASBASE+0")


class ContentColumnTests(unittest.TestCase):
    def test_value_first_and_odd_headers(self):
        """Tables whose headers do not name the columns ("Level
        description | Value", "Error code | Error string | Description")
        are read by their CELLS: identifiers vs printed values."""
        import glob
        found = glob.glob(os.path.join(
            ROOT, "corpus", "**", "aa447933*"), recursive=True)
        if not found:
            raise unittest.SkipTest("debug-levels page not committed")
        frag = page_parse.article_html(open(found[0], "rb").read())
        rows = page_parse.constant_tables(frag)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertEqual(out.get("DBG_LEVEL_INFO"), "0x00000000")
        self.assertEqual(out.get("DBG_LEVEL_ERR"), "0x00002000")

    def test_error_string_name_column(self):
        import glob
        found = glob.glob(os.path.join(
            ROOT, "corpus", "**", "ms891734*"), recursive=True)
        if not found:
            raise unittest.SkipTest("parse-error page not committed")
        frag = page_parse.article_html(open(found[0], "rb").read())
        rows = page_parse.constant_tables(frag)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertGreaterEqual(len(out), 150, len(out))
        self.assertEqual(out.get("MSG_E_BADCHARDATA"), "0xC00CE508L")


class PrintedDefineTests(unittest.TestCase):
    def test_message_define_block_is_syntax(self):
        """The message reference prints the definition as the page's
        block: ``#define WM_CREATE 0x0001`` with no Syntax heading.  A
        block that is only #define lines is a declaration (macro block),
        not sample code -- and the value is quoted as printed."""
        text = page_parse.decode(_load("corpus/win32/common/wm-create.md"))
        _fields, _reqs, decls, _sf = page_parse.markdown(text)
        rows = page_parse.syntax_constant_rows(decls)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertEqual(out.get("WM_CREATE"), "0x0001")

    def test_example_stays_example(self):
        """Sample code never yields constants (the cleanroom rule)."""
        text = ("## Example\n\n"
                "```C++\n"
                "#define cEvents 3\n"
                "int main() { return cEvents; }\n"
                "```\n")
        _fields, _reqs, decls, _sf = page_parse.markdown(text)
        for d in decls:
            self.assertEqual(d["role"], "example")
        self.assertEqual(page_parse.syntax_constant_rows(decls), [])

    def test_inline_define_in_table_note(self):
        """A table note quoting ``#define TBSTYLE_EX_VERTICAL
        0x00000004`` for a style the header does not define prints the
        definition; the reader takes it outside code blocks only."""
        text = page_parse.decode(_load(
            "corpus/win32/common/toolbar-extended-styles.md"))
        rows = page_parse.define_line_constants(text)
        out = {r["name"]: r.get("value") for r in rows}
        self.assertEqual(out.get("TBSTYLE_EX_VERTICAL"), "0x00000004")
        self.assertEqual(out.get("TBSTYLE_EX_MULTICOLUMN"), "0x00000002")


class NameListTests(unittest.TestCase):
    def test_button_styles_names(self):
        text = page_parse.decode(_load("corpus/win32/common/"
                                       "button-styles.md"))
        rows = page_parse.constant_name_rows_text(text)
        names = {r["name"] if isinstance(r, dict) else r for r in rows}
        self.assertIn("BS_LEFT", names)
        self.assertIn("BS_PUSHLIKE", names)

    def test_control_styles_comprehensive(self):
        text = page_parse.decode(_load("corpus/win32/common/"
                                       "common-control-styles.md"))
        rows = page_parse.constant_name_rows_text(text)
        names = {r["name"] if isinstance(r, dict) else r for r in rows}
        self.assertGreaterEqual(len(names), 8, len(names))


if __name__ == "__main__":
    unittest.main()
