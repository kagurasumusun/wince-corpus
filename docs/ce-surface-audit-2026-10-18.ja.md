# CE サーフェス点検: 混入・振り分け・不足・CE固有値・ビルド可能性・IDL

2026-10-18。前日の全ファイル1パス検証（`knowledge/reports/full-pass.md`）
に続く、生成物そのものの点検。問いごとに証拠と残リスクを書く。

## 1. Windows CE に存在しないものまで拾っていないか

**入る門は三つ、いずれも閉じている。**

* **entity の範囲**: `winsur/report.md` の "entities in scope" は
  `ce-only 24,666 / shared 4,495` のみ。win32（デスクトップ文書）だけが
  文書化する 1,209 entity はスコープ外（例: `AcquireCredentialsHandleA`
  は include/def のどこにも出ない）。win32 由来が surface に現れるのは
  (a) 共有 entity の A/W 別名コメント（`A/W ADDRINFOA,ADDRINFOW (CE is
  W-side)` と明記）、(b) CE ページが名前だけ文書化し prototype が
  デスクトップ側にしかない 111 宣言（`borrowed from: the Win32 reference`
  と明記、CE と同値と仮定しない）、(c) 定数の数値を win32 共有参照から
  採った 2,045 名（`verify against the CE SDK` マーク）。
* **CE が「非対応」と明言したもの**: `kb/unsupported-constants.tsv` の
  766 行（`not-supported`）は #define として出るが、必ず
  `/* NOT SUPPORTED per <集合>: <ページの文言> [証拠ページ] */`
  付き（例: `BS_DIBPATTERN`・`BF_TOPLEFT`・
  `CERT_CHAIN_REVOCATION_CHECK_CACHE_ONLY`）。ヘッダに #define だけは
  存在し実行時に拒否されるフラグ類は「文書どおり・警告付き」で残す。
  `BEGIN_SERVICE_MAP` 等の ATL 非対応マクロは数値も声明も無く未収録。
* **サンプルコードの識別子**: `data/constant-header-review.tsv` の
  `reject`（IDC_BUTTON1 等）はどのヘッダにも振り分けない。pinvoke-weak
  ヒントも「CE 文書が数値まで持つ名前」にしか効かない。

**残リスク（正直に）**: corpus＝証拠の原則上、「CE 文書に載るが実機 SDK
に無い」ものは corpus だけでは判定できない。判定できる混入は上記の
三門で全て閉じた。

## 2. ヘッダ振り分けの誤り

* 連鎖は rank 制（own-page > entity-page > constant-entity >
  win32-reference > reference-header > co-mention > family-statement >
  reviewed > pinvoke-weak）。`tools/verify-assignments.py` の硬判定クラス
  は **0**。`reference-disagrees 1,389` は CE とデスクトップで所属が
  違う正当な差＋作業リスト（ページ声明が優先される）。
* 値の競合は `kb/constant-conflicts.tsv`（33 名が到達、2 名のみ #define、
  残りは CONFLICT ブロック付きで出さない）。競合の裁定が必要な名前は
  `data/constant-header-review.tsv` の `verdict=prefer`（例: MessageBox 系
  MB_* は corpus 内で Winbase.h/Windows.h/Winuser.h が三つ巴 → Winuser.h
  に人手裁定）。
* 各 #define に証拠ページのコメントが付く。どのページもヘッダを名ざさ
  ない定数（1,980）は NoStatedHeader 作業リスト行き＝推測で入れない。

## 3. 不足

* ページ網羅: full-pass 122,186/122,186 clean（印字事実は全て記録済み）。
* 生成面の残作業（`knowledge/reports/compile-surface.md` と
  `reports/constant-header-gaps.tsv`）:
  * ツリー全体で未定義のまま使われる型 **65 種**（wstring/CTime/
    DMO_MEDIA_TYPE 等）——ページが本文を印字しないため型本文が無い。
  * エラーの残るフラグメント **84/650**（大半はページが壊れた形で印字
    した宣言の受け入れ失敗。「storage class specified for parameter」の
    連鎖1,966件）。
  * ordinal は Fpcrt の 94 個のみ（corpus が印字した表は 1 ページ）。
    それ以外の .def は @ordinal 無しの作業リスト。CE のリンクは
    ordinal 結合が原則のため、実 import library 化には SDK 側の
    .def との突合が要る（コメントで明記済み）。
  * 値競合は 15 名を `kb/constant-conflicts.tsv` で精査（#define として
    出すのは 0、CONFLICT ブロック付きで作業リスト）。

## 4. CE 固有値

* 値は **CE corpus ページの印字のみ**。同じ名前で CE とデスクトップの
  数値が違っても「CE ページの数字が常に勝ち」、CE ページが数字を持た
  ない名前だけ win32 共有参照（`verify against the CE SDK` 付き）。
  Wine/ReactOS/MinGW は一切参照しない（docs/LICENSING.md）。
* CE 固有の記号値は式のまま出る: `ERROR_PPP_NOT_SUPPORTED (RASBASE + 133)`
  → Raserror.h に `RASBASE+133` の形で（数値化しない）。
* 「Value (Hex)」列の印字 "08"/"4F" は C リテラル `0x08`/`0x4F` に
  修復（行引用は印字のまま。derived 修復として明記）。
* 世代差は `#if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN)` の枝に
  プール（`winsur/report.md` "version range"）。CE 1.0 の
  「非対応」声明は版本つきのコメントとして残す（後の CE で対応済みの
  場合、声明の版本がそれを語る）。

## 5. コンパイラ・リンカの面

到達目標の置き方（2026-10-18 指示）: **経過地点＝CeGCC と同等**、最終＝
wince 版 mingw-header/mingw-library 級（目安であり完全同等は求めない）。

* 生成物はフラグメント（SDK 全体の置換ではない）だが、ビルドの面は
  整えてある: include guard、`WinDef.h` に基底型・`__stdcall` 等の
  キーワード shim・SAL 空マクロ・UNICODE 既定・ISO C ヘッダ
  （stddef/stdarg/stdbool/stdio）・MIDL 系マクロ shim
  （`WINOLEAPI`/`WINOLEAUTAPI`/`ATLAPI`/`interface`/`FARSTRUCT`/
  `HUGEP`/`__RPC_FAR`/`afx_msg`/`MAKEFOURCC`）。
* `tools/check-compile-surface.py`（gcc プローブ、依存順をコンパイラ
  自身に修復させてから計測）: **638 フラグメント → 残エラー 29**
  （unknown-type 9 / not-C 20、11 フラグメントに集中）。証拠:
  `knowledge/reports/compile-surface.{tsv,md}`。
  この日潰した主因: セミコロン欠落の継続泄漏（`storage class specified
  for parameter` 連鎖＝フラグメント横断の最大誤認源）、MIDL 属性
  `[in, size_is(n)]`、C++ 宣言の `#ifdef __cplusplus` 隔離、enum
  メンバのカンマ欠落、`typedef X {` の struct 欠落、alias 宏
  （`#define LV_HITTESTINFO LVHITTESTINFO`）と二重定義の衝突、
  typedef 名・タグ名の両キーによる type guard。
* 残作業リスト（`compile-surface.md`）: 未定義名 6（`FileVerify*`
  はページの空白欠落ゴミ、`LVITEMW` 等の A/W 変種の整理）、
  `DISPATCH_*` 列挙子（corpus が数値を印字しないため定義不可＝
  INVOKEKIND がそれを参照）、`field has incomplete type`（outline
  のみの struct を値で持つメンバ）、enum 参照の列挙子順など 20 件。
* `link/*.def`: `LIBRARY` + `EXPORTS` を全 297 .def に整備
  （lib.exe / dlltool が import library を作る書式）。ordinal は
  Fpcrt の 94 行のみ（corpus が印字した表は 1 ページ）。
  import library の実ビルドは dlltool 必須のため `tools/` に
  ビルド手順として残す（次フェーズ: mingw-library 級）。

## 6. IDL について

* corpus の COM ページが出力に効いている形: メソッド prototype
  （`HRESULT Next(ULONG celt, IUnknown** rgelt, ...);` 等、記録済み・
  出典付き）と、MIDL ページ（`Objidl.idl`）の enum/定数。
* **残っている欠落**: interface の C ラッパ（`IUnknown` 基底＋lpVtbl
  vtable struct）はどのページも印字しないため、フラグメントでは
  interface がコメント行のみ（`/* IEnumUnknown [interface; ...] */`）。
  `IUnknown` 自体の本文も未収録。結果、BSTR/VARIANT 等の OLE 型と
  併せて COM 面は prototype の束まで。
* IID/CLSID の GUID 値: corpus は GUID を本文の例として言及するだけで
  表では印字しない（wce50conCLSIDKey 等のレジストリ説明）。推測で埋め
  ない方針のため GUID 定数は無い（不足として明示）。
* 次の一手（設計は決まっている）: ページが印字するメソッド列から
  vtable ラッパを **DERIVED** として合成（member outline と同じ扱い、
  出典コメント付き）＋ IUnknown の 3 メソッドを基底として合成。GUID は
  表で印字するページが出てきたら読む。

---
点検の再現: `python3 tools/check-compile-surface.py` /
`python3 tools/verify-assignments.py` / `python3 tools/full-pass.py`。

---

## 追記（2026-10-18・FIX-ALL 完走）: 残 13 → **残 1**（never-defined 0）

審査後の潰し込み（データ駆動の未解決 enum 定数のコメント化＋参照の値スコープ修理、
derived-forward の matching-tag 形とファイル検証定数のグルー拒否、依存順修理の全使用箇所対応、
P-family の本体テキスト条件化、マクロ・エイリアス解決ガード、フラグメント内型の
トポロジカル整列、ビットフィールドのセミコロン・カンマ・早期 `};`・二重 `*X` 尾の派生修理、
VB/Java/MIDL 属性残骸の抽出拒否）により、whole-TU 実測は
**5,520（審査時）→ 29 → 21 → 13 → 2 → 1**、never-defined は **0**、.def は **297/297**。

残る 1 件は Oaidl.h の CLIPDATA 一行本体。ページ印刷の `//` コメントが同行のメンバ・閉じ括弧を
飲み込む類で、コメント/コード混在一行の復元は誤爆が大きいため保留。これが樹上で唯一、
コンパイラが文句を言う箇所。

---

## FIX-ALL 追記（2026-10-18 第2セッション）

再基準（`gcc -fsyntax-only -std=gnu99 -fshort-wchar` 全TU）: **residual 121 / never-defined 4 / .def 297/297**。
前回の「13 residual」は前方ブロックの欠落型が早期エラーで後続を隠していた状態で、本測定は素の全体像。

### 対応済み（本セッション）
1. **`//`コメント行結合の連鎖（GetPages クラス）**: `strip_midl_attributes` が行結合してから `//` 剥がしが `);` ごと食っていた。c_decl_text 冒頭へ移動＋開括弧時の末尾コード保存。
2. **`BOOL WINAPI *Name(` → `BOOL (WINAPI *Name)(`** 関数ポインタ修復。
3. **enumメンバ位相ソート**（`X = Y` 前方参照、bare メンバ・詰め込み本文対応）。
4. **派生定数** (`data/derived-constants.tsv`): PWLEN/UNLEN/DNLEN/CNLEN/NNLEN/UNCLEN/RMLEN/RAS_Max* をピン留め参照 w32api-cegcc（sources/）から出所付きで Netui.h/Ras.h へ。
5. **定数ギャップ** (`data/constant-gaps.tsv`): NETUI_LCD_DIAL_MOD_LEN / VIODEVICENAMESIZE はコーパスどこにも値の記載なし → メンバを DERIVED 注記付き省略（捏造せず）。
6. **quality_filters**: 余分語プロトタイプ（`BOOL TranDeInit Library`）、教科書サンプル型（VeryLongClassNameA/Sample/Float/Interface）、名前欠落プロトタイプ（`void WINAPI (`）、STDAPI二重戻り型修正。
7. **type_mentions_unknown の typedef 尾名誤判定修正**（`*PDNS_A_DATA` が自分の本文を unknown と判定して本文を全て落としていた）。
8. **IP4_ADDRESS** を base-types（WinDef）へ（w32api-cegcc windns.h `typedef DWORD IP4_ADDRESS;`）。
9. worklist 一括処理で never-defined 54→4（u_char/u_short/u_long の実 typedef、IeXdi*/DNS_*/BINDINFO 等の前方行、junk 行削除）。

### 残課題（次ターン継続）
- **Windns.h 58**: DNS_RECORD 共用体が DNS_*_DATA 本文より先にemitされる（extra_type_ds が主バケットの位相ソート後に追加される経路問題。マージ実装は Key 形状差で崩れたため保留）。本文の前に並べ直しが必要。
- extapi.h 13（`dwParam1` 再定義・空宣言）、sms.h 8、wap.h 7（ビットフィールド）、af_irda.h（AttribUsrStr 前欠落）、Sdcardddk/pwinuser（`typedef` 前の `;` 欠落）。
- 競合プロトタイプ×4（OnRequestProgress/RequestContacts/GetBestInterfaceEX×2）は複数行のため単一行専用の競合抑止が効かない。複数行対応が必要。
- A/Interface/Z の junk 使用がまだ1件ずつ（使用側 decl の reject）。
- Replfilt `_MAX_PATH`/`_MAX_FNAME`/`_MAX_EXT`（CE定数の値確認→定数行）。
- Msgstor2 `FolderArray` 不完全型フィールド。
