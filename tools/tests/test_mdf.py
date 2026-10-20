"""tools/tests/test_mdf.py -- MDF (Alcohol 120%) to ISO conversion.

Synthetic sector images: a data MDF is raw CD sectors whose user
data is the ISO/UDF image; the sniffer proves the layout from the
volume descriptor at sector 16.
"""

import importlib.util
import os
import tempfile
import unittest

_HERE = os.path.dirname(os.path.abspath(__file__))
_SPEC = importlib.util.spec_from_file_location(
    "mdf", os.path.join(_HERE, "..", "mdf.py"))
mdf = importlib.util.module_from_spec(_SPEC)
_SPEC.loader.exec_module(mdf)


def build_image(sector_size, offset, volume_id=b"CD001", sectors=20,
                lead=0, corroborate=True):
    out = bytearray()
    for i in range(-lead, sectors):
        data = bytes([max(i, 0) % 256]) * 2048
        if i == 16:
            data = b"\x01" + volume_id + data[6:]
        elif i == 17 and corroborate:
            data = b"\xff" + volume_id + data[6:]
        sector = bytearray(sector_size)
        sector[offset:offset + 2048] = data
        out += sector
    fd, path = tempfile.mkstemp(suffix=".mdf")
    with os.fdopen(fd, "wb") as fh:
        fh.write(out)
    return path, bytes(out)


class SectorLayoutTests(unittest.TestCase):
    def convert(self, sector_size, offset, volume_id=b"CD001", lead=0):
        path, raw = build_image(sector_size, offset, volume_id, lead=lead)
        dest = path + ".iso"
        try:
            ok = mdf.to_iso(path, dest)
            body = open(dest, "rb").read() if ok else b""
            return ok, body
        finally:
            os.unlink(path)
            if os.path.exists(dest):
                os.unlink(dest)

    def test_raw_2352_sectors(self):
        ok, body = self.convert(2352, 16)
        self.assertTrue(ok)
        self.assertEqual(len(body), 20 * 2048)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"CD001")
        self.assertEqual(body[3 * 2048], 3)

    def test_cooked_2048_sectors(self):
        ok, body = self.convert(2048, 0)
        self.assertTrue(ok)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"CD001")

    def test_2336_sectors_and_udf_descriptor(self):
        ok, body = self.convert(2336, 0, b"NSR03")
        self.assertTrue(ok)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"NSR03")

    def test_mode2_form1_sectors(self):
        ok, body = self.convert(2352, 24)
        self.assertTrue(ok)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"CD001")

    def test_2336_mode2_sectors(self):
        ok, body = self.convert(2336, 8)
        self.assertTrue(ok)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"CD001")

    def test_2448_subchannel_sectors(self):
        ok, body = self.convert(2448, 16)
        self.assertTrue(ok)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"CD001")
        self.assertEqual(body[3 * 2048], 3)

    def test_pregap_lead_sectors_are_skipped(self):
        # rips may carry the 150-sector pregap: user data then starts
        # that many sectors into the file
        ok, body = self.convert(2352, 16, lead=150)
        self.assertTrue(ok)
        self.assertEqual(len(body), 20 * 2048)
        self.assertEqual(body[16 * 2048 + 1:16 * 2048 + 6], b"CD001")

    def test_uncorroborated_descriptor_is_refused(self):
        # an identifier at sector 16 with junk at 17 is data, not a
        # volume descriptor pair
        path, _raw = build_image(2352, 16, corroborate=False)
        try:
            self.assertIsNone(mdf.sector_layout(path))
            self.assertFalse(mdf.to_iso(path, path + ".iso"))
        finally:
            os.unlink(path)

    def test_no_volume_descriptor_is_refused(self):
        path, _raw = build_image(2352, 16, b"XXXXX")
        try:
            self.assertIsNone(mdf.sector_layout(path))
            self.assertFalse(mdf.to_iso(path, path + ".iso"))
        finally:
            os.unlink(path)


if __name__ == "__main__":
    unittest.main()
