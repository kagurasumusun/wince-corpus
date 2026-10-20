"""tools/tests/test_import_media.py -- import-media image sniffing.

The VS2008 MSDN Library DVD is UDF-mastered with a one-file
ISO 9660 stub; the media lane must spot the UDF volume recognition
sequence and leave such an image to 7z instead of reading the stub
with tools/iso9660.py.
"""

import importlib.util
import os
import tempfile
import unittest

_HERE = os.path.dirname(os.path.abspath(__file__))
_SPEC = importlib.util.spec_from_file_location(
    "import_media", os.path.join(_HERE, "..", "import-media.py"))
media = importlib.util.module_from_spec(_SPEC)
_SPEC.loader.exec_module(media)

SECTOR = 2048


def descriptor(identifier, dtype=1):
    sector = bytearray(SECTOR)
    sector[0] = dtype
    sector[1:6] = identifier
    return bytes(sector)


def image_with(identifiers):
    """A fake image: 16 zero sectors, then the given descriptors."""
    fd, path = tempfile.mkstemp(suffix=".iso")
    with os.fdopen(fd, "wb") as fh:
        fh.write(b"\0" * SECTOR * 16)
        for identifier in identifiers:
            fh.write(descriptor(identifier))
    return path


class UdfDetectionTests(unittest.TestCase):
    def check(self, identifiers):
        path = image_with(identifiers)
        try:
            return media.has_udf_filesystem(path)
        finally:
            os.unlink(path)

    def test_plain_iso9660_is_not_udf(self):
        self.assertFalse(self.check([b"CD001", b"CD001"]))

    def test_udf_bridge_is_detected(self):
        self.assertTrue(self.check([b"CD001", b"BEA01", b"NSR02",
                                     b"TEA01", b"CD001"]))

    def test_udf_nsr03_is_detected(self):
        self.assertTrue(self.check([b"BEA01", b"NSR03", b"TEA01"]))

    def test_garbage_stops_the_scan(self):
        self.assertFalse(self.check([b"XXXXX", b"NSR02"]))

    def test_truncated_image_is_not_udf(self):
        fd, path = tempfile.mkstemp(suffix=".iso")
        with os.fdopen(fd, "wb") as fh:
            fh.write(b"\0" * 16)
        try:
            self.assertFalse(media.has_udf_filesystem(path))
        finally:
            os.unlink(path)


class Help2TitleTests(unittest.TestCase):
    def test_msi_mangled_names(self):
        self.assertEqual(media.help2_title("FL_wcecoreos5_hxs_enu"),
                         "wcecoreos5")
        self.assertEqual(media.help2_title("FL_mobilesdk5_hxs_enu"),
                         "mobilesdk5")
        self.assertEqual(media.help2_title("FL__toc_wince50_hxs_enu"),
                         "_toc_wince50")
        self.assertEqual(
            media.help2_title(
                "FL_fxref_microsoft.windowsmobile.directx_hxs_enu"),
            "fxref_microsoft.windowsmobile.directx")

    def test_merge_module_guid_suffix_is_stripped(self):
        self.assertEqual(
            media.help2_title(
                "cab35/FL__vsmsdn_hxs_52399_cn_enu"
                ".3643236F_FC70_11D3_A536_0090278A1BB8"),
            "_vsmsdn")

    def test_loose_title_keeps_its_name(self):
        self.assertEqual(media.help2_title("MobileSDK5.HxS"), "mobilesdk5")

    def test_companions_are_not_titles(self):
        for name in ("FL_wcecoreos5_hxi_enu", "FL_wcecoreos5_hxt_enu",
                     "FL__vsmsdn_hxq_58115_cn_enu"
                     ".3643236F_FC70_11D3_A536_0090278A1BB8",
                     "FL_wcecoreos5_hxa_enu", "readme.htm", "cab17.cab"):
            self.assertIsNone(media.help2_title(name), name)


FAKE_SEVEN = """#!/bin/sh
out=""
for a in "$@"; do case "$a" in -o*) out="${a#-o}";; esac; done
mkdir -p "$out/html" "$out/images"
printf '<html><head><title>Topic One</title></head><body>%s</body></html>' topic > "$out/html/one.htm"
printf '<html><head><title>Topic Not Found</title></head><body>no</body></html>' > "$out/html/gone.htm"
printf 'not an image really' > "$out/images/a.png"
printf 'system stream' > "$out/#system"
printf '<xml/>' > "$out/meta.xml"
"""


class ExtractHxsTests(unittest.TestCase):
    def setUp(self):
        spec = importlib.util.spec_from_file_location(
            "extract_chm", os.path.join(_HERE, "..", "extract-chm.py"))
        self.extract = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(self.extract)
        fd, self.fake = tempfile.mkstemp(prefix="fake7z-")
        with os.fdopen(fd, "w") as fh:
            fh.write(FAKE_SEVEN)
        os.chmod(self.fake, 0o755)

    def tearDown(self):
        os.unlink(self.fake)

    def test_hxs_topics_land_placeholders_and_assets_do_not(self):
        with tempfile.TemporaryDirectory() as dest:
            pages, _size = self.extract.extract_hxs(
                self.fake, "/nonexistent/title.HxS", dest)
            self.assertEqual(pages, 1)
            landed = []
            for dirpath, _dirs, files in os.walk(dest):
                landed += [os.path.relpath(os.path.join(dirpath, f), dest)
                           for f in files]
            self.assertEqual(landed, [os.path.join("html", "one.html")])

    def test_chm_and_hxs_share_the_extraction_contract(self):
        for fn in (self.extract.extract_chm, self.extract.extract_hxs):
            with tempfile.TemporaryDirectory() as dest:
                self.assertEqual(fn(self.fake, "/x", dest, dry_run=True),
                                 (0, 0))


if __name__ == "__main__":
    unittest.main()
