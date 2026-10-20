#!/usr/bin/env python3
"""tools/mdf.py -- turn an Alcohol 120% .mdf disc image into an .iso.

Preservation-grade CD dumps on the Internet Archive often come as
MDF/MDS pairs (the VS.NET 2003 MSDN Library discs in queues/media.tsv
are an example).  Neither 7-Zip nor tools/iso9660.py reads MDF, but
a single-track data MDF is just raw CD sectors: the ISO 9660 / UDF
image is the user-data area of each sector laid end to end.  This
module sniffs the sector layout (by finding the volume-recognition
identifiers ``CD001`` / ``BEA01`` / ``NSR02`` / ``NSR03`` at sector
16 of the user data) and streams the user data out, after which the
ordinary ISO path of tools/import-media.py takes over.

The layouts a data disc uses are recognised, at any track-start
offset (some rips carry the 150-sector pregap in the file):

    2352-byte raw sectors, Mode 1 (12 sync + 4 header, data at +16)
    2352-byte raw sectors, Mode 2 Form 1 (+8 subheader, data at +24)
    2336-byte sectors (no sync/header; data at +0, Mode 2 at +8)
    2448-byte sectors (2352 + 96 subchannel; data at +16/+24)
    2048-byte sectors (already an ISO image under an .mdf name)

Anything else (multi-track images, Mode 2 Form 2, audio) is refused
rather than guessed: the sniffer finds no aligned pair of volume
descriptors at sectors 16/17 and ``to_iso`` returns False.  The
sniffer's first version tried only three layouts at file sector 16
and the VS.NET 2003 MSDN discs (MSDVVSD1-3) matched none of them;
the search is a scan for aligned descriptors since then.
"""

import os
import sys

SECTOR_DATA = 2048
_LAYOUTS = ((2352, 16), (2336, 0), (2048, 0), (2352, 24), (2336, 8),
            (2448, 16), (2448, 24))
_VOLUME_IDS = (b"CD001", b"BEA01", b"NSR02", b"NSR03")
_SCAN_BYTES = 4 * 1024 * 1024


def _volume_id_positions(head):
    """Byte offsets of every volume-recognition identifier in head."""
    found = []
    for ident in _VOLUME_IDS:
        pos = head.find(ident)
        while pos != -1:
            if pos >= 1:
                found.append(pos)
            pos = head.find(ident, pos + 1)
    return sorted(found)


def sector_layout(path):
    """(sector_size, data_offset, start_sector) of a data MDF, or None.

    Sector 16 of the user data is where both ISO 9660 and UDF put
    their first volume descriptor, whose bytes 1..5 are a fixed
    identifier, and sector 17 holds another (supplementary volume
    descriptor / terminator, NSR after BEA).  A layout is proven
    when both identifiers sit exactly on its sector grid; the user
    data's sector 0 may itself start ``start_sector`` sectors into
    the file (a ripped pregap).
    """
    with open(path, "rb") as fh:
        head = fh.read(_SCAN_BYTES)
    positions = _volume_id_positions(head)
    for sector_size, offset in _LAYOUTS:
        for pos in positions:
            q = pos - 1 - offset
            if q < 0 or q % sector_size:
                continue
            sector = q // sector_size
            if sector < 16:
                continue
            nxt = (sector + 1) * sector_size + offset + 1
            if (nxt + 5 <= len(head)
                    and head[nxt:nxt + 5] not in _VOLUME_IDS):
                continue
            return sector_size, offset, sector - 16
    return None


def to_iso(source, dest):
    """Stream the user data of ``source`` (an .mdf) to ``dest`` (.iso).

    Returns True on success.  A trailing partial sector is dropped:
    a disc image holds whole sectors.
    """
    layout = sector_layout(source)
    if layout is None:
        with open(source, "rb") as fh:
            seen = _volume_id_positions(fh.read(_SCAN_BYTES))
        print(f"[mdf] {os.path.basename(source)}: no ISO 9660/UDF volume "
              f"descriptor at any known sector layout "
              f"(size {os.path.getsize(source)}, volume ids in the "
              f"first {_SCAN_BYTES} bytes at {seen[:8] or 'none'})",
              file=sys.stderr)
        return False
    sector_size, offset, start_sector = layout
    tail = sector_size - offset - SECTOR_DATA
    os.makedirs(os.path.dirname(os.path.abspath(dest)), exist_ok=True)
    with open(source, "rb") as src, open(dest, "wb") as out:
        if start_sector:
            src.seek(start_sector * sector_size)
        while True:
            if offset:
                if len(src.read(offset)) < offset:
                    break
            data = src.read(SECTOR_DATA)
            if len(data) < SECTOR_DATA:
                break
            out.write(data)
            if tail and len(src.read(tail)) < tail:
                break
    print(f"[mdf] {os.path.basename(source)}: {sector_size}-byte sectors, "
          f"user data at +{offset}, track starts at sector "
          f"{start_sector}", file=sys.stderr)
    return True


def main():
    if len(sys.argv) != 3:
        print("usage: tools/mdf.py <image.mdf> <out.iso>", file=sys.stderr)
        return 2
    return 0 if to_iso(sys.argv[1], sys.argv[2]) else 1


if __name__ == "__main__":
    sys.exit(main())
