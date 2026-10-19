"""Unit tests for tools/kbgen/common.py (identity, layers, grammar)."""

import os
import sys
import unittest

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__)))))

from tools.kbgen import common  # noqa: E402


class SymbolKeyTests(unittest.TestCase):
    def test_casefold_and_whitespace(self):
        self.assertEqual(common.symbol_key("Create File"), "createfile")
        self.assertEqual(common.symbol_key("  CreateFile "), "createfile")

    def test_punctuation_is_preserved(self):
        # The old normaliser collapsed these distinct names into one.
        self.assertNotEqual(common.symbol_key("Foo::Bar"),
                            common.symbol_key("FooBar"))
        self.assertNotEqual(common.symbol_key("CComPtr::operator !"),
                            common.symbol_key("CComPtr::operator *"))
        self.assertEqual(common.symbol_key("CComPtr::operator !"),
                         "ccomptr::operator!")

    def test_empty(self):
        self.assertIsNone(common.symbol_key(""))
        self.assertIsNone(common.symbol_key(None))


class ConstantGrammarTests(unittest.TestCase):
    def test_integers(self):
        self.assertEqual(common.parse_constant_value("34"), ("integer", 34))
        self.assertEqual(common.parse_constant_value("0x0001"), ("integer", 1))
        self.assertEqual(common.parse_constant_value("0x0001L"), ("integer", 1))
        self.assertEqual(common.parse_constant_value("-5"), ("integer", -5))
        self.assertEqual(common.parse_constant_value("-0x10"), ("integer", -16))

    def test_expressions(self):
        self.assertEqual(common.parse_constant_value("RASBASE+153"),
                         ("expression", None))
        self.assertEqual(common.parse_constant_value("(1 << 4)"),
                         ("expression", None))

    def test_rejects(self):
        # Junk that the old KB stored as a constant value.
        self.assertIsNone(common.parse_constant_value("compile"))
        # Bare hex without 0x: a guess, not a number.
        self.assertIsNone(common.parse_constant_value("8009100F"))
        self.assertIsNone(common.parse_constant_value(""))
        self.assertIsNone(common.parse_constant_value(None))
        # A lone identifier is an alias at best, not a value.
        self.assertIsNone(common.parse_constant_value("TRUE"))


class TokenTests(unittest.TestCase):
    def test_header_tokens(self):
        self.assertEqual(common.header_tokens("Winbase.h"),
                         [("winbase.h", "Winbase.h")])
        # Parenthetical include instructions are not a second header.
        self.assertEqual(common.header_tokens("Winuser.h (include Windows.h)"),
                         [("winuser.h", "Winuser.h")])
        # The old KB's bogus ".h" header cannot occur.
        self.assertEqual(common.header_tokens(".h"), [])
        self.assertEqual(common.header_tokens("Developer Implemented"), [])

    def test_file_tokens(self):
        self.assertEqual(common.file_tokens("Coredll.lib"),
                         [("coredll.lib", "lib", "Coredll.lib")])
        self.assertTrue(common.valid_lib_dll_token("coredll.lib"))
        self.assertFalse(common.valid_lib_dll_token("Developer Implemented"))


class LayerTests(unittest.TestCase):
    def test_known_trees(self):
        self.assertEqual(common.layer_of("learn/windows-ce-5.0"), "ce")
        self.assertEqual(common.layer_of("win32/api/winuser"), "win32")
        self.assertEqual(common.layer_of("dotnet/pos-for-net"), "dotnet")
        self.assertEqual(common.layer_of("oss/qt"), "oss")

    def test_unmapped_tree_is_refused(self):
        # A future corpus/pinvoke must not silently become CE facts.
        with self.assertRaises(ValueError):
            common.layer_of("pinvoke/coredll")


class AvailabilityTests(unittest.TestCase):
    def test_shapes(self):
        self.assertEqual(common.parse_availability("Windows CE 1.0 and later"),
                         ("1.0", None, "parsed"))
        self.assertEqual(common.parse_availability("Windows CE 3.0 through 5.0"),
                         ("3.0", "5.0", "parsed"))
        self.assertEqual(common.parse_availability("Windows CE 5.0 only"),
                         ("5.0", "5.0", "parsed"))
        self.assertEqual(common.parse_availability("some prose"),
                         (None, None, "unparsed"))


if __name__ == "__main__":
    unittest.main()
