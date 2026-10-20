# Provenance: CeGCC mingw module (mingw32ce)

Snapshot pinned in this directory:

`mingw-cegcc-cd5f3e6465fdc9b0e968821cce98092251367fc8-src.tar.gz`
sha256 `13e1722d2e355eed5043bd547ea071cb1ca29812ea849305a6836e37a10c8080`

## Origin and acquisition

The CeGCC project (https://cegcc.sourceforge.net/) adapts the GNU
toolchain for Windows CE. Its `mingw` module is the classic MinGW
runtime adapted to CE's coredll C runtime (the "mingw32ce" flavour):
CE-tailored C runtime headers under `include/`, CE CRT emulation
sources, and the coredll export lists `coredll.def`, `coredll6.def`,
`crtdll.def` (kept in sync with the w32api module's `libce` copies —
see the header comment in the files themselves).

Acquisition route: GitHub mirror `jkoan/cegcc-mingw` (split-module
mirror of the CeGCC SVN `src/mingw`), codeload tarball of commit
`cd5f3e6465fdc9b0e968821cce98092251367fc8` (2016-10-25), matching the
pin used for the w32api module (`sources/w32api-cegcc/`).

## Licensing (verified 2026-10-20)

The MinGW runtime is distributed in the public domain (see the
`DISCLAIMER` file in the tarball: "This file has no copyright assigned
and is placed in the Public Domain ... You are free to use this
package and its code without limitation"). A scan of the parse scope
(`include/` recursive, 60 files, plus the three `.def` files) finds
only public-domain notices; no GPL/LGPL text, no Microsoft copyright.
Internal implementation headers (`mingwex/gdtoa`, Cephes math) are
outside the parse scope.

## Parse contract

Once ingested, lines are stored in `kb.reference_names` under
source_id `w32api-cegcc-mingw` (`tools/kbgen/references.py`):
constant defines from `include/` (with the defining header) and
export names from the three `.def` files. Values participate in the
CeGCC adoption layer under `docs/kb-design.ja.md` §12 — only where
the CE documentation prints no number, and always carrying CeGCC
provenance.
