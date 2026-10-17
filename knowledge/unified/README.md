# `knowledge/unified/` — consumer view of the knowledge base

One identifier, one chosen Windows CE fact.  The quote store
(`knowledge/kb/*.jsonl.gz`) is the evidence; this tree is what
`tools/gen-include-def.py` files into include/def fragments.

| file | what |
|------|------|
| `constants.jsonl` | numbered `#define` candidates (CE value preferred) |
| `declarations.jsonl` | one C declaration per name |
| `macros.jsonl` | function-like / leftover `#define` |
| `headers.jsonl` | header → names |
| `modules.jsonl` | `.lib`/`.dll` → export names |
| `names.tsv` | grep-friendly lookup |
| `catalog.json` | counts |

Rebuild with `python3 tools/build-unified-kb.py`.

## Counts

- **constants**: 8,914
- **constants_with_header**: 7,117
- **constants_win32_fallback**: 2,053
- **discarded_values**: 93
- **declarations**: 30,997
- **declarations_with_header**: 19,780
- **macros**: 184
- **headers**: 691
- **modules**: 653
- **entities**: 30,372
