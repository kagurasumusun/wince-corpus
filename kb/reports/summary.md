# KB summary (generated; do not edit)

Counts from `kb/kb.sqlite3`. The database is the source of truth;
this file exists so a reader can see the shape without a query tool.

- schema version: 1 (extractor 1, builder 1)
- corpus pages indexed: 122,170
- symbols: 50,472 (is_api: 50,472)
- symbols with a CE subject page: 29,166; with a Win32 page: 5,261; with both: 4,052
- declaration observations: 110,892 (syntax: 95,772, collapsed spacing: 17,162)
- chosen declaration variants (CE primary): 25,292
- requirement observations: 214,828
- constant observations: 29,904 over 8,763 names
- resolved CE constant values: 6,688 (version-scoped rows: 23)
- constants documented but unnumbered: 15,186 names
- headers: 753; chosen CE symbol->header: 22,530
- link files: 938; chosen CE symbol->file: 12,053
- availability statements parsed/partial/unparsed: 56,185/2,322/741
- Unicode/ANSI variant relations: 2,223 (page-statement: 1,068, import-rule: 1,155)
- conflicts open: 6,138; reviewed: 8
- ingest rejects: 169 (see ingest_rejects table)
- reference names (isolated, comparison only): 64,596; CE values agreeing/differing: 2,421/104

See coverage.tsv (per doc set), conflicts.tsv (review worklist) and
gaps.tsv (collection worklist). Query everything else with
`python3 -m tools.kbgen query ...`.
