# 定数の値不一致レビュー (constant value review)

`kb/constant-conflicts.tsv` と `knowledge/reports/xcheck-*` が検出した
「値が一致しない、または重複している」定数の全件確認。観測された報告は
2 件 × 2 系統（生成物の CONFLICT が 2 件、xcheck の参考資料乖離が 2 件）だが、
未リンク定数を含めて全定数を対象にすると計 10 件になる。カテゴリは
指示された 3 分類に整理した:

| カテゴリ | 意味 |
|----------|------|
| 世代差 (generational) | 世代によって値が違う — `#if` ブランチの根拠になる正当な差 |
| 製品差 (product) | 製品・モジュールごとの定義の差（ローカルな shadow を含む） |
| 文書上の不一致 (documentation-inconsistency) | 同じ資料内の記載が食い違う・重複する — タイプミスや転記ミス |

判定と処理は `data/constant-value-review.tsv`（レビュー済みの結論）と
`knowledge/kb/constant-conflicts.tsv`（機械可視な一覧）に保存され、
生成ヘッダの CONFLICT ブロックへ反映される。**解決値は必ず本文書の印刷値
（ページ自身が印字した表記）のいずれか**であり、レビューが数値を創作しない。

---

## 1. 世代差 — `HTTP_QUERY_MAX`

* CE 文書は一貫して **75** を印字する（CE 5.0 `ms918842`、CE 6.0
  `ee492813`、いずれも HTTP クエリフラグ定数表）。
* 参考資料は別値: w32api-cegcc `wininet.h:325` は **45**。

判定: **世代差**（Win32 デスクトップの wininet.h の値が時代とともに
増加した）。CE 本体の値 75 が生成物に使われ、参考資料の 45 は
採用されない。xcheck の `xcheck-w32api-cegcc-agreement.tsv` に `DISAGREE`
行として記録済み（wine / reactos / mingw-w64 は wince と全く違うため
参考資料からも除外済み）。

## 2. 製品差 — `MAX_PATH`

* CE 文書は **128** を印字する（`wce50lrfUNICODEPATH`、CE .NET `ms897592`、
  CE 6.0 `ee495176` の各定数表。CE のファイル名上限）。
* w32api-cegcc もデスクトップ互換の **260** (`windef.h`)。

判定: **製品差**。DirectShow DVD 系の資料（`wce50lrfUNICODEPATH`）が
ローカル定数として `MAX_PATH` を印字するが、それは CE の 128 を指す
（`wcedvd5` の `UNICODE_PATH` 表）。デスクトップの 260 は他製品の値。
CE 値 128 のみが生成物に入る。

## 3. 文書上の不一致（その 1・生成物が報告した 2 件）

### `TMMS_DEFAULT_TF` — 1 ページに 2 値

`WZC_CONTEXT` 構造体のページ（CE 5.0 `aa448336` / CE 6.0 `ee481299`）
が1つの名前を2回印字している:

* `tmTf` の説明文: `TMMS_DEFAULT_TF (0x0000ea60)`
* `tmTd` の説明文: `TMMS_DEFAULT_TF (0x00001388)` — メンバ名が `tmTd`
  なのに定数名が `tmTf` のまま。同じページの当該メンバ列挙は
  `tmTr / tmTc / tmTp / tmTf / tmTd` で、定数側は
  `TMMS_DEFAULT_TR / TC / TP / TF` までしか存在しない（`TMMS_DEFAULT_TD`
  という名前はどの資料にも無い）。

判定: **文書上の不一致**（`tmTd` の文が `tmTf` の名前をコピーした
誤記。`0x00001388` = 5000ms は td タイムアウトの値）。ページ自身が
「Default values are defined in Wzcsapi.h」と述べており、ヘッダは
`Wzcsapi.h` で確定。**解決: `0x0000ea60`**（名前の定義文の値、
CE 5.0/6.0 の両コピーが一致）。

### `RTCEF_GROUP` — 1 ページに 2 値

CE 6.0 `ee499550` のイベントフィルタ列挙が同じ名前を2回印字:

* アルファベット順の列挙中: `RTCEF_GROUP = 0x00002000`（`RTCEF_CLIENT`
  の次）
* `RTCEF_INVITE = 0x02000000` の直後に、アルファベット順から外れて
  再掲: `RTCEF_GROUP = 0x02000000`（`RTCEF_INVITE` と同じ値）

判定: **文書上の不一致**（後者の行は編集残骸と見られる重複行）。
CE 4.x / 5.0 のページ（4 行）はすべて `0x00002000`。**解決:
`0x00002000`**。

## 4. 文書上の不一致（その 2・リンク待ち定数に潜んでいた 6 件）

### `NERR_DCNotFound` / `NERR_LastAdmin` / `NERR_RplBadDatabase`

ネットワークエラー表に「アルファベット順」と「番号順」の2系統があり、
値が食い違う:

| 名前 | アルファベット順表 | 番号順表 | w32api-cegcc `lmerr.h` |
|------|------------------:|---------:|------------------------|
| `NERR_LastAdmin`   | 242 | **2452** | `(NERR_BASE+352)` = 2452 |
| `NERR_DCNotFound`  | 243 | **2453** | `(NERR_BASE+353)` = 2453 |
| `NERR_RplBadDatabase` | 262 | **2612** | `(NERR_BASE+512)` = 2612 |

番号順表の並びは 2452→2453→2454 と連続し整合的。アルファベット順表の
短縮コードは CE 3.0/4.x/5.0 の各コピーに転記された誤記。
判定: **文書上の不一致**。**解決: 番号順表の値**（参考資料も一致）。

### `flexAlignCenter` / `flexAlignLeft` / `flexAlignRight`

VBCE の Grid コントロール資料が2ページ食い違う:

* `constant_9`（Grid Constants, ColAlignment 表）:
  `flexAlignLeft 0` / `flexAlignRight 1` / `flexAlignCenter 2`
* `proprts_47`（ColAlignment プロパティ）:
  `flexAlignCenter 0` / `flexAlignLeft 1` / `flexAlignRight 2`
  — 説明文は CellAlignment 列挙の "Left top / Left center / Left bottom"
  を貼り付けたもので、名前列と説明が対応していない。

判定: **文書上の不一致**。どちらの対応関係が eVB ランタイムの実体かを
コーパスだけでは決定できないため **未解決**（`#define` は書かれない）。
両表の行は引き続き引用される。vbce は C ヘッダを持たない VB 言語定数群
なので、include 面には本来現れない。

## 5. まとめ

| 名前 | カテゴリ | 解決 | 根拠 |
|------|----------|------|------|
| `HTTP_QUERY_MAX` | 世代差 | 75（CE 値） | CE 文書 2 行 vs 参考資料 45/78 |
| `MAX_PATH` | 製品差 | 128（CE 値） | CE 文書 3 行 vs デスクトップ 260 |
| `TMMS_DEFAULT_TF` | 文書上の不一致 | 0x0000ea60 | tmTf の定義文・両世代一致 |
| `RTCEF_GROUP` | 文書上の不一致 | 0x00002000 | アルファベット順の列挙 4 行 vs 重複行 1 行 |
| `NERR_DCNotFound` | 文書上の不一致 | 2453 | 番号順表・`lmerr.h` 一致 |
| `NERR_LastAdmin` | 文書上の不一致 | 2452 | 同上 |
| `NERR_RplBadDatabase` | 文書上の不一致 | 2612 | 同上 |
| `flexAlignCenter` | 文書上の不一致 | 未解決 | 2 表の不一致・転記ミス、コーパスのみでは決定不能 |
| `flexAlignLeft` | 文書上の不一致 | 未解決 | 同上 |
| `flexAlignRight` | 文書上の不一致 | 未解決 | 同上 |

対応:

* `tools/build-kb.py` は全定数を対象に不一致を再計算して
  `knowledge/kb/constant-conflicts.tsv` に分類付きで列挙する
  （旧: リンク済み定数しか数えておらず 2 件と過小報告していた）。
* 生成ヘッダは未解決の不一致に CONFLICT ブロック（両値・証拠・判定）を
  書き、`#define` は書かない。レビュー済みの解決
  （`data/constant-value-review.tsv`）がある場合は、本文書が印字する
  解決値を CONFLICT ブロック付きで `#define` する。
