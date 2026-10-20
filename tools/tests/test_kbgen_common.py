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
        # Maker-macro calls are constant expressions too.
        self.assertEqual(common.parse_constant_value("MAKE_D3DMHRESULT(2158)"),
                         ("expression", None))
        self.assertEqual(common.parse_constant_value("MAKE_HRESULT(1, 7, 5)"),
                         ("expression", None))

    def test_floats_are_kept_without_int_reading(self):
        self.assertEqual(
            common.parse_constant_value("2.2204460492503131e-016"),
            ("float", None))
        self.assertEqual(common.parse_constant_value("1.0f"), ("float", None))

    def test_bare_hex_with_letter_is_hex(self):
        # Digit-led, hex-only, contains a letter: cannot be decimal or
        # an identifier, so the radix is proved by the print itself.
        self.assertEqual(common.parse_constant_value("8009100F"),
                         ("integer", 0x8009100F))
        self.assertEqual(common.parse_constant_value("8000400A"),
                         ("integer", 0x8000400A))
        # All-digit stays decimal at grammar level (column context in
        # build._reconcile_hex_columns proves HRESULT columns).
        self.assertEqual(common.parse_constant_value("80091008"),
                         ("integer", 80091008))
        # Too short for the hex reading; the float shape claims it
        # without an integer reading.
        self.assertEqual(common.parse_constant_value("1E5"), ("float", None))

    def test_rejects(self):
        # Junk that the old KB stored as a constant value.
        self.assertIsNone(common.parse_constant_value("compile"))
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

    def test_desktop_numbers_never_become_ce_bounds(self):
        self.assertEqual(
            common.parse_availability(
                "Windows 95, Windows NT 4.0, Windows CE 2.12"),
            ("2.12", None, "partial"))
        self.assertEqual(
            common.parse_availability(
                "Windows NT 4.0, Windows 95, Windows CE .NET 4.0"),
            ("4.0", None, "partial"))
        self.assertEqual(
            common.parse_availability("Windows 2000, Windows XP"),
            (None, None, "unparsed"))

    def test_bare_versions_column_prints(self):
        self.assertEqual(common.parse_availability("2.10 and later"),
                         ("2.10", None, "parsed"))
        self.assertEqual(common.parse_availability("2.01 and later"),
                         ("2.01", None, "parsed"))
        self.assertEqual(common.parse_availability("Windows CE OS 2.1 and later"),
                         ("2.1", None, "parsed"))

    def test_earlier_is_a_maximum(self):
        self.assertEqual(common.parse_availability("Windows CE 2.12 and earlier."),
                         (None, "2.12", "partial"))

    def test_shell_platform_statements_are_partial(self):
        self.assertEqual(common.parse_availability("Pocket PC 2002 and later"),
                         ("3.0", None, "partial"))
        self.assertEqual(common.parse_availability("Smartphone 2002 and later."),
                         ("3.0", None, "partial"))
        self.assertEqual(common.parse_availability("Windows CE OS"),
                         (None, None, "partial"))

    def test_platform_lists_floor_at_the_earliest_shell(self):
        # The CE 3.0 SDK sets print bare platform lists; H/PC Pro is
        # the CE 2.11 device class, Pocket PC the CE 3.0 one.
        self.assertEqual(
            common.parse_availability("H/PC Pro, Palm-size PC, Pocket PC"),
            ("2.11", None, "partial"))
        self.assertEqual(common.parse_availability("H/PC Pro"),
                         ("2.11", None, "partial"))
        self.assertEqual(common.parse_availability("Pocket PC"),
                         ("3.0", None, "partial"))
        self.assertEqual(
            common.parse_availability("Windows Mobile 2002 and later"),
            ("3.0", None, "partial"))

    def test_branded_shell_beats_bare_pocket_pc(self):
        # One CE 4.2 shell described by two phrases, not two platforms.
        self.assertEqual(
            common.parse_availability("Windows Mobile 2003 for Pocket PC"),
            ("4.2", None, "partial"))
        # But two qualified shells are two platforms (a range): the
        # floor is the earlier one.
        self.assertEqual(
            common.parse_availability(
                "Pocket PC 2000 through Windows Mobile 2003 SE "
                "(not supported in later versions)"),
            ("3.0", None, "partial"))
        self.assertEqual(
            common.parse_availability(
                "Smartphone 2002 through Windows Mobile 2003 SE "
                "(not supported in later versions)"),
            ("3.0", None, "partial"))

    def test_printed_minor_variants_are_recognised(self):
        # The era also prints 5.01 / 4.10 / 1.02; labels stay as printed.
        self.assertEqual(common.parse_availability("Windows CE 5.01 and later"),
                         ("5.01", None, "parsed"))
        self.assertEqual(
            common.parse_availability("Windows CE OS .NET 4.10 and later"),
            ("4.10", None, "parsed"))
        self.assertEqual(common.parse_availability("Windows CE OS 1.02 and later"),
                         ("1.02", None, "parsed"))


if __name__ == "__main__":
    unittest.main()


class NotSupportedAndDotnetVersionTests(unittest.TestCase):
    def test_not_supported_is_a_status(self):
        from tools.kbgen.common import parse_availability
        self.assertEqual(parse_availability("Not supported in Windows CE"),
                         (None, None, "not_supported"))
        # a denial beats a version named elsewhere in the same cell
        self.assertEqual(
            parse_availability("Windows NT 4.0. Not supported in Windows CE"),
            (None, None, "not_supported"))

    def test_dotnet_version_floor(self):
        from tools.kbgen.common import parse_dotnet_versions
        self.assertEqual(
            parse_dotnet_versions(
                "Available in .NET Micro Framework version 2.5"),
            ("2.5", None, "parsed"))
        self.assertEqual(parse_dotnet_versions("See Also"),
                         (None, None, "unparsed"))
        # The Micro Framework sets also print plural version lists;
        # the earliest listed version is the floor.  MFDeploy tool
        # releases are not framework bounds and stay unparsed.
        self.assertEqual(
            parse_dotnet_versions(
                "Available in the .NET Micro Framework versions "
                "3.0, 4.0, and 4.1."),
            ("3.0", None, "parsed"))
        self.assertEqual(
            parse_dotnet_versions(
                "Available in the .NET Micro Framework versions "
                "4.1 and 4.2."),
            ("4.1", None, "parsed"))
        self.assertEqual(parse_dotnet_versions("Available in MFDeploy 4.0 SP1."),
                         (None, None, "unparsed"))
