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

## 6. 採用の測定値 (現ビルド、references 既取り込み分から算出)

- CE で未番号の名前 12,698 のうち、w32api が数値を持つもの 4,199
  (winsock/GL の除外後も同数)。
- CE ヘッダ候補が無いシンボルのうち、w32api がヘッダを名指すもの
  6,537。
- KB の関数名のうち、`libce/*.def` の書き出しと一致するもの 1,512
  (デスクトップ lib/*.def まで広げると 2,934、ただし CE の .def
  生成には libce 側を主根拠にする)。
- mingw モジュールの寄与 (CRT 値、coredll6) は取り込み後に追記する。
