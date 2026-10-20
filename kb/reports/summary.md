# KB summary (generated; do not edit)

Counts from `kb/kb.sqlite3`. The database is the source of truth;
this file exists so a reader can see the shape without a query tool.

- schema version: 3 (extractor 3, builder 2)
- corpus pages indexed: 126,963
- symbols: 62,027
- symbols with a CE subject page: 29,214; with a Win32 page: 6,119; with both: 4,594; with a .NET subject page: 8,280
- declaration observations: 114,213 (syntax: 98,961, collapsed spacing: 17,330)
- chosen declaration variants (CE primary): 25,382
- requirement observations: 224,238
- constant observations: 32,070 over 8,815 names
- resolved CE constant values: 6,742 (version-scoped rows: 23)
- constants documented but unnumbered: 15,232 names
- headers: 776; chosen CE symbol->header: 22,590
- link files: 981; chosen CE symbol->file: 12,182
- availability statements parsed/partial/unparsed: 59,687/2,747/2,408
- Unicode/ANSI variant relations: 2,223 (page-statement: 1,068, import-rule: 1,155); typedef-alias relations: 2,924
- conflicts open: 6,272; reviewed: 8
- ingest rejects: 62 (see ingest_rejects table)
- reference names: 67,299; CE values agreeing/differing vs references: 2,457/82
- CeGCC-adopted (layer 'cegcc', only where CE docs are silent): 3,400 constant values, 4,714 header choices

See coverage.tsv (per doc set), conflicts.tsv (review worklist) and
gaps.tsv (collection worklist). Query everything else with
`python3 -m tools.kbgen query ...`.
