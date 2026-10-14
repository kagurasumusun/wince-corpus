# Unified include/def surface -- report

ONE tree for every Windows CE generation.  Per-generation trees are
not written anywhere in this build: where generations differ, the
tree carries a derived `_WIN32_WCE` branch (the version macro the
documentation itself prints; the set -> interval wiring is
documented in tools/gen-include-def.py and is derived structure,
not a quotation).  The Win32-shared half of the surface lives in
the SAME tree, marked 'Win32 reference' -- never a second tree.

## What was generated

* entities in scope: **28,916** (by surface: `ce-only` 24,563, `shared` 4,353)
* header fragments: **568** under `include/`, each
  with its documented constants first and its declarations after;
  quoted text is verbatim, the `#define` keyword and the
  header/constant filing are derived and say so
* derived `#define` lines written: **4,664**
* constants whose pages disagree / overlap: **2**
  (listed, no `#define` written)
* constants with no header linkage at all: **2,012**
  (worklist only -- they stay in `constants.tsv`)
* module `.def` worklists: **266** under `link/`
  (per-line version range is a comment; `.def` has no
  conditionals)
* printed export ordinals: 1 file(s),
  94 name(s)
* declarations taken from the Win32 reference because no CE page
  prints one: **1** -- every
  one marked in the fragment and the manifest; CE and desktop
  values are never assumed equal
* spacing-only repairs across CE generations: **0**
* pages behind this output: 25,360

## Constant/header linkage (kb/constant-headers.tsv)

Ranks consumed by this build (best rank per name, all CE always
outranks the Win32 desktop reference, everything outranks the
pinvoke weak auxiliary hint):

| rank | link rows |
|------|----------:|
| own-page | 4,160 |
| entity-page | 42 |
| constant-entity | 34 |
| win32-reference | 224 |
| pinvoke-weak | 343 |

## The isolated weak-auxiliary pinvoke reference

* aux API rows: **588**, aux constant rows:
  **4,498** (`knowledge/aux/`, isolated from
  the specification; accept paths: the pinned dotnet/pinvoke
  snapshot under `sources/dotnet-pinvoke/` and, not yet harvested,
  the user wiki under `corpus/pinvoke/`)
* what they are used for: ONLY the weakest constant/header
  linkage rank above, consumed so that the gap between official
  documentation and community reference is reviewable;
  **343** linkage rows rest on
  them directly, each loudly marked in its header comment, and
  `reports/constant-pinvoke-review.tsv` compares every such
  community value with the documented CE value
* what they are never used for: no value ever comes from the
  pinvoke material (values are CE-page quotations only), no
  entity, no declaration, no requirement is minted from it, and
  no pinvoke statement overrides a documented one
* Win32-only numbers seen but not used: **111**
  constants (CE and desktop values are not assumed to match)

## The wall this generator keeps

* the corpus pages read by this generator: **0**
  (the generator reads `knowledge/` only; see docs/clean-room.md)

## What was skipped

| reason | entities |
|--------|----------|
| no header stated | 5,798 |
| no declaration in the corpus | 3,470 |
| no CE version evidence | 1,259 |

The skipped entities are the collection worklist, same as in the
per-version build: `knowledge/reports/gaps.tsv` has the per-entity
rows, and `constants.tsv` here lists every numbered constant whose
header linkage is still missing.
