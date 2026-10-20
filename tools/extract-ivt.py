#!/usr/bin/env python3
"""Extract a Microsoft InfoViewer title (.ivt / .ivi) into pages.

InfoViewer was DevStudio's help system (Visual Studio 97 era); the
Windows CE 2.0 Platform SDK shipped its Books Online as InfoViewer
titles.  A title is a container in the WinHelp family (same ``?_``
magic head as .hlp/.mvb, version 0x0104) whose internal directory
(a b-tree of 0x2000-byte pages) names a set of member streams:
the topics themselves as complete HTML documents, images, an
optional stylesheet and table of contents, and the title's own
search indexes.  Members are stored raw or MSZIP-compressed
(``mszp``/``nszp`` header, then CAB-style blocks of raw DEFLATE
whose dictionary carries across block boundaries).

This decoder is an original implementation written from the
published format descriptions -- the container layout as recorded
in horsicq's xxfclib (MIT, ``src/formats/document/ivt/xx_ivt.c``)
and the member/compression behaviour described by Caolán
McNamara's ivt2html README (`csn.ul.ie/~caolan/Packages/ivt2html.html`) --
verified against the InfoViewer sample titles in the PRONOM
research collection.  It emits the corpus convention, like
tools/extract-mvb.py: one HTML page per topic below
``--out/<book>/``, the member HTML verbatim (transcoded to UTF-8)
with a provenance comment added after <body>; images and the
title's own index members are dropped.

    python3 tools/extract-ivt.py --ivt WCEAPC.IVT --book WCEAPC \
        --out corpus/mvb/windows-ce-2.0-sdk
"""

import argparse
import os
import re
import struct
import sys
import zlib

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

FILE_MAGIC = 0x01045F3F          # '?_' + version 0x0104, little-endian
BTREE_MAGIC = 0x293B
BTREE_HEADER_SIZE = 0x30
PAGE_SIZE = 0x2000
NODE_HEADER_SIZE = 12            # leaf: u16 unused, u16 count, u32 prev, u32 next
MSZIP_HEADER_SIZE = 12
MAX_MEMBER_SIZE = 1 << 28        # sanity cap on one inflated member

HTML_EXTENSIONS = (".htm", ".html", ".shtm", ".shtml")
# Internal members that carry the title's own indexes, never content.
# (The extension rule below already excludes them; the list is kept so
# a stray same-named "page" is never mistaken for one.)
SYSTEM_NAMES = {
    "alinkinfo", "alinklist", "alinklookup", "grpinf", "keywordinfo",
    "keywordlist", "keywordlookup", "strings", "tocidx", "topics",
    "titleinformation", "urltree", "charmap", "ftindex", "source.toc",
    "stoplist",
}

BAD_COMPONENT = re.compile(r"[^A-Za-z0-9._-]+")
BODY_RE = re.compile(r"<body\b[^>]*>", re.I)
HTML_RE = re.compile(r"<html\b[^>]*>", re.I)


class IvtError(ValueError):
    """The file is not a well-formed InfoViewer title."""


def _leb128(buf, pos):
    value = 0
    shift = 0
    while True:
        if pos >= len(buf) or shift > 28:
            raise IvtError("truncated LEB128 in directory leaf")
        byte = buf[pos]
        pos += 1
        value |= (byte & 0x7F) << shift
        if not byte & 0x80:
            break
        shift += 7
    if value > 0x7FFFFFFF:
        raise IvtError("directory LEB128 out of range")
    return value, pos


def read_members(data):
    """The title directory as [(name, offset, size)], fully checked.

    The checks are the identities a real title satisfies: both
    magics, the page arithmetic, every leaf's entries plus its
    recorded unused tail filling the page exactly, and the leaves
    together holding exactly the declared entry count.
    """
    if len(data) < 8 + BTREE_HEADER_SIZE:
        raise IvtError("file too small for an InfoViewer title")
    magic, dir_off = struct.unpack_from("<I i", data, 0)
    if magic != FILE_MAGIC:
        raise IvtError(f"not an InfoViewer title (magic {magic:#010x})")
    if dir_off < 8 or dir_off + BTREE_HEADER_SIZE > len(data):
        raise IvtError("directory offset out of range")
    btree = data[dir_off:dir_off + BTREE_HEADER_SIZE]
    bmagic, = struct.unpack_from("<H", btree, 0)
    page_size, = struct.unpack_from("<H", btree, 4)
    if bmagic != BTREE_MAGIC or page_size != PAGE_SIZE:
        raise IvtError("bad directory b-tree header")
    last_leaf, = struct.unpack_from("<I", btree, 0x1A)
    root, = struct.unpack_from("<I", btree, 0x1E)
    total_pages, = struct.unpack_from("<i", btree, 0x26)
    levels, = struct.unpack_from("<H", btree, 0x2A)
    total_entries, = struct.unpack_from("<i", btree, 0x2C)
    if total_pages <= 0 or total_entries <= 0 or not 1 <= levels <= 32 \
            or levels > total_pages:
        raise IvtError("implausible directory b-tree header")
    pages_off = dir_off + BTREE_HEADER_SIZE
    if pages_off + total_pages * PAGE_SIZE > len(data):
        raise IvtError("directory pages run past end of file")

    def page(ordinal):
        if ordinal >= total_pages:
            raise IvtError("directory page ordinal out of range")
        start = pages_off + ordinal * PAGE_SIZE
        return data[start:start + PAGE_SIZE]

    leaves = []
    visited = set()

    def walk(ordinal, depth):
        if ordinal in visited:
            raise IvtError("directory page visited twice")
        visited.add(ordinal)
        pg = page(ordinal)
        unused, count = struct.unpack_from("<H H", pg, 0)
        if count == 0 or unused > PAGE_SIZE - NODE_HEADER_SIZE:
            raise IvtError("bad directory node header")
        if depth == 0:
            leaves.append(ordinal)
            return
        first_child, = struct.unpack_from("<I", pg, 4)
        walk(first_child, depth - 1)
        pos = 8
        for _ in range(count):
            if pos >= PAGE_SIZE:
                raise IvtError("directory index node overflows its page")
            key_len = pg[pos]
            pos += 1 + key_len
            if key_len == 0 or pos + 4 > PAGE_SIZE:
                raise IvtError("bad directory index entry")
            child, = struct.unpack_from("<I", pg, pos)
            pos += 4
            walk(child, depth - 1)
        if pos + unused != PAGE_SIZE:
            raise IvtError("directory index page does not add up")

    walk(root, levels - 1)
    if len(visited) != total_pages or not leaves \
            or leaves[-1] != last_leaf:
        raise IvtError("directory tree does not account for every page")

    members = []
    for index, ordinal in enumerate(leaves):
        pg = page(ordinal)
        unused, count = struct.unpack_from("<H H", pg, 0)
        prev_page, next_page = struct.unpack_from("<I I", pg, 4)
        if prev_page != (leaves[index - 1] if index else 0xFFFFFFFF) \
                or next_page != (leaves[index + 1]
                                 if index + 1 < len(leaves) else 0xFFFFFFFF):
            raise IvtError("directory leaf chain is broken")
        pos = NODE_HEADER_SIZE
        for _ in range(count):
            if pos >= PAGE_SIZE:
                raise IvtError("directory leaf overflows its page")
            name_len = pg[pos]
            pos += 1
            if name_len == 0 or pos + name_len > PAGE_SIZE:
                raise IvtError("bad member name in directory leaf")
            name = pg[pos:pos + name_len].decode("latin-1")
            pos += name_len
            offset, pos = _leb128(pg, pos)
            size, pos = _leb128(pg, pos)
            if pos >= PAGE_SIZE or pg[pos] != 0:
                raise IvtError("directory entry lacks its zero terminator")
            pos += 1
            if offset + size > len(data):
                raise IvtError(f"member {name!r} runs past end of file")
            members.append((name, offset, size))
        if pos + unused != PAGE_SIZE:
            raise IvtError("directory leaf page does not add up")
    if len(members) != total_entries:
        raise IvtError("directory entry count does not add up")
    return members


def mszp_inflate(blob):
    """Inflate one MSZIP member (``mszp``/``nszp`` header + CAB blocks).

    Each block is ``[u16 uncompressed][u16 compressed incl. "CK"]
    ["CK"][raw DEFLATE]``; as in CAB MSZIP, a block's stream may
    reference the previous 32 KiB of output as its dictionary.
    """
    if len(blob) < MSZIP_HEADER_SIZE or blob[:4] not in (b"mszp", b"nszp"):
        raise IvtError("not an MSZIP member")
    declared, _reserved = struct.unpack_from("<I I", blob, 4)
    if declared > MAX_MEMBER_SIZE:
        raise IvtError("MSZIP member declares an implausible size")
    out = bytearray()
    pos = MSZIP_HEADER_SIZE
    while len(out) < declared:
        if pos + 6 > len(blob):
            raise IvtError("truncated MSZIP block header")
        unc_len, comp_len = struct.unpack_from("<H H", blob, pos)
        pos += 4
        if comp_len < 2 or blob[pos:pos + 2] != b"CK":
            raise IvtError("MSZIP block lacks its CK signature")
        pos += 2
        chunk = blob[pos:pos + comp_len - 2]
        if len(chunk) < comp_len - 2:
            raise IvtError("truncated MSZIP block")
        pos += comp_len - 2
        inflater = zlib.decompressobj(-15, zdict=bytes(out[-32768:]))
        try:
            block = inflater.decompress(chunk, unc_len)
        except zlib.error as exc:
            raise IvtError(f"MSZIP block does not inflate: {exc}") from exc
        if len(block) != unc_len:
            raise IvtError("MSZIP block inflated to the wrong size")
        out += block
    if len(out) != declared:
        raise IvtError("MSZIP member inflated to the wrong size")
    return bytes(out)


def member_bytes(data, offset, size):
    blob = data[offset:offset + size]
    if blob[:4] in (b"mszp", b"nszp"):
        return mszp_inflate(blob)
    return blob


def _looks_like_html(raw):
    head = raw[:512].lstrip()
    return head[:1] == b"<" and b"<html" in head.lower()


def _page_relpath(name, used):
    """A member name as a safe relative .html path below the book dir.

    Members are rooted at the title's own virtual directory
    (``/DNEMBED/S7B7.HTM``); the book directory already names the
    title, so a single shared root component is dropped.  What
    remains keeps its structure, sanitized per component.
    """
    parts = [p for p in name.split("/") if p not in ("", ".")]
    if len(parts) > 1:
        parts = parts[1:]
    clean = []
    for part in parts:
        part = BAD_COMPONENT.sub("_", part).strip("._-") or "_"
        clean.append(part)
    if not clean:
        clean = ["page"]
    stem, dot, _ext = clean[-1].rpartition(".")
    clean[-1] = (stem if dot and stem else clean[-1]) + ".html"
    rel = "/".join(clean)
    candidate, n = rel, 2
    while candidate.lower() in used:
        candidate = rel[:-5] + f"-{n}.html"
        n += 1
    used.add(candidate.lower())
    return candidate


def title_pages(data):
    """[(relative path, html text)] for the title's HTML members."""
    pages = []
    used = set()
    for name, offset, size in read_members(data):
        if size == 0:
            continue
        base = name.rsplit("/", 1)[-1]
        if base.lower() in SYSTEM_NAMES:
            continue
        is_html_name = base.lower().endswith(HTML_EXTENSIONS)
        raw = member_bytes(data, offset, size)
        if not is_html_name and not _looks_like_html(raw):
            continue
        text = raw.decode("cp1252", "replace")
        pages.append((_page_relpath(name, used), text))
    return pages


def with_provenance(text, book, medium):
    comment = (f"<!-- {book} InfoViewer title ({medium}); HTML topics "
               f"extracted with tools/extract-ivt.py, images and the "
               f"title's own indexes dropped. -->\n")
    match = BODY_RE.search(text) or HTML_RE.search(text)
    if match:
        return text[:match.end()] + "\n" + comment + text[match.end():]
    return comment + text


def main():
    ap = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--ivt", required=True,
                    help=".ivt/.ivi InfoViewer title to decode")
    ap.add_argument("--book", required=True,
                    help="book directory below --out (e.g. WCEAPC)")
    ap.add_argument("--out", required=True,
                    help="corpus directory (e.g. corpus/mvb/windows-ce-2.0-sdk)")
    ap.add_argument("--medium", default="",
                    help="source file name recorded in each page's comment")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    medium = args.medium or os.path.basename(args.ivt)

    with open(args.ivt, "rb") as fh:
        data = fh.read()
    try:
        pages = title_pages(data)
    except IvtError as exc:
        print(f"[ivt] {os.path.basename(args.ivt)}: {exc}", file=sys.stderr)
        return 1
    print(f"[ivt] {os.path.basename(args.ivt)}: {len(pages)} pages")

    outdir = os.path.join(ROOT, args.out, args.book) \
        if not os.path.isabs(args.out) else os.path.join(args.out, args.book)
    if args.dry_run:
        for rel, _text in pages[:10]:
            print(f"  {rel}")
        return 0

    written = 0
    for rel, text in pages:
        dest = os.path.join(outdir, *rel.split("/"))
        os.makedirs(os.path.dirname(dest), exist_ok=True)
        with open(dest, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(with_provenance(text, args.book, medium))
        written += 1
    print(f"[ivt] wrote {written} pages to {os.path.relpath(outdir, ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
