# knowledge/aux — the isolated pinvoke.net weak-auxiliary reference

**Auxiliary, not knowledge.** Everything in `aux/` comes from the isolated
`corpus/pinvoke/` tree (pinvoke.net user wiki pages, see
`docs/COLLECTION-POLICY.md`). It is NOT part of the specification and never
joins the knowledge tables in `knowledge/kb/`.

* `pinvoke-apis.jsonl` when the isolated corpus has been harvested — one row
  per pinvoke.net API page (name, note, DLL, header, quote, tags, provenance).
* `pinvoke-constants.jsonl` also when harvested — one row per pinvoke.net
  constant page (name, value text, header, description, tags, provenance).
* `pinvoke-apis.tsv` / `pinvoke-constants.tsv` flattened review views.

What it is used for: the weakest constant/header linkage rank
`pinvoke-weak` in `knowledge/kb/constant-headers.tsv`, consumed by
`tools/gen-include-def.py` when every documented rank is absent; each such
row borrows the *printed header field* of the community wiki page. The
auxiliary data may differ per Windows CE generation; the wiki has no version
ranges, so per-generation truth always comes from official docs, and a CE
statement always outranks a pinvoke hint.

License: see `data/license-scopes.tsv` — rows in aux carry
`license_use=no`: community wiki content is reference material for review
only. The CE app include/def surface never *needs* it.
