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

Only the layouts a data disc uses are recognised:

    2352-byte raw sectors (12 sync + 4 header + 2048 data + ECC)
    2336-byte sectors     (2048 data + ECC, no sync/header)
    2048-byte sectors     (already an ISO image under an .mdf name)

Anything else (multi-track images, Mode 2 / XA form 2, audio) is
refused rather than guessed: the sniffer finds no volume descriptor
and ``to_iso`` returns False.
"""

import os
import sys

SECTOR_DATA = 2048
_LAYOUTS = ((2352, 16), (2336, 0), (2048, 0))
_VOLUME_IDS = (b"CD001", b"BEA01", b"NSR02", b"NSR03")


def sector_layout(path):
    """(sector_size, data_offset) of a data MDF, or None.

    Sector 16 is where both ISO 9660 and UDF put their first volume
    descriptor, whose bytes 1..5 are a fixed identifier; finding one
    at a candidate layout's data position proves the layout.
    """
    size = os.path.getsize(path)
    with open(path, "rb") as fh:
        for sector_size, offset in _LAYOUTS:
            if size < 17 * sector_size:
                continue
            fh.seek(16 * sector_size + offset + 1)
            if fh.read(5) in _VOLUME_IDS:
                return sector_size, offset
    return None


def to_iso(source, dest):
    """Stream the user data of ``source`` (an .mdf) to ``dest`` (.iso).

    Returns True on success.  A trailing partial sector is dropped:
    a disc image holds whole sectors.
    """
    layout = sector_layout(source)
    if layout is None:
        print(f"[mdf] {os.path.basename(source)}: no ISO 9660/UDF volume "
              f"descriptor at any known sector layout", file=sys.stderr)
        return False
    sector_size, offset = layout
    tail = sector_size - offset - SECTOR_DATA
    os.makedirs(os.path.dirname(os.path.abspath(dest)), exist_ok=True)
    with open(source, "rb") as src, open(dest, "wb") as out:
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
          f"user data at +{offset}", file=sys.stderr)
    return True


def main():
    if len(sys.argv) != 3:
        print("usage: tools/mdf.py <image.mdf> <out.iso>", file=sys.stderr)
        return 2
    return 0 if to_iso(sys.argv[1], sys.argv[2]) else 1


if __name__ == "__main__":
    sys.exit(main())
