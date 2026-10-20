# 値の情報源調査 (CeGCC と周辺候補)

KB の事実は corpus の文書が印刷した内容だけである。文書が数値を印刷
しない名前は KB では未番号のままであり、開発基盤 (Header/.def 生成) には
不足する。本書は「文書が沈黙している箇所に限り、来歴を明示して外部の値を
採用する」ための候補調査であり、各候補について入手経路・ライセンス・
来歴・信頼性較正・採否を記録する。採用モデル自体は
`docs/kb-design.ja.md` §12 が定める。

調査日: 2026-10-20。KB 側の数値は extractor 2 ビルドで測定。

## 1. CeGCC w32api (採用候補の本命)

- 対象: CeGCC プロジェクト (Windows CE 向け GCC クロス開発環境) の
  w32api モジュール。CE 向けに調整された Win32 ヘッダ群と、CE の
  システム DLL 用 import 定義 (`lib/libce/*.def`、`lib/*.def`)。
- pinned 取得物: `sources/w32api-cegcc/` (MaxKellermann/w32api ミラー
  `8e64b608…`、SVN trunk ヘッド 2016-10-25 とモジュール単位で一致確認済み、
  sha256 は同所 PROVENANCE.md)。
- 来歴の鎖:
  1. classic MinGW w32api (当初 Anders Norlander、後 MinGW Developers)。
     MinGW の寄与方針は「公開文書のみを情報源とし、Microsoft の SDK
     ヘッダから一切コピーしない」ことがメーリングリスト上で管理者により
     明言されている (mingw.org は public-domain の出所を要求し、MS ヘッダを
     情報源から排除する、という整理)。したがって値は MSDN 等の公開文書に
     基づく独立著作である。
  2. CeGCC がこれを CE 向けに適応 (Pedro Alves、Danny Backx ら)。
     `_WIN32_WCE` による版条件、CE に無い API の削除、CE 固有の追加。
     `ChangeLog.ce` の各エントリは MSDN 照合の痕跡を含む
     (例: 「Not present in MSDN ... It's on CE.NET」)。
  3. ただし適応は不完全であり、デスクトップ由来の定義が CE と異なる
     まま残る箇所がある (§3 の不一致分類を参照)。値の体系は
     「文書ベース、ただし CE 固有差分の取りこぼしあり」として扱う。
- ライセンス棚卸し (2026-10-20、tarball 内 include/ 再帰 369 件 +
  .def 186 件を再走査): パッケージ全体に "THIS SOFTWARE IS NOT
  COPYRIGHTED / public domain" の宣言。個別表示あり 125 件も
  public domain。例外は 6 件のみ (winsock 系 3 件 = BSD 式
  UCB/DEC、GL 系 = Mesa / SGI FSL-B)。Microsoft 表示・GPL は不在。
  再利用に表示義務が絡む 6 件は採用範囲から除外する (winsock 値は
  CE 文書が豊富に印刷するので実害は小さい)。
- 較正: CE 文書値と両方ある名前での一致率 96.5% (2,444 一致 / 83 不一致
  比較、現ビルド)。不一致の内訳は §3。

## 2. CeGCC mingw モジュール (mingw32ce) — 採用候補

- 対象: MinGW ランタイムを CE (coredll CRT) 向けに適応したモジュール。
  `include/` (errno / float / fcntl / limits / sys/ 等の C ランタイム
  ヘッダ 60 件) と `coredll.def` / `coredll6.def` / `crtdll.def`。
- pinned 取得物: `sources/w32api-cegcc-mingw/` (jkoan/cegcc-mingw
  `cd5f3e64…`、2016-10-25、sha256 は同所 PROVENANCE.md)。
- ライセンス: MinGW runtime の DISCLAIMER による public domain。
  include/ + *.def の走査では public domain 表示のみ、GPL 不在。
  内部実装ヘッダ (mingwex/gdtoa、cephes) は API 面ではないので範囲外。
- 価値: CE 文書が印刷しない CRT 系の値 (errno コード、`_O_*` フラグ、
  `DBL_*` 等) と、CE 6.0 の coredll 書き出し表 (`coredll6.def`、
  w32api 側 `libce/coredll.def` と同期管理されている旨の注記あり)。
  寄与量は references 取り込み後に測定する。

## 3. 不一致 83 件の分類 (CE 文書値 vs w32api 値)

両方に値があるのに食い違うケースを全件分類した。採用はこれらに
一切触れない (文書が勝つ) が、信頼性の性格を示す:

1. **CE 固有値として正しい文書側** (w32api がデスクトップ値のまま):
   D3DM `*_FORCE_DWORD` = 0x7fffffff (CE の Direct3D Mobile は
   符号付き enum 強制)、DVD_MENU_* の再番号、HTTP_QUERY_MAX=75
   (CE WinInet 拡張)、MAX_PATH=128 等。採用条件「文書が沈黙する
   名前だけ」を正当化する実例。
2. **文書側の印刷ミスが疑われるもの** (w32api が実値と一致):
   `*_CHARSET` が `0x178` のように10進数字へ 0x を付けて印刷
   (実値 ARABIC_CHARSET=178=0xB2)、HTTP_STATUS_PAYMENT_REQ=0x402
   (実値 402)。文書が勝つ規則は維持するが、これは人手レビュー
   ワークリストに値する (レビューで「文書誤植」と確定すれば
   生成時に注記できる)。
3. **同一ビットパターンの符号表記差**: EXCEPTION_CONTINUE_EXECUTION
   0xffffffff vs -1。実質一致であり、比較表示の正常化課題。
4. **同名異概念**: APC_LEVEL (CE の優先度表 249 とデスクトップ
   KIRQL 1)。名前キー衝突であり、採用層でも衝突しうるため、
   採用値はヘッダ文脈付きで保持し生成時に混ざらないようにする。

## 4. 評価して採用しない候補

- **OpenNETCF Smart Device Framework**: .NET CF の相互運用定数を
  豊富に含むが、リポジトリに SPDX ライセンス表示が無く、歴史的には
  共有ソース系ライセンス。再配布可能な条件が確認できないため不採用。
- **XDA itsme の celib / itsutils 同梱ヘッダ**: 著名な CE 逆向き
  ライブラリだが、ライセンス確認可能な正規ミラーを特定できず不採用。
- **gweslab/cerf, wcecl 等の CE 互換レイヤ (再実装)**: Wine 類であり、
  値の来歴が再実装由来。本リポジトリの方針 (文書 + 明示来歴) に
  合わないため不採用。
- **PInvoke (AArnott)**: MIT だが CE 対象ではない (デスクトップ
  Win32)。従来どおり比較材料に留める (`sources/dotnet-pinvoke/`)。
- **Wine / ReactOS / MinGW-w64**: 従来方針どおり参照禁止
  (MinGW-w64 は出所方針が classic MinGW と異なる点も §1 の整理が示す)。

## 5. 文書側の残り (採用しても埋まらない分)

採用後も 8,499 名前 (12,698 − 4,199) は未番号のまま残る。内訳は
RIL_* / CM_* 等の CE 固有 API のパラメータ定数が多く、CeGCC も
カバーしていない。ここは文書ハーベストの拡張でしか埋まらない
(特に CE 2.0 SDK 文書は corpus にほぼ存在しないことが監査で判明)。
`kb/reports/gaps.tsv` が収集ワークリストであり、採用層はその
代替ではない。

## 6. 採用の測定値

見込み (extractor 2 時点): CE 未番号 12,698 名のうち w32api が数値を
持つもの 4,199、CE ヘッダ候補の無い名前に w32api がヘッダを名指す
もの 6,537。

確定値 (schema 2 全量ビルド、2026-10-20): 採用した定数値 3,382 件
(w32api 由来 3,381 名 + mingw 由来 4 名)、採用したヘッダ選択
4,702 件。見込みとの差は、採用条件の厳格化による: 値は「CE 文書が
定数として提示した名前」に限る (AbortDoc 関数 vs ABORTDOC 定数の
ような名前衝突を subset で実測して除外)、CeGCC 行の全会一致を要求、
ヘッダも一意な場合のみ。mingw の define は 1,087 件取り込んだが
CRT 値は CE 文書が概ね印刷済みで新規採用は 4 件に留まる (float.h の
DBL_* はコンパイラ組込み由来で mingw ヘッダに数値が無い)。mingw の
実寄与は coredll.def / coredll6.def / crtdll.def の書き出し 1,616 件
であり、.def 生成層の入力になる。

採用後も値の無い定数名は 9,341 残る。内訳は RIL_*/CM_* 等の CE
固有 API 定数 (CeGCC 未カバー) が主であり、ここは文書ハーベストで
しか埋まらない (§5)。

## 7. CeGCC の CE 適合の情報源 (2026-10-20 追跡調査)

§1 で確認したのは w32api の*上流* (classic MinGW) であり、CeGCC が
デスクトップ用ヘッダを Windows CE に適合させる作業そのものの
情報源は別問題である。ここでは CeGCC 自身の一次資料から後者を
追跡した。

**プロジェクト自身の方針表明** (CeGCC 公式 FAQ、cegcc.sourceforge.net、
2026-10-20 取得):

- FAQ #11 (不足識別子の情報源): 良い情報源は「(この順で) MSDN の
  ような信頼できるドキュメンテーション、公開されているプログラ
  ミング例」。悪い情報源として「Microsoft の include ファイルの
  コピー — それは著作物である」を明示的に拒否している。
- FAQ #12 (適合の方法): CE で異なる宣言は `#ifdef _WIN32_WCE` で
  囲んだ CE 側の形に置き換える、という作業パターンが明記されて
  いる。
- docs/details.html: ヘッダは「MinGW プロジェクトの w32api モジュール
  から借用」したこと、`_WIN32_WCE` の意味論 (CE 4.20 ↔ 0x0420) が
  記されている。

**作業記録の裏付け** (固定した w32api tarball 内の `ChangeLog.ce`、
112 エントリ、Danny Backx 48 / Pedro Alves 37 が主):

- 値・ファイルの導入に MSDN を引用する記録が繰り返し現れる:
  `STACK_SIZE_PARAM_IS_A_RESERVATION` は「MSDN で見つけた値で定義」、
  `service.h` は「MSDN に記載のとおり」(型の誤り 1 件は「MSDN が
  間違っている」として修正)、`todaycmn.h` は「MSDN ドキュメント
  (msdn2 aa454291) に基づく」、`commdlg.h` の修正は ms959872 参照。
- 書籍由来は 1 件: `aygshell.h` の `IDS_SH*` 文字列 ID は「Boling の
  本の値」(Douglas Boling, *Programming Microsoft Windows CE*)。
- SDK・コピーを情報源とする言及は 0 件。大半のエントリはデスク
  トップ専用宣言のガード/除去と CE 専用宣言の追加である。
- ヘッダ内コメントの MSDN 引用は 87 行あり、CE 時代のドキュメント
  セットのパス (wceui40, wcekernl, wcesdkr, wcehardware5) を含む
  (aygshell.h, kfuncs.h, ceconfig.h, mapidefs.h)。
- CeGCC が CE のために書き起こしたヘッダ: aygshell.h, ceconfig.h,
  devload.h, kfuncs.h, msgqueue.h, notify.h, pm.h, service.h,
  todaycmn.h。

結論: **CeGCC の CE 適合層の情報源は MSDN の CE ドキュメント**
(補助として出版書籍の事実情報とコミュニティのテスト) であり、
Microsoft の include ファイルや SDK ソースの複写ではない、という
プロジェクトのパブリックドメインの立場と整合する。これは §8 の
ガード文脈の信頼性の根拠でもある: `#ifdef _WIN32_WCE` の内側は、
適合者が MSDN の CE 文書を見て「CE ではこうなる」と判断した行
である。

## 8. ガード文脈 (schema 3) — 採用規則の CE 分岐対応

FAQ #12 のパターンは、同じ名前が CE 分岐とデスクトップ分岐で
異なる値を印刷する形を生む (例: `THREAD_PRIORITY_TIME_CRITICAL`
は CE 分岐で 0、デスクトップ分岐で 15。CE のスレッド優先度は
0–7 の尺度)。schema 2 の全会一致規則はこの分離を正しく拒否して
いたが、同時に (a) CE 分岐の値を採用できず、(b) デスクトップ
分岐*だけ*が印刷する値 (CE の CreateProcess が持たない
`CREATE_NEW_PROCESS_GROUP` 等 3 件) を誤って採用していた。

schema 3 は `reference_names.ce_guard` として各 define 行の
`_WIN32_WCE` ガード文脈を記録する (`wce>=0x420` / `wce` /
`not-wce` / `''` 無ガード)。分類は保守的なプリプロセッサ・スタック
機械で、証明できない条件 (他マクロとの `||` 混合等) は無ガードに
落とす。`#if 0` の死コードは `not-wce` (= CE コンパイルで除外)。
版数下限のリテラルは 16 進 (`0x0420`) と 10 進 (`400`) の両表記が
あり、後者は版数数字そのものとして読む (service.h 自身が「Use
400, not 0x0400」と注記している)。

測定 (schema 3 ビルド、CeGCC 両モジュールの define 行): 無ガード
45,027、`wce>=…` 194、`wce` 83、`not-wce` 59。CE 文書値との較正
一致率は CE ガード付き行 29/29 = 100%、無ガード行 96.5%
(1,975/2,046) で、ガード文脈は実質的な信号である。

採用規則の変更: `not-wce` 行は採用に一切参加しない。CE 分岐行が
存在すればその行集合だけで一致を判定する (版数下限ごとに値が
割れる場合は単一スコープで表せないため採用しない)。CE 分岐が
無ければ従来どおり無ガード行の全会一致。validate.py は「'cegcc'
層の証拠が `not-wce` 行を引用しない」ことを不変条件として検査
する。

確定値 (schema 3 全量ビルド、2026-10-20、`kbgen check` = kb OK):
採用した定数値 3,385 件 (schema 2 の 3,382 件から純増 3)、採用した
ヘッダ選択 4,699 件 (同 4,702 件)。中身の変化が本質である:
誤採用 3 件 (`CREATE_NEW_PROCESS_GROUP`,
`CREATE_UNICODE_ENVIRONMENT`, `DETACHED_PROCESS`) が消え、分岐で
値が割れて採用できなかった 6 件 (`THREAD_PRIORITY_ABOVE_NORMAL`,
`THREAD_PRIORITY_HIGHEST`, `THREAD_PRIORITY_NORMAL`,
`THREAD_PRIORITY_TIME_CRITICAL`, `DM_DISPLAYORIENTATION`,
`DMDO_270`) が CE 分岐の値で採用された。値採用のうち 111 件は
CE 分岐行 (版数下限つき 73 + `wce` 38) を直接の根拠とする。
代表例: `THREAD_PRIORITY_TIME_CRITICAL` は Win32 層の文書値が
15、CeGCC の CE 分岐から採用した値が 0 で、層を分けて両方が
引ける。

## 9. ハーベスト拡張の現況 (2026-10-20)

§5 の残り (RIL_*/CM_* 等) と CE 2.0 文書の薄さへの対処状況:

- **Learn の embedded 名前空間は枯渇済み** (全列挙 would-fetch=0、
  2026-10-15)。追加の文書はメディア/ミラーレーンからしか来ない。
- **メディアレーン**: `queues/media.tsv` に 4 媒体を
  inventory-scratch として追加した (CE 5.0 CD5 / CE 6.0 R2 /
  CE 6.0 R3 / CE 6.0 Platform Builder SP1)。archive.org の
  識別子とファイル形式は 2026-10-20 にアイテムページで確認済み。
  Platform Builder 媒体は shared source も含むため、棚卸し結果を
  読むまで import には進まない (取り込むのは文書ページのみ、
  という既存方針のとおり)。
- **CE 2.0 SDK Books Online** は MPLATSDK.20 の展開自体は完了して
  いるが、中身が InfoViewer `.ivt` (10 冊) でデコーダが無いこと
  が真のブロッカ (sources/README.md)。unshield の問題ではない。
- **datadungeon の MSDN Library June 1998** (msdn-1998-06) は
  2026-10-20 に目次を確認したが CE セクションが存在しない
  (当時の CE 文書は SDK 同梱のみ)。同じミラーの April 2000 版の
  CE クロールが継続中 (queues/mirrors.tsv)。
- **Windows Mobile 文書** (bb* トピック) は Learn の
  previous-versions に移行されていない (bb416652 を 2026-10-20 に
  確認、404)。RIL/CM の完全な文書セットは MSDN Library
  ディスク (2001–2010) 側に求めるのが本命であり、上の媒体棚卸し
  とは別レーンとして残る。
