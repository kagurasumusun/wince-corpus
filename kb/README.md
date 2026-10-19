# kb/ — the knowledge base

One SQLite database describing the Windows CE API surface, generated from
`corpus/` by `tools/kbgen` and by nothing else. It is the **KB Gen** layer
of the pipeline

```
Harvest -> Corpus -> KB Gen -> Header/.def Gen
```

The include/.def generator (the next layer, designed separately) reads
this database and nothing else; it never reads `corpus/` directly.

## Files

| File | What it is |
|------|------------|
| `schema.sql` | The contract. STRICT tables, foreign keys and CHECKs are the rules; this file is the only place they are defined. |
| `kb.sqlite3` | The built database (~570 MB). **Not in git** (over GitHub's 100 MiB file limit): rebuild it, or download `kb.sqlite3.gz` from the rolling `kb-latest` release. |
| `manifest.json` | Committed. The database's sha256 plus a content hash per table and the hashes of every build input — how a stale or hand-edited DB is detected. |
| `reports/` | Committed, generated. `summary.md` (shape), `coverage.tsv` (per doc set), `conflicts.tsv` (review worklist), `gaps.tsv` (collection worklist). Never edit by hand. |
| `inputs/reviews/*.tsv` | The only hand-maintained inputs: human verdicts on constant→header filing and constant value disagreements. See `inputs/reviews/README.md`. |

## Build / check / query

```bash
python3 -m tools.kbgen build            # corpus -> kb/kb.sqlite3 + manifest + reports
python3 -m tools.kbgen check            # validate ("kb OK")
python3 -m tools.kbgen check --verify-reproducible   # rebuild and compare
python3 -m tools.kbgen query symbol CreateFile
python3 -m tools.kbgen query constant WM_USER
python3 -m tools.kbgen query header Winbase.h
python3 -m tools.kbgen query sql "SELECT ... "
python3 -m tools.kbgen export --table symbol_headers --format tsv
```

The build is deterministic: the same inputs rebuild the same database
bytes, so the committed manifest is a complete description of the DB's
content. `check` verifies integrity, that every chosen fact cites page
evidence (in the fact's own layer), that reference material is
un-citable, that every corpus page still hashes to what was ingested,
and that no build input has drifted.

## What a fact is (and is not)

- Every observation quotes its corpus page verbatim and carries that
  page's licence scope (`pages.license_scope`). Declarations are never
  repaired or normalised; ABI facts (offsets, alignment) appear only
  where a page prints them.
- CE, Win32 and .NET statements live in one DB as separate **layers**.
  A Win32 page can never make a CE fact true.
- `reference_*` tables hold the pinned CeGCC w32api and dotnet/pinvoke
  snapshots for **comparison only**. Evidence foreign keys cannot point
  at them, so a reference value can never become a CE value, a header,
  or a symbol. (Wine/ReactOS/MinGW-w64 are prohibited as references:
  they are not Windows CE.)
- Disagreement is data, not noise: tied header evidence, diverging
  declaration prints and conflicting constant values are rows in
  `conflicts`, never silently resolved. A human review row is the only
  override, and even it may only select among page prints.

Design record: `docs/kb-design.ja.md`.
