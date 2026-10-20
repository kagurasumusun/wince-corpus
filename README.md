# wince-docs-corpus

Offline, page-per-file copy of Microsoft's official Windows CE / Windows
Embedded documentation: Windows CE 1.0 – 6.0, Windows Embedded Compact 7 and
Windows Mobile 6.5 — **plus the Win32 documentation Windows CE shares**, so
that an API question can be answered without breaking the offline copy.

The boundary matters: **Windows CE is not the whole of Win32.**  It is the
CE-specific surface plus the part of Win32 the CE documentation shares, and the
corpus is collected that way — a Win32 page is taken only when a Windows CE
document uses its API name (`docs/COLLECTION-POLICY.md`).  The knowledge base
states the same boundary per name (`v_symbol_surface` in `kb/kb.sqlite3`:
25,114 names with a CE page only, 4,052 shared with Win32, 1,209 documented
by the shared-surface reference only — never CE facts).
The .NET families that shipped in the same documentation namespace
(.NET Compact Framework, .NET Micro Framework, POS for .NET) are kept as a
**separate tree**, `corpus/dotnet/`: they document a layer on top of Windows CE,
not the operating system its include/def files describe.

**126,963 pages** (2026-10-20 — `data/index/INDEX.tsv` is the live count):
105,132 CE pages, 10,657 .NET pages, 6,370 Win32 pages (5,279 API pages plus
the shared-surface reference pages; markdown, from Microsoft's public
`MicrosoftDocs` repositories) and 11 allowlisted open-source documents about
Windows CE (`corpus/oss/`; not source code). The repository also carries
the media the pages were extracted from, the URL queues used to harvest them,
the upstream snapshot the Win32 pages come from, and the derived catalogs,
manifests, indexes — and `kb/`, the machine-readable knowledge base
(one SQLite database) built from the pages by `tools/kbgen`.

What belongs in the corpus — and what is kept out — is written down once, in
[`docs/COLLECTION-POLICY.md`](docs/COLLECTION-POLICY.md), and enforced by
`tools/check-policy.py`, which every collection workflow runs.

## What is collected — and what is not

This is a **documentation archive**: documentation pages, reference material
and support articles, one page per file. Nothing else is imported.

* **Collected**: the product documentation and API reference of the releases
  above (as HTML pages or markdown), the KnowledgeBase articles, release notes,
  and the media those came from (kept verbatim under `sources/` as the source
  of the extraction).
* **Collected, as the Win32-common half**: a page of `MicrosoftDocs/sdk-api`
  **only when its API name is one Windows CE documents** — including the `A`/`W`
  variants of a shared base name (`CreateFileA`/`CreateFileW` because CE
  documents `CreateFile`). That is 5,279 pages for 5,068 shared names, and the
  knowledge base folds the variant spellings back onto the base name the CE
  reader knows (`CreateSemaphoreW` -> `CreateSemaphore`, 893 names, on the
  evidence of the page's own "Unicode and ANSI" statement). The
  desktop-only context of those modules (the Shell, DirectX, WMI, WinRT,
  Windows Media, …) is **not** imported, and neither are the desktop Win32
  programming guides (`MicrosoftDocs/win32`).
* **Not collected**: source code. No `.c`, `.h`, `.cpp`, `.cs`, `.rc`, `.def`,
  `.dsp`, `.vbp` or similar files are imported into `corpus/`, and a medium is
  never unpacked *into* the corpus — `tools/import-media.py` classifies
  everything inside a CD image, keeps the documentation of the product and
  counts the rest (`bin/`, `samples/`, toolchains) as skipped. Code that a
  documentation page quotes as part of its own text is part of that page.
* **Not collected**: the parts of a medium that are not documentation of the
  product — a disc's sponsor/vendor pages, sample trees and their readme pages,
  a viewer's own help, FrontPage metadata directories (`_vti_cnf/`, `_vti_pvt/`,
  `_derived/`). `queues/media.tsv` refuses them per medium and
  `tools/import-media.py` refuses the metadata directories for every medium.
* **Not collected**: another product's documentation that a CE page links to.
  The crawl of the MSDN Library April 2000 refuses the desktop Visual C++ trees
  (`vcmfc`, `vccore`, …) because that material is not CE documentation and the
  Win32-common subset the corpus wants is already collected from Microsoft's
  own `MicrosoftDocs` repositories.
* `tools/check-corpus.py` reports a `source_files` count and
  `tools/check-policy.py` a `source or binary` count, so a source file that
  ever reaches `corpus/` is visible and fails the check.

## Repository layout

The top level separates the four kinds of material the project needs —
**media** (`sources/`, the origin), **documents** (`corpus/`, the material),
**knowledge** (`kb/`, the machine-readable statements extracted from the
documents) and **working data** (`data/`, `queues/`, `docs/`, `tools/`, about
the collection rather than part of it).

| Path | Contents |
|------|----------|
| `corpus/` | The documentation itself, one page per file (HTML, plus markdown for the Win32 pages). See `corpus/README.md`. |
| `corpus/learn/<set>/` | 58,046 pages harvested from `learn.microsoft.com/…/previous-versions/windows/embedded`: CE 5.0 (24,694), Embedded CE 6.0 (23,714), CE .NET 4.x (8,969), Compact 7 (256) and 413 unclassified CE 2.12/3.0-era topics. |
| `corpus/chm/windows-ce-5.0/` | 20,179 pages: the 98 component CHMs of the CE 5.0 CD1 — per-component guides and API reference, complementary to the Learn harvest. |
| `corpus/chm/windows-ce-4.2/` | 566 pages: the emulator board and remote-tools reference of the CE .NET 4.2 Platform Builder Emulation Edition media. |
| `corpus/chm/windows-ce-3.0/` | 8,962 pages extracted from the official Windows CE 3.0 documentation CHM. |
| `corpus/mvb/windows-ce-1.0/` | 2,103 pages decoded from the CE 1.0 Books Online (Multimedia Viewer books + WinHelp release notes). |
| `corpus/mvb/windows-ce-2.0-sdk/` | 5,085 pages of the Windows CE Platform SDK (H/PC) 2.0 disc (02/98): the InfoViewer Books Online (11 `.ivt` titles decoded by `tools/extract-ivt.py` — WCESDK, WCESDKG, WCEDDK and the MIPS/SH/VR4100 CPU books), the CE debugger reference (`windbg.hlp`) and the disc ReadMe. The SDK's headers, libraries and samples are deliberately not imported. |
| `corpus/msdn-library/techshelps/` | 5,165 pages of the MSDN Library's Windows CE 1.0/2.0 sets, from the techshelps mirror (CEGUIDE, WCEMFC, WCEATL, VBCE, WCEDDK, VCCE, DNEMBED). |
| `corpus/msdn-library/datadungeon-2000-04/` | The Windows CE documentation of the MSDN Library April 2000 (CE 2.12/3.0 era), crawled page by page from library.thedatadungeon.com — 2,931 pages collected so far, the crawl continues twice a day. |
| `corpus/msdn-library/wcedevcon-99/` | 6,382 pages of the Windows CE 2.11/2.12 SDK, DDK and Platform Builder documentation on the DevCon '99 conference disc. The disc's sponsor pages, sample trees, desktop Media Player 2 help and FrontPage metadata are refused (see `queues/media.tsv`). |
| `corpus/kb/` | 260 Windows CE KnowledgeBase articles (CE 1.0/2.0/2.1x era, the CE toolkits, H/PC, Palm-size PC, Pocket PC). |
| `corpus/site/` | 44 pages imported from the CE-era web sites that came with the media (`sources/windows-ce-2.0/developer/` — the CE 2.0 developer site including w32model, comm_mod, porting and mgdi — plus the CE 4.2/5.0/6.0 pages that were still outside the corpus). |
| `corpus/dotnet/<set>/` | 10,657 .NET pages, kept apart from the CE trees: POS for .NET (5,793), .NET Micro Framework (4,012), .NET Compact Framework (852). See `corpus/dotnet/README.md`. |
| `corpus/win32/api/` | 5,279 Win32 pages for the 5,068 API names Windows CE documents (from `MicrosoftDocs/sdk-api`, pinned by commit). `data/reports/win32-shared.tsv` maps each name to its CE pages, `data/reports/win32-imported.tsv` records each page's CE evidence and `tools/find-api.py` looks a name up on both sides. |
| `corpus/msdn-library/2010-05/<set>/` | 161 Internet Archive copies of MSDN topics (May 2010), filed under the set they duplicate. |
| `corpus/msdn-library/windows-mobile-6.5/` | 34 Windows Mobile 6.5 topics in MSDN Library (MSHelp) format. |
| `kb/` | The knowledge base: one SQLite database (`kb/kb.sqlite3`, schema in `kb/schema.sql`, build manifest `kb/manifest.json`) generated from `corpus/` by `tools/kbgen` — 61,970 symbols (30,695 with a native subject page: 24,576 CE-only, 4,590 shared with Win32, 1,529 reference-only — plus 8,280 managed .NET subjects), 111,778 declaration quotes (verbatim, page-cited; 31,326 of them the .NET layer's managed signatures, now attached to their Namespace.Type subjects with resolved assemblies), 216,621 requirement statements, 30,019 numbered-constant observations resolving to 6,734 CE values (further names documented but unnumbered — no value is invented; 3,385 of them carry a clearly-labelled CeGCC-adopted value in a separate 'cegcc' layer, cited to the public-domain header line and never overriding a documented one), chosen header/file per name with ranked, cited evidence (22,586 CE header choices plus 4,699 CeGCC-adopted ones; ties stay open conflicts, 6,225 of them, never silently picked), version availability, documented struct members and layout offsets (only where a page prints them), and the pinned third-party references (CeGCC w32api + mingw32ce, dotnet/pinvoke) in isolated tables, citable only by that 'cegcc' layer — see docs/cegcc-survey.ja.md. Every observation names its page and carries that page's licence scope; `kb/reports/` holds the generated summary/coverage/conflicts/gaps, and the database itself is published as a release asset (it is larger than GitHub's file limit). See `kb/README.md` and `docs/kb-design.ja.md`. |
| `sources/` | The verbatim official media the corpus was extracted from (CHMs, HLP/MVB books, documentation zips, the 41-page CE 2.0 site mirror) and the sdk-api snapshot (`sources/microsoftdocs/`), with a `PROVENANCE.md` per release. Reference material — not part of the corpus text. |
| `data/` | Derived datasets (catalogs, TOC trees, manifests, per-page API metadata, gap report) and the generated index. See `data/README.md`. |
| `docs/` | `COLLECTION-POLICY.md` — what belongs in the corpus, the Win32-common rule and the .NET split; `LICENSING.md` — the per-item rights registry, the statements it rests on and the finding that most of the collection is not licensed for redistribution; `kb-design.ja.md` — the knowledge-base design record (2026-10-19 redesign: schema, resolution rules, validation, migration results; Japanese). |
| `queues/` | URL work queues consumed by the harvester (plus out-of-policy candidates that are deliberately not harvested). |
| `tools/` | Collection: `harvest.py` (queue → corpus), `fetch-upstream.py` (import the CE-shared Win32 pages), `extract-mvb.py`, `extract-chm.py`, `crawl-mirror.py`, `import-media.py` + `iso9660.py`, `import-techshelps.py` / `import-kbarchive.py` / `import-site.py`. Checks and indexes: `check-policy.py` (the collection policy), `check-corpus.py` (integrity/duplicate/source-file check), `dedupe-corpus.py` + `alias_index.py` (resolve duplicates and keep the page ids traceable), `build-index.py`, `build-index-sql.py`, `build-gap-report.py`, `build-ce-api-names.py` + `ce_api_names.py`, `build-win32-map.py`, `find-api.py`, `audit-sources.py` (every artifact under `sources/` against where it ended up), `build-chm-inventory.py` (every CHM/HLP/MVB under `sources/` against the queue entry that extracts it) and `build-topic-coverage.py` (how much of a subject area, e.g. Platform Builder, the official catalogs cover and the corpus holds). Knowledge: `kbgen/` (KB Gen: `build` / `check` / `query` / `export` — the only writer and validator of `kb/`; `page_parse.py` is its versioned page extractor: the page-format readers, including the ABI readers, the header-membership sentences and the implementation-code test), `find-api.py` (name lookup across corpus index and KB), `license_scopes.py` (the rights registry) + `check-licenses.py` (registry coverage, verbatim statements, publication audit). The include/.def generator is a separate later layer and does not exist in this repository yet; nothing here reads `corpus/` on its behalf. |
| `.github/workflows/` | `harvest.yml` (harvest a queue from `queues/`; runs on demand or whenever `queues/auto-harvest.txt` changes), `crawl-mirror.yml` (crawl the mirror sites in `queues/mirrors.tsv`, twice a day — this is the live collection), `extract-chm.yml` (unpack the documentation CHMs of a media set in `queues/chm-sets.tsv`), `import-media.yml` (fetch a CD image from the Internet Archive and import its documentation, `queues/media.tsv`) and `import-win32.yml` (re-import `corpus/win32/` from the pinned sdk-api commit). All are `workflow_dispatch` — run them from the Actions tab — and all end with `tools/check-corpus.py` and `tools/check-policy.py`. `kb.yml` is the guard on the knowledge base and its only refresher: it runs `tools/kbgen build` + `tools/kbgen check`, publishes the database as a release asset and commits `kb/manifest.json` + `kb/reports/` — the collection workflows above never build the KB, so Harvest/Corpus and KB Gen stay separate layers. |

## Corpus conventions

* **One page = one file.** The file name is the page id:
  * Learn pages: the last segment of the page's canonical URL, version tag
    included — `aa450192(v=msdn.10).html`. File names therefore join directly
    with `data/catalogs/*.tsv`, `data/manifests/*` and
    `data/reports/missing-pages.tsv`.
    A topic is never stored twice: the harvest first fetched `aa450192.html`
    and later `aa450192(v=msdn.10).html`; only the canonical-name file is kept
    (17,622 such duplicates were removed, 670 MB of redundant HTML).
  * CE 3.0: the CHM topic file name (`_wcepb_ASSERT.html`).
  * Wayback snapshot: the original MSDN topic id (`01c3x0ze.html`).
* **Set directories** (`windows-ce-5.0`, `windows-ce-net-4x`,
  `windows-embedded-ce-6.0`, …) are shared by the corpus, the catalogs, the
  TOC trees and the manifests.
* The harvester picks the set from the page title (`BOOK_RULES` in
  `tools/harvest.py`, mirrored in `corpus/README.md`). Pages whose set cannot
  be determined are kept under `corpus/learn/unclassified/` rather than
  guessed into the wrong set — 413 pages, mostly CE 2.12/3.0-era native API
  topics; all of them come from the `previous-versions/windows/embedded`
  namespace.
* **Generated files** (`data/index/INDEX.tsv`, `data/reports/*.tsv`) are
  produced by the tools below — do not edit them by hand.
  `data/index/corpus.sqlite3` is generated the same way but too large to
  commit (over GitHub's 100 MiB limit since the 2026-10 mass harvest);
  like `kb/kb.sqlite3` it is a local cache every workflow rebuilds, and
  `data/logs/` (harvest failure logs) is not committed either.

## Working with the repository

```bash
python3 tools/check-policy.py          # is corpus/ still CE documentation only?
python3 tools/check-corpus.py --report # integrity, duplicates, source files
python3 tools/dedupe-corpus.py --check # duplicates/aliases still in place
python3 tools/build-index.py           # data/index/INDEX.tsv  (id, set, path, title)
python3 tools/build-index-sql.py       # data/index/corpus.sqlite3 (local cache, uncommitted)
python3 tools/build-gap-report.py      # data/reports/missing-pages.tsv (catalog vs corpus)
python3 tools/build-ce-api-names.py    # data/reports/ce-api-names.tsv (the CE API names)
python3 tools/fetch-upstream.py list   # what the Win32 import would take
python3 tools/fetch-upstream.py subset --source sdk-api   # corpus/win32/api (pinned commit)
python3 tools/build-win32-map.py       # data/reports/win32-{shared,imported}.tsv
python3 tools/find-api.py CreateFile   # look a name up across CE + Win32
python3 tools/audit-sources.py         # sources/ artifact -> corpus receipt, or a worklist
python3 tools/build-chm-inventory.py   # every CHM under sources/ -> the corpus directory it fed
python3 tools/build-topic-coverage.py --pattern "Platform Builder|OAL|BSP" \
    --out data/reports/platform-builder-coverage.tsv
python3 -m tools.kbgen build          # kb/ (KB Gen: corpus -> kb/kb.sqlite3 + reports)
python3 -m tools.kbgen check          # validate kb/ ("kb OK"; --verify-reproducible for a rebuild compare)
python3 -m tools.kbgen query symbol CreateFile   # ask the KB about a name

# The include/.def generator (winsur surface) is designed separately on top of kb/;
# it is not part of this repository yet.

# The desktop Win32 programming guides, as an offline extra outside the corpus
python3 tools/fetch-upstream.py guides --out .cache/win32-guides

# Harvest more pages (the same commands the harvest.yml workflow runs)
python3 tools/harvest.py --queue queues/to-fetch-mslearn.txt --limit 1000
python3 tools/harvest.py --queue queues/to-fetch-mslearn.txt --batch 500 --push
```

The SQLite index holds `pages(page_id, section, path, title, size)` and
`names(name, page_id, kind)` where `kind` is one of `title`, `api`, `const`,
`proto`, `struct`, `enum`; `section` is the corpus-relative directory
(`learn/windows-ce-5.0`). It is committed so that lookups (and the harvester's
resume check) don't have to rescan ~120k files.

## Collection policy

* Official Microsoft public documentation only — no third-party mirrors
  (see `queues/rejected-third-party-sources.txt`); the accepted mirrors for the
  CE 1.0/2.0 era are listed in `queues/third-party-sources.md`.
* Polite fetching: **one in-flight request per host, always** (hosts may be
  parallelised with `--workers`, a single host never is). Fixed delay between
  requests to the same host — 0.4 s for `learn.microsoft.com`, 1.5 s for
  `web.archive.org` — plus jitter, `robots.txt` honoured, keep-alive
  connections reused, adaptive back-off (×2 per 5 consecutive 429/503, capped
  at ×20) with `Retry-After` support.
* The Win32 pages are not crawled at all: they come from a pinned commit of
  Microsoft's public `sdk-api` repository (one HTTPS request), see
  `sources/microsoftdocs/PROVENANCE.md`.
* Documents only — no shared source, no sample code, no compiler binaries,
  no OS images. `tools/check-policy.py` enforces it.
* Failed fetches are recorded in `data/logs/fail-<queue>.log` and retried
  once at double delay.

## Provenance and history

* 2026-10-19 (the knowledge base is redesigned from a blank sheet): the old
  `knowledge/` tree (1,081 files of JSONL/TSV views whose fact-choice logic
  was duplicated across the builder, the unifier and the header generator)
  is replaced by `kb/` — one SQLite database with a declared schema
  (`kb/schema.sql`), written and validated only by `tools/kbgen`
  (deterministically: the same inputs rebuild the same bytes).  Facts are
  resolved once, in one place, from page-cited observations; disagreements
  stay open conflicts instead of being silently picked; the CeGCC w32api and
  dotnet/pinvoke references are demoted to isolated comparison tables (the
  `reference-header` membership rank, the `pinvoke-weak` rank and both
  last-rank value fills are abolished — a CE value now comes only from a CE
  or Win32 documentation page, or from a human review row in
  `kb/inputs/reviews/` that itself only selects among page prints).  The
  surface is unchanged by the move (25,114 CE-only / 4,052 shared / 1,209
  reference-only names, against the old KB's 25,111 / 4,052 / 1,209), which
  is the migration's evidence that nothing was lost.  With the old KB go its
  builder/validator, the unified-view builder, the prototype include/.def
  generator and its assignment-fix tooling, and the 2026-10 work-record
  documents: the pipeline is now Harvest -> Corpus -> KB Gen, each layer
  keeping its own artifact boundary (the collection workflows no longer
  build the KB; `kb.yml` does, publishing the ~600 MB database as a release
  asset with `kb/manifest.json` committed), and the Header/.def Gen layer
  is to be designed fresh on top of the new KB.  `docs/kb-design.ja.md` is
  the design record.  The corpus itself is untouched by this round.
* 2026-10-14 JST (the unlinked constants are classified, the value
  disagreements examined end to end, and the fragments laid out for
  reading): the constant -> header linkage gained three marked evidence
  ranks *below* every CE documentation rank.  The pinned, licence-vetted
  reference header under `sources/` says **which header defines a name**
  (`reference-header` — w32api-cegcc, CE-adapted, public domain):
  a definition ranks above a listing, so `ERROR_*` stays in `winerror.h`
  instead of following an API page that quotes it.  Its values are parsed
  away and **never taken**; the evidence is the `tarball!member` line.
  (Wine / ReactOS / MinGW-w64 are *not* Windows CE and are prohibited as
  reference material by standing user order; the `reference-header-secondary`
  rung that carried MinGW-w64 evidence is retired with them.)  A CE page
  that lists a name among its subject's values while stating one unanimous
  header files it at `co-mention` (5 rows, e.g. `BTE_CLASS_*` -> `bt_api.h`).
  Full rank order is now `own-page` > `entity-page` > `constant-entity` >
  `win32-reference` (marked) > `reference-header` > `co-mention` >
  `pinvoke-weak`.  The
  unlinked worklist shrank **2,012 -> 823**, and every remaining row is
  classified: `vb-language-constant` 286 (eVB/VBCE language constants — no
  C header exists), `ole-automation-constant` 8 (ADO CE type-library
  enumerations), `needs-sdk-verification` 529 (CE-platform constants no
  examined public material states a header for).  Value disagreements are
  now examined across **all** constants, not only the linked ones:
  `knowledge/kb/constant-conflicts.tsv` lists **8** names (the previous
  report counted 2 — it looked at linked names only) with the category per
  case — generational (`HTTP_QUERY_MAX` 75 vs 45/78 in the references),
  product (`MAX_PATH` 128 vs the desktop 260), or documentation-
  inconsistency (`TMMS_DEFAULT_TF` and `RTCEF_GROUP` each printed twice on
  one page; `NERR_LastAdmin`/`NERR_DCNotFound`/`NERR_RplBadDatabase`
  truncated in the alphabetical tables; `flexAlign*` disagreeing between
  two VBCE tables).  The case studies are in
  `docs/constant-value-review.md`, the reviewed verdicts in
  `data/constant-value-review.tsv`.  A **resolved** conflict writes the
  reviewed print — one the pages themselves state, never an invented number
  — with the whole disagreement and the verdict quoted above it (5 of 8
  resolved); an unresolved one keeps its CONFLICT block and no `#define`.
  The fragments are laid out for reading: constants first, then the macros,
  then the types (with **derived member outlines** for structures whose
  body no page prints, marked DERIVED), then the functions; each `#define`
  carries a compact two-line evidence comment.  `gen-include-def.py` now
  builds the unified tree **by default** (`--out winsur`); a
  per-generation tree exists only when explicitly asked for.  The
  regenerated `winsur/` (committed) carries 580 header fragments, 6,145
  derived `#define` lines, 266 module `.def` worklists and the reviewed
  conflict resolutions.  `tools/xcheck_references.py` documents the one
  pipeline use of the references (header membership, harvested by
  `tools/build-kb.py` across the clean-room wall — never values).
* 2026-10 (the unified tree, the wide constant base, and the constant/header
  linkage): the generator gained its `--unified` mode answering the design
  question *one tree with the generation differences as `_WIN32_WCE` branches,
  not one tree per generation* — headers carry their documented constants
  first (4,335 derived `#define` lines at this point, each marked derived with
  its statement quoted), the Win32-shared declarations live in the same tree
  marked 'Win32 reference', and `.def` worklists carry per-module rows with
  version-range comments (a `.def` has no conditionals).  Constant extraction
  widened from name/value tables to `#define` and `enum` blocks of the syntax
  declarations and to `NAME (0xNNNN)` prose (17,228 → **22,936** numbered
  constants over **1,675** pages, every row with a quoted `layer` and
  `origin`).  Build-definition -> header linkage is now its own evidence
  table, `knowledge/kb/constant-headers.tsv` (**4,803** rows over **3,811**
  names), ranked `own-page` > `entity-page` > `constant-entity` >
  `win32-reference` (marked) > `pinvoke-weak` — the last rank being the one
  use case of the *isolated pinvoke weak-auxiliary layer*
  (`knowledge/aux/`, never primary evidence).  The pinvoke accept source is
  [github.com/dotnet/pinvoke](https://github.com/dotnet/pinvoke): the pinned,
  archived snapshot of the community P/Invoke data lives as a tarball under
  `sources/dotnet-pinvoke/` (MIT, `PROVENANCE.md` records the commit), stays
  out of `corpus/` (it is C# code; the corpus is documentation-only), and is
  parsed by `tools/pinvoke_extract.py` into 588 `[DllImport]` and 4,498
  constant rows that quote their `.cs` lines by archive member and line
  number.  It files **343** otherwise unlinked constants at rank
  `pinvoke-weak` (module-derived header hint, loudly marked everywhere);
  **its values are never taken** — `knowledge/reports/constant-pinvoke-review.tsv`
  instead compares each community value with the documented CE value and all
  **335** comparable names agree (hex/decimal spellings aside).  The
  **2,012** names the corpus cannot link at any rank stay a checked
  collection worklist, `knowledge/reports/constant-header-gaps.tsv` (name,
  rows, origins, sets, example page, pinvoke hit) — the input to any CE SDK
  verification; `tools/check-kb.py` requires it to stay the exact complement
  of the linkage table.  Everything pages across generations disagree on is
  a listed conflict or a version branch, not a silent pick (2 conflicts at
  this point), spacing-collapsed declarations are left as evidence rather
  than repaired, and the generation set -> `_WIN32_WCE` interval wiring is
  documented in the generator itself.  And the generated surface is now
  committed itself: **`winsur/` holds the unified include/def tree**
  (568 header fragments carrying 4,664 derived `#define` lines, 266 module
  `.def` worklists, manifest and report; regenerate with
  `python3 tools/gen-include-def.py --unified --out winsur`).
  The fragments were restructured for readability: constants and
  declarations that share one `_WIN32_WCE` guard now sit under **one batched
  `#if` region** (one evidence comment per `#define`) instead of one guard
  per line, values that differ per CE generation pool into **shared
  `#if/#elif` chains** (the 37 VK_* codes of `windows.h` became a single
  chain), a derived `#define` is suppressed when the page's own syntax
  declaration already prints it (no more in-fragment duplicates), and the
  header's display spelling is picked deterministically — regenerating is a
  no-op in git.
* 2026-10 (licence-vetted cross-check references): the "what is still
  missing" question gets outside yardsticks, each accepted only after a
  licence investigation (acquisition route, publisher, licence scope,
  usage decision — the project's rule for reference material, recording
  everything in the source's `PROVENANCE.md`).  **Primary:
  `sources/w32api-cegcc/`**, the CeGCC toolchain's w32api pinned at
  commit `8e64b608` — the classic 32-bit Win32 API headers *adapted for
  Windows CE itself* (`libce/`, `_WIN32_WCE` branches), released as
  public domain with named permissive notices.  Wine, ReactOS and
  MinGW-w64 are **not** Windows CE and are prohibited as reference
  material by standing user order (2026-10) — their snapshots and every
  derived report are deleted.  `tools/xcheck_references.py` re-counts
  the reference's licence banner tally and writes **review-only**
  reports (`knowledge/reports/xcheck-*.tsv` and `xcheck-summary.md`;
  nothing feeds any generator, a listed name is a lead, never a value
  to adopt).  Headlines: w32api-cegcc contributes 26,737 names and
  128 linker export lists (`libce/coredll.def` and friends —
  14,267 export rows cross-checked against `winsur/link/*.def`), with
  **24,936 candidate names absent from the CE corpus** (10,828 export
  leads); against the documented CE surface its 1,729 common names show
  1,074 numeric agreements + 133 text-identical with exactly **two
  flagged divergences**, and they are the cross-check proving itself:
  `MAX_PATH` (CE docs print 128 — but on the DirectShow DVD
  `Dvdata.h`/`UNICODE_PATH` pages, a local shadow of the desktop's 260)
  and `HTTP_QUERY_MAX` (generational drift: CE pages print 75, the
  reference prints 45).
* 2026-10 (the boundary, measured): the Windows CE / Win32 boundary is now
  explicit in the knowledge base — every entity carries `surface` (CE-only,
  shared, Win32 spelling of a CE name, catalog-only, or Win32-only; the last is
  empty: no imported Win32 page lacks a CE name behind it) and every
  Unicode/ANSI link records its basis (`page-statement` from the page itself,
  or `import-rule` from `data/reports/win32-shared.tsv`) — and in the
  generator: a Win32 declaration is used only when no CE set prints one, and
  then it is marked as the desktop-Windows reference in the fragment, the
  manifest and the `.def` worklist.  Collection was re-measured instead of
  assumed: `tools/build-chm-inventory.py` accounts for all 105 help files
  under `sources/` (20,745 pages) and `tools/build-topic-coverage.py` shows the
  Platform Builder / OAL / BSP material is complete in the catalogs
  (662 of 662; the 2026-10 review had claimed it was missing — corrected in
  `docs/review-2026-10.ja.md`).  1,155 Unicode/ANSI spellings are folded onto
  their base name (up from 893), 585 of them giving a CE name its Win32 page.
* 2026-10 (knowledge precision and the first generator): 893 Unicode/ANSI
  variant spellings were folded onto their base name on the pages' own
  evidence, the declaration records gained a derived `calling_convention`,
  Header/Library values that name no file were taken out of the maps
  (`knowledge/reports/filtered-values.tsv`) instead of becoming file names,
  `tools/check-kb.py` was added and wired into all five collection workflows,
  `tools/audit-sources.py` now accounts for every artifact under `sources/`
  (172 artifacts, none unclassified), the CE 2.0 developer site was re-read and
  its 20 shop-window pages (press releases, order/download pages, partner and
  logo programmes, case studies) were refused with the reason recorded in
  `data/reports/site-excluded.tsv` (pages: 121,039), and the first consumer,
  `tools/gen-include-def.py`, was written: for a CE 5.0 target it emits 592
  verbatim header fragments, 184 module `.def` worklists and a manifest, into a
  git-ignored `build/` (nothing generated is committed).
* 2026-10 (.NET and knowledge layer): the .NET sets moved out of
  `corpus/learn/` into `corpus/dotnet/` (10,657 pages — Windows CE's own
  documentation stays in `corpus/learn/`), the remaining duplicate pages were
  resolved (672 page copies collapsed to the copy kept, recorded per page in
  `data/index/aliases.tsv`; the table had 673 rows at the time because one
  site page was later found to be a temp copy and removed), 45 pages that were still only under
  `sources/` (44 of them remain — one was a byte-identical FrontPage temp copy
  of another page)
  were imported into `corpus/site/`, and `knowledge/` was added: the
  machine-readable knowledge base (24,442 API entities, 110,345 declarations,
  156,548 requirements, 3,289 CE constraint sentences at that point; the
  refined counts are above), built by
  `tools/build-kb.py` and consumed by an include/def generator.
* Per-release provenance: `sources/*/PROVENANCE.md` (source item, archive
  URL, what was and was not extracted) and
  `corpus/msdn-library/windows-mobile-6.5/PROVENANCE.md`.
* 2026-10 review: [`docs/COLLECTION-POLICY.md`](docs/COLLECTION-POLICY.md).
  `corpus/win32/` was cut from 20,452 to 5,279 pages (the 11,819 sdk-api pages
  that were only there as "module context" and the 3,357 desktop programming
  guides are gone; the rule is
  now "Windows CE documents the name"), the DevCon '99 import lost its
  sponsors/samples/FrontPage leftovers (7,433 → 6,382 pages), one Commerce
  Server page was removed from `learn/unclassified/`, four more Win32 pages
  whose name documents another product (Windows Contacts, the desktop Task
  Scheduler, the shim `TAG` macro, the dbghelp `ADDRESS` structure) and their
  modules were refused after reading the CE side of every imported page, and
  `data/win32-exclude.tsv`, `tools/ce_api_names.py`,
  `data/reports/ce-api-names.tsv` and `tools/check-policy.py` were added so the
  same drift cannot happen silently again.
* 2026-10 re-organisation: `docs/mslearn/…` → `corpus/learn/…`,
  `docs/chm/…` → `corpus/chm/…`, `docs/wayback-msdn/…` →
  `corpus/wayback-msdn/…`, `supplementary/…` → `corpus/msdn-library/…`,
  `archives/` → `sources/`, `urls/` → `queues/`,
  `data/rows/rows*.json` → `data/metadata/api-*.json`,
  `data/catalogs/books-*.tsv` → `data/toc/*.tsv`,
  `data/manifests/full-*.manifest` → `data/manifests/<set>.manifest`,
  `pagesgap/INDEX.tsv` → `data/reports/missing-pages.tsv`,
  `tools/make-index.py` → `tools/build-index.py`.
  Pages were deduplicated and renamed to their canonical page ids at the
  same time.
* 2026-10 additions: `corpus/site/` (the CE-era web sites that came with the
  media), `corpus/dotnet/` (the .NET families as their own tree),
  `knowledge/` (the knowledge base), `data/reports/win32-coverage.tsv`,
  `corpus/mvb/windows-ce-1.0/` (CE 1.0 pages),
  `corpus/win32/` (the CE-shared Win32 pages from
  `MicrosoftDocs/sdk-api` + the sdk-api snapshot), `tools/fetch-upstream.py`,
  `corpus/msdn-library/2010-05/` (the wayback capture, filed by set instead of
  in its own top-level tree), the DevCon '99 CE 2.11/2.12 SDK documentation,
  and the harvest scheduler rewrite (keep-alive, per-host pacing, robots.txt,
  sqlite resume index, `--dry-run`, `--workers`).
