# KB summary (generated; do not edit)

Counts from `kb/kb.sqlite3`. The database is the source of truth;
this file exists so a reader can see the shape without a query tool.

- schema version: 1 (extractor 2, builder 1)
- corpus pages indexed: 122,170
- symbols: 50,740 (is_api: 50,740)
- symbols with a CE subject page: 29,166; with a Win32 page: 6,119; with both: 4,590
- declaration observations: 111,778 (syntax: 96,658, collapsed spacing: 17,170)
- chosen declaration variants (CE primary): 25,355
- requirement observations: 215,369
- constant observations: 30,019 over 8,807 names
- resolved CE constant values: 6,734 (version-scoped rows: 23)
- constants documented but unnumbered: 15,186 names
- headers: 754; chosen CE symbol->header: 22,586
- link files: 938; chosen CE symbol->file: 12,053
- availability statements parsed/partial/unparsed: 56,358/2,755/1,826
- Unicode/ANSI variant relations: 2,223 (page-statement: 1,068, import-rule: 1,155)
- conflicts open: 6,225; reviewed: 8
- ingest rejects: 54 (see ingest_rejects table)
- reference names (isolated, comparison only): 64,596; CE values agreeing/differing: 2,444/83

See coverage.tsv (per doc set), conflicts.tsv (review worklist) and
gaps.tsv (collection worklist). Query everything else with
`python3 -m tools.kbgen query ...`.
