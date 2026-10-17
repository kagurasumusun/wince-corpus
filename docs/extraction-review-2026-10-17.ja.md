# 抽出強化・誤判定つぶしレビュー（2026-10-17）

この文書は、収集済みコーパス（`corpus/`、122,170 ページ）からの知識ベース
（`knowledge/`）構築パイプラインに対して実施した「完全解析」「kb 活用」
「ヘッダ/def 振り分けの誤判定つぶし」の作業記録である。作業の原則は
従来どおり: **ページが印字していないことは作らない。引用は逐語。外部情報は
出所・ライセンス・使用許可を確認したものだけを使う**（`docs/LICENSING.md`、
`docs/clean-room.md`）。

## 1. 発見した欠落と誤判定（すべて実ページで確認）

### 1.1 Win32 マークダウンの Requirements が丸ごと未読（最大の欠落）

`corpus/win32/*.md`（6,371 ページ）のうち 1,071 ページは本文末に標準の
`| Requirement | Value |` テーブルを持つ（`Header | Winuser.h (include
Windows.h)`、`Unicode and ANSI names | ...` など）。旧 `page_parse.markdown()`
は YAML フロントマターしか読まず、**このテーブルを一切記録していなかった**。
さらに:

* `api_location:` は YAML **リスト**（`- Winuser.h`）で書かれており、同一行
  値しか読まない旧実装では 5,614 ページ分がゼロ件だった。
  `api_location` は拡張子で header / library / dll に分類すべきなのに
  旧実装は無条件に `dll` 払い出ししていた（誤タグ付け）。
* タイトルの括弧（`BN_CLICKED notification code (Winuser.h)` — 6,295 ページ）
  がページ自身のヘッダ声明なのに捨てられていた。
* `Winuser.h (include Windows.h)` の括弧内 `Windows.h` までヘッダ候補として
  走査され、`Windows.h` への誤紐づけの原因になっていた（複数箇所で修正）。

**結果**: `win32/common` のメッセージ/定数ページの定数はヘッダ声明ゼロで
作業リスト行きになるか、名前推測に任せられており、「紐づけ先ヘッダが違う」
問題の主要因だった。修正後はページ自身の声明（own-page / win32-reference）
として記録される。

### 1.2 サンプルコード由来の定数混入（誤判定）

* `MEM_HEIGHT` / `MEM_WIDTH_IN_PIXELS` / `PIXEL_BYTES` — Node2D ページの
  **コード例**（「The following code example shows how the Free method is
  usually implemented.」）内の `#define` が、単一 `<pre>` ブロックを構文宣言
  に昇格させる旧ヒューリスティックで syntax 扱いになり、SDK 定数として
  記録されていた。さらに `MEM_` 接頭辞辞書で `Winbase.h` 払い出しされていた。
  → 導入文の example キューチェック（`_example_cued`）で昇格を停止。
    マークダウン側も同様。
* `IDC_BUTTON1`〜`IDC_STATUSREGION` — 「PhCommon Control Identifiers」の
  サンプルスイート識別子（同ページ自身が「sample application suite, IP Phone
  Suite 用」と明記）。`IDC_` 接頭辞で `Winuser.h` 払い出しされていた。
  → レビューで **reject**（どのヘッダにも入れない。作業リストに残す）。
* `#define` 行カウントもサンプル `<pre>` 内のものがギャップ判定に使われて
  いた（audit 側）。サンプル導入ブロックはギャップ対象外に。

### 1.3 接頭辞辞書によるヘッダ推測そのものが誤判定の産出装置

* `MB_LEN_MAX`（CRT の limit、ページ自身が「defined in Limits.h」と明記）が
  `MB_` 接頭辞で `Winuser.h` 払い出し → **Limits.h**（ページ声明）。
* `VK_RONTROL`（CE 3.0 DDK ページの誤植、0xA3 = VK_RCONTROL）が VK_ 系として
  Winuser.h 払い出し → **reject**（引用行は保持、ヘッダには入れない）。
* `ERROR_PPP_*` / `ERROR_POWER_OFF*`（RAS Error Values の `RASBASE+n` 行）が
  `Winerror.h` 払い出し → RasDial ページの声明
  **「Include Raserror.h for definitions of the RAS error codes.」** に従い
  **Raserror.h**（value-base レビュールール）。

**修正**: 定数→ヘッダ連携から `heuristic-prefix` ランクを**廃止**。
ランクは `own-page / entity-page / constant-entity / win32-reference /
reference-header / co-mention / family-statement / reviewed / pinvoke-weak`。
未検証の名前は推測せず `reports/constant-header-gaps.tsv`（作業リスト）に
残す。レビューは `data/constant-header-review.tsv` に1件ずつ根拠付きで記録。
生成器 `gen-include-def.py` も名前推測で行を捏造しない（`pick_constant_targets`
から辞書フォールバックを削除）。

### 1.4 ページ自身の「X.h に定義」声明の読み落とし

コーパスには **4,812 ページ**が `defined/declared in X.h` 系の声明を持つ
（`mshtmdid.h` 2,692 件、`winerror.h` 601 件、`mmsystem.h` 240 件、
`raserror.h` 14 件 …）。旧実装は「defined in the X.h header file」の
1 形態しか読んでいなかった。新リーダー:

* `header_group_statements` — 「The following constants ... are defined in
  Limits.h.」＝表グループ単位のヘッダ声明（`_WIN32_WCE` 無関係にページ
  逐語）。Limits.h / Float.h の2グループを正しく振り分け。
* `name_header_statements` — 「FOO is defined in X.h」＝名前単位。
* `family_header_statements` — 「Include Raserror.h for definitions of the
  RAS error codes.」（族）と「predefined MFT_* ... #include "Winuser.h"」
  （接頭辞）。MFT_/MFS_ → Winuser.h がページ声明として記録。
* `header_exclusion_statements` — 「not included in X.h」（否定声明。KB 記事
  Q192538「Cursor Functions Not Included in Winuser.h for Windows CE」等）。
  誤ファイルティングの抑止として `kb/constraints.jsonl` に
  `header-exclusion` で引用保持。
* `link_statements` — 「you must link to X.lib」形の引用保持。

### 1.5 audit（誤判定検知器）側の誤判定

* 「Requirements: **None.**」のページが `requirements-unread` 払い出し
  → 「無し」と明記したページは「読んだ」に分類。
* サンプルコード `<pre>` が `pre-unread` 払い出し → キューブロック除外。
* `<pre>` 内の `#define` が `defines-unread` の根拠に → 本文 `#define`
  （`define_line_constants` の読み取り対象）のみを数えるよう修正。
* `knowledge/kb/harvest-*.jsonl`・`extra-defines.tsv` の記録を「未記録」扱い
  していた → 記録済みとして数える。

### 1.6 統合ビュー側の同じ誤判定（kb_unify / build-unified-kb / gen）

* `kb_unify.choose_header` が**名前推測表をページ声明より優先**していた
  （「表と声明が一致すれば表、違えば表」＝実質表優先）。MB_LEN_MAX が
  ページ声明の Limits.h ではなく推測の Winuser.h になっていた。→
  「ページが名ざしたヘッダが常に勝つ。表は声明が無いときの最後の
  予備」に修正。定数の振り分けでは推測表を**使わない**
  （`allow_map=False`）。
* 連携表（`constant-headers.tsv`）の作成対象が「値の付いた定数」に限られ、
  **数値なし定数**（`MFT_BYCOMMAND`、`ERROR_PPP_*` の `RASBASE + n` 行
  など 117,640 名）がどの声明・レビュー・参照にも突き合わされていな
  かった。→ ページが印刷した定数名は値の有無にかかわらず連携の対象に
  追加。`ERROR_PPP_*` は KB 記事の RASBASE 声明（value-base レビュー
  規則）で Raserror.h に入る。
* レビュー表の規則読み込みの不具合（prefix 行・value-base 行のキー
  形式不一致）でレビュー規則が効いていない行があった。→ 修正・単体
  確認済み（VK_F1→Winuser.h、VK_RONTROL→reject、NERR_Success→Lmerr.h、
  ERROR_PPP_NOT_SUPPORTED→Raserror.h）。
* 生成器は CRT ヘッダ（limits.h / float.h / stdlib.h 等）をフラグメント
  対象外とする既定方針を持つ。MB_LEN_MAX の正しい振り分け先は Limits.h
  だが、winsur の API 面には載せず、`winsur/constants.tsv` の台帳に
  Limits.h 扱いで残る（以前の Winuser.h への誤入りは解消）。

### 1.7 引用の逐語性を壊していた箇所（check-cleanroom で検出）

`tools/check-cleanroom.py --all` が「quotes are faithful」違反を出した。
md ページの引用は生ファイルと文字単位で突き合わされるのに、抽出側が
文字を消したり綴り直したりしていた:

* `you must link to X.lib` 文の読み取りが HTML タグ除去を md 本文にも
  適用し、`#include <winsock2.h>` の `<winsock2.h>` がタグとして消えて
  いた（例: `winsock2/nf-winsock2-wsastartup.md`）。→ md 用の `plain`
  モード（`statement_text`）を追加。文の範囲も行・文境界で止まるよう
  締めた（直上のコードフェンスを引用に巻き込まない）。
* Requirements 表の値セルにインライン HTML がある場合（`windows-data-types.md`
  の `Header | <dl> <dt>BaseTsd.h; </dt> ...`）にタグを消していた。→
  セルの文字をそのまま保持。名前解析（HEADER_TOKEN）は生値から行う。
* プローズ定数（`` `LOCALE_TRANSIENT_KEYBOARD1` (`0x2000`) ``）の行引用が
  バッククォート除去後の文字列だった。→ マークダウン記号は「空白で潰して
  オフセット保持」し、行引用は生スパン（バッククォート込み）。
* サンプルコードの塊（Node2D の `#define ... Node2D AllMem(...); ...`）が
  「宣言」レコード1件として `ExtraDeclarations.h` に混入していた。→
  「宣言は1文」規則（`#define`/`#include` 内包・関数型の複文を拒否）。
* `--set` 生成パスの `write_defs` が未定義 `args` 参照で落ちていたのを
  修正（check-cleanroom の generator 不変条件が通る状態へ）。

### 1.8 その他

* `tools/check-kb.py` が `heuristic-prefix` を未知ランクとして 123 件の
  「problem」を出していた（`build-kb.py` と不整合）。ランク表を同期。
* `tools/page_parse.py` の `_PRE_BLOCK` 二重定義（後勝ちで先の用途が依存
  していた）を整理。
* エンティティのヘッダフォールバック順が「推測表 → モジュール声明 →
  ページ投票」だったのを **「ページ声明 → モジュール声明 → ライブラリ
  対応 →（最後）推測表」** に逆転（`gen-include-def.py`）。非 API 名
  （`Architecture` 等）を推測対象から除外。

## 2. 全コーパスの生確認（1 パス連続実行）

1. `tools/build-kb.py --workers 2` — 全 122,170 ページを1ファイルずつ
   開いて解析（この実行自体が全ファイルの直接確認）。
2. `tools/harvest-corpus-kb.py` — 抽出器改善後の再走査で見落とし回収。
3. `tools/walk-corpus-raw.py` — 全ファイルを生バイトで1件ずつ開いて記録
   （`knowledge/kb/corpus-visits.tsv`）。
4. `tools/audit-extraction.py` — 全ページの「印刷物 vs 記録」棚卸し
   （`knowledge/reports/extraction-audit.{tsv,md}`）。
5. `tools/verify-assignments.py` — 連携行1件ずつをピン留め参照
   （w32api-cegcc）とレビュー表に突き合わせ
   （`knowledge/reports/assignment-review.{tsv,md}`）。
6. `tools/check-kb.py` / `check-cleanroom.py --all` / `check-licenses.py` —
   不整合・引用改変・ライセンス台帳の監査。

### 2.1 最終結果（この周の完了時点）

* `build-kb` フルビルド: entities 30,372 / declarations 110,892 /
  requirements 207,557 / constraints 4,538 / constants 30,823。
* `check-kb.py`: knowledge OK。
* `check-cleanroom.py --all`: **11 不変条件すべて違反 0**（引用の逐語性
  322,883 件チェック）。
* `check-licenses.py`: 58 ルール・20 スコープ・**問題 0**。
* `verify-assignments.py`: ハードクラス（review-reject-filed /
  family-mismatch / sample-origin-filed / winsur-reject-define）**すべて 0**。
  残る `reference-disagrees` 1,427 件は CE とデスクトップの正当な差分を
  含む監視リスト。
* `walk-corpus-raw.py`: 全 122,186 ファイルを生バイトで 1 件ずつ開封
  （0 unreadable）→ `knowledge/kb/corpus-visits.tsv`。
* `audit-extraction.py`: 全 122,170 ページ 1 件ずつ棚卸し —
  extracted 94,745 / partial 1,940 / unextracted 541 / no-content 24,944。
  残ギャップは `knowledge/reports/extraction-audit.md` の作業リスト。
* `winsur/`: include 650 フラグメント（27,859 `#define` 行）+ link 296
  .def ワークリスト。`winsur/constants.tsv` が台帳。

## 3. 外部情報の取り扱い（ライセンス・出所・範囲）

今回 **新規に取り込んだ外部資料は無い**。突き合わせに使ったのは:

* `sources/w32api-cegcc/`（同梱済み・ピン留め。CeGCC w32api、パブリック
  ドメイン、`PROVENANCE.md` 記載）— **ヘッダ所属の確認のみ**。値は一切
  取らない（既存方針のまま）。
* `corpus/kb/` の KnowledgeBase 記事（同梱済み・`data/license-scopes.tsv`
  の台帳どおり）— 引用は逐語、`header-exclusion` / `link-statement` として
  出所ページ付き。
* Wine / ReactOS / MinGW-w64 は禁止リスト（`tools/build-kb.py` の常設命令）
  どおり不使用。Web からの資料取得は行っていない。

生成物の値（`#define` の数値）はすべて CE/Win32 文書ページの引用であり、
参照ヘッダやレビュー表から値を採ることは無い。

## 4. 残っている作業（正直な棚卸し）

* `reports/constant-header-gaps.tsv` — ページも参照もレビューもヘッダを
  名ざさない定数群（needs-sdk-verification 等）。推測で埋めない方針のため
  作業リストとして残る。SDK 実物（CE SDK のヘッダ）が検証に使える環境が
  無いため、確認できたものだけを `data/constant-header-review.tsv` に追記
  していく。
* `reports/extraction-audit.md` の残ギャップ（tables-unread 等）は
  「読んだが抽出可能な事実が無い表」を含む作業リスト。`tools/full-pass.py`
  のページ判定（§5）がこの領域の正典であり、audit フラグはシグナル扱い。
* `reference-disagrees`（`reports/assignment-review.tsv`）は CE とデスク
  トップでヘッダ所属が異なる正当な差分を含む監視リスト。ページ声明が
  ある行はページが優先される。
* 記号値の `#define`（`ERROR_PPP_NOT_SUPPORTED (RASBASE + 133)` のように
  ページが `RASBASE + 133` と印字する行）は印字どおり式ごと `#define`
  行に出る（勝手に数値化しない）。Raserror.h への振り分けも成立している。

## 5. 全ファイル 1 パスの生ページ検証と誤判定つぶし（2026-10-17 追加）

依頼は「corpus の全ファイルを生ページのまま 1 回で連続して検証し、
その同じパスで誤判定も潰す」。`tools/full-pass.py` がそれを実装する:
corpus 配下を順に全開封（サンプリングなし・スキップなし）、各ファイルで

* **miss（読み落とし）**: ページが印字する要求行・宣言・定数・名前表・
  ordinal・ABI・声明のうち、`knowledge/kb/` に記録が無いもの。判定は
  ページ内一致 + KB 全体一致（重複ページ・家族共有行は一度記録されれば
  可。例示コードは読取側で除外済みなので miss にも example にも数えない）。
* **misjudgment（誤認）**: 記録済み引用が生ページに無い、`reject` 名が
  ヘッダに振り分けられている、rank が未知、ドキュメントの宣言が
  `example` に降格（role-misjudged）など。

結果（`reports/full-pass.tsv` / `full-pass.md` に全ファイル分を記録）:

* パス 1（旧 KB・旧カバレッジ判定）: missed 17,342 — 大半は判定器側の
  重複ページ/共有行の過大カウントと、dotnet 宣言の別ファイル
  （`declarations-dotnet.jsonl.gz`）未読込という判定器の誤り。
* パス 2（判定器修正後・旧 KB）: missed 289 / misjudged 38 に収束。
  残った実問題を潰した: 名前ヘッダ/ファミリ/ヘッダ除外/リンク声明が
  HTML ページで constraints に記録されていなかった（読込順のバグ）、
  など。
* パス 3（KB 再構築後）: 下記 §6 の修正を載せた最終確認パス。

### このパスで潰した誤認・読み落とし（根本原因）

1. **複合 `typedef X; enum {...}` ブロック**が `example` 扱い → 型ページの
   宣言・enum 定数（VARTYPE の VT_* など）を落としていた。宣言として読む
   修正で `wce50lrfVARTYPE.html` は role=syntax・18 定数行が記録。
2. **16 進表（"Value (Hex)" 列）の印字 "08"/"4F"/"20"** がそのまま
   `#define VK_BACK 08` と出力され、C として壊れていた。列が 16 進と
   名ざす表の印字桁は C リテラル `0x08` に変換（行引用は印字のまま）。
3. **DIP スイッチ表（"S1-1 | OFF" 等）** が定数表と誤読され
   `OFF=0xS1-1` の類のゴミ行を生んでいた。列推定の名前セルは定数名
   らしさを要求、同一表内の同名異値行を不採用に。
4. **名前ヘッダ声明（"BLOB struct is defined in Sslsock.h" 等）が HTML
   で constraints に記録されていなかった**（harvest より前の空リストへ
   遍歴していた）。name-header / family-header を constraints に記録。
5. **同一宣言の重複ページ・VB/C#/C++ 多言語列記**のカバレッジ判定を
   文字列一致 + KB 全体参照に正した（パス 1 の 17,342 の大半）。
6. **ヘッダ声明の競合（MessageBeep が Winbase.h と Winuser.h の両方を
   声明）** は corpus 内で決着しない。`verdict=prefer`（人手裁定）を
   導入し、MB_*（MessageBox 系 29 名）を Winuser.h に裁定。
