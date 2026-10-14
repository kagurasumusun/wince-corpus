# bitsavers-microsoft — vintage Microsoft Windows CE guides

## What this directory is

Verbatim PDFs of printed Microsoft **Windows CE** documentation from the
late 1990s / early 2000s (Programmers Guide, Communications Guide, Device
Driver Kit, User Interface Services Guide, Developers Kit cover, and the
2001 "Windows CE 3.0 Application Programming" book), mirrored on
bitsavers.trailing-edge.com — one of the archival collectors that keep
superseded hardware/OS documentation around after vendors take it down.

## Decision

The corpus collects **Microsoft** Windows CE documentation (see
`docs/COLLECTION-POLICY.md`): site pages are already fetched through the
harvest lanes from learn.microsoft.com, mirrors and archives are accepted
when the material is Microsoft's own and no free access remains.

The same reading applies to these printed guides: they are Microsoft's
official CE books/manuals, long delisted, mirrored by a non-profit archive.
The archive's inventory was first probed on 2026-10-14
(`data/probe/bitsavers-*/INDEX.md`, which records URL, fetch date, size and
sha256 of each file before it was kept here).

**Not collected** (deliberately): the third-party MS Press *books* in the
same bitsavers directory — Boling's "Programming Microsoft Windows CE"
(1998, and its 2nd edition 2001), Murray's "Inside Microsoft Windows CE"
(1998), Lidin's "Inside Microsoft .NET IL Assembler" — commercial books by
individual authors, not Microsoft's own product documentation, and Lidin's
is not even CE material.  Same for the directory's one PNG (a CE timeline).

## Files

One row per PDF, metadata from `data/probe/bitsavers-keep-*/INDEX.md`
(each receipt names URL, date, byte size, sha256):

- `Microsoft_-_Windows_CE_Programmers_Guide_1998.pdf`
- `Microsoft_-_Windows_CE_Programmers_Guide_1999.pdf`
- `Microsoft_-_Windows_CE_Communications_Guide_1999.pdf`
- `Microsoft_-_Windows_CE_Device_Driver_Kit_1999.pdf`
- `Microsoft_-_Windows_CE_User_Interface_Services_Guide_1999.pdf`
- `Microsoft_-_Windows_CE_Developers_Kit_Cover_1999.pdf`
- `Windows_CE_3.0_Application_Programming_2001.pdf`;

The files are the untouched medium; the corpus does not re-host their
printed text as pages until an OCR/text pass decides that is worth it.
