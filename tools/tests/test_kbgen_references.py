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


if __name__ == "__main__":
    unittest.main()
