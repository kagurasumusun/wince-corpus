# Generation report -- learn/windows-ce-5.0

## Boundary: this is Windows CE, not Win32

Windows CE is the CE-specific surface **plus** the part of Win32 that
Windows CE documents share -- not the whole Win32 API.  Every entity
below is documented by a Windows CE set (`ce_sets` contains the
target); the Win32 reference is only ever *evidence* or a marked
fallback:

* entities emitted by surface: `ce-only` 10,791, `shared` 3,887
* declarations that come from a Win32 page: **0** (marked in the fragment comments, the manifest and the `.def` worklists)
* a Win32-only name (a page the CE documents never claim) is never emitted, even with `--include-win32`: that flag only adds entries whose CE evidence exists

## What was generated

* entities in scope: **14,678**
* declarations written: **15,161** in 489 header fragment(s) (/home/user/wince-docs-corpus/winsur/ce-5.0/include)
* ANSI spellings left out because a CE page states the device supports only the Unicode version: **0** (`knowledge/kb/unicode-only.tsv` has the sentence; the Win32 reference documents those `A` names for the desktop)
* export tables printed by this set's own pages: **0** DLL(s), **0** name(s) with the ordinal the page prints (`link/*.ordinals.def`).  Every other `.def` line here has no ordinal, because no document gives it one
* declarations borrowed from another CE set: **4,572** -- **4,415** of them because this version's page lost the spaces between tokens and another CE page kept them, and the two texts are the same once whitespace is removed (quoted as that page printed them, not repaired)
* declarations taken from the Win32 reference instead (the CE pages print none): **0** -- marked in the fragments, the manifest and here: the Win32 pages document the shared surface as desktop Windows, so each one must be checked against the CE SDK
* headers taken from another CE set, because this version's pages state none: **36** (marked `header_from` in the manifest and in the fragment comment)
* headers taken from the Win32 reference, because no CE page states one: **356** -- a desktop header (`processthreadsapi.h`, `windows.h`) is never passed off as a Windows CE header
* libraries borrowed the same way: CE set **252**, Win32 reference **355**
* EXPORTS worklists: 190 module file(s) in /home/user/wince-docs-corpus/winsur/ce-5.0/link, **4,196 export line(s)** (functions and callbacks only; structures, typedefs and C++ methods stay in the include material)
* numbered constants: **1,638** derived `#define` lines in 67 `*.h.constants` file(s), from **5,732** table rows the pages print.  The `#define` keyword is not on the page; the row is quoted above each line.  **0** name(s) whose pages disagree on the number were not turned into a `#define`.  **0** `#define` line(s) are commented out because a CE page lists the name as not supported (the sentence is quoted above the line); **4,046** rows name no header, so they stay in `constants.tsv` only.  A number stated only by the Win32 reference is not borrowed
* pages behind the output: 49,042

## Rights behind the output

Every declaration in this build comes from a page whose statement is
recorded in `data/license-scopes.tsv`; the counts below are the
scopes of those pages.  **Check before publishing an export**: a
scope whose `redistribution` is not `yes` may not be republished
(`tools/check-licenses.py`, `docs/LICENSING.md`).

| scope | declarations written | may be published |
|-------|---------------------:|------------------|
| learn-tou | 10,816 | no |
| ce30-internal-reference | 2,447 | no |
| ms-media-copyright | 1,898 | no |

## The wall this generator keeps

* the corpus pages read by this generator: **0** (the generator reads `knowledge/` only; a corpus path is refused, see `docs/clean-room.md`)

## What was skipped

| reason | entities |
|--------|----------|
| no declaration in the corpus | 1,791 |
| no header stated | 408 |

The skipped entities are the collection worklist: their pages exist,
they simply do not state the declaration, the header or the library.
`knowledge/reports/gaps.tsv` has the same list with one row per
entity and the set each one should be collected from, and
`knowledge/reports/filtered-values.tsv` lists the library/DLL values
that name no file (they are statements about the API, not libraries).
