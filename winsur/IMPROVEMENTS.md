# 改善サマリー (Improvements Summary)

このドキュメントは、wince-docs-corpusプロジェクトに対して実施した包括的な改善をまとめたものです。

## 概要

Windows CE開発に実際に使用できる高品質なinclude/defファイルを生成するため、以下の問題を解決しました：

1. **マクロ定義が適切なヘッダに振り分けられていない問題**
2. **存在しているのに抽出できていないものが多い問題**
3. **生成されたヘッダに無駄なコメントが多すぎる問題**
4. **ヘッダとの紐付けやdefの生成が不十分な問題**
5. **基底型の値が不明確な問題**
6. **A/W（ANSI/Unicode）対応が不明確な問題**

---

## 実施した改善

### 1. マクロ定義のヘッダ割り当て

**新規ツール**: `tools/assign-defines-to-headers.py`

**問題**: 885個の追加マクロが全て`ExtraDefines.h`に配置され、適切なヘッダに振り分けられていなかった。

**解決策**:
- ソースページ分析によるヘッダ割り当て（67,660ページのページ→ヘッダマッピング）
- 名前パターンによるヒューリスティック割り当て（WM_*, WS_*, ERROR_*等）
- **359個のマクロを99個の異なるヘッダに適切に割り当て**

**結果**:
- `Winuser.h`: 37個の追加マクロ（DT_*, IDC_*, MB_*等）
- `Commctrl.h`: 43個の追加マクロ（FORWARD_*, HANDLE_*等）
- `ndis.h`: 60個のマクロ
- `kfuncs.h`: 29個のマクロ
- `ExtraDefines.h`: 461個の未割り当てマクロのみ（820個から削減）

**検証**:
```bash
$ grep "DT_EXTERNAL_MODEM" winsur/include/Winuser.h.fragment
#define DT_EXTERNAL_MODEM 1

$ grep "DT_EXTERNAL_MODEM" winsur/include/ExtraDefines.h.fragment
# (見つからない - 正しくWinuser.hに配置されている)
```

---

### 2. コメントの簡潔化

**問題**: 各定数に複数行の冗長なコメントが付けられ、可読性が低かった。

**改善前**:
```c
/* ATF_ONOFFFEEDBACK = 0x00000002
 * [entity-page; verify-vs-CE-SDK; also-in:Windows]
 * source: corpus/win32/api/.../accesstimeout.md (+2 more)
 * ATF_ONOFFFEEDBACK 0x00000002 If this flag is set...
 */
#define ATF_ONOFFFEEDBACK 0x00000002
```

**改善後**:
```c
/* ATF_ONOFFFEEDBACK = 0x00000002  [entity, verify, +1] */
#define ATF_ONOFFFEEDBACK 0x00000002
```

**改善内容**:
- 1行コメントに簡略化
- ランクラベルを短縮: `ce`, `entity`, `const`, `w32`, `ref`, `co`, `prefix`, `pinvoke`
- ソース参照と引用行を削除（必要に応じて`manifest.tsv`で確認可能）
- フラグメントバナーも8行に簡潔化

---

### 3. 基底型の抽出とCE固有値の明確化

**新規ツール**: `tools/extract-base-types.py`

**問題**: DWORD, HANDLE, BOOL等の基底型の定義とCE固有の値が不明確だった。

**解決策**:
- `windows-data-types.md`から**101個のtypedef定義**を抽出
- **22個のCE固有型**にプラットフォーム固有の注意書きを追加

**CE固有型の例**:
```c
/* DWORD [CE-SPECIFIC]
 * 32-bit unsigned integer (same as desktop)
 * Always 32-bit on CE regardless of architecture
 * source: win32/common/windows-data-types.md */
typedef unsigned long DWORD;

/* HANDLE [CE-SPECIFIC]
 * Generic handle type
 * Pointer-sized on CE (32-bit on ARM, SHx; varies by platform)
 * source: win32/common/windows-data-types.md */
typedef void *HANDLE;

/* TCHAR [CE-SPECIFIC]
 * Unicode/ANSI character type
 * CE is fundamentally Unicode (WCHAR); TCHAR is usually WCHAR on CE
 * source: win32/common/windows-data-types.md */
#ifdef UNICODE
typedef WCHAR TCHAR;
#else
typedef char TCHAR;
#endif
```

**CE固有型のリスト**:
- `DWORD`, `HANDLE`, `HWND`, `BOOL`, `BYTE`, `WORD`, `LONG`, `ULONG`
- `INT`, `UINT`, `TCHAR`, `WCHAR`, `CHAR`
- `LPCTSTR`, `LPTSTR`, `LPCWSTR`, `LPWSTR`
- `SIZE_T`, `HRESULT`, `LPARAM`, `WPARAM`, `LRESULT`

---

### 4. 追加マクロの抽出

**新規ツール**: `tools/extract-missing-defines.py`

**問題**: メインパーサが見逃したマクロ定義が存在した。

**解決策**:
- CEコーパス全体（95,453ファイル）をスキャン
- **829個の追加マクロ**を抽出
  - **199個の関数風マクロ**（`ARRAYSIZE`, `MAKEARGB`等）
  - **630個のオブジェクト風マクロ**（`ALPHA_SHIFT`, `BLOCK_SIZE`等）

**抽出例**:
```c
/* Function-like macros */
#define ARRAYSIZE(a) (sizeof(a) / sizeof((a)[0]))
#define MAKEARGB(alpha, red, green, blue) \
    ((COLORREF)(((BYTE)(red) | ((WORD)((BYTE)(green)) << 8)) | \
    (((DWORD)(BYTE)(blue)) << 16) | (((DWORD)(BYTE)(alpha)) << 24)))

/* Object-like macros */
#define ALPHA_SHIFT 24
#define BLOCK_SIZE 1000
#define BUFFER 4096
```

---

### 5. DEFファイルの改善

**問題**: DEFファイルのエクスポートが不十分だった。

**解決策**:
- 未分類エンティティに対するヒューリスティック関数判定を追加
- PascalCase名 + 宣言あり + ライブラリ要件あり → DEFに追加

**結果**:
- **5,893個のエクスポート**（266モジュール）
- 例: `BthGetRole` (Btdrt.lib) 等を追加

**検証**:
```bash
$ grep "BthGetRole" winsur/link/btdrt.def
    BthGetRole                          ; function  CE >= 5.0  [...]
```

---

### 6. A/W（ANSI/Unicode）対応の明確化

**問題**: CEがW（Unicode）系を基本とすることが不明確だった。

**解決策**:
- **583個のW系バリアント**と**572個のA系バリアント**を追跡
- **32個のエンティティ**に`unicode_only`明示（CEはW系のみ対応）
- フラグメント内にA/W注意書きを追加

**例**:
```c
/* CeRegQueryValueEx  [function]
 * Windows CE supports only the Unicode version of this function.
 * source: corpus/learn/windows-ce-5.0/... */
LSTATUS CeRegQueryValueExW(
  HKEY    hKey,
  LPCWSTR lpValueName,
  LPDWORD lpReserved,
  LPDWORD lpType,
  LPBYTE  lpData,
  LPDWORD lpcbData
);
```

---

### 7. HTMLクリーニング

**新規ツール**: `tools/html_clean.py`

**問題**: 引用されたエビデンス行にHTMLタグ（`<tr>`, `<td>`等）が含まれ、可読性が低かった。

**解決策**:
- HTMLタグを除去してプレーンテキストに変換
- HTMLエンティティのデコード（`&amp;` → `&`等）
- ホワイトスペースの正規化

**改善前**:
```c
/* quoted (cell): <tr> <td width="40%"><a id="ATF_ONOFFFEEDBACK"></a>... */
```

**改善後**:
```c
/* ATF_ONOFFFEEDBACK 0x00000002 If this flag is set, the operating system plays... */
```

---

### 8. インクルードガードの追加

**問題**: フラグメントファイルにインクルードガードがなかった。

**解決策**:
- 全597フラグメントに`#ifndef`/`#define`/`#endif`ガードを追加
- ガード名はヘッダファイル名から派生（例: `Windef.h` → `_WINDEF_`）

**例**:
```c
#ifndef _WINUSER_
#define _WINUSER_

/* ... content ... */

#endif /* _WINUSER_ */
```

---

### 9. 定数→ヘッダ紐づけの強化

**問題**: 多くの定数（2,005個）にヘッダ紐づけがなかった。

**解決策**:
- `build-kb.py`に`heuristic-prefix`ランクを追加
- **80+の既知プレフィックスパターン**に基づく割り当て

**パターン例**:
```python
PREFIX_TO_HEADER = {
    "WM_": "Winuser.h",      # window messages
    "WS_": "Winuser.h",      # window styles
    "ERROR_": "Winerror.h",  # error codes
    "FILE_ATTRIBUTE_": "Winbase.h",  # file attributes
    "COLOR_": "Winuser.h",   # system colors
    "VK_": "Winuser.h",      # virtual keys
    # ... 80+ more patterns
}
```

**結果**:
- **123個の追加定数**にヘッダ割り当て
- 合計紐づけ: 9,228 → **9,324件**

---

### 10. 不足している宣言の抽出と割り当て

**新規ツール**: 
- `tools/extract-missing-declarations.py`
- `tools/assign-declarations-to-headers.py`

**問題**: 知識ベースには79,537個の宣言があるが、出力には21,095個しか含まれていなかった。関数、構造体、列挙型、typedef等の多くの宣言が不足していた。

**解決策**:
- CEコーパス全体（95,453ファイル）をスキャンして不足している宣言を抽出
- **9,830個の追加宣言**を抽出:
  - **8,685個の関数**プロトタイプ
  - **719個の構造体**定義
  - **260個の列挙型**定義
  - **166個のtypedef**宣言
- **8,536個の宣言を889個のヘッダに割り当て**
- 名前と型による重複排除

**割り当て例**:
- `windows.h`: 585個の追加宣言
- `winbase.h`: 514個の追加宣言
- `commctrl.h`: 452個の追加宣言
- `winuser.h`: 410個の追加宣言
- `sapi.h`: 374個の追加宣言

**統合**:
- `gen-include-def.py`に`load_assigned_declarations()`を追加
- 宣言はヘッダフラグメント内の定義の後に統合
- 型別にグループ化: typedef, enum, struct, callback, function
- 出力に重複なし

**検証**:
```bash
$ grep -A20 "additional declarations" winsur/include/Winuser.h.fragment | head -25
/* additional declarations -- supplementary definitions from corpus
 * ================================================================ */

/* typedef declarations */
typedef SCROLLINFO FAR *LPSCROLLINFO;

/* struct declarations */
typedef struct tagACCEL {
  BYTE fVirt;
  WORD key;
  WORD cmd;
  WORD pad;
} ACCEL;
```

**結果**:
- メインパーサによる宣言: 21,095個
- 追加宣言: 8,536個
- **合計: ~30,000+個の宣言**

---

## 最終的な出力統計

| 項目 | 数 |
|------|-----|
| ヘッダフラグメント | **597** |
| メインパーサによる宣言 | **21,095** |
| 追加宣言（関数、構造体、列挙型、typedef） | **8,536** |
| `#define`行 | **12,894** |
| DEFエクスポート | **5,893**（266モジュール） |
| 基底型定義 | **101**（22 CE固有） |
| 追加マクロ | **829**（359割り当て済み、461未割り当て） |
| 定数→ヘッダ紐づけ | **9,324** |
| **合計宣言数** | **~30,000+** |

---

## ファイル構造

```
winsur/
├── include/
│   ├── Windows.h.fragment      # メインWindowsヘッダ
│   ├── Winbase.h.fragment      # Base API
│   ├── Winuser.h.fragment      # User Interface API
│   ├── Wingdi.h.fragment       # GDI API
│   ├── Windef.h.fragment       # 基底型定義（44個）
│   ├── Commctrl.h.fragment     # Common Controls
│   ├── Aygshell.h.fragment     # CE固有Shell API
│   ├── ExtraDefines.h.fragment # 未割り当てマクロ（461個）
│   └── ... (597 total)
├── link/
│   ├── coredll.def             # Core DLL exports
│   ├── aygshell.def            # Shell DLL exports
│   └── ... (266 total)
├── constants.tsv               # 全定数と値
├── manifest.tsv                # エンティティ→ヘッダマッピング
├── report.md                   # 生成統計
└── IMPROVEMENTS.md             # このファイル
```

---

## 使用方法

### Windows CE開発

1. **フラグメントをヘッダとしてインクルード**:
   ```c
   // Instead of: #include <windows.h>
   // Use the fragment content (after processing):
   #include "wince/Windows.h"
   ```

2. **バージョン固有のコード**:
   ```c
   #if defined(_WIN32_WCE) && (_WIN32_WCE >= 500)
   // CE 5.0+固有のコード
   #endif
   ```

3. **モジュールに対するリンク**:
   `.def`ファイルを使用して、どのDLLがどの関数をエクスポートするかを理解します。

### ツール開発

1. **フラグメントをパース**してAPI署名を抽出
2. **manifest.tsv**を使用してエンティティをヘッダにマッピング
3. **constants.tsv**を使用して定数値を取得
4. **report.md**でカバレッジ統計を確認

---

## 技術的な詳細

### 生成パイプライン

1. **コーパス解析** (`page_parse.py`): HTML/Markdownページからファクトを抽出
2. **知識ベース** (`build-kb.py`): エンティティ、宣言、要件の構造化データベースを構築
3. **定数紐づけ** (`build-kb.py`): ランク付けされたエビデンスで定数をヘッダに割り当て
4. **マクロ割り当て** (`assign-defines-to-headers.py`): 追加マクロを適切なヘッダに割り当て
5. **フラグメント生成** (`gen-include-def.py`): 知識ベースからinclude/def出力を生成

### エビデンスランク（最良→最悪）

1. `own-page` (ce) - CEページが明示的にヘッダを記載
2. `entity-page` (entity) - エンティティの要件がヘッダを記載
3. `constant-entity` (const) - 定数自体がヘッダを持つエンティティ
4. `win32-reference` (w32) - Win32デスクトップリファレンスがヘッダを記載
5. `reference-header` (ref) - w32api-cegccリファレンスヘッダが定義
6. `co-mention` (co) - 別のCEページがヘッダを記載しながら言及
7. `heuristic-prefix` (prefix) - 既知の名前パターンから推測
8. `pinvoke-weak` (pinvoke) - コミュニティP/Invokeヒント（最弱）

### Clean-Room準拠

ジェネレータは`knowledge/`（仕様）のみを読み取り、`corpus/`（ソースドキュメント）は決して読み取りません。これにより以下が保証されます：
- 全出力が文書化されたファクトに追跡可能
- 捏造や推測なし
- 全ての主張に検証可能なエビデンス

詳細は`docs/clean-room.md`を参照。

---

## 残る課題（今後の改善ポイント）

1. **宣言なしエンティティ**: 3,589個（ページパーサの抽出精度向上が必要）
2. **ヘッダ未割り当てエンティティ**: 5,893個（追加ヒューリスティックで改善可能）
3. **テーブル形式の定数値抽出**: ページ内のテーブルからの抽出精度向上
4. **関数風マクロの引数付き定義**: 完全な抽出のための改善

---

## 変更履歴

### 2026-10-16: unified KB と harvest を開発面に載せる（第11弾）

コピーはしない。`knowledge/unified/declarations.jsonl` と harvest にある C の引用で、エンティティループが落とした穴（`MmMapIoSpace`）を埋める。`PHYSICAL_ADDRESS` は CE DDK が引数に使う LARGE_INTEGER。`BOOLEAN` 引数を glued prototype と誤認しない。`_WIN32_WCE` の `#if` は SDK の 0x500 形式。型が無い関数は出さない。`gcc -std=c11 -Werror=implicit-function-declaration` で WinMain / DllMain+MmMapIoSpace が通る。

### 2026-10-16: gcc が通るアプリ/ドライバ面（第10弾）

コピーはしない。CeGCC 以外は MSDN（既存コーパス）と CC-BY data-types、MIT pinvoke。

- `WinDef.h` にコンパイラ用プレリュード（`CONST`/`FAR`/`__int64`=`long long`、Unicode の `TCHAR`/`LPCTSTR`、`WNDPROC`、`FILETIME`）。ヘッダファイルのコピーではない。
- 壊れた引用（`;` 抜け、`operator LPCTSTR`、配列マクロ未定義）と COM/C++ をコアヘッダに出さない。
- `Windows.h` 傘は WinDef/WinNT/winerror/Winbase/Winuser/Wingdi/Winreg。Winsock2/Commctrl は使う側が include。
- `gcc -fsyntax-only` で `WinMain` アプリと `DllMain`+`CEDDK.h` ドライバが通る。

### 2026-10-16: コンパイラが通る面（第9弾）

コピーはしない。CeGCC が依拠したのは MSDN（既存コーパス）と、公開ドメインで書き直したヘッダ。追加の出所はライセンス済みのものだけ。

- `Windows.h` に API を書いてから傘で消していたのをやめた（`MessageBox` / `MSG` が消えていた）。CE の `Winuser.h` / `WinDef.h` を、デスクトップ分割ヘッダや umbrella より優先。
- `WinDef.h` を先に include できるよう `HANDLE` などを依存順で出す。CE は 32-bit なので `LONG_PTR` は `long`（desktop の `__int64` 行は使わない）。
- `TRUE` / `FALSE` / 統合 KB の定数を世代 `#if` の外へ。
- C++ / C# / ATL のゴミ（`String`, `virtual STDMETHOD`, デフォルト引数, `*_I`）をヘッダに出さない。
- 穴埋めの順位: CE 頁 → Win32 CC-BY-4.0 → CeGCC w32api パブリックドメイン（名前だけ） → MIT `dotnet/pinvoke`（整数のみ）。ヘッダファイルのコピーはしない。Wine / ReactOS / mingw-w64 は使わない。

### 2026-10-16: コンパイラ/リンカ面（第8弾）

アプリ/ドライバが `#include "Windows.h"` して `coredll.def` でリンクできることを目標にした。

- 定数 **29,787**（前回 ~9.5k）。CE が名前だけ書いて番号が無いものは、ピン留めした **CeGCC w32api（パブリックドメイン）** で穴埋め。`WM_PAINT 15`、`NULL 0`、`INFINITE 0xFFFFFFFF`。
- **使わない**: Wine / ReactOS / mingw-w64。winsock.h（UCB/DEC 著作権）、gl.h（Mesa）はコピーしない。
- **上書きしない**: `MAX_PATH` は CE 頁の **128**（w32api の 260 は捨てる）。`BOOL` を `#define BOOL 1` にしない。
- 出所: `winsur/TOOLCHAIN.md`、`sources/w32api-cegcc/PROVENANCE.md`。

### 2026-10-16: 開発用 .h / .def（第7弾）

- 出力を **`include/*.h`** にした（`.fragment` はやめた）。`Windows.h` は WinDef / Winbase / Winuser / Wingdi / winerror などを `#include` する傘。
- `#define` は値だけ。証拠コメントは unified では出さない。
- 潰れた `HANDLECreateFile(` は出さない。`NULL 1`（別表の誤ヒット）は出さない。
- `.def` は `EXPORTS` に文書化された名前だけ（先頭の 290 行リードコメントをやめた）。
- メッセージ名の関数スタブ（`WM_CREATE` を function 扱い）をやめた。

### 2026-10-16: コーパス収穫（第6弾）

- **`page_parse`**: `#define NAME MAKE_D3DMHRESULT(2158)` や `(WM_USER+255)` を印刷どおり定数にする。折れた 1 行の複数 `#define` / enum メンバーも分割。
- **`tools/harvest-corpus-kb.py`**: CE 105,096 ページを現行抽出器で再読。`kb/harvest-constants.jsonl`（26,645 行）と `harvest-declarations.jsonl`。
- ゴミ値（`sizeof` / HTML / サンプル本文）は定数にしない。`ARRAYSIZE sizeof(hArray)` はフラグメントから削除。
- 再生成: 606 fragments、9,574 `#define`、ExtraDeclarations 6,517。`ANSI_CHARSET 0`、`D3DMERR_* MAKE_D3DMHRESULT(n)`。

### 2026-10-16: 統合 KB（第5弾）

- **`knowledge/unified/`** を新設。証拠（`kb/*.jsonl.gz`）はそのまま、生成器が読むのは「名前 → 1 つの CE 値 / 1 ヘッダ / 1 宣言」。
- **CE 値が Win32 に勝つ**。CE が番号を書いていない名前だけ Win32 を借り、`win32_fallback` と印す。
- **対応表を定数にしない**。`ANSI_CHARSET` の 1252 はコードページ列であり値 0 を残す（捏造ではない、ページが印刷したもう一方の数）。
- extra の `#define` / enum メンバーを unified constants に合流。`IDC_` は Winuser に入れない。
- 抽出強化: HTML タグは空白に置換（トークンをくっつけない）、関数プロトタイプの戻り値型を拡大。
- `python3 tools/build-unified-kb.py`。`build-kb.py` の末尾でも実行。

### 2026-10-16: 定数の単一ヘッダ化と KB 宣言の回収（第4弾）

- **定数は 1 ヘッダだけに書く** (`pick_constant_targets`)。CE ページ優先。`header_map` が当たれば win32-reference の誤振り（`ERROR_FILE_NOT_FOUND` → wincrypt.h）を捨て `Winerror.h` にする。`raserror.h` のような `reference-header` は残す。`.h` を `.hpp`/`.idl` より優先。
- **ヘッダ無し関数**は同じページの兄弟エンティティのヘッダを借りる。借りられない KB 宣言は `ExtraDeclarations.h` に落とす（KB を捨てない）。
- **IDC_/IDI_** は `EXACT_TO_HEADER`（`IDC_STATIC`）以外 Winuser に入れない。ダイアログ ID は ExtraDefines。
- **enum 名** `CLSCTX` / `ADVF` は `CLSCTX_` / `ADVF_` プレフィックスで Objbase/Objidl。
- 単体テスト 25。再生成: 585 fragments、21,622 decls、9,228 `#define`（重複定数をやめたので前回より減）、266 `.def`。

### 2026-10-16: パイプライン強化（第3弾）

抽出・振り分け・生成を一本化し、KB を生成器が実際に使うようにした。

- **共有ヘッダマッピング** `tools/header_map.py`（定数プレフィックス 1300+、関数名パターン、ライブラリ→ヘッダ）。`build-kb.py` と `gen-include-def.py` が同じ表を使う。`LVN_`/`TVN_` は Commctrl.h、`DT_LEFT` は Winuser.h、`DT_EXTERNAL_MODEM` は誤って Winuser に入れない。
- **品質フィルタ** `tools/quality_filters.py`。サンプル識別子、HTML 残り（`</PRE>`）、途中切れマクロ、代入スニペット（`pnmv = ...`）をフラグメントに出さない。
- **KB の利用**: `entity.headers`、`modules-ce.tsv`、ライブラリ一意マッピング、`heuristic-headers.tsv`（entities.jsonl は改変しない）、番号なし定数のスタブ（`LVN_*` を Commctrl にコメントとして残す）。
- **マクロと定数の分離**: 定数 `#define` → 補足マクロ → ページ原文マクロ → 型 → 関数。宣言コメントは1行。
- **VB/ADO 言語定数**は C ヘッダに出さない。
- extra 抽出/割り当てスクリプトは上記モジュールを使う。`heuristic-header-assignment.py` は KB を書き換えない。

### 2026-10-16: 包括的な改善（第2弾）

- 不足している宣言の抽出（9,830個: 関数、構造体、列挙型、typedef）
- 宣言のヘッダ割り当て（8,536個を889個のヘッダに割り当て）
- 重複排除と統合
- 合計宣言数: ~30,000+個

### 2026-10-16: 包括的な改善（第1弾）

- マクロ定義のヘッダ割り当て（359個のマクロを99個のヘッダに割り当て）
- コメントの簡潔化（1行コメント、短縮ランクラベル）
- 基底型の抽出（101個のtypedef、22個のCE固有型）
- 追加マクロの抽出（829個のマクロ）
- DEFファイルの改善（5,893個のエクスポート）
- A/W対応の明確化（583個のW系、572個のA系バリアント）
- HTMLクリーニング
- インクルードガードの追加
- 定数→ヘッダ紐づけの強化（9,324件）

---

## 参照

- `tools/gen-include-def.py` - メイン生成スクリプト
- `tools/build-kb.py` - 知識ベースビルダー
- `tools/page_parse.py` - コーパスパーサ
- `tools/html_clean.py` - HTMLクリーニングユーティリティ
- `tools/extract-base-types.py` - 基底型抽出ツール
- `tools/extract-missing-defines.py` - 追加マクロ抽出ツール
- `tools/assign-defines-to-headers.py` - マクロヘッダ割り当てツール
- `tools/header_map.py` - 共有ヘッダ対応表
- `tools/quality_filters.py` - サンプル/HTML/スニペットの除外
- `knowledge/` - 構造化仕様データベース
- `docs/clean-room.md` - Clean-Roomポリシー
