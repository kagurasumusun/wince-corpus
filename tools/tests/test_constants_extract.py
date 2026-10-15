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
        self.assertEqual(out.get("WS_EX_DLGMODALFRAME"), "0x00000001")


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
