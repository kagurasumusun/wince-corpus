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


if __name__ == "__main__":
    unittest.main()
