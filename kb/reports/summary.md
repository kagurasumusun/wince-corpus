# KB summary (generated; do not edit)

Counts from `kb/kb.sqlite3`. The database is the source of truth;
this file exists so a reader can see the shape without a query tool.

- schema version: 2 (extractor 3, builder 2)
- corpus pages indexed: 122,170
- symbols: 61,970
- symbols with a CE subject page: 29,166; with a Win32 page: 6,119; with both: 4,590; with a .NET subject page: 8,280
- declaration observations: 111,778 (syntax: 96,658, collapsed spacing: 17,170)
- chosen declaration variants (CE primary): 25,355
- requirement observations: 216,621
- constant observations: 30,019 over 8,807 names
- resolved CE constant values: 6,734 (version-scoped rows: 23)
- constants documented but unnumbered: 15,186 names
- headers: 775; chosen CE symbol->header: 22,586
- link files: 980; chosen CE symbol->file: 12,063
- availability statements parsed/partial/unparsed: 57,029/2,739/2,407
- Unicode/ANSI variant relations: 2,223 (page-statement: 1,068, import-rule: 1,155); typedef-alias relations: 2,919
- conflicts open: 6,225; reviewed: 8
- ingest rejects: 54 (see ingest_rejects table)
- reference names: 67,299; CE values agreeing/differing vs references: 2,455/82
- CeGCC-adopted (layer 'cegcc', only where CE docs are silent): 3,382 constant values, 4,702 header choices

See coverage.tsv (per doc set), conflicts.tsv (review worklist) and
gaps.tsv (collection worklist). Query everything else with
`python3 -m tools.kbgen query ...`.
