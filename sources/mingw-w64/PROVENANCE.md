# PROVENANCE — mingw-w64 headers (cross-check reference, REVIEW ONLY)

Pinned reference material for the `winsur/` cross-check reports in
`knowledge/reports/mingw-w64-*.tsv|.md`.  This file is the licence
investigation the project requires before any outside reference may be
used: acquisition route, publisher, licence scope, usage decision.

## Acquisition route

- Upstream project: **mingw-w64** (`mingw-w64` GitHub repository,
  described there as *(Unofficial) Mirror of mingw-w64-code*; the
  authoritative repository is the project's SourceForge git, which this
  sandbox cannot reach — the GitHub mirror is the acquisition route).
- Downloaded: `https://codeload.github.com/mingw-w64/mingw-w64/tar.gz/63ebe6cdb3ec4d5c586b7f0f0c03dd502e44c296`
- Pinned commit: `63ebe6cdb3ec4d5c586b7f0f0c03dd502e44c296`
  (branch `master`, commit date 2026-10-11, fetched 2026-10-14)
- Stored here: `mingw-w64-63ebe6cdb3ec4d5c586b7f0f0c03dd502e44c296-src.tar.gz`
  (16 MB), sha256 `94469ea48f974f9a4f7d8b7050cb7eceaa92c1f941ed3b6b8137591ba19491de`

## Publisher and authorship

The mingw-w64 project (see `AUTHORS` inside the tarball); the runtime
and headers were written by its contributors from 2009 onwards as an
open-source toolchain.  It is NOT Microsoft material and is kept
entirely outside `corpus/` — it is a third-party reference, never a
corpus source.

## Licence scope (verified from the files in the tarball, not from a
project web page)

- `COPYING` at the tarball root states (verbatim):
  > "With exception of certain parts that are prominently marked as
  > being in the Public Domain, BSD, or LGPL this Software is provided
  > under the Zope Public License (ZPL) Version 2.1."
  That file adds: "This license has been certified as open source. It
  has also been designated as GPL compatible by the Free Software
  Foundation (FSF)."  ZPL 2.1 conditions: retain the copyright notice
  and conditions, reproduce them in binary-form distributions, no use
  of the copyright holders' names for endorsement, modified files must
  carry a change notice (all quoted in full in `COPYING-ZPL-2.1.txt`,
  kept beside this file).
- `COPYING.MinGW-w64/COPYING.MinGW-w64.txt` enumerates the exceptions:
  GCC/binutils and profiling code (GPL, not in the headers tree),
  DirectX and DDK headers (**GNU LGPLv2.1+**), libmangle/gendef/PSEH
  (MIT-style).
- `COPYING.MinGW-w64-runtime/COPYING.MinGW-w64-runtime.txt` covers the
  runtime (ZPL plus public-domain parts); it governs binaries and is
  recorded here for completeness.
- `mingw-w64-headers/` itself contains no licence file, so *each file
  is governed by the root `COPYING` (ZPL 2.1) unless the file carries
  its own prominent marking*.

## Per-file classification of `mingw-w64-headers/include/` (all 1,810 regular files directly in the directory)

Counted by reading the licence banner of every file at the pinned commit
(the same rules are re-run and re-counted by `tools/mingw_xcheck.py`, so
the tally below is reproducible from the stored tarball):

| class                                    | files | marking read in the file |
|------------------------------------------|------:|--------------------------|
| Public Domain                            |   868 | "This file has no copyright assigned and is placed in the Public Domain." |
| ZPL 2.1, implicit (runtime-package banner only) | 633 | "This file is part of the mingw-w64 runtime package. No warranty is given..." |
| ZPL 2.1, explicit                        |     9 | names ZPL/Zope Public License |
| LGPL-marked (DirectX/Wine-derived)       |   297 | GNU Lesser General Public License (Wine project copyright) |
| GPL-marked (.idl)                        |     3 | GNU General Public License |

## Usage decision

- **Parsing scope:** only `include/` files classified Public Domain or
  ZPL (implicit or explicit).  LGPL- and GPL-marked files (**and the
  `ddk/` tree entirely**) are excluded from every report, even though
  the tarball stores them.  ZPL/PD terms allow reading, quoting and
  redistributing under the conditions above, which this repository
  satisfies by keeping the licence texts and this provenance file next
  to the tarball.
- **USE IS REVIEW-ONLY.**  The cross-check generates *reports* in
  `knowledge/reports/` that a human reads.  NOTHING from this tree is
  input to `tools/gen-include-def.py` or any other generator, and no
  `#define` taken from here is ever emitted into `winsur/` (the project
  rule: header values come only from official CE/Win32 documentation
  pages; community values may never be minted into the surface).  A
  name listed by the cross-check as "absent from the CE surface" is a
  lead for further documentation searching, not a value to adopt.
- Every report row attributes its quotation with header name + line
  number of the pinned commit (ZPL notice-retention honoured in
  substance; constant names/numbers themselves are API facts).
