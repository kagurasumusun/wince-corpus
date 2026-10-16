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

Rebuild:

    python3 tools/harvest-corpus-kb.py   # re-read CE pages with current extractors
    python3 tools/build-unified-kb.py

`harvest-corpus-kb.py` opens `corpus/` (it is a KB builder). The generator still reads `knowledge/` only.

## Counts

- **constants**: 9,555
- **constants_with_header**: 7,771
- **constants_win32_fallback**: 2,054
- **discarded_values**: 390
- **declarations**: 33,912
- **declarations_with_header**: 20,313
- **macros**: 160
- **headers**: 591
- **modules**: 290
- **entities**: 30,372
