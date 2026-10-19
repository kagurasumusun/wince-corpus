# kb/inputs/reviews/ — 人手レビューの入力

KB の生成入力のうち、人が編集してよいのはこの2ファイルだけ。いずれも
「ページが印刷した値の中から選ぶ」ことしかできず、生成器がそれを検証する。
詳細な書式は各ファイル冒頭のコメントが正。

| ファイル | 対象 | 内容 |
|------|------|------|
| `constant-header-review.tsv` | 定数→ヘッダ割り当ての判定 | `scope`（name/prefix/value-base）× `verdict`（approve/reject/prefer）。詳細はファイル冒頭 |
| `constant-value-review.tsv` | 定数の値不一致の判定 | `name / resolved_value / category / verdict`。resolved_value はページが印刷した値のみ可（生成器が検証する） |

ルール:

- レビューは根拠ページ（evidence_page）を必ず指す。ページが言っていない
  家系知識は、その旨を note に書いた上でこのファイル自体を根拠とする。
- Wine / ReactOS / MinGW-w64 を根拠にしない（Windows CE ではない）。
  参照資料（CeGCC w32api、dotnet/pinvoke）は比較にのみ使い、値や
  ヘッダの決定根拠にしない。
- 編集したら `python3 -m tools.kbgen build` で再生成する。入力ハッシュが
  manifest に記録されるため、古い DB は `kbgen check` が検出する。
