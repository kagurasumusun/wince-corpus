"""Tests for the reference-material parsers (comparison layer inputs)."""
import os
import sys
import unittest

_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(_ROOT, "tools"))

from kbgen import references  # noqa: E402


class ExportNameKeyTests(unittest.TestCase):
    def test_stdcall_decoration_is_not_part_of_the_key(self):
        self.assertEqual(
            references._export_name_key("CreateSecurityPage@4"),
            "createsecuritypage")
        self.assertEqual(
            references._export_name_key("_GetProcAddress@8"),
            "getprocaddress")

    def test_plain_and_data_names(self):
        self.assertEqual(references._export_name_key("IID_IShellLinkA"),
                         "iid_ishelllinka")
        self.assertEqual(references._export_name_key("CreateFileW"),
                         "createfilew")

    def test_mangled_names_keep_verbatim_key(self):
        key = references._export_name_key("?foo@@YAXH@Z")
        self.assertTrue(key.startswith("?foo"))

    def test_real_tarball_exports_match_kb_names(self):
        tarball = references.find_w32api()
        self.assertIsNotNone(tarball)
        _source, rows = references.load_w32api(tarball)
        exports = {row[3] for row in rows if row[1] == "export"}
        # coredll.def names CE APIs undecorated keys must be findable
        self.assertIn("createfilew", exports)
        self.assertFalse(any("@" in k for k in exports
                             if not k.startswith("?")))


class WceGuardContextTests(unittest.TestCase):
    """The _WIN32_WCE guard context CeGCC's CE adaptation printed."""

    def contexts(self, text):
        return references._wce_guard_contexts(text.splitlines())

    def test_split_branches(self):
        got = self.contexts(
            "#ifdef _WIN32_WCE\n#define A 0\n#else\n#define A 15\n#endif\n"
            "#ifndef _WIN32_WCE\n#define B 1\n#endif\n#define C 2\n")
        self.assertEqual(got[1], "wce")
        self.assertEqual(got[3], "not-wce")
        self.assertEqual(got[6], "not-wce")
        self.assertEqual(got[8], "")

    def test_version_floors_both_spellings(self):
        got = self.contexts(
            "#if defined(_WIN32_WCE) && _WIN32_WCE >= 0x0420\n#define A 1\n"
            "#endif\n#if _WIN32_WCE >= 400\n#define B 2\n#endif\n"
            "#if _WIN32_WCE < 300\n#define C 3\n#endif\n")
        self.assertEqual(got[1], "wce>=0x420")
        self.assertEqual(got[4], "wce>=0x400")   # decimal = version digits
        self.assertEqual(got[7], "not-wce")

    def test_unprovable_and_dead(self):
        got = self.contexts(
            "#if (_WIN32_IE >= 0x0500) || (_WIN32_WCE >= 0x300)\n"
            "#define A 1\n#endif\n#if 0\n#define B 2\n#endif\n")
        self.assertEqual(got[1], "")            # mixed ||: no claim
        self.assertEqual(got[4], "not-wce")     # dead code

    def test_nesting_and_block_comments(self):
        got = self.contexts(
            "/*\n#ifdef _WIN32_WCE\n*/\n#define A 1\n"
            "#ifdef _WIN32_WCE\n#ifndef FOO\n#define B 2\n#endif\n#endif\n")
        self.assertEqual(got[3], "")            # the commented #ifdef is inert
        self.assertEqual(got[6], "wce")

    def test_real_tarball_rows_carry_guards(self):
        _source, rows = references.load_w32api(references.find_w32api())
        by_name = {}
        for r in rows:
            if r[1] == "define":
                by_name.setdefault(r[2], []).append((r[6], r[10]))
        self.assertIn(("0", "wce"),
                      by_name["THREAD_PRIORITY_TIME_CRITICAL"])
        self.assertIn(("15", "not-wce"),
                      by_name["THREAD_PRIORITY_TIME_CRITICAL"])
        self.assertTrue(all(g == "not-wce" for _v, g
                            in by_name["CREATE_NEW_PROCESS_GROUP"]))
        self.assertTrue(all(len(r) == 11 for r in rows))


if __name__ == "__main__":
    unittest.main()
