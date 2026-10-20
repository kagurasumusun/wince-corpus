# KB 再設計の記録（wince-docs-corpus）

2026-10-19、KB（知識ベース）を白紙から再設計した記録。方針決定・運用は
`kb/README.md`、収集範囲は `docs/COLLECTION-POLICY.md`、権利は `docs/LICENSING.md`。
本書が KB に関する現行の唯一の設計文書である。旧 `knowledge/` と旧設計・作業記録は
廃棄した（親コミットに残る）。

## 1. 目的と位置づけ

このリポジトリの最終目的は、Windows CE 向け開発基盤（winsur の include/.def）を
「コーパスの単純変換」ではなく、API 仕様・依存・版条件・ABI を正しく管理して
生成することである。そのためのパイプラインを責任で4層に分ける。

```
Harvest -> Corpus -> KB Gen -> Header/.def Gen
```

- **Harvest / Corpus**（既存、維持）：Microsoft の Windows CE 公式文書の収集と
  保管。`corpus/` は文書そのもの。今回の作業では一切変更しない。
- **KB Gen**（今回の範囲）：コーパスから、検証可能で再現性のある知識ベース
  `kb/`（SQLite 1ファイル＋スキーマ＋manifest＋レポート）を生成する。
- **Header/.def Gen**（次期、今回の対象外）：KB だけを入力として include/.def を
  生成する。旧試作（gen-include-def 等）は新設計から作り直せるよう削除した。

KB の要件は「管理可能・構造的に一貫・確実に参照と検証ができる」こと。
過去設計との互換は要求しない。

## 2. 旧 KB の問題（精査結果、2026-10-19 時点で測定）

旧 `knowledge/` は 1,081 ファイル・221MB の JSONL.gz/TSV 群だった。実測した欠陥：

- **事実決定ロジックの分裂**：同じ「どの値を信じるか」が build-kb.py、
  kb_unify.py、gen-include-def.py に三重実装され、相互に食い違った。
- **同一性の欠陥**：定数 30,073 件中 30,051 件が entity=None（名前が実体に
  紐づかない）。正規化が句読点を落とすため `Foo::Bar` と `FooBar` が同一視
  される危険があった。
- **ゴミの混入**：`UNICODE = compile` が定数値として、".h" がヘッダ名として
  格納されていた（値文法・トークン検証の欠如）。
- **参照資料の事実化**：unified ビューでは定数 8,914 件中 2,053 件が Win32
  ページの値で「補完」され、参照ヘッダの所属や pinvoke の値が最弱ランクで
  事実側に入っていた。弱い証拠が静かに事実になる構造だった。
- **衝突の不可視化**：勝者の暗黙選択が各所にあり、不一致の全体像が見えなかった。
- 検証（check-kb.py）は存在したが、層分離の強制（収集ワークフロー内で KB を
  ビルド）により境界が曖昧だった。

個別修正では「生成基盤としての信頼性」に届かないと判断し、全廃・再設計とした。

## 3. 決定事項

ユーザー決定（2026-10-19 確認）に基づく。

1. **正準KBは SQLite 1ファイル**（`kb/kb.sqlite3`）＋ `kb/schema.sql`（契約）
   ＋ `kb/manifest.json`（入力・内容ハッシュ）。FK/CHECK で構造を強制し、
   SQL で参照できることを「参照可能性」とする。
   - ただし DB 実体は約 600MB で GitHub の 100MiB/ファイルを超過するため、
     **git にはコミットせず**、manifest とレポートをコミットし、DB は
     ローリング Release（`kb-latest`）のアセットとして配布する（同日追加決定)。
     ビルドがバイト再現可能であるため、manifest が DB 内容の完全な記述になる。
2. **抽出器は既存 `tools/page_parse.py` を版管理インターフェース越しに再利用**
   （`tools/kbgen/extract.py`、EXTRACTOR_VERSION=1）。ページ形式の読みは
   実績があるため捨てない。ページ間解決・検証はすべて新規実装。
3. **レイヤ分離を1つの DB 内で表現**：ce / win32 / dotnet / oss。参照資料
   （CeGCC w32api、dotnet/pinvoke）は `reference_*` の比較専用テーブルに隔離し、
   根拠 FK が指せない構造にする。旧 `reference-header`/`pinvoke-weak` ランクと
   両方の末位補完（値・所属）は**廃止**する。
4. **旧 KB・後段実装・2026-10 の作業記録は本変更で削除**する（§8）。Harvest と
   Corpus は維持する。

不変の原則（従来から維持）：すべての事実はコーパスのページを引用する／宣言は
原文のまま（修復しない）／ABI 事実はページが明記した場合のみ／
Wine・ReactOS・MinGW-w64 は参照資料として禁止／参照資料の値は CE の事実にしない。

## 4. 入力契約

`tools/kbgen build` の入力は次に限定され、全て `build_inputs` テーブルと
manifest にハッシュとして記録される。入力が変われば `kbgen check` が
input drift を報告する。

- `data/index/INDEX.tsv`（コーパスのページ一覧）と `corpus/` のページ実体
  （各ページの sha256 を `pages` に記録し、検証で再照合する）
- `data/catalogs/*.tsv`（公式カタログのタイトル対応）
- `data/license-scopes.tsv`（ページ→権利スコープ。未登録ページはビルドエラー）
- `data/reports/win32-shared.tsv`（Win32 ページ取り込み規則の監査証跡）
- `kb/schema.sql`、`tools/kbgen/*.py`、`tools/page_parse.py`
- `kb/inputs/reviews/*.tsv`（人手レビュー、§6）
- `sources/w32api-cegcc/*.tar.gz`、`sources/dotnet-pinvoke/*.tar.gz`（比較用）

未知のコーパスツリーは取り込まない（`layer_of` が拒否する）。将来
`corpus/pinvoke/`（第三者 wiki）を収穫する場合は、先にレイヤ設計が必要。

## 5. データモデル

正は `kb/schema.sql`。要約：

- **観測層**（ページが言ったこと）：`pages` / `doc_sets`、`observation_index`
  に全観測を登録し、種類別に `declaration_observations`（＋member 行・ABI
  フラグ）、`requirement_observations`（＋ファイルトークン）、
  `constant_observations`、`constant_name_observations`（無番号の定数名）、
  `note_observations`（制約文・ABI 注記・def ルール）、`membership_statements`
  （所属・除外・リンク・列挙の文）、`documented_members`、`layout_observations`
  （オフセット表）、`ordinal_observations`、`module_observations`、
  `support_statements`。本文は `text_blobs` にハッシュで保持。
  取り込めなかった印刷は `ingest_rejects` に理由・件数・例を記録する
  （黙って捨てない）。
- **シンボル層**：`symbols`（同一性は「小文字化＋空白除去＋句読点保持」。
  `Foo::Bar` ≠ `FooBar`）、`symbol_spellings`、`symbol_kinds`、
  `page_subjects`、`headers`、`link_files`。
- **解決層**（KB の判断。すべて根拠付き）：`symbol_headers` / `symbol_files`
  （候補＋rank＋chosen）、`declaration_variants`（空白正規化で束ねた宣言の版）、
  `constant_values`（scope=`*` または CE 版）、`symbol_versions`（適用版文の
  原文と解釈）、`symbol_relations`（A/W 変種。根拠は page-statement /
  import-rule）、`conflicts`（未解決の不一致）。
- **根拠**：`*_evidence` テーブルは「観測かレビューのどちらか一方」を必須とし
  （CHECK）、参照テーブルは指せない。根拠 ID は内容ハッシュ
  （NULL 列を STRICT 主キーに入れると INSERT OR IGNORE が静かに行を落とす
  ため、複合 PK ではなく単一ハッシュ列にすることを実測で確定した）。

解決規則（`tools/kbgen/resolve.py` が唯一の定義）：

- ヘッダ rank：reviewed=5 < subject-requirement=10 < membership=20 <
  constant-page=30 < family-statement=40。同順位タイは未解決衝突（黙って
  選ばない）。レビュー reject は抑制。ページ根拠が単一ヘッダで一致して
  レビューと食い違う場合はページを採用し衝突として記録する。
- リンクファイルは複数 chosen を許す（1つの API が複数ライブラリから
  リンクされ得る）：rank ≤ membership の全行が chosen。
- 定数値：整数が1種類なら確定。複数なら、値ごとの文書集合の CE 版集合が
  互いに素な場合のみ版スコープ付きで確定し、それ以外は衝突（値なし）。
  レビュー値は「そのレイヤのページが印刷した値」の場合のみ採用。
- 宣言：syntax 役割・非実装ブロックのみから variant を作り、primary は
  「空白保持の印刷があるもの→ページ数→ハッシュ順」。保存形式が2種以上
  あれば宣言差異として衝突に記録（版差異の可視化）。

## 6. 人手レビュー

`kb/inputs/reviews/` の2ファイル（旧 `data/constant-*-review.tsv` から移設、
意味論を保存）。照合優先順位は 完全一致名 > 最長 prefix > value-base。
verdict は approve/reject/prefer。レビューはページ印刷の中から選ぶことしか
できず、生成器が検証する。全行は `reviews` テーブルにも取り込み、根拠として
引用可能にする。

## 7. 生成・検証・運用

- 生成器は `tools/kbgen` のみ（build/check/query/export）。決定性：ページは
  パス順に取り込み、全 ID は内容ハッシュ、再ビルドで同一バイト列になる
  （`check --verify-reproducible` が検証）。
- `kbgen check`：integrity/FK、根拠の完全性とレイヤ隔離、解決不変条件、
  全ページのハッシュ再照合、決定サンプルの再抽出、manifest 照合、入力 drift。
  旧 check-kb.py と check-cleanroom.py（引用の原典照合）の役割をここに統合。
- ワークフロー：収集レーン（harvest/crawl/extract-chm/import-*）は KB を
  構築しない。`.github/workflows/kb.yml` が入力変更時に build+check を行い、
  DB を Release アセットへ、manifest とレポートをリポジトリへコミットする。
- レポート（`kb/reports/`）は生成物：summary / coverage / conflicts
  （レビュー課題）/ gaps（収集課題）。正は DB。

## 8. 整理の棚卸し（何を残し、何を消したか）

**維持（変更なし、または参照先の付け替えのみ）**：`corpus/`、`sources/`、
収集ツール群（harvest/fetch-upstream/extract-chm/extract-mvb/import-*/
crawl-mirror、check-policy/check-corpus/dedupe/build-index 系/build-ce-api-names/
build-win32-map/audit-sources/build-chm-inventory/build-topic-coverage 等）、
`tools/page_parse.py`（kbgen の抽出器として再利用。docstring と旧ツール
言及コメントのみ更新）、`tools/license_scopes.py`、`tools/check-licenses.py`
（レポート先を `data/reports/` に変更）、`tools/find-api.py`（KB 参照を
SQLite 化）、`data/catalogs|toc|manifests|metadata|index`、`data/license-scopes.tsv`
（knowledge/ 行を kb/ 行に置換）。

**削除したもの（KB Gen の旧実装）**：`knowledge/` 全体、`tools/build-kb.py`、
`build_kb_shim.py`、`build-unified-kb.py`、`kb_unify.py`、`check-kb.py`、
`harvest-corpus-kb.py`、`full-pass.py`、`walk-corpus-raw.py`、
`audit-extraction.py`、`audit-value-misses.py`、`build-win32-coverage.py`
（＋ `data/reports/win32-coverage.tsv`）、`.github/workflows/knowledge.yml`。

**削除したもの（KB 後段の旧実装）**：`gen-include-def.py`、`_gen_nowrap_tmp.py`、
`header_map.py`、`assign-declarations-to-headers.py`、`assign-defines-to-headers.py`、
`heuristic-header-assignment.py`、`fix-output-quality.py`、
`fix-unassigned-declarations.py`、`check-compile-surface.py`、`build-import-libs.py`、
`extract-base-types.py`、`audit-base-types.py`、`extract-missing-declarations.py`、
`extract-missing-defines.py`、`quality_filters.py`、`html_clean.py`、
`verify-assignments.py`、`check-cleanroom.py`。

**削除したもの（参照の補完系）**：`w32api_gaps.py`、`pinvoke_gaps.py`、
`pinvoke_extract.py`（読み取りロジックは `tools/kbgen/references.py` に移植）、
`xcheck_references.py`。

**削除したもの（データ・文書）**：`data/derived-constants.tsv`、
`data/derived-forward-types.tsv`、`data/unresolved-enum-constants.tsv`、
`data/constant-gaps.tsv`、`data/interface-methods.tsv`（旧生成系の派生表。
問いは KB へのクエリとして存続）、`docs/review-2026-10.ja.md`、
`docs/extraction-review-2026-10-17.ja.md`、`docs/ce-surface-audit-2026-10-18.ja.md`、
`docs/constant-value-review.md`、`docs/clean-room.md`（作業記録。結論は
COLLECTION-POLICY / LICENSING / 本書に統合）。対応するテストも削除し、
page_parse 自体のテスト（test_constants_extract）と新規 test_kbgen_* を残す。

## 9. 移行結果（測定値）

初回全量ビルド（corpus 122,170 ページ、schema 1 / extractor 1 / builder 1）の
測定値。DB ファイルは約 598 MB。ファイルのバイト列は SQLite ライブラリの
版で変わり得るため、環境をまたぐ同一性の正典は `kb/manifest.json` の
テーブル別正規化ハッシュである（ローカルと GitHub Actions のビルドで
全テーブル一致を確認）。

移行で何も失われていないことの証拠として、旧 KB の被覆面と突き合わせる:

| 被覆面 | 旧 KB (knowledge/) | 新 KB (kb/) |
|---|---:|---:|
| 件名ページを持つ名前 | 30,372 | 30,375 |
| CE のみの名前 | 25,111 | 25,114 |
| Win32 文書と共有 | 4,052 | 4,052 |
| Win32 のみ（参照用） | 1,209 | 1,209 |

差 +3 は component ページの一覧にだけ現れる名前を symbols に登録するように
した分であり、旧 KB では実体化されなかった名前である。

主要測定値:

| 項目 | 値 |
|---|---:|
| symbols | 50,472（CE 件名 29,166 / Win32 件名 5,261 / 両方 4,052） |
| 観測総数（observation_index） | 491,549 |
| 宣言引用 | 110,892（うち .NET 署名 31,326、空白崩れ 17,162） |
| 宣言バリアント / CE 主選出 | 27,840 / 25,292 |
| 要件記述 | 214,828 |
| 番号付き定数観測 | 29,904（8,763 名） |
| 解決済み CE 定数値 | 6,688（版範囲つき行 23） |
| 文書化されたが番号なしの定数名 | 15,186 |
| ヘッダ / CE 選出済み | 753 / 22,530 |
| リンクファイル / CE 選出済み | 938 / 12,053 |
| 利用可能版の解析（解析済/部分/未解析） | 56,185 / 2,322 / 741（行 59,248） |
| Unicode/ANSI 対関係 | 2,223（ページ明言 1,068、輸入規則 1,155） |
| 構造体メンバ（宣言内 / 文書表） | 52,168 / 5,408 |
| レイアウト・オフセット記述 | 394 |
| 人手レビュー行（kb/inputs/reviews/） | 56 |
| 取り込み拒否（ingest_rejects） | 169 件 / 2 理由 |
| 未解決の衝突（open） | 6,138（ヘッダ選択 4,654＝CE 4,267 + Win32 387、宣言分岐 1,451、定数値 33） |
| レビュー済み衝突（reviewed） | 8 |
| 比較参照（隔離テーブル、事実にはならない） | 64,596 名（w32api-cegcc 44,276 define + 15,234 export、dotnet/pinvoke 4,498 const + 588 DllImport） |
| CE 値と参照値の一致 / 不一致 | 2,421 / 104（不一致は CE ページ側が事実） |

旧設計からの意図的な差異（いずれも「値が減った」のではなく格付けの変更）:

- 旧 unified ビューの Win32 フォールバック値 2,053 件は廃止。該当名は
  「CE では番号が文書化されていない」に戻り、参照値は比較テーブルにのみ残る。
- `reference-header` / `pinvoke-weak` の証拠ランクを廃止したため、参照材料は
  ヘッダ選出にも値決定にも一切投票しない（以前は最下位ランクで投票していた）。
- ヘッダ選択の同点 4,654 件は無言で選ばず open conflict として残す
  （同ページが `Mshtml.h, Mshtml.idl` のように複数ヘッダを挙げる例が大半で、
  Header Gen 側の設計事項）。sdk-api の `req.include-header`（傘ヘッダへの
  include 指示）は宣言ヘッダの主張ではないため専用ランク 45 に分離した。

検証結果:

- `python3 -m tools.kbgen check` = kb OK（全 122,170 ページのハッシュ照合、
  200 ページの再抽出照合、参照整合性・解決不変条件を含む）。
- 決定性: worker 数 1 と 4 で同一 DB バイト列（subset で確認）、
  `--verify-reproducible` でもテーブルハッシュ一致。CI（kb.yml）が同じ
  manifest を再生成し、DB を `kb-latest` リリース資産として公開する。

## 10. 既知の限界と次の設計事項

- 抽出器（page_parse）の取りこぼし・誤判定はそのまま観測層の性質になる。改善は
  EXTRACTOR_VERSION を上げて再生成する手続きで追跡する。取りこぼし監査
  （ページが印刷した事実と観測の突合）は今後の課題。
- 適用版文の解釈カバレッジ、A/W 関係の根拠カバレッジは `kb/reports/summary.md` が
  開示する数値が上限。
- .NET 層は宣言観測をページ引用付きで保持するが、主題シンボルへの連結が無い
  （旧 KB でも同じ）。マネージド型名を主題として立てるかは、抽出器
  インターフェースの版上げとして別途判断する。
- ヘッダ同順位の衝突は候補集合として保持される。include グラフによる
  優先付けは Header Gen 側の関心事であり、KB は候補と根拠の完全性までを保証する。
- 宣言の構造化は現状「テキスト＋メンバ行＋規約」まで。パラメータ単位の解析や
  型依存グラフは Header/.def Gen の設計時に、KB 拡張として要否を判断する
  （KB に入れるなら解決層の追加として）。
- DB 実体を git に置かない代償として、DB の入手は「再生成」か Release
  アセットになる。manifest がテーブル単位の内容ハッシュを持つため、
  「何が変わったか」はテーブル粒度で追える。

## 11. 追記：抽出器 v2（2026-10-20、パーサ監査と是正）

§10 の「取りこぼし監査は今後の課題」を実施した。手順は (1) 4,496 行の単一
モジュール `tools/page_parse.py` を読解単位ごとのパッケージ
`tools/page_parse/`（_text / _requirements / _evidence / _code / _constants /
_declarations / _markdown / _entities / _notes）に機械的に分割し、subset
ビルドのテーブルハッシュ一致で挙動不変を証明、(2) 実測に基づく監査で
読み取り漏れ・誤判定のクラスを特定し、実ページの golden テスト
（`tools/tests/test_page_parse_pages.py`）を先に書いてから直す、(3) 全量
再生成して収量差を測る、である。是正したクラス:

- **宣言の帰属**: 全宣言がページの主題に帰属し、主題が name-row だけの
  ページでは先頭の行名が「主題」に化けていた (windows-data-types の
  typedef 173 件が全て APIENTRY の宣言になっていた)。リーダが宣言対象を
  知っている場合は `declares` として明示し、その名前のシンボルに帰属させる。
  先頭行フォールバックは廃止 (無帰属は誤帰属より正直)。
- **未読だった MVB 形式**: CE 1.0 Books Online のプロトタイプ表
  (コード行 | `//` コメント、第一行コメントがヘッダ) と、ブロック分割
  された typedef / 対応マクロ行が読めていなかった。mvb 宣言観測
  452 → 1,336。
- **値の誤読 (事実の誤り)**: HRESULT 表の裸16進を10進として解決していた
  (CRYPT_E_INVALID_INDEX = 80091008 (10進))。文字を含む裸16進は文法で
  16進と確定し、同表の全数字8桁は列の慣行から16進として読み直す
  (列が進数を証明できない CERTSRV_/TRUST_ 表は10進のまま残し、他版の
  0x 印刷と衝突すれば conflict として現れる)。MAKE_*HRESULT(...) 形と
  浮動小数リテラルも値として保持する。reject 169 → 54。
- **版文の誤読**: 混在リスト `Windows 95, Windows NT 4.0, Windows CE 2.12`
  で NT の 4.0 が CE の上限に化けていた (362 行)。CE 文脈の数だけを数える。
  `and earlier` を上限として読む。Pocket PC / Smartphone シェル版は
  CE 基盤版への対応をコードに明記して partial とする。
- **主題の取りこぼし**: sdk-api の `X message (Y.h)` 854 ページが無主題で、
  ヘッダ要件も版文も浮いていた。種類語に message / transaction を追加。
- **宣言 kind の誤判定**: `struct`/`enum`/`interface` の語を本文のどこかで
  含むだけでその種別にしていた (accept() が struct、GetIfEntry が
  interface)。本体 `{...}` の有無と先頭形状で判定する。
- **印刷誤植の構文**: 終端が `}` に化けた Syntax ブロックも、
  Syntax 見出し配下では原文のまま引用する (修復はしない)。
- **参照側**: .def 書き出し名の stdcall/fastcall 装飾 `@N` がキーに残り、
  書き出し比較がほぼ全滅していた (一致する関数名 1,787 → 2,9xx)。

測定値 (extractor 2、schema 1 のまま): シンボル 50,740、宣言観測
111,778、解決済み CE 定数値 6,734、CE ヘッダ選出 22,586、open conflict
6,225、reject 54。被覆面は CE のみ 24,576 / 共有 4,590 / Win32 のみ
1,529 (CE 名総数 29,166 は不変; 共有の増加は WM_* 等が Win32 主題として
立つようになった分で、旧集計の過小が是正された)。
参照値との一致/不一致は 2,444 / 83 (誤読の是正で不一致が減った)。
`kbgen check` = kb OK、CI とローカルで全テーブルハッシュ一致。

監査で「問題なし」を確認した領域: 定数表の読み取り (標本 250 ページで
漏れゼロ)、Header 要件 (標本 300 で漏れゼロ)、空白崩れ判定、メンバ抽出、
呼出規約の綴り、シンボル在庫のノイズ (孤立シンボルの大半は RIL_* 等の
未番号の実名)。

残る設計事項 (schema v2 で一括する): typedef のタグ名↔別名の関係
(`typedef struct tagX {..} X;` の両名を結ぶ)、.NET マネージド層の主題化、
CeGCC 由来値の来歴レイヤ (§12)、版文の「Not supported in Windows CE」の
表現、死んでいる is_api / noise 列の整理。

## 12. 次期設計：schema v2（CeGCC 採用層・マネージド層・関係の拡張）

調査根拠は `docs/cegcc-survey.ja.md`。いずれも「文書の事実」とは混ざらない
構造を維持したまま、開発基盤生成に必要な不足を来歴付きで補う拡張である。
実装は extractor 3 / builder 2 / schema 2 として一括し、subset 検証 →
全量再生成 → kbgen check の順で進める。

### 12.1 CeGCC 採用層

- 入力: 既存 `w32api-cegcc` に `w32api-cegcc-mingw` (mingw32ce) を追加。
  reference_names の各行に「採用可否」を持たせ、表示義務のある 6 ファイル
  (winsock 系 3、GL 系 3) 由来の行は採用不可として取り込む時点で決める
  (file → 可否の表は references.py の定数。走査で再確認可能な形にする)。
- 表現: `constant_values.layer` に `cegcc` を追加する。cegcc 行が存在する
  のは「同名に ce 行が無く、採用可な CeGCC 値が存在する」場合に限る。
  根拠はページ引用ではなく reference_names 行 (source_id + locator) を
  指し、evidence 経由で原ファイル:行まで追える。`symbol_values` ビューは
  `cegcc_value_int` 等の独立列として開示し、ce 列には混入しない。
  ヘッダも同型 (`symbol_headers.layer='cegcc'`、ce 候補が無い場合のみ
  選出)。DLL 書き出しは reference_names (export) のままとし、生成層は
  libce/mingwdll を主根拠に読む (文書の Library 要件が常に優先)。
- 不変条件 (validate): cegcc 行と ce 行が同名で共存しないこと、cegcc 行の
  根拠が必ず reference 由来であること、採用不可ファイル由来の行が
  採用されていないこと。サマリは採用件数を開示する。
- 生成契約 (将来の Header/.def Gen が守る): cegcc 由来の行には
  `/* CeGCC (public domain), not in CE docs: w32api include/winuser.h:1234 */`
  の形で来歴コメントを付け、生成物冒頭にも層別の出典一覧を置く。
  値は「文書が沈黙した箇所の補完」であり、生成物利用者が文書事実と
  区別できることが採用の条件である。
- 比較表示の正常化: 符号違いの同一 32 ビットパターン (-1 と
  0xFFFFFFFF) は比較上「一致」に数える。

### 12.2 マネージド (.NET) 層の主題化

- 対象: `corpus/dotnet/` (10,657 ページ) と Learn の Embedded Compact 7。
  現状は宣言観測 3 万件超が無主題で浮いている。
- モデル: `page_subjects.layer` に `dotnet` を追加し、主題は型の完全名
  (例 `System.Net.WebClient`) とメンバ名。シンボル名空間は小文字化キー
  の慣行を踏襲しつつ、マネージド名はドットを含む表示名を保持する。
  宣言観測はページ主題へ帰属し、アセンブリ名は要件 (library)、
  .NET Compact Framework の版は可用性として読む。ネイティブ層とは
  シンボルを共有しない (名前の偶然の一致で混ざらないよう、マネージド
  主題のシンボルは layer で区別できることが要件)。
- 抽出: dotnet の Markdown フロントマタ/見出しから型・メンバ・
  アセンブリを読むリーダを _markdown / _entities に追加する
  (extractor 3)。

### 12.3 typedef の別名関係

- `symbol_relations.variant_kind` に `typedef_alias` を追加する
  (現行 CHECK は ansi/unicode のみ)。根拠は宣言引用そのもの:
  `typedef struct tagX {...} X;` のような宣言観測から決定的に導出し、
  根拠種別 `declaration` で宣言の引用を指す。Header Gen が
  タグ名と別名のどちらで参照されても辿れることが目的。

### 12.4 版文の not_supported

- 「Not supported in Windows CE」のような欠落の明言は、版文としては
  読めるが min/max が空で「無情報」と区別がつかない。`symbol_versions`
  の status に `not_supported` を追加し、CE に存在しないこと自体を
  事実として保持する (ヘッダの版ガード設計と被覆面の解釈に効く)。

### 12.5 死んだ列の整理

- `symbols.is_api` と `symbols.noise` は一度も計算されていない。
  孤立シンボルの監査 (大半は実名) を踏まえ、分類子を実働させる代わりに
  両列を削除し、表面分類は `v_symbol_surface` に一本化する。

## 13. 追記：schema v2 実施結果（2026-10-20）

§12 を実装した (schema 2 / extractor 3 / builder 2、全量再生成 +
kbgen check = kb OK、CI とローカルで全テーブルハッシュ・DB サイズ一致)。

- **CeGCC 採用層**: 常に文書が勝つという条件の下で、定数値 3,382 件 +
  ヘッダ選択 4,702 件を layer='cegcc' として採用した。値を持つ名前は
  CE 文書のみの 6,711 → 10,093、選出ヘッダを持つ名前は 22,586 → 27,288。
  採用条件は (a) CE 文書がその名前を定数として提示するが番号を印刷しない
  (値はこの集合に限る。関数名 AbortDoc と Escape コード ABORTDOC のような
  名前衝突で関数に値が付く事故を subset で検出して狭めた)、(b) 採用可な
  CeGCC 行が全会一致、(c) winsock/GL の表示義務ファイル由来は常に除外。
  mingw32ce の寄与は値 4 件のみ (CRT 値は CE 文書が概ね印刷済み) で、
  主な寄与は coredll6.def の書き出し表と比較被覆である。validate は
  「cegcc 行が文書根拠を引用しない・ce 行と共存しない・引用した CeGCC 行と
  一致する」を不変条件として検査する。gaps.tsv は文書側の欠落として
  引き続き列挙し、`(CeGCC value adopted)` の注記を付けた。
- **マネージド層**: 10,657 ページ全てに主体が付き (Namespace.Type.Member、
  8,280 シンボル)、浮いていた宣言観測 31,326 件が全て帰属した。Assembly は
  リンクファイルとして解決され (38 アセンブリ)、Version Information は
  dotnet 可用性として読む (parsed 671)。宣言は印刷言語 (lang-csharp 等) を
  markup に保持し、主 variant は C# 印刷を優先する。overload が通常形の
  ため dotnet 層では宣言 divergence を衝突化しない (署名単位の同一性は
  将来の overload-aware キー設計で扱う)。完全名の親 (名前空間→型→メンバ) は
  parent_key 化していない (キーのドット分割で辿れる。ネイティブ名への
  波及を避けて見送り)。
- **typedef 別名**: `symbol_relations` typedef_alias 2,919 件 (根拠は引用
  typedef 本身、括弧バランスで決定的に読む)。
- **版文 not_supported**: 16 行が新ステータスで記録された (「Not supported
  in Windows CE」を os_versions 値として印刷するページは corpus 全体で
  それだけであり、残りの「未対応」は散文ノート側に存在する)。
- **整理**: is_api / noise 列を削除。32 ビットパターン一致を比較で一致扱い
  とし、agree/differ は 2,455 / 82。

残る設計事項: 定数名として観測されながら CE 値も採用値も無い名前は
9,341 残る (CeGCC 内部の不一致で見送ったもの、CeGCC が持たない CE 固有
名を含む)。これは文書ハーベスト側の課題のままである。Header/.def 生成の
設計は、この KB (文書層 + cegcc 層 + reference の書き出し表) を入力に
別途起こす。
