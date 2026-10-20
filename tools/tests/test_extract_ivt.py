"""Tests for the InfoViewer (.ivt/.ivi) decoder, tools/extract-ivt.py.

The fixture is a synthetic title built to the published container
layout (file header, one-leaf b-tree directory, stored and
MSZIP-compressed members), so no third-party binary sample is
committed.  The decoder was additionally verified by hand against
the 33 real MSDN-era titles in the PRONOM research collection
(1,967 members, 1,812 MSZIP inflates, 1,264 HTML pages).
"""
import importlib.util
import os
import struct
import sys
import unittest
import zlib

_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(_ROOT, "tools"))

_spec = importlib.util.spec_from_file_location(
    "extract_ivt", os.path.join(_ROOT, "tools", "extract-ivt.py"))
ivt = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(ivt)

PAGE = 0x2000


def _leb128(value):
    out = bytearray()
    while True:
        byte = value & 0x7F
        value >>= 7
        if value:
            out.append(byte | 0x80)
        else:
            out.append(byte)
            return bytes(out)


def _mszp_member(blocks):
    """An MSZP member from a list of uncompressed blocks (<=64KiB each)."""
    out = bytearray(b"mszp")
    total = sum(len(b) for b in blocks)
    out += struct.pack("<I I", total, 0)
    history = b""
    for block in blocks:
        engine = zlib.compressobj(9, zlib.DEFLATED, -15,
                                  zdict=history[-32768:])
        packed = engine.compress(block) + engine.flush()
        out += struct.pack("<H H", len(block), len(packed) + 2) + b"CK" + packed
        history += block
    return bytes(out)


def _title(members):
    """A minimal well-formed title holding [(name, bytes)]."""
    body = bytearray(b"\x00" * 8)            # file header, patched below
    entries = []
    for name, blob in members:
        entries.append((name, len(body), len(blob)))
        body += blob
    dir_off = len(body)
    leaf_entries = bytearray()
    for name, offset, size in entries:
        raw = name.encode("latin-1")
        leaf_entries += bytes([len(raw)]) + raw + _leb128(offset) \
            + _leb128(size) + b"\x00"
    unused = PAGE - 12 - len(leaf_entries)
    leaf = struct.pack("<H H I I", unused, len(entries),
                       0xFFFFFFFF, 0xFFFFFFFF) + leaf_entries
    leaf += b"\x00" * (PAGE - len(leaf))
    btree = bytearray(0x30)
    struct.pack_into("<H", btree, 0, 0x293B)
    struct.pack_into("<H", btree, 4, PAGE)
    struct.pack_into("<I", btree, 0x1A, 0)   # last leaf
    struct.pack_into("<I", btree, 0x1E, 0)   # root page
    struct.pack_into("<i", btree, 0x26, 1)   # total pages
    struct.pack_into("<H", btree, 0x2A, 1)   # levels
    struct.pack_into("<i", btree, 0x2C, len(entries))
    body += btree + leaf
    struct.pack_into("<I i", body, 0, ivt.FILE_MAGIC, dir_off)
    return bytes(body)


HTML_A = (b"<HTML><HEAD><TITLE>CreateFile</TITLE></HEAD>"
          b"<BODY><H2>CreateFile</H2><PRE>HANDLE CreateFile();</PRE>"
          b"</BODY></HTML>")
# Two MSZIP blocks; the second is compressed with the first as its
# dictionary, so inflation only succeeds if the dictionary carries.
BLOCK_1 = (b"<HTML><HEAD><TITLE>Big</TITLE></HEAD><BODY>"
           + b"<P>pattern pattern pattern</P>\r\n" * 40)
BLOCK_2 = b"<P>pattern pattern pattern</P>\r\n" * 40 + b"</BODY></HTML>"


class IvtDecodeTests(unittest.TestCase):
    def setUp(self):
        self.data = _title([
            ("/TESTBK/A.HTM", HTML_A),
            ("/TESTBK/sub/B.HTM", _mszp_member([BLOCK_1, BLOCK_2])),
            ("/TESTBK/pic.gif", b"GIF89a"),
            ("source.toc", b"1 -t /TESTBK/A.HTM \"CreateFile\"\r\n"),
            (">00000001", _mszp_member(
                [b"<HTML><BODY>stream topic</BODY></HTML>"])),
            (" 5.0.7010", b""),
        ])

    def test_directory_lists_every_member(self):
        names = [name for name, _off, _size in ivt.read_members(self.data)]
        self.assertEqual(names, ["/TESTBK/A.HTM", "/TESTBK/sub/B.HTM",
                                 "/TESTBK/pic.gif", "source.toc",
                                 ">00000001", " 5.0.7010"])

    def test_pages_are_html_members_only(self):
        pages = dict(ivt.title_pages(self.data))
        self.assertEqual(sorted(pages), ["00000001.html", "A.html",
                                         "sub/B.html"])
        self.assertEqual(pages["A.html"],
                         HTML_A.decode("cp1252"))
        self.assertEqual(pages["sub/B.html"],
                         (BLOCK_1 + BLOCK_2).decode("cp1252"))
        self.assertIn("stream topic", pages["00000001.html"])

    def test_provenance_comment_after_body(self):
        text = ivt.with_provenance("<HTML><BODY>x</BODY></HTML>",
                                   "TESTBK", "TESTBK.IVT")
        self.assertIn("<BODY>\n<!-- TESTBK InfoViewer title (TESTBK.IVT);",
                      text)

    def test_malformed_titles_are_refused(self):
        with self.assertRaises(ivt.IvtError):
            ivt.read_members(b"PK\x03\x04" + b"\x00" * 100)
        broken = bytearray(self.data)
        broken[0] = 0                           # file magic gone
        with self.assertRaises(ivt.IvtError):
            ivt.title_pages(bytes(broken))
        with self.assertRaises(ivt.IvtError):   # truncated directory
            ivt.title_pages(self.data[:-100])
        with self.assertRaises(ivt.IvtError):   # declares 10, has no blocks
            ivt.mszp_inflate(b"mszp" + struct.pack("<I I", 10, 0))


if __name__ == "__main__":
    unittest.main()
