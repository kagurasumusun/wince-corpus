# 資料整理 — 取得経路別の分類（msdn/mslearn/wayback と sdk/iso）

作成 2026-10-24。対象: このリポジトリが保持する 210,792 のコーパスファイル
（`corpus/` 配下、git 追跡分）と、その由来になった `sources/` の媒体。

権利関係の判断は [`review-rights-2026-10.ja.md`](review-rights-2026-10.ja.md)
に分離した。この文書は「どのバイトが、どこから来たか」だけを扱う。理由は、
権利の判断が **内容の発行元** ではなく **写しの入手経路** で変わるからである
（同じ MSDN Library のページでも、Microsoft 自身の Download Center ISO から
抜いたのと、第三者のミラーサイトからクロールしたのとでは、根拠が違う）。

## 二分法が三分法になる理由

依頼は「msdn/mslearn/wayback の資料」と「sdk/iso 由来のドキュメント」の
二分だった。実物を全部たどると、二分には収まらない第三の群がある:

| 群 | 定義 | ファイル数 | 割合 |
|----|------|-----------:|-----:|
| **A. web** | Microsoft が公開しているサイト（learn.microsoft.com）から、または Microsoft が公開していたサイト（msdn.microsoft.com）の Wayback Machine キャプチャから取得 | 68,879 | 32.68 % |
| **B. media** | Microsoft の公式媒体（CD/DVD イメージ、インストーラ、ドキュメントアーカイブ）から展開 | 127,156 | 60.32 % |
| **C. mirror** | **第三者**の Web ミラー／第三者のリポジトリから取得（内容は Microsoft のもの） | 8,372 | 3.97 % |
| **D. upstream** | 発行元自身がホストし、明示的なライセンスを付けたリポジトリ（MicrosoftDocs on GitHub）、および許可リスト制の OSS 文書 | 6,385 | 3.03 % |

C は依頼の二分のどちらにも入らない。**中身は MSDN Library（＝媒体由来）だが、
写しは第三者のウェブサイトからクロールした**という、経路と内容が食い違う群
である。権利上いちばん根拠が弱いので、A・B に混ぜてはいけない。
`corpus/kb/`（Microsoft KnowledgeBase Archive を再公開している第三者の
GitHub リポジトリ経由）も同じ理由で C に置いた。

D は A にも B にも属さない。Microsoft の Win32 API リファレンスは
learn.microsoft.com でも読めるが、その場合は Learn Terms of Use が適用され
再配布は禁止される。GitHub の `MicrosoftDocs/sdk-api` から取ると
**CC-BY-4.0 が適用され、条件付きで再配布が許可される**。同じ文章で、
経路だけが権利を変えている。

## 分類の実体（レジストリとツール）

分類は文書の中の表ではなく、機械可読なレジストリとして保持する。
`data/license-scopes.tsv` と同じ流儀（最長一致、1 パス = 1 規則、証拠ファイル
必須）で、`tools/check-provenance.py` が「コーパスの全ページがちょうど 1 つの
規則に解決すること」を検査する。

| 成果物 | 中身 |
|--------|------|
| `data/provenance-scopes.tsv` | 来歴レジストリ。1 行 = 1 規則（ディレクトリ前置）。`group`（取得経路）・`origin`（何という出版物から来たか）・`official_compilation`（Microsoft 自身が今も配布している集積があればその URL）を持つ |
| `tools/provenance_scopes.py` | 「このパスはどの入手経路か」に答える唯一の場所。`license_scopes.py` と対になる |
| `tools/check-provenance.py` | レジストリの自己整合（group 値・証拠ファイルの存在・scope id の一意性）と、コーパス全ページの被覆を検査し、レポートを書く |
| `data/reports/provenance-classification.tsv` | 結果。1 行 = 1 scope で、ファイル数、Microsoft 公式集積の有無、**同じパスを支配する権利 scope とその再配布可否** を並べる（`license-audit.tsv` と横に置いて読める） |
| `data/reports/provenance-groups.tsv` | A〜D の合計 |
| `data/reports/notice-scan.tsv` / `notice-scan-depth2.tsv` | `tools/scan-notices.py` の出力。全 210,773 ページのバイトを読み、実際に書かれている著作権・許諾文言を種類別に数え、逐語引用と代表ページを付けたもの（`review-rights-2026-10.ja.md` §4 の根拠） |

```bash
python3 tools/check-provenance.py            # 被覆 + 分類レポート
python3 tools/check-provenance.py --list 3   # scope ごとの実パス例
python3 tools/scan-notices.py --depth 2      # 通知文言の再スキャン
```

2026-10-24 の実行結果: 23 規則 / 23 scope / 0 問題、unscoped 0。

## 一覧（ファイル数順）

「公式集積」列は 2026-10-24 の Web 調査の結果で、詳細と一次情報 URL は
`review-rights-2026-10.ja.md` §3。

| scope | 群 | ファイル数 | 何から来たか | Microsoft 公式集積 | 権利 scope | 再配布 |
|-------|----|-----------:|--------------|--------------------|------------|--------|
| `mslearn-previous-versions` | web | 58,047 | Microsoft Learn `previous-versions/windows/embedded`（旧 MSDN Library の CE セットの読み取り専用アーカイブ） | **なし** | `learn-tou` | no |
| `media-msdn-vsnet2003-iso` | media | 37,372 | MSDN Library for Visual Studio .NET 2003 Disc 1–3（MSDVVSD1/2/3、部品番号 X09-46370 / X09-46249 / X09-46251） | **なし** | `msdn-library-copyright` | no |
| `media-msdn-vs2008sp1-iso` | media | 33,011 | MSDN Library for Visual Studio 2008 SP1（2008-11、`VS2008SP1MSDNENUX1506188.iso`） | **あり・現存** — [Download Center id=20955](https://www.microsoft.com/en-us/download/details.aspx?id=20955) | `msdn-library-copyright` | no |
| `media-ce50-cd1-iso` | media | 20,180 | Windows Embedded CE 5.0 CD1 English（`en_win_ce_net_cd1.iso`、2004-07-02）`PB_1.cab` の 98 個のコンポーネント CHM | **なし**（2022-09-30 に撤去） | `ms-media-copyright` | no |
| `media-msdn-jan-2002-iso` | media | 13,430 | MSDN Subscriptions Library January 2002（`QTR25ENUD1.ISO`） | **なし** | `msdn-library-copyright` | no |
| `mslearn-previous-versions-dotnet` | web | 10,658 | 同じ Learn の名前空間の .NET 系（POS for .NET / .NET MF / .NET CF） | **なし** | `learn-tou` | no |
| `official-download-ce30-zip` | media | 8,962 | **Microsoft Download Center の配布物そのもの** `WindowsCE3.0_DocumentationArchive.zip`（12.4 MB） | **あり・現存** — [id=41197](https://www.microsoft.com/en-us/download/details.aspx?id=41197) | `ce30-internal-reference` | no |
| `media-devcon99-iso` | media | 6,383 | Windows CE Developers Conference DevCon 99 Conference CD（1999-05-24） | **なし** | `msdn-library-copyright` | no |
| `microsoftdocs-sdk-api` | upstream | 5,279 | GitHub `MicrosoftDocs/sdk-api`（pinned commit `c12073e4`） | **あり・現存** — [github.com/MicrosoftDocs/sdk-api](https://github.com/MicrosoftDocs/sdk-api) | `sdk-api-cc-by-4.0` | **yes** |
| `mirror-techshelps` | mirror | 5,179 | CE 1.0/2.0 期 MSDN Library 7 セットを再公開する第三者サイト `techshelps.github.io` | **なし** | `msdn-library-copyright` | no |
| `media-ce20-sdk-iso` | media | 5,087 | Microsoft Windows CE Platform SDK (H/PC) 2.0 02/98（`MPLATSDK.20.ISO`）の InfoViewer 書籍 11 タイトル + `windbg.hlp` | **なし** | `ms-media-copyright` ほか | no |
| `mirror-datadungeon` | mirror | 2,932 | MSDN Library April 2000 の CE 部分をクロールした第三者サイト `library.thedatadungeon.com` | **なし** | `msdn-library-copyright` | no |
| `media-ce10-sdk-beta-iso` | media | 2,104 | Microsoft Windows CE 1.0 Desktop Emulation SDK **Beta 2.1**（`WCESDK.iso`）の `PEGSDK.MVB` / `PEGDDK.MVB` / `RELNOTES.HLP` | **なし** | **`ce10-nda-prerelease`** | no |
| `microsoftdocs-win32` | upstream | 1,091 | GitHub `MicrosoftDocs/win32`（pinned commit `e103fa4e`）、`data/win32-common-pages.tsv` で 1 ページずつ許可 | **あり・現存** — [github.com/MicrosoftDocs/win32](https://github.com/MicrosoftDocs/win32) | `win32-cc-by-4.0` | **yes** |
| `media-ce42-installer` | media | 567 | Windows CE .NET 4.2 Platform Builder Emulation Edition（`winceemul42.exe`）の `EMULATOR.CHM` / `REMTOOLS.CHM` | **なし** | `ms-media-copyright` | no |
| `kbarchive-github` | mirror | 261 | `github.com/jeffpar/kbarchive`（Microsoft の 2002 年頃 FTP アーカイブの第三者再公開） | **なし** | `kb-article-copyright` | no |
| `wayback-msdn-2010-05` | web | 162 | `msdn.microsoft.com/en-us/library/<id>.aspx` の 2010-05-01 Wayback キャプチャ | **なし** | `msdn-library-copyright` | no |
| `media-unrecorded` | media | 35 | MSHelp 形式の Windows Mobile 6.5 トピック。**取得方法・ツール・日付が記録されておらず、ファイルから原 URL を復元できない** | **なし** | `msdn-library-copyright` | no |
| `media-site-mirror` | media | 25 | 媒体に同梱されていた CE 期ウェブサイト（CE 2.0 Technical Information CD の developer サイト）と CE 4.2/5.0/6.0 のディスク release notes | **なし** | `site-copyright` | no |
| `oss-allowlist` | upstream | 13 | 許可リスト制の OSS 文書（Qt / SDL / OpenSSL / wxWidgets）+ プロジェクト作成の README/PROVENANCE | n/a | 各 OSS ライセンス | 一部 yes |
| `wayback-msdn-magazine` | web | 12 | 2008 年以前の `msdn.microsoft.com/msdnmag` 問題別ツリーの Wayback キャプチャ | **なし** | `msdn-library-copyright` | no |
| `project-index-corpus` / `project-index-win32` | upstream | 2 | プロジェクト自身が書いた `corpus/README.md` / `corpus/win32/README.md` | n/a | `project-own` | unclear |

## 依頼された二分で読み替えると

* **「msdn/mslearn/wayback の資料」= A + C**（Learn と Wayback で 68,879、
  第三者ミラー経由の MSDN 内容で 8,372、計 **77,251 ファイル / 36.65 %**）。
* **「sdk/iso 由来のドキュメント」= B**（**127,156 ファイル / 60.32 %**）。
  ただし B のうち 41,973 ファイル（`media-msdn-vs2008sp1-iso` 33,011 +
  `official-download-ce30-zip` 8,962）は **中身が MSDN／MSDN 派生の
  ドキュメント** で、媒体が ISO/ZIP というだけである。内容で数え直すと
  MSDN 由来は 118,963 ファイル（A の 68,879 + C の MSDN Library ミラー
  8,111 + 上記 41,973）に増える。「媒体から来たか」で切るか「中身が
  MSDN か」で切るかで数字が変わるので、両方の列を持つ
  `provenance-classification.tsv` を正とする。
* **D（upstream）6,385 ファイル / 3.03 %** はどちらでもない。そして
  **再配布が許可されているのは、この D のうち 6,373 ファイルだけ**である
  （CC-BY-4.0 の `corpus/win32/` 6,370 と、OSS の SDL/OpenSSL/wxWidgets の
  3 ページ）。残る 12 は GFDL の Qt 8 ページ（条件未充足）と、プロジェクト
  自身が書いた README/PROVENANCE 4 枚（ライセンス未定）。
  コーパス外（`sources/`）の CC-BY ライセンス原本・tarball・パブリック
  ドメイン声明を含めた全体では 6,387 ファイルが `redistribution: yes`
  （`data/reports/license-audit.tsv`）。

## Microsoft 自身が今も配布している集積（要約）

2026-10-24 に Web 調査した結果、Microsoft が「ドキュメントのみ」の形で
今も配布していて、このコーパスのツリーを置き換えられるものは **3 つ**だけ。
Shared Source（ソース配布）は調査対象から除外した。

| 対象 | 公式配布物 | 状態 | 置き換えられるツリー |
|------|-----------|------|---------------------|
| Windows CE 3.0 | `WindowsCE3.0_DocumentationArchive.zip`（12.4 MB、CHM 1 個、SHA1 `7a62a0ab927b97f4acefe28d2f7fc6d986a5f19a`）— Download Center id=41197 | **現存**（2024-07-15 公開） | `corpus/chm/windows-ce-3.0/` 8,962 — 既にこれを使っている |
| MSDN Library for VS2008 SP1 | `VS2008SP1MSDNENUX1506188.iso`（2.2 GB、日本語版 `JPNMSDNX1530336.ISO` も同一エントリ）— Download Center id=20955 | **現存**（2024-07-15 公開）。Microsoft が出した**最後の** MSDN Library ISO | `corpus/msdn-library/vs2008-sp1/` 33,011 — 現在は archive.org の `X15-18280`（同一ディスク）から取得。**Microsoft の URL に差し替え可能** |
| Win32 API リファレンス | GitHub `MicrosoftDocs/sdk-api` / `MicrosoftDocs/win32`（CC-BY-4.0） | **現存** | `corpus/win32/` 6,370 — 既にこれを使っている |

見つからなかったもの（＝この写しが唯一の入手経路）:

* **CE 5.0 / CE 6.0 / Compact 7 / Compact 2013 の全コンテンツ** — 2022-09-30 に
  Device Partner Center と Microsoft Download Center から撤去済み
  （MC350659、Windows Embedded ブログ "Older Windows Embedded Compact content is
  being retired"）。Microsoft は撤去前に「ダウンロードして安全な場所に保存せよ」
  と案内していた。ドキュメントのみの集積は撤去前にも存在しなかった。
* **CE .NET 4.x のドキュメント** — Platform Builder 媒体に同梱されるだけで、
  単体のドキュメント配布は一度もなかった。
* **CE 1.0 / 2.0 / 2.11 / 2.12 の SDK 書籍** — SDK CD 同梱のみ。
* **MSDN Library January 2002 / April 2000 / VS.NET 2003** — MSDN サブスクリプション
  の四半期媒体。Download Center に出たことはない（ISO として公式配布された
  MSDN Library は VS2008 SP1 版が最後）。
* **Learn `previous-versions/windows/embedded`** — 「Download PDF」のリンクはなく、
  ISO もなく、対応する公開 GitHub リポジトリもない。2026-10-24 に
  `api.github.com` で `org:MicrosoftDocs` を `embedded` / `windows-ce` / `wince` /
  `winembedded` / `compact7` で検索したが該当リポジトリは 0 件
  （`MicrosoftDocs/sdk-api` と `MicrosoftDocs/winapps-win32-api` のみ）。
  Learn の Download PDF 機能自体は存続している（2022-01 の team blog で
  「代替手段ができるまで削除しない」と明言）が、アーカイブ名前空間である
  previous-versions には付いていない。
* **Windows Mobile 6.5 SDK ドキュメント** — Learn の previous-versions に
  移行されていない（`queues/third-party-sources.md` が 2026-10-20 に 404 を
  確認済み）。残るのは MSDN Library ディスクと Wayback のみ。

つまり **コーパスの 77.07 %（162,449 ファイル）は、Microsoft が今も配布している
集積で置き換えられない**。これは権利判断（`review-rights-2026-10.ja.md`）で
「あとで消せるか」を考えるときの前提になる: 消すと再取得できない群と、
消しても公式 URL から取り直せる群は、扱いが違っていてよい。
