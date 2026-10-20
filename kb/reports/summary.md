# KB summary (generated; do not edit)

Counts from `kb/kb.sqlite3`. The database is the source of truth;
this file exists so a reader can see the shape without a query tool.

- schema version: 3 (extractor 3, builder 2)
- corpus pages indexed: 210,773
- symbols: 65,928
- symbols with a CE subject page: 31,952; with a Win32 page: 6,119; with both: 4,600; with a .NET subject page: 8,280
- declaration observations: 182,715 (syntax: 146,668, collapsed spacing: 27,308)
- chosen declaration variants (CE primary): 26,977
- requirement observations: 348,716
- constant observations: 50,060 over 10,226 names
- resolved CE constant values: 8,162 (version-scoped rows: 37)
- constants documented but unnumbered: 16,334 names
- headers: 824; chosen CE symbol->header: 24,411
- link files: 1,004; chosen CE symbol->file: 13,698
- availability statements parsed/partial/unparsed: 106,397/5,753/9,221
- Unicode/ANSI variant relations: 2,225 (page-statement: 1,070, import-rule: 1,155); typedef-alias relations: 3,102
- conflicts open: 7,538; reviewed: 8
- ingest rejects: 131 (see ingest_rejects table)
- reference names: 67,299; CE values agreeing/differing vs references: 2,508/85
- CeGCC-adopted (layer 'cegcc', only where CE docs are silent): 3,527 constant values, 4,845 header choices

See coverage.tsv (per doc set), conflicts.tsv (review worklist) and
gaps.tsv (collection worklist). Query everything else with
`python3 -m tools.kbgen query ...`.
