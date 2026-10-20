# sources/

The verbatim official media the corpus was extracted from — **reference
material, not corpus text**.  Media fetched by `.github/workflows/import-media.yml`
for an `import-scratch` entry in `queues/media.tsv` is never kept here at all:
the runner fetches it to a scratch directory, imports its documentation pages
and discards the image (a PROVENANCE.md next to the imported pages records
where they came from).  What follows is about the media that *is* kept, with
one exception: for Windows CE 2.0 the CD's
payload is itself HTML (the "Windows CE Developer" site mirror, 41 pages), and
those files stay here verbatim rather than in `corpus/` because their original
site-relative names (`default.htm`, `prodinfo/vcce.htm`, …) and directory
structure are part of the medium and would collide with the corpus naming
convention (one page id per file). Nothing here is modified: original CHMs, the
WinHelp-era Multimedia Viewer books, the CE 3.0 documentation zip, and the
release-note files that shipped on the same discs. `corpus/` holds the page
text extracted from these sources (plus the Microsoft Learn harvest, which has
no local medium).

`terms/` holds the statements that govern items of this collection but have no
file of their own here (the Microsoft Learn Terms of Use excerpt), quoted with
their URL and the date read: `data/license-scopes.tsv` points at them and
`docs/LICENSING.md` explains how they are applied.

Each release directory has a `PROVENANCE.md` recording the Internet Archive
item (or Microsoft Download Center page), the archive URL and file size, the
collection date, exactly which parts were extracted, and what was deliberately
left behind (OS binaries, toolchains, vendor folders — documents only, per the
collection policy in the top-level `README.md`).

| Directory | Medium | Corpus output |
|-----------|--------|---------------|
| `windows-ce-1.0/` | CE 1.0 Desktop Emulation SDK CD: `PEGSDK.MVB`, `PEGDDK.MVB`, `RELNOTES.HLP`, `MSDNLIB.HLP`. | `corpus/mvb/windows-ce-1.0/` (2,104 pages, decoded with helpdeco + `tools/extract-mvb.py`). |
| `windows-ce-2.0/` | CE 2.0 Technical Information CD (Windows CE Developer site mirror, 41 HTML pages). | Pages preserved as-is in `sources/`; no pending extraction. |
| `windows-ce-3.0/` | `WindowsCE3.0_DocumentationArchive.zip` + `Important_ReadMe.txt` (Microsoft Download Center, id 41197). | `corpus/chm/windows-ce-3.0/` (8,962 pages). |
| `windows-ce-4.2/` | CE .NET 4.2 Platform Builder Emulation Edition: `EMULATOR.CHM`, `REMTOOLS.CHM`, release notes. | `corpus/chm/windows-ce-4.2/` (566 pages: the emulator board and remote-tools reference; the 4.x API reference comes from Learn, `corpus/learn/windows-ce-net-4x/`). |
| `windows-ce-5.0/` | CE 5.0 CD1: 98 component CHMs (`P302_wce*.chm` … `P407_*.chm`) + release notes. | `corpus/chm/windows-ce-5.0/` (20,209 pages: the per-component guides and API reference). The Learn harvest (`corpus/learn/windows-ce-5.0/`) shares only 4 of its 20,141 titles, so this is complementary, not a duplicate. |
| `windows-ce-6.0/` | CE 6.0 DVD: release notes (the DVD carries no documentation CHM/HTM set). | Reference only. |

Non-media exception (not Windows CE source material at all):

| Directory | Medium | Output |
|-----------|--------|--------|
| `microsoftdocs/` | Microsoft's public documentation repositories (CC-BY-4.0 / MIT tooling), pinned commits. | `corpus/win32/api/` (5,279 pages, the CE-shared Win32 surface). |
| `dotnet-pinvoke/` | **Third-party, one deliberate exception** (see `docs/COLLECTION-POLICY.md`): the archived github.com/dotnet/pinvoke snapshot (MIT), the community-maintained re-formatting of the pinvoke.net P/Invoke data. | **Never into `corpus/`** (it is C# code; the corpus stays documentation-only): `tools/kbgen` loads it into the isolated `reference_*` tables of `../kb/kb.sqlite3` — comparison material only, never evidence for a Windows CE fact. |
| `w32api-cegcc/` | **Third-party cross-check reference, licence-vetted before use — the primary one**: the CeGCC toolchain's w32api (pinned commit `8e64b608`): the 32-bit Win32 headers adapted for Windows CE, public domain with named permissive notices; the investigation is in its `PROVENANCE.md`. | **Never into `corpus/`** (comparison-only): `tools/kbgen` loads it into the same isolated `reference_*` tables. A listed name is a lead for documentation searching, never a value or a header to adopt. |
| `mingw-w64/` | **Third-party cross-check reference, licence-vetted before use — secondary (64-bit desktop target, the wrong target for 32-bit CE, kept for the MSHTML/DISPID ids)**: pinned mingw-w64 headers (commit `63ebe6cd`; ZPL 2.1 with per-file Public Domain exceptions — the full investigation is in its `PROVENANCE.md`; LGPL/GPL files are excluded from all output). | Same review-only boundary as above: nothing feeds any generator. |

Extracted text is never edited in place; if a source turns out to be wrong,
fix the extraction under `corpus/` and note it in the release's
`PROVENANCE.md`.

## Still sought

Found in web searches but **not downloadable from this working environment**
(outbound network allows only github.com and package registries; the list is
recorded here so a network-enabled run — GitHub Actions or a local machine —
can collect them):

| Source | Where | Why it matters |
|--------|-------|----------------|
| CE 2.0 SDK "Books Online" — **collected 2026-10-20**: the disc's 11 InfoViewer titles (`.ivt`, `data1/Online_help_files/`) are decoded by `tools/extract-ivt.py` (pure-Python; b-tree directory + MSZIP members) next to the earlier `windbg.hlp` and ReadMe: 5,085 pages in `corpus/mvb/windows-ce-2.0-sdk/` (WCESDK 2,817, WCESDKG 618, WCEDDK 323, plus the CPU books VR4100/PR3910/SH* and MIPS). The sibling `.ivi` files are index-only containers (0 HTML topics) | Internet Archive `MPLATSDK.20` (02/98), see `queues/media.tsv` | the SDK's own platform documentation, incl. per-API "Windows CE 1.0/2.0" requirement evidence; complements the MSDN Library sets |
| CE 5.0 CD5 | <https://archive.org/details/en_win_ce_net_cd5> | **inventoried 2026-10-20: no documentation aboard** (18,798 files, 0 HTML/WinHelp/CHM -- a binaries disc); not collected |
| CE 6.0 R2 update | <https://archive.org/details/windows-embedded-ce-6.0-r2> | **inventoried 2026-10-20: product payload only** (26,811 files, no documentation set); not collected |
| CE 6.0 R3 update | <https://archive.org/details/CE6R3> | **inventoried 2026-10-20: product payload only** (19,745 files, no documentation set -- the CF 3.5 reference is not on this disc); not collected |
| CE 6.0 Platform Builder SP1 | <https://archive.org/details/windows-embedded-ce-6.0-platform-builder-sp1> + Microsoft Download Center id 4097 (`Release Notes.htm` is a plain file) | **inventoried 2026-10-20: tools payload only** (3,326 files, 0 documentation pages); not collected |
| CE 5.0 Standard SDK | Microsoft Download Center id 17310 (still live) | the CE 5.0 Standard SDK API surface |
| MSDN Library discs (2001–2010) | Internet Archive: **VS2008 SP1 (Nov 2008) imported 2026-10-21** (`X15-18280`, 2.2 GB; same disc X15-06188 at Microsoft Download Center id 20955): an MSI payload of 1,268 MS Help 2 `.HxS` titles, of which the CE 5.0 `wce*5` set + `mobilesdk5` + managed `fxref_microsoft.windowsmobile.*` are in `corpus/msdn-library/vs2008-sp1/` (33,010 pages) via the lane's new HxS routing. **Jan 2002 imported 2026-10-21** (`msdn-jan-2002`): the first Help-2 library's CE 3.0 titles (22 `WCE*` + ADOCE31/DNAPPCOM/DNCE21/DNCE30, 13,429 pages in `corpus/msdn-library/jan-2002/`). **VS.NET 2003 discs inventoried, conversion pending** (Alcohol MDF images; `tools/mdf.py`'s sniffer generalized 2026-10-21, re-inventory queued — the CE .NET 4.2-era set). **Jan 2001 inventory queued** (`msdn-library-january-2001-x06-07342`, 5.28 GB DVD, pre-Help-2). **VS2005 and Jan-2008 editions inventoried 2026-10-21 and set aside**: their CE title sets duplicate the VS2008 SP1 import title-for-title | the MSDN-era captures of CE 3.0–5.0 / Windows Mobile reference (the `bb*` topics never migrated to Learn), including custom-hardware docs |
| Windows Mobile 5.0/6.1/6.5 Pocket PC SDK MSIs | <https://archive.org/details/windows-mobile-5.0-pocket-pc-sdk> | **inventoried 2026-10-21: no documentation set aboard** (2,559 files: headers/libs/samples/emulator material); not collected. The WM6 SDK Refresh and Pocket PC 2003 SDK MSIs inventoried the same way and are likewise documentation-free |

Inventory outcome (2026-10-20, runs 39363624759/39364902845): all
four product items above were downloaded and inventoried via
`queues/media.tsv`; none carries a documentation set (see the
table), so none was imported and the rows were removed again.

MSDN Library outcome (2026-10-21): the disc-set vein paid off —
after adding MS Help 2 and MDF support to the media lane, the
VS2008 SP1 disc yielded the full CE 5.0 + Windows Mobile 5
reference (33,010 pages) and the January 2002 disc the CE 3.0
library (13,429 pages), taking the corpus to 173,402 pages.
Still open: the VS.NET 2003 set (CE .NET 4.2 era, MDF
conversion) and the January 2001 DVD, both queued in
`queues/media.tsv`.

For page-level material the *queues* are the actionable list, and as of
2026-10 both of them are done: `queues/mslearn-embedded.txt` is exhausted
(`--dry-run` reports 0 to fetch), and `queues/wayback-msdn-2010.txt` — 31,388
captures of the May 2010 MSDN Library — holds the *same topics, id for id*,
as the pages already harvested from learn.microsoft.com: a full pass on
2026-10-02 found 31,226 already in the corpus, 161 stored and one topic
(`ms838324`) the Internet Archive never captured — two requests in total. The next page-level material has to come from sources
that predate or bypass that topic space: the mirror imports
(`corpus/msdn-library/techshelps/`, `corpus/kb/`) and the mirror crawls of the
older MSDN Library editions (`queues/mirrors.tsv`,
`.github/workflows/crawl-mirror.yml`).
