# 権利レビュー 2026-10 — 原文確認、Microsoft 公式集積の調査、クリーンルーム観点の分類

作成 2026-10-24。作成者: このリポジトリの資料整理を依頼されたレビュー担当。
立場: **クリーンルーム設計における「製品を解析し仕様書を作成するチーム」**
（§2）。法的助言ではない（§8）。

対象: git が追跡する 211,542 ファイル（うちコーパスページ 210,773）、
`sources/` の媒体と証拠ファイル、公開リリースアセット 2 件。

この文書が答える四つの問い:

1. 資料は msdn/mslearn/wayback と sdk/iso に分かれたか → [`PROVENANCE-SPLIT.ja.md`](PROVENANCE-SPLIT.ja.md)
2. Microsoft 自身がドキュメントのみの ISO/PDF 集積を出していないか → §3
3. 各資料の著作権・ライセンス・使用許諾は原文で何か → §4
4. 違反しているものは何か、そして**内容によってどう違うか** → §5

---

## 1. 方法 — 要約でなく原文を読む

このリポジトリには既に権利レジストリ（`data/license-scopes.tsv`）があり、
「要約で文言を置き換えない」という規則を自分で宣言している。その規則を
このレビューにも適用した。

| やったこと | 成果物 |
|-----------|--------|
| コーパス全 210,773 ページのバイトを読み、実際に書かれている著作権・許諾文言を 29 種のパターンで数え、逐語引用と代表ページを記録 | `tools/scan-notices.py` → `data/reports/notice-scan.tsv`（ツリー単位）、`notice-scan-depth2.tsv`（サブツリー単位） |
| Microsoft Learn Terms of Use を **live ページから**再取得し、リポジトリが 2026-10-04 に控えた写しと突き合わせ | §4.1（逐語一致を確認） |
| PDF の著作権表示ページ（スキャン OCR）をテキスト抽出して転記し、検査可能な形で保存 | `sources/terms/mspress-wince-books-copyright-page.txt`、`sources/terms/prentice-hall-wince30-appprog-copyright-page.txt` |
| tarball 内のライセンス文言をそのまま抜き出して同梱 | `sources/w32api-cegcc-mingw/PUBLIC-DOMAIN-DISCLAIMER.txt` |
| レジストリに新規則を追加し、**引用が証拠ファイル内に逐語で存在することを機械検査** | `tools/check-licenses.py`（88 規則 / 27 scope / **0 問題**） |
| 取得経路の分類を機械可読レジストリ化し、全ページの被覆を検査 | `data/provenance-scopes.tsv`、`tools/check-provenance.py`（23 規則 / **0 unscoped**） |
| Microsoft 公式の配布物があるか Web 調査（Download Center の現況、Learn の PDF 機能、GitHub の公式ドキュメントリポジトリ、コンテンツ撤去告知） | §3 |

`tools/check-licenses.py --tracked` の 2026-10-24 の結果が、このレビューの
全ての数字の出所である:

```
corpus pages: 210,773  unscoped: 0
git-tracked files: 211,542  unscoped: 0
88 rule(s), 27 scope(s), 0 problem(s)

published (git-tracked) files by redistribution: yes 6,387, no 204,571, unclear 584
```

**公開リポジトリが今この瞬間に配布している 211,542 ファイルのうち、
204,571 ファイル（96.7 %）は再配布が許可されていない。**

---

## 2. クリーンルーム設計の定義確認と、このリポジトリの位置

依頼どおり、定義は日本語版 Wikipedia の記事で確認した
（<https://ja.wikipedia.org/wiki/クリーンルーム設計>、2026-10-24 取得）。
原文を引用する:

> **クリーンルーム設計**（クリーンルームせっけい、英: Clean room design、
> チャイニーズウォールテクニックとしても知られる）とは、ある製品を
> リバースエンジニアリングするチームと、それで得られた情報を元に再実装
> （再設計）を行うチームを隔離することで、著作権や企業秘密に抵触すること
> なく、その製品の別実装を得る手法である。クリーンルーム設計は独立発明に
> なるため、著作権や企業秘密への抵触を防げ、有用である。

> 通常、クリーンルーム設計は、模倣するために製品を調べ、**仕様書を書くこと**
> でなされる。**この仕様書は、著作権の侵害がないか法律家による検査を受ける。**
> それから、つながりの全くない別のチームによって、この仕様書通りの製品が
> 作られる。

同記事が挙げる判例（SCEI 対コネクティクス、9th Cir. 2000、203 F.3d 596）の
判決引用も、この設計の法的根拠をそのまま述べている:

> ソニーの創作物のいくつかは、著作権で保護されるべき重要な部分と言える。
> BIOSは、重要な部分とは言えない。**複製しなければ調べようのない、保護され
> ない部分があるからだ。** よって本法廷は、これに従来の著作物と同程度の
> 保護を与えることはしない。

### このリポジトリは定義のどこにいるか

依頼の宣言どおり、**このリポジトリは「製品を調べて仕様書を書くチーム」側**
である。`docs/COLLECTION-POLICY.md` が「corpus は知識ベースの *material*
であって最終成果物ではない。目的は include/def を生成できる機械可読な
Windows CE API 表面の記述である」と書き、実装側（include/.def 生成器
"winsur"）を別レイヤ・別リポジトリに分離している構造は、定義のいう隔離に
**そのまま合致している**。プロジェクト自身も原則を理解しており、
`corpus/oss/PROVENANCE.md` には次の一行がある:

> cegcc / mingw32ce headers — source, and **the opposite of a clean room**.

### しかし定義から三つの帰結が出る

クリーンルーム設計は「隔離された実装チームがクリーンであること」を守る
手法であって、**仕様書チーム自身の行為を免責するものではない**。定義を
正確に読むと、このリポジトリには三つの別個のリスクがある。混同しては
いけない。

| # | リスク | クリーンルームは防いでくれるか | 現状 |
|---|--------|------------------------------|------|
| **R1** | **公開リスク**: 第三者の著作物を公衆に配布していること（複製権・公衆送信権） | **防がない。** クリーンルームは最終製品の表現の非複製を守る手法で、資料そのものの再配布とは無関係 | **発生中。** 204,571 ファイルを公開リポジトリ＋公開リリースアセットで配信中（§6.1） |
| **R2** | **仕様書の表現リスク**: 仕様書（KB）が文档の**表現**をそのまま写していること | **防がない。** 定義自身が「この仕様書は著作権の侵害がないか法律家による検査を受ける」と要求している | **部分的に管理済み・要検証。** KB は宣言文を逐語引用して保持する（`declaration_observations`、111,778 件）。API 名・関数シグネチャ・定数値・構造体メンバは**表現ではなくアイデア・規約**なので保護対象外（§8.1）だが、説明文の長文逐語引用は表現の複製になりうる |
| **R3** | **入力汚染リスク**: 仕様書の入力が「公開資料」でないこと | **防がない。むしろクリーンルームの前提を壊す。** 独立発明の主張は、入力が適法に入手された公開情報であることに依存する | **発生中。** NDA 表記のベータ資料 2,101 ページ、使用自体が署名済み契約に限定されたベンダ資料 192 ページ、商業書籍スキャン 117 MB が KB の入力に入っている（§5 B1・B2・D） |

**R3 がこのリポジトリにとって最も本質的な問題である。** R1 は公開を止めれば
止まる。R2 は仕様書の書き方で管理できる。しかし R3 は、汚染された入力を
読んでしまった事実そのものが「独立発明」の立場を損なうので、**あとから
削除しても完全には元に戻らない**。仕様書チームの役割を正しく果たすために
こそ、B1・B2・D は入力から除外しなければならない。

---

## 3. Microsoft 自身が配布しているドキュメント集積の調査結果

依頼: 「msdn/mslearn/wayback の資料について、Microsoft から ISO/PDF で
まとめられているものがないか（Shared Source ではなくドキュメントのみの）」。

調査日 2026-10-24。一次情報（Microsoft のページ、Microsoft のブログ、
Microsoft の告知 ID）を直接確認した。

### 3.1 見つかったもの — 3 件、いずれも現存

#### (1) Windows CE 3.0 Technical Documentation — **ドキュメントのみの ZIP/CHM**

* <https://www.microsoft.com/en-us/download/details.aspx?id=41197>
* 直接 URL: `https://download.microsoft.com/download/1/3/d/13d0b628-4758-4b87-a9f2-6e98c940e6a9/WindowsCE3.0_DocumentationArchive.zip`
* `WindowsCE3.0_DocumentationArchive.zip`、12.4 MB、SHA1 `7a62a0ab927b97f4acefe28d2f7fc6d986a5f19a`、Date Published 2024-07-15、**状態 Live**
* ページ本文（逐語）: 「This is a downloadable archive of the Windows CE 3.0 technical documentation library that was formerly on MSDN.」／「The Windows CE 3.0 technical documentation is retired content for a product that is no longer supported. This retired content is no longer being maintained, but is provided as a courtesy for individuals who are still using Windows CE 3.0.」
* **これは調査で求めた条件に完全に合致する唯一の例**: ソースもバイナリも含まない、ドキュメントのみの Microsoft 公式集積。
* 対応ツリー: `corpus/chm/windows-ce-3.0/` 8,962 ページ。**本リポジトリは既にこれを使っており**、ZIP を `sources/windows-ce-3.0/` に原本のまま保持している。

#### (2) MSDN Library for Visual Studio 2008 SP1 — **公式 ISO、現存**

* <https://www.microsoft.com/en-us/download/details.aspx?id=20955>
* 直接 URL: `https://download.microsoft.com/download/1/f/0/1f07c259-7ff2-4902-9205-ad1dfb87ccab/VS2008SP1MSDNENUX1506188.iso`
* 2.2 GB、Date Published 2024-07-15、**状態 Live**。日本語版 `JPNMSDNX1530336.ISO`（2.6 GB）も同一エントリから取得できる
* 内容（逐語）: 「MSDN Library provides access to essential programming information, including technical reference documentations, white papers, software development kits and code samples…」「the MSDN Library can also be installed and viewed as a stand-alone reference, and does not require Visual Studio 2008.」
* **Microsoft が出した最後の MSDN Library ISO である。** VS2010 以降はオンライン Help Viewer に移行し、ISO は存在しない（Microsoft Download Center に該当エントリなし）
* 対応ツリー: `corpus/msdn-library/vs2008-sp1/` 33,011 ページ（CE 5.0 の `wce*5` 書籍、`mobilesdk5`、managed `fxref_microsoft.windowsmobile.*`）
* **本リポジトリはこれを archive.org の `X15-18280` から取得している。中身は同一ディスクだが、Microsoft 自身の URL から取り直せる。** 厳密にはドキュメント「のみ」ではない（MSDN Library はコードサンプルも載せる）が、公式の ISO 集積であることは間違いない

#### (3) MicrosoftDocs on GitHub — **CC-BY-4.0 の公式ドキュメントリポジトリ**

* <https://github.com/MicrosoftDocs/sdk-api>（commit `c12073e417d5780fe796278ada21b90cef1b0568`）
* <https://github.com/MicrosoftDocs/win32>（commit `e103fa4e8810bd8d42c4777e17081e24dbe62dbd`）
* 対応ツリー: `corpus/win32/api/` 5,279、`corpus/win32/common/` 1,091
* **調査対象の中で唯一、再配布を明示的に許可している経路**（`LICENSE` = CC-BY-4.0、`LICENSE-CODE` = MIT）。既に使用済み

### 3.2 見つからなかったもの — 撤去済み、または一度も存在しない

| 対象 | 調査結果 | 一次情報 |
|------|---------|---------|
| **CE 5.0 / CE 6.0 / Compact 7 / Compact 2013 の全コンテンツ** | 2022-09-30 に Device Partner Center と Microsoft Download Center から**撤去済み**。Microsoft は撤去前に「アクセスを続けたいなら、ダウンロードして安全な場所に保存することを推奨する」と案内していた | メッセージセンター **MC350659** "Retirement of older Windows Embedded Compact content"、Windows Embedded ブログ "Older Windows Embedded Compact content is being retired"（2022-03-30）。撤去対象は逐語で「All content for Windows CE 5.0 / All content for Windows Embedded CE 6.0 / All content for Windows Embedded Compact 7 prior to June 2017 update (M03-2018) / All content for Windows Embedded Compact 2013 prior to June 2021」 |
| **CE 6.0 のヘルプ文書 MSI**（`WinCEPB60-071031-KBHELPDOCS-COMMON_ENU.msi`） | Download Center id=11852 は **Status: Deleted**。microsoft.com からは消え、Wayback のアーカイブからしか取得できない | Legacy Update の Download Center Archive（2023-04-18 スナップショット由来） |
| **CE .NET 4.x のドキュメント** | 単体のドキュメント配布は**一度も存在しない**。Platform Builder 媒体（`winceemul42.exe` ほか）に同梱されるのみ | `sources/windows-ce-4.2/PROVENANCE.md` の実地確認と一致（Emulation Edition に API リファレンスは無い） |
| **CE 1.0 / 2.0 / 2.11 / 2.12 の SDK 書籍** | SDK CD 同梱のみ。Microsoft Download Center に該当エントリなし | — |
| **MSDN Library January 2002 / April 2000 / VS.NET 2003** | **MSDN サブスクリプションの四半期媒体**であり、Download Center で配布されたことはない。ISO として公式配布された MSDN Library は VS2008 SP1 版が最後 | Wikipedia "Microsoft Developer Network": 「beginning in 2006, they were available to be freely downloaded from Microsoft Download Center in the form of ISO images」（＝ VS2008 SP1 まで） |
| **Learn `previous-versions/windows/embedded` の PDF / ISO** | **無い。** Learn の「Download PDF」機能自体は存続している（2021-11 に削除計画が出たが、2022-01-05 の team blog で「同等の代替ができるまで削除しない」と撤回）が、アーカイブ名前空間 previous-versions のページには TOC 末尾の Download PDF リンクが付いていない | <https://learn.microsoft.com/en-us/teamblog/retiring-download-pdf> |
| **previous-versions に対応する公開 GitHub リポジトリ** | **無い。** 2026-10-24 に `api.github.com/search/repositories` で `org:MicrosoftDocs` を `embedded` / `windows-ce` / `wince` / `winembedded` / `compact7` で検索 → **0 件**。存在するのは `MicrosoftDocs/sdk-api` と `MicrosoftDocs/winapps-win32-api` のみ | GitHub API の実行結果（このレビューの作業ログ） |
| **Windows Mobile 6.5 SDK ドキュメント** | Learn の previous-versions に移行されていない。`bb*` トピックは 404 | `queues/third-party-sources.md` が 2026-10-20 に実地確認済み |
| **Windows CE の KB 記事** | support.microsoft.com は該当記事 ID を既に配信していない。残るのは Microsoft が 2002 年頃に FTP で配布したアーカイブを第三者が再公開したもの（`github.com/jeffpar/kbarchive`）のみ | `corpus/kb/README.md` |

### 3.3 調査の結論

**コーパス 210,792 ファイルのうち、Microsoft が今も配布している集積で
置き換えられるのは 48,343 ファイル（22.93 %）だけ**である
（`data/reports/provenance-classification.tsv` の `official_ms_compilation` 列）。
内訳は CE 3.0 ZIP 8,962 + VS2008 SP1 ISO 33,011 + MicrosoftDocs 6,370。

残り **162,449 ファイル（77.07 %）には Microsoft 公式の代替が存在しない。**
この事実は §5 の分類で「あとで削除すればよいか」を判断する前提になる:

* 公式集積で置き換えられるツリーは、**削除しても再取得できる**。
* 置き換えられないツリーは、**削除すると入手経路そのものが消える**
  （Learn のアーカイブページは Microsoft 自身がまだ配信しているので
  再閲覧は可能だが、Wayback・第三者ミラー・archive.org の媒体は
  Microsoft の管理外で、消える可能性がある）。

したがって「一律に全部消す」のではなく、**公開をやめて（private か
公開アセットの削除）、内部利用の写しは保持する**という選択肢が、
Learn ToU と CE 3.0 通知の文言に最も忠実である（§5・§7）。

---

## 4. 原文確認の結果

### 4.1 Microsoft Learn Terms of Use — 写しが live ページと逐語一致

`sources/terms/learn-com-termsofuse-excerpt.txt`（2026-10-04 控え）を、
2026-10-24 に <https://learn.microsoft.com/en-us/legal/termsofuse> から
再取得した本文と突き合わせた。**両節とも逐語一致、変更なし。**

*Personal and Non-Commercial Use Limitation*（逐語）:

> Unless otherwise specified, the Services are for your personal and
> non-commercial use. You may not modify, copy, distribute, transmit, publicly
> display, perform, reproduce, publish, license, create derivative works from,
> transfer or sell any information, software, products or services obtained from
> the Services (except for your own, personal, non-commercial use) without prior
> written consent from Microsoft.

*Notice Specific to Documents Available on this Website*（逐語）:

> Certain documentation may be subject to explicit license terms separate from
> the terms contained here. To the extent the terms conflict, the explicit
> license terms control.
>
> Permission to use Documents (such as white papers, press releases, datasheets
> and FAQs) from the Services is granted, provided that (1) the below copyright
> notice appears in all copies and that both the copyright notice and this
> permission notice appear, (2) **use of such Documents from the Services is for
> informational and non-commercial or personal use only and will not be copied or
> posted on any network computer or broadcast in any media**, and (3) no
> modifications of any Documents are made. Accredited educational institutions,
> such as K-12, universities, private/public colleges, and state community
> colleges, may download and reproduce the Documents for distribution in the
> classroom. Distribution outside the classroom requires express written
> permission. Use for any other purpose is expressly prohibited by law, and may
> result in severe civil and criminal penalties. Violators will be prosecuted to
> the maximum extent possible.

読み取り:
* **許可されていること**: informational / non-commercial / personal な**利用**、および自分自身の個人・非商用利用のための複製。
* **禁止されていること**: network computer への複製・投稿、broadcast、修改、そして Microsoft の事前書面同意なき distribute / publish / reproduce / create derivative works。
* **優先条項**: 「Certain documentation may be subject to explicit license terms separate from the terms contained here. To the extent the terms conflict, the explicit license terms control.」— だから `corpus/win32/`（CC-BY-4.0）は Learn ToU ではなく CC-BY-4.0 が支配する。レジストリの最長一致はこの条項の実装として正しい。
* **留意**: 文言は "your personal and non-commercial use" である。組織的・継続的なプロジェクト利用が "personal" に収まるかは文言上明確でない。収縮解釈すれば「個人が非商用で読む」ことは可、「プロジェクトの公開リポジトリに載せる」ことは明確に不可。

### 4.2 Windows CE 3.0 — 唯一、利用を明示的に許諾している通知

`corpus/chm/windows-ce-3.0/CE30_Copyright.html`（全 8,962 ページ中、この
1 ページだけが許諾文を持つ。残り 8,961 ページは 100 % が
「© 2013 Microsoft. All rights reserved.」と retired-content 通知のみ）。
逐語:

> **Important:** This is retired content. This content is outdated and is no
> longer being maintained. It is provided as a courtesy for individuals who are
> still using these technologies. …
>
> This document is provided "as-is." Information and views expressed in this
> document, including URL and other Internet Web site references, may change
> without notice.
>
> **This document does not provide you with any legal rights to any intellectual
> property in any Microsoft product. You may copy and use this document for your
> internal, reference purposes.**
>
> © 2013 Microsoft. All rights reserved.

読み取り: 「**copy and use … for your internal, reference purposes**」という
**複製と利用の明示的許諾**がある。これは本プロジェクトの用途
（クリーンルームの仕様書チームが内部で参照して仕様を書く）に**そのまま
当てはまる**。同時に "internal" であるため、公開リポジトリへの掲載は
許諾の範囲外。しかも入手元が Microsoft Download Center の公式配布物
（§3.1 (1)）なので、**入手経路・利用許諾の両方が最もクリーンな群**である。

### 4.3 Windows CE 1.0 — NDA 表記のベータ資料（今回新たに特定）

レジストリは `corpus/mvb/` 全体を「**No licence statement located**」として
いた。これは**誤り**である。全ページをスキャンした結果、CE 1.0 PEGSDK 書籍の
前置ページに三つの別個の声明がある。

`corpus/mvb/windows-ce-1.0/PEGSDK/AJ0A.html` — ページタイトル
"Non-disclosure Agreement Note"（逐語）:

> **This documentation is an early release of the final documentation and is
> confidential and proprietary information of Microsoft Corporation. It is
> disclosed pursuant to a non-disclosure agreement that the recipient has signed
> with Microsoft.** No part of this document may be reproduced or transmitted in
> any form or by any means, electronic or mechanical, for any purpose, without
> the express written permission of Microsoft. This is a preliminary document and
> may be changed substantially prior to final commercial release. It is meant to
> accompany software still in development. Some of the information in the
> documentation may be inaccurate or may not be an accurate representation of the
> functionality in the final released product. … (c) 1995 Microsoft Corporation.
> All rights reserved.

`corpus/mvb/windows-ce-1.0/PEGSDK/AJ0B.html` — "Legal Information Note"（逐語）:

> This documentation is an early release of the final product documentation and
> is **only for limited distribution outside of Microsoft and not for
> redistribution.** … No part of this document may be reproduced or transmitted
> in any form or by any means, electronic or mechanical, for any purpose, without
> the express written permission of Microsoft Corporation. … © 1996 Microsoft
> Corporation. All rights reserved.

`corpus/mvb/windows-ce-1.0/PEGSDK/AJ1C.html` — "Microsoft Copyright Notice"（逐語）:

> … No part of this document may be reproduced or transmitted in any form or by
> any means, electronic or mechanical, for any purpose, without the express
> written permission of Microsoft Corporation. Portions of this document contain
> information pertaining to **prerelease code** that is not at the level of
> performance and compatibility of the final, generally available product
> offering. … ©1985-1996 Microsoft Corporation. All rights reserved.

媒体側も一致する: `sources/windows-ce-1.0/PROVENANCE.md` の入手元は
Internet Archive item `ms-wince-desktopemulation-sdk-beta21`
= "Microsoft Windows CE 1.0 Desktop Emulation SDK - **Beta 2.1**"。

読み取り: **これは単なる著作権留保ではない。** 秘密情報として NDA 署名者に
開示された資料であり、配布範囲も「Microsoft 外の限定配布」かつ
「**再配布不可**」と明記されている。加えて内容の正確性も否定されている
（"may be inaccurate"）。→ 分類 **B1**（§5）。

### 4.4 CE 2.0 SDK — ベンダ proprietary 文書の再録（今回新たに特定）

`corpus/mvb/windows-ce-2.0-sdk/` 5,087 ページのうち、**1,035 ページは
Microsoft ではなく CPU ベンダの文書**である。

`corpus/mvb/windows-ce-2.0-sdk/VR4100/VR41home.html`（NEC、361 ページの書籍の
start page）逐語:

> This is an electronic rendering equivalent to the NEC VR4100 Processor
> Specification Revision 1.0, November 6, 1995. …
> **Copyright 1994-1997 by NEC Corporation. No part of this document may be
> copied by any means without written permission of NEC Corporation. This
> Document contains information tht is proprietary to NEC Corporation.** The
> information in this document is perliminary and is subject to change without
> notice. … NEC does not assume any liabiliy arising out of the application or
> use of any product or circuit described herein; **neither does it convey any
> license under patent rights nor imply the rights of others.**

（原文の誤字 "tht" "perliminary" "liabiliy" は OCR/原文のまま。修正していない。）

`corpus/mvb/windows-ce-2.0-sdk/PR3910/p3900000.html`（Philips、192 ページ）逐語:

> The information in this online document is from the Philips Preliminary PR3910
> Microsprocessor RISC Core Users Manual version 0.1, November 9, 1995. …
> **Copyright© 1994-1997 Philips Semiconductors. All rights reserved. This
> document and the products described in this document are owned by Philips
> Semiconductors, and may be used only as authorized in a signed license
> agreement or non disclosure agreement controlling such use.** No part of this
> publication may be reproduced, transmitted, or translated in any form or by any
> means, electronic, mechanical, manual, optical, or otherwise, without prior
> written permission of Philips Semiconductors …

Hitachi（SH3PROG 173 ページ / SHASM 180 ページの各第 1 ページ、および CE 1.0
PEGSDK の 2 ページ）逐語:

> **All rights are reserved: No one is permitted to reproduce or duplicate, in
> any form, the whole or part of this document without Hitachi's permission.** …
> **No license is granted by implication or otherwise under any patents or other
> rights of any third party or Hitachi, Ltd.**
>
> Copyright (c) Hitachi, Ltd. and HMSI, 1994-1996. All rights reserved. No
> Warranty. The product is licensed free of charge and provided "as is" …

同じ Hitachi 文言は **Learn の CE .NET 4.x ページにも存在する**
（`corpus/learn/windows-ce-net-4x/ms881482(v=msdn.10).html`
"SHx Assembler Documentation Disclaimer"、`ms864347(v=msdn.10).html`、および
`corpus/msdn-library/vsnet-2003/wcechp40/htm/ccrefSH-3DSPSeriesDocumentationDisclaimer.html`）:

> Hitachi, Ltd., established and maintains the SH-3 DSP Calling Sequence
> Specifications. … All rights are reserved: No one is permitted to reproduce or
> duplicate, in any form, the whole or part of this document without permission.

読み取り: **Microsoft の SDK に載っていたからといって、Microsoft がこれらの
再配布を許諾できる立場にない。** 権利者は NEC / Philips / Hitachi であり、
Philips のものは**利用そのもの**が署名済み契約に限定されている。→ 分類 B2・C。

### 4.5 MSDN Library / CHM / site / kb — 著作権表示のみ、許諾文言なし

`tools/scan-notices.py --depth 2` の実測（`data/reports/notice-scan-depth2.tsv`）:

| サブツリー | ページ数 | 「All rights reserved」を持つページ | 逐語サンプル |
|-----------|--------:|-----------------------------------:|--------------|
| `chm/windows-ce-3.0` | 8,962 | 8,962 (100 %) | `© 2013 Microsoft. All rights reserved.` ＋ retired-content 通知 |
| `chm/windows-ce-5.0` | 20,180 | 6,569 (32.6 %) | `© 2002 Microsoft Corporation. All rights reserved.` |
| `chm/windows-ce-4.2` | 567 | **0** | **通知なし** |
| `msdn-library/jan-2002` | 13,430 | 13,426 (**99.97 %**) | `© 2002 Microsoft` |
| `msdn-library/vs2008-sp1` | 33,011 | 31,301 (**94.8 %**) | `© 2007 Microsoft Corporation. All rights reserved.` |
| `msdn-library/vsnet-2003` | 37,372 | 4,994 (13.4 %) | `© 2002-2003 Microsoft Corporation. All rights reserved.` |
| `msdn-library/wcedevcon-99` | 6,383 | 1 (0.02 %) | — |
| `msdn-library/techshelps` | 5,179 | 2 (0.04 %) | — |
| `msdn-library/datadungeon-2000-04` | 2,932 | 6 (0.20 %) | — |
| `msdn-library/windows-mobile-6.5` | 35 | 34 (97.1 %) | `© 2010 Microsoft Corporation. All rights reserved.` |
| `msdn-library/2010-05` | 162 | 101 (62.4 %) | `© 2011 Microsoft. All rights reserved.` |
| `msdn-library/msdn-magazine` | 12 | 12 (100 %) | `©2003 Microsoft Corporation. All rights reserved.` |
| `learn/*` | 58,047 | 33,912 (58.4 %) | `© 2006 Microsoft Corporation. All rights reserved.`（元 MSDN ページの脚注が保持されている） |
| `dotnet/*` | 10,658 | 0 | Learn サイト脚注 `© Microsoft 2026` のみ（"All rights reserved" なし） |
| `site/windows-ce-2.0` | 20 | 19 (95 %) | `© 1997 Microsoft Corporation. All rights reserved. Terms of Use.` |
| `site/windows-ce-6.0` | 1 | 1 | release notes に「no part of this document may be reproduced, stored in or introduced into a retrieval system, or transmitted in any form or by any means … without the express written permission of Microsoft Corporation.」 |
| `kb/` | 261 | 13 | `Copyright Microsoft Corporation` は 260/261 (99.6 %) |
| `mvb/windows-ce-1.0` | 2,104 | 7 | §4.3 |
| `mvb/windows-ce-2.0-sdk` | 5,087 | 4 | §4.4 |

**旧レジストリの記述を訂正した点**: `msdn-library-copyright` の terms 欄は
「143 of 14,678 carry one」（143/14,678 ページのみ著作権表示）としていたが、
これは 2026-10 のディスク輸入前の数字で、実測は **49,902 / 98,516 ページ**
（うち明示的 "All rights reserved" 49,877）。3 桁過小だった。レジストリの
当該行を実測値に更新済み（`data/reports/notice-scan-depth2.tsv` が根拠）。

**許諾文言は、これらのツリーのどこにも存在しない。** あるのは著作権表示と
権利留保のみ。CE 3.0 のような "you may copy and use" も、CE 1.0 のような
"not for redistribution" も無い。→ 分類 A3。

### 4.6 OSS 文書 — ライセンスは読まれているが、1 件で自己矛盾

| ツリー | ページ上の文言（逐語） | 判定 |
|--------|----------------------|------|
| `oss/qt/` 8 | フッタ: 「The documentation provided herein is licensed under the terms of the GNU Free Documentation License version 1.3 as published by the Free Software Foundation.」＋**プロジェクト自身が前置した一文**: 「Copyright 2026 wince-docs-corpus, for the rendering only. … **Permission is granted to copy, distribute and/or modify this rendering under the terms of the GNU Free Documentation License, Version 1.3 or any later version published by the Free Software Foundation; with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.** A copy of the licence notice read from the original is in sources/oss-licenses/qt-gfdl-notice.txt. The licence text is at https://www.gnu.org/licenses/fdl-1.3.txt.」 | **矛盾あり。** レジストリは `qt-docs-gfdl-1.3` = 再配布 **no**（「再構成した完全なライセンス本文を保持していないため、GFDL 再配布としては提供しない」）と言うが、**ページ自体は GFDL での複製・配布・改変を許諾すると書いてある**。GFDL 1.3 §4 は「全ての複製物に本ライセンスの複製を添付すること」を要求するので、ライセンス全文を同梱しない現状では GFDL の条件を満たしておらず、ページの許諾文言は成立していない。→ §6.9 |
| `oss/sdl/` 1 | 「All wiki content is licensed under Creative Commons Attribution 4.0 International (CC BY 4.0).」 | yes。帰属・ライセンスリンク・変更明示がページ上にある |
| `oss/openssl/` 1 | 「Copyright (c) 1998-2018 The OpenSSL Project. All rights reserved. The SSL documentation included with this distribution is covered by the same copyright terms except that the holder is Tim Hudson (tjh@cryptsoft.com).」 | yes。ライセンスが要求する acknowledgment がページ上にある |
| `oss/wxwidgets/` 1 | 「Copyright (c) 1998 Julian Smart, Robert Roebling et al. **Permission is granted to make and distribute verbatim copies of this manual or piece of documentation provided any copyright notice and this permission notice are preserved on all copies.**」 | yes。両通知が保持されている |

### 4.7 Win32（CC-BY-4.0）— 帰属条件の充足に小さな穴

`sources/microsoftdocs/sdk-api/LICENSE` は CC-BY-4.0 全文、`LICENSE-CODE` は
MIT。両ファイルを保持することで帰属としている（`sources/microsoftdocs/PROVENANCE.md`）。

CC-BY-4.0 §3(a)(1) は (A) 著作権表示の保持、(B) ライセンス本文／URI、
(C) 免責表示、(D) **素材へのリンク**（合理的に可能な範囲で）を要求する。
現状 `corpus/win32/` 直下に帰属を述べたファイルが無く、
`corpus/win32/README.md` から `sources/microsoftdocs/PROVENANCE.md` を
辿る間接的な形になっている。一括再配布の媒体としては合理的な範囲だが、
**(D) を満たす `corpus/win32/NOTICE.md`（ライセンサー・ライセンス URI・
上流 URL・commit・変更の有無）を 1 枚置く**のが確実である。→ §7 P3

---

## 5. 違反内容の分類

依頼の軸（「再配布だけ禁止／情報源としては使える」「ライセンス保護＋再配布禁止
＋情報源としての使用も不許可」「ライセンス保護されているが情報源としては
使える」）に沿って、**原文の文言が実際に何を禁じ、何を許しているかだけ**で
分けた。ファイル数は `data/reports/license-audit.tsv`（2026-10-24）。

### 分類 E — 違反なし。再配布が明示的に許可されている（6,387 ファイル）

| scope | files | 根拠となる原文 | 条件 |
|-------|------:|---------------|------|
| `sdk-api-cc-by-4.0` | 5,284 | 「Attribution 4.0 International」（CC-BY-4.0 全文を `sources/microsoftdocs/sdk-api/LICENSE` に保持） | 帰属・ライセンスリンク・変更明示。§4.7 の穴を塞ぐこと |
| `win32-cc-by-4.0` | 1,091 | 同上（`MicrosoftDocs/win32`） | 同上 |
| `w32api-public-domain` | 2 | 「**THIS SOFTWARE IS NOT COPYRIGHTED.** This source code is offered for use in the public domain. You may use, modify or distribute it freely.」 | なし。ただしファイル単位の例外（winsock 3 ヘッダの UCB/DEC 表示、Mesa `gl.h`）が同じ声明に列挙されている |
| `mingw32ce-public-domain` | 2 | 「**This file has no copyright assigned and is placed in the Public Domain.** … You are free to use this package and its code without limitation.」 | なし。**今回新たに正しく分類し直した**（旧: `sources/` 落ちで「Microsoft メディア・声明なし・all rights reserved」だった） |
| `dotnet-pinvoke-mit` | 2 | 「Permission is hereby granted, free of charge, to any person obtaining a copy」（MIT） | 著作権表示と許諾表示の保持 |
| `openssl-1.0.2` / `sdl-wiki-cc-by-4.0` / `wx-docs-licendoc` | 各 2 | §4.6 | 各ライセンスの表示義務（いずれもページ上で満たしている） |

**情報源としての利用: 全面的に可。再配布: 可（条件付き）。**
このリポジトリで公開してよいのは、実質この 6,387 ファイルだけである。

### 分類 A — 再配布だけが禁止。情報源としての内部利用は許容される（＝あとで削除すれば問題が残らない）

#### A1. 内部参照利用が**明示的に**許諾されている（8,964 ファイル）

| scope | files | 原文 |
|-------|------:|------|
| `ce30-internal-reference` | 8,964 | 「You may **copy and use** this document for your **internal, reference purposes**.」＋「This document does not provide you with any legal rights to any intellectual property in any Microsoft product.」 |

* **情報源利用: 明示的に可。** 複製（copy）まで許諾されている。本プロジェクトの用途そのもの。
* **再配布: 不可。** "internal" の範囲外。
* **入手経路: Microsoft 公式 Download Center（id=41197）。** 最も強い立場。
* **削除後の再取得: 可能**（公式配布物が現存）。
* 注意: 「any legal rights to any intellectual property」を与えないという文言は、**特許**に関する留保である。仕様書を書くことの著作権上の正当性とは別の問題として、生成物の実装側で特許を踏む可能性は残る（§2 の Wikipedia 記事も「独立発明は特許権に対しては無防備である」と明記）。

#### A2. 個人・非商用利用が**明示的に**許諾されている（68,706 ファイル）

| scope | files | 原文 |
|-------|------:|------|
| `learn-tou` | 68,706 | 「use of such Documents from the Services is for **informational and non-commercial or personal use only** and **will not be copied or posted on any network computer** or broadcast in any media」／「except for your own, personal, non-commercial use」 |

* **情報源利用: informational な利用として可。**
* **再配布: 明確に不可。** "posted on any network computer" は公開 GitHub リポジトリと公開リリースアセットの両方にそのまま該当する。
* **削除後の再取得: 可能**（learn.microsoft.com の previous-versions は Microsoft が今も配信している。PDF/ISO は無いが閲覧はできる）。
* **留意**: 文言は "personal"。組織的活動として行う場合は文言上の根拠が弱い。ただし「読む」行為自体を禁じる文言は無い。

#### A3. 著作権表示のみ、許諾文言なし（123,874 ファイル）

| scope | files | 実際にある文言 |
|-------|------:|--------------|
| `msdn-library-copyright` | 98,508 | 「© 2002 Microsoft」等の著作権表示（49,902 ページ）と "All rights reserved"（49,877 ページ）。**許諾文は皆無** |
| `ms-media-copyright` | 25,081 | CE 5.0 CHM の 32.6 % に「© 2002 Microsoft Corporation. All rights reserved.」。CE 4.2 の 567 ページは**通知そのものが無い** |
| `kb-article-copyright` | 260 | 「Copyright Microsoft Corporation」（260/261） |
| `site-copyright` | 25 | 「© 1997 Microsoft Corporation. All rights reserved. Terms of Use.」 |

* **再配布: 不可**（all rights reserved。声明が見つからないものは安全側解釈で all rights reserved 扱い — この扱いはレジストリの宣言どおりで妥当）。
* **情報源利用: 法的に禁止されていないが、明示的に許諾されてもいない。** 根拠は許諾文言ではなく著作権法の一般原則（思想・表現の二分論。§8.1）。**前提条件は、媒体を正規に入手していること**である。archive.org の Microsoft 公式ディスクイメージ（部品番号 X15-18280 / X09-46370 / MPLATSDK.20 等）から取った群は、Microsoft が製造した正規媒体の写しなので、この前提は満たされる。第三者ミラーから取った群（C）は満たされない。
* **削除後の再取得: 一部のみ可能。** VS2008 SP1（33,011）は Microsoft 公式 ISO が現存するので再取得できる。それ以外（vsnet-2003 / jan-2002 / wcedevcon-99 / CE 5.0 / CE 4.2）は公式配布が消えており、archive.org の item が消えれば再取得できない。
* **依頼の「再配布が許可されていないだけであとで削除すれば情報源として使用できるもの」は、A1・A2・A3・A5 の計 201,546 ファイルが該当する。** ただし A3 のうち第三者ミラー経由分（`techshelps` 5,178 + `datadungeon-2000-04` 2,931 + `kbarchive` 260 = 8,369 ファイル）は**入手経路が別問題**になるので §8.3 を先に読むこと。

#### A4. ライセンス保護下だが、条件を満たせば再配布も可能になる（9 ファイル）

| scope | files | 状態 |
|-------|------:|------|
| `qt-docs-gfdl-1.3` | 9 | GFDL 1.3。**条件（ライセンス全文の同梱、著作権表示とライセンス通知の保持）を満たせば再配布可**。現状は全文を同梱していないので不可。→ §6.9 の自己矛盾の解消と同時に、`sources/oss-licenses/gfdl-1.3.txt` を追加すれば E に移せる |

#### A5. OSS ライセンス通知の抜粋。原本は保持していない（2 ファイル）

| scope | files | 状態 |
|-------|------:|------|
| `qt-4.8-wince-lgpl` | 1 | Qt 4.8 `qfunctions_wince.h` のライセンス通知（LGPL 2.1/3 または GPL 3 または商業ライセンス）。**ヘッダ本体も実装も保持していない。** 抜粋は COPYING の逐語複製ではないので、LGPL の複製物としては提供していない |
| `sdl-1.2-lgpl-2.1` | 1 | SDL 1.2 の LGPL 2.1 通知抜粋。「Activities other than copying, distribution and modification are not covered by this License; they are outside its scope.」**ソースツリーは保持していない** |

* 情報源利用: 可（通知を読むことは複製でも配布でもない）。
* 再配布: 不可（抜粋がライセンス本文の逐語複製でないため、LGPL の条件を満たす複製物として提供できない）。
* 両方とも「**ライセンス条文の証拠として控えた抜粋**」であり、著作物の収集ではない。

### 分類 B — ライセンス保護＋再配布禁止＋**情報源としての使用も許諾されていない**（計 2,293 ファイル）

#### B1. 秘密保持契約下の事前公開資料（2,101 ファイル）

| scope | files | 原文 |
|-------|------:|------|
| `ce10-nda-prerelease` | 2,101 | 「**confidential and proprietary information of Microsoft Corporation. It is disclosed pursuant to a non-disclosure agreement that the recipient has signed with Microsoft.**」／「only for limited distribution outside of Microsoft and **not for redistribution**」／「No part of this document may be reproduced or transmitted **in any form or by any means, electronic or mechanical, for any purpose**, without the express written permission of Microsoft.」 |

* `corpus/mvb/windows-ce-1.0/` 全 2,101 ページ（PEGSDK 1,919 + PEGDDK 181 + RELNOTES 4、うち 3 ページは Hitachi 表示で分類 C）。
* **再配布: 不可**（"not for redistribution" と明示）。
* **情報源利用: 許諾されていない。** NDA 署名当事者への開示として規定されており、署名していない者が利用する根拠が文言上存在しない。"for any purpose" の複製・送信禁止も、目的を限定していない。
* **クリーンルームへの影響（R3）: 致命的。** 秘密として開示された情報を仕様書の入力にすると、「公開資料から作成した仕様書」ではなくなり、独立発明の主張の根拠が消える。著作権に加え**営業秘密／契約違反**の問題が生じる（§8.2）。
* **副次的な問題: 内容が信頼できない。** 声明自身が「may be inaccurate」「may be changed substantially prior to final commercial release」「It is meant to accompany software still in development」と述べている。仕様書の根拠として使う価値そのものが低い。
* **削除後の再取得: 不可能に近い**（Beta 2.1 の ISO は Microsoft が配布していない）。だからこそ「消す前に判断する」必要がある。

#### B2. 使用そのものが署名済み契約に限定された第三者資料（192 ファイル）

| scope | files | 原文 |
|-------|------:|------|
| `philips-pr3910-proprietary` | 192 | 「This document and the products described in this document are owned by Philips Semiconductors, and **may be used only as authorized in a signed license agreement or non disclosure agreement controlling such use.**」＋「No part of this publication may be reproduced, transmitted, or translated in any form or by any means … without prior written permission of Philips Semiconductors」 |

* **これは調査した全 210,773 ページの中で、「使用（use）」を明示的に制限している唯一の文言である。** 他の声明は reproduction / distribution / transmission を禁じているが、use は禁じていない。Philips のものは use を署名済み契約に限定している。
* **情報源利用: 許諾されていない。**
* 内容も "Preliminary … version 0.1" であり、正確性の保証がない。

### 分類 C — 第三者（CPU ベンダ）の権利。Microsoft が許諾できないもの（716 ファイル）

| scope | files | 権利者 | 原文 |
|-------|------:|--------|------|
| `nec-vr4100-proprietary` | 361 | NEC Corporation | 「No part of this document may be copied by any means without written permission of NEC Corporation.」／「proprietary to NEC Corporation」／「neither does it convey any license under patent rights」 |
| `hitachi-sh-books` | 353 | Hitachi, Ltd. / HMSI | 「No one is permitted to reproduce or duplicate, in any form, the whole or part of this document without Hitachi's permission.」／「No license is granted by implication or otherwise under any patents or other rights of any third party or Hitachi, Ltd.」 |
| `mvb-third-party-notice` | 2 | Hitachi, Ltd. / HMSI | 同上（CE 1.0 PEGSDK 内の 2 ページ。旧レジストリは 1 ページしか拾っていなかった） |

* **A3 と決定的に違う点**: 権利者が Microsoft ではない。Microsoft SDK に
  再録されていても、Microsoft はこれらの再配布を許諾できない。したがって
  「Microsoft の媒体から正規に取った」という A3 の前提が**この群には
  通用しない**。
* **情報源利用: 許諾されていない**（"without Hitachi's permission" /
  "without written permission of NEC"）。加えて特許ライセンスを明示的に
  否定している。
* **追加の懸念**: `corpus/mvb/windows-ce-2.0-sdk/` には表示ページを持たない
  ベンダ系書籍も含まれる — `SHTOP/`（SHCL Compiler Reference、95 ページ）、
  `SHCALL/`（SH-3 Calling Standard、23 ページ）はいずれも Hitachi の SH 系
  コンパイラ・呼出規約の文書だが、ページ内に Hitachi の通知を持たない。
  レジストリ上は `ms-media-copyright`（Microsoft 扱い）に落ちる。**権利者が
  誰かを確定できないまま Microsoft 扱いにしている**ので、`hitachi-sh-books`
  に含めるか、少なくとも「権利者未確定」としてマークすべき。→ §6.10
* **削除後の再取得: 可能**（`MPLATSDK.20.ISO` は archive.org に現存）。

### 分類 D — 商業出版物のスキャン。リポジトリ自身のポリシーに反して収集されている（7 ファイル / 約 117 MB）

| scope | files | 発行元 | 原文 |
|-------|------:|--------|------|
| `mspress-book-copyright` | 6 | **Microsoft Press**（書籍、ISBN・Library of Congress CIP 付き） | 「PUBLISHED BY Microsoft Press A Division of Microsoft Corporation … Copyright © 1998/1999 by Microsoft Corporation All rights reserved. **No part of the contents of this book may be reproduced or transmitted in any form or by any means without the written permission of the publisher.** … Microsoft Press books are available through booksellers and distributors worldwide.」 |
| `prentice-hall-book-copyright` | 1 | **Prentice Hall PTR**（第三者出版社、ISBN 0-13-025592-0、$49.99 U.S. / $75.00 Canada） | 「**All rights reserved. No part of this book may be reproduced, in any form or by any means, without permission in writing from the publisher.** Printed in the United States of America … ISBN 0-13-025592-0 Prentice-Hall International (UK) Limited」 |

`sources/bitsavers-microsoft/` の中身（sha256 は
`sources/terms/mspress-wince-books-copyright-page.txt` と
`prentice-hall-wince30-appprog-copyright-page.txt` に記録）:

| ファイル | サイズ | 著作権表示ページ |
|---------|-------:|-----------------|
| `Microsoft_-_Windows_CE_Programmers_Guide_1998.pdf` | 37.3 MB | PUBLISHED BY Microsoft Press / © 1998 / All rights reserved |
| `Windows_CE_3.0_Application_Programming_2001.pdf` | 37.9 MB | **Prentice Hall PTR** / ISBN 0-13-025592-0 / $49.99 |
| `Microsoft_-_Windows_CE_Programmers_Guide_1999.pdf` | 12.1 MB | PUBLISHED BY Microsoft Press / Part No. 097-0002194 |
| `Microsoft_-_Windows_CE_User_Interface_Services_Guide_1999.pdf` | 12.0 MB | PUBLISHED BY Microsoft Press / Part No. 097-0002195 |
| `Microsoft_-_Windows_CE_Communications_Guide_1999.pdf` | 10.5 MB | PUBLISHED BY Microsoft Press / Part No. 097-0002196 |
| `Microsoft_-_Windows_CE_Device_Driver_Kit_1999.pdf` | 7.1 MB | PUBLISHED BY Microsoft Press / ISBN 0-7356-0619-6 |
| `Microsoft_-_Windows_CE_Developers_Kit_Cover_1999.pdf` | 1.0 MB | 表紙スキャン、通知テキスト抽出できず |

* **これは「公開資料」ですらない。** 書店・卸・Microsoft 販売拠点で販売された
  商業書籍（ISBN と価格と Library of Congress 目録を持つ）であり、
  Prentice Hall のものは Microsoft の出版物ですらない。
* **リポジトリ自身のポリシーと真っ向から矛盾する。**
  `queues/third-party-sources.md` は同じ bitsavers ディレクトリについて
  逐語でこう書いている: 「Microsoft/MS-Press hardware documentation with
  **no stated redistribution licence**; the corpus rule "verbatim books are
  only collected when a licence or public-domain marking is found" … applies,
  so **these stay uncollected**」。一方 `sources/bitsavers-microsoft/PROVENANCE.md`
  は「The same reading applies to these printed guides」と逆の結論を書いて
  ファイルを保持している。**両方は成立しない。** → §6.3
* **Prentice Hall の本は付録 CD-ROM に Microsoft ソフトウェアを含む**:
  「Full working copy of Microsoft® eMbedded Visual C++ and Microsoft eMbedded
  Visual Tools 3.0™ … Microsoft Pocket PC® SDK」。書籍本文には
  「Microsoft® eMbedded Visual C++ and Microsoft eMbedded Visual Basic
  version 3.0 has been reproduced by Prentice Hall PTR under a special
  arrangement with Microsoft Corporation.」とある。**二人の権利者が同時に
  制限している。**
* **削除後の再取得: 不要**（仕様書の入力として価値がない。内容が欲しければ
  書店で買うか図書館で読む）。→ 分類 D は「情報源として使うために残す」
  判断をする群ではなく、**無条件に除去すべき群**。

### 分類表（依頼された三分への対応）

| 依頼された区分 | 該当 | ファイル数 |
|---------------|------|-----------:|
| **再配布が許可されていないだけ。あとで削除すれば情報源として使用できる** | A1 8,964（内部参照が明示許諾）＋ A2 68,706（個人非商用が明示許諾）＋ A3 123,874（著作権表示のみ、使用禁止の文言なし）＋ A5 2（OSS ライセンス通知の抜粋） | **201,546** |
| **ライセンス保護されており、再配布も許可されておらず、情報源としての使用も許可されていない** | B1 2,101（NDA 下のベータ資料）＋ B2 192（使用が署名済み契約に限定）＋ C 716（ベンダ proprietary、許諾なし・特許ライセンス明示否定）＋ D 7（商業書籍、複製禁止を明示） | **3,016** |
| **ライセンス保護はされているが情報源として利用できる** | A4 9（GFDL、条件を満たせば再配布も可）＋ E 6,387（CC-BY / MIT / パブリックドメイン — 保護されているが許諾がある） | **6,396** |
| （プロジェクト自身の著作物、ライセンス未定） | `project-own` 127 ＋ `derived-from-sources` 457 | 584 |

合計 201,546 + 3,016 + 6,396 + 584 = **211,542** ＝ git 追跡ファイル数と一致
（`tools/check-licenses.py --tracked`、`data/reports/license-audit.tsv`）。

**読み方の注意**: A の 201,546 は「削除すれば情報源として使える」群だが、
そのうち 8,369 ファイルは**第三者のミラーサイト経由で取得した写し**である
（`provenance-scopes.tsv` の group = `mirror`）。「Microsoft の媒体を正規に
入手した」前提が成り立たないので、A3 の中でも弱い立場にある。
逆に B・C・D の 3,016 ファイルは、削除しても**情報源として使うべきでない**
群であり、削除は公開停止のためでなくクリーンルームの入力から外すために
行う（§7 P2）。

---

## 6. リポジトリ固有の不整合（原文確認で出てきたもの）

分類以前に、リポジトリが**自分の書いた規則と食い違っている**箇所がある。
権利判断より先に直すべき順に並べる。

### 6.1 【最重要】`.gitignore` はコーパスを無視すると宣言しているが、実際にはコミットされている

`.gitignore` 30 行目以降:

```
/corpus/**
!/corpus/**/
!/corpus/**/README.md
!/corpus/**/PROVENANCE.md
/sources/**
```

HEAD のコミットメッセージも「The page bytes and media payloads are ignored by
git; paperwork remains tracked.」と述べる。しかし実測:

```
$ git ls-tree -r HEAD --name-only | wc -l            → 211,542
$ git ls-tree -r HEAD --name-only | grep -c '^corpus/.*\.html$'  → 197,397
$ git status --short                                  → (clean)
```

**197,397 のコーパス HTML が HEAD にコミットされており、既定ブランチ `back`
でも `origin/back` でも同じ**（`git ls-tree -r origin/back` で確認）。
`.gitignore` は既に追跡済みのファイルには効かないので、
`git check-ignore -v` は「.gitignore:30:/corpus/**」と報告するのに
ファイルは追跡されたまま、という状態になっている。

リポジトリは **public**（`gh repo view`: `isPrivate: false`、
diskUsage 1,480,510 KB）。つまり `.gitignore` が意図した
「paperwork だけを追跡する」状態になっておらず、**意図に反して全ページを
公開配布している**。

### 6.2 公開リリースアセットが別途 2 つある

```
corpus-latest   corpus-asset.tar.zst   273,273,748 bytes
kb-latest       kb.sqlite3.gz          283,164,124 bytes
```

`docs/LICENSING.md` は「Corpus page bytes and verbatim media payloads live in
the rolling corpus-latest release asset」と書くが、**リリースアセットも
GitHub の公開物であり、"posted on any network computer" に該当する**。
git 追跡を止めても、これらを消さない限り公開は続く。

さらに重要なのは `kb-latest` の中身である: KB は宣言文を**逐語引用**で保持する
（README: 「111,778 declaration quotes (verbatim, page-cited)」）。
`docs/LICENSING.md` 自身が「Knowing a declaration's text is not the same as
being allowed to publish it: the declaration quotes in the knowledge base … are
as restricted as the pages they come from」と正しく指摘している。
**その KB を 283 MB の公開アセットとして配布している。**
API 名・シグネチャ・定数値は表現ではなくアイデア／規約なので保護対象外と
主張できる（§8.1）が、`declaration_observations` が説明文まで逐語で持つなら
表現の複製を含む。→ §7 P1・P2

### 6.3 `queues/third-party-sources.md` と `sources/bitsavers-microsoft/` が正反対のことを書いている

§5-D のとおり。ポリシーは「stay uncollected」、実体は 117 MB を保持。

### 6.4 `docs/LICENSING.md` の数字が 3 桁ずれている

同ファイルは「published (git-tracked) files by redistribution: **yes 5,291,
no 115,943, unclear 137**」（2026-10-05 実行）を「The finding」として掲げるが、
2026-10-24 の実測は **yes 6,387, no 204,571, unclear 584**。
「115,945 of the 121,374 files」という本文の記述も同様に古い。
`msdn-library-copyright` の「143 of 14,678」も §4.5 のとおり実測 49,902/98,516。
**古い数字を残すと、レビューする人が現在の規模を過小評価する。**

### 6.5 `docs/LICENSING.md` が存在しない文書を参照している

「`docs/review-2026-10.ja.md` §14 records the finding for the owner」とあるが、
`docs/` にそのファイルは無い（実在するのは COLLECTION-POLICY.md / LICENSING.md /
cegcc-survey.ja.md / kb-design.ja.md の 4 つ）。
この文書（`docs/review-rights-2026-10.ja.md`）がその役割を引き受ける。

### 6.6 `ms-media-copyright` の「声明が見つからない」という記述が、少なくとも 3 ツリーで誤り

旧 terms 欄は `corpus/mvb/` を「no licence statement located」としていた。
実際には CE 1.0 に NDA 通知・再配布禁止通知・著作権通知の三つ、
CE 2.0 SDK に NEC / Philips / Hitachi の proprietary 通知がある（§4.3・§4.4）。
**「見つからない」は調査結果ではなく調査不足だった。** 新 scope
（`ce10-nda-prerelease` / `nec-vr4100-proprietary` / `philips-pr3910-proprietary` /
`hitachi-sh-books`）を追加して解消済み。

### 6.7 `docs/COLLECTION-POLICY.md` の CeGCC 記述と KB の実態が食い違う

ポリシーは逐語で「The old header-membership evidence rank (`reference-header`)
and the value fill (`tools/w32api_gaps.py`) were **abolished** with the
2026-10-19 redesign: **nothing it parses feeds a resolved fact.**」と述べる。
しかし `kb/reports/summary.md`（生成物）は:

```
- CeGCC-adopted (layer 'cegcc', only where CE docs are silent):
  3,527 constant values, 4,845 header choices
```

`README.md` も「3,385 of them carry a clearly-labelled CeGCC-adopted value in a
separate 'cegcc' layer」「22,586 CE header choices plus 4,699 CeGCC-adopted ones」
と書き、`kb/README.md` には「the **`cegcc` adoption layer**」の設計記述がある。

**クリーンルーム観点での意味（重要）**: 仕様書の入力には
「公開ドキュメント」と「既存実装のヘッダ」の二種類があり、後者は
クリーンルームの wall の**反対側**の成果物である。プロジェクト自身の
`corpus/oss/PROVENANCE.md` が「cegcc / mingw32ce headers — source, and the
opposite of a clean room」と書いているとおりである。

評価は分けて述べるべきである:
* **著作権上は問題ない。** CeGCC w32api はパブリックドメイン
  （「THIS SOFTWARE IS NOT COPYRIGHTED」）、mingw32ce も
  パブリックドメイン（「no copyright assigned」）。ヘッダを複製していない
  （「No header file is copied」）し、値を行単位で引用している。
* **しかし「公開資料から仕様書を作成する」という宣言とは整合しない。**
  8,372 の解決済み事実（3,527 定数値 + 4,845 ヘッダ選択）が
  ドキュメントではなく**別実装**に由来する。
* **実用上の危険もある。** CeGCC の w32api は MinGW の w32api を CE 向けに
  改編したもので、CE の世代差を反映しない。プロジェクト自身が
  `MAX_PATH`（CE の DirectShow DVD `Dvdata.h` は 128、デスクトップは 260）と
  `HTTP_QUERY_MAX`（CE ページは 75、reference は 45）の乖離を記録している。
  ドキュメントが沈黙している箇所で別実装の値を採用すると、この種の
  世代差エラーが**出典のない値**として仕様書に固定される。

`layer='cegcc'` で分離され、documented fact を上書きせず、
file:line で引用している設計は誠実である。**だが方針文書が「abolished」と
書いている以上、どちらかに統一しなければならない。** → §7 P4

### 6.8 `docs/COLLECTION-POLICY.md` は「唯一の reference」だと言うが、2 つある

「`sources/w32api-cegcc/` — **the only reference**」とある一方、
`sources/w32api-cegcc-mingw/`（mingw32ce）も `reference_names` に
`source_id w32api-cegcc-mingw` として読み込まれ、`README.md` も
「the pinned third-party references (CeGCC w32api **+ mingw32ce**,
dotnet/pinvoke)」と書く。

さらに **mingw32ce はこれまで権利レジストリに登録されていなかった**。
`sources/` の落ち規則で `ms-media-copyright`（「Microsoft CE メディアの
ドキュメント、声明なし、all rights reserved」）に分類されており、
**パブリックドメインの MinGW ランタイムを Microsoft の未許諾媒体として
扱っていた**。今回 `mingw32ce-public-domain`（yes）を追加して修正済み。

### 6.9 Qt のページは GFDL を許諾すると書き、レジストリは再配布不可だと言う

§4.6 のとおり。GFDL 1.3 §4 は複製物へのライセンス全文添付を要求するので、
全文を同梱しない限りページの許諾文言は条件を満たさない。
**ページの記述とレジストリの記述のどちらかが間違っている**状態を
公開リポジトリに置くべきではない。→ §7 P3

### 6.10 権利者が確定できないベンダ文書がある

`corpus/mvb/windows-ce-2.0-sdk/SHTOP/`（SHCL Compiler Reference、95 ページ）と
`SHCALL/`（SH-3 Calling Standard、23 ページ）は Hitachi の SH 系ツール・呼出
規約の文書だが、ページ内に Hitachi の通知を持たないため、レジストリ上は
`ms-media-copyright`（Microsoft 扱い）に落ちる。SH3PROG / SHASM と同じ書籍群
である可能性が高いが、**原文で確認できていない**。→ §7 P4

### 6.11 取得経路が記録されていないツリーが 1 つある

`corpus/msdn-library/windows-mobile-6.5/` 34 ページ。PROVENANCE.md 自身が
「The extraction method, tool and date are **not recorded** in this repository's
history … There is no `saved from url` comment and no canonical link, so the
individual source URLs **cannot be reconstructed** from the files.」と書く。
来歴レジストリでは `media-unrecorded` として、この不確実性自体を記録した。
**出所を言えない 34 ページを公開リポジトリに置くこと自体がリスク**である。

### 6.13 【既存の問題・権利とは別】収集ポリシー検査が 70 件の違反で exit 1 している

権利レビューの範囲外だが、資料整理の過程で出てきたので記録する。
**これは今回の作業以前から存在する状態であり、私が加えた変更は
`corpus/` のどのファイルにも触れていない**（`git status` で確認）。

```
$ python3 tools/check-policy.py
corpus/            210,773 pages in 10 trees
  CE trees         193,735 pages (chm, kb, learn, msdn-library, mvb, site)
  other layers     10,668 pages (dotnet, oss, pinvoke; oss allowlist 11)
corpus/win32/api/  6,300 CE-shared API pages
policy             70 violation(s): not-ce-shared x70
EXIT=1
```

* 違反は全て `corpus/win32/api/` の COM インターフェース・周辺モジュールに
  集中している（確認できた 50 件の内訳: `objidl` 9、`mediaobj` 6、
  `shobjidl_core` 5、`oleidl` 5、`upnp` 4、`ocidl` 3、`oaidl` 3、`dsrole` 3、
  `shellapi` 2、`processthreadsapi` 2、`objidlbase` 2、`commdlg` 2、
  `comcat` 2、`iaccess` 1、`docobj` 1）。
* **少なくとも一部は名前規則の誤検出に見える。** 例えば
  `ns-commdlg-findreplacea.md` / `-w.md` は「Windows CE does not document
  'findreplacea'」とされるが、`data/reports/ce-api-names.tsv` には
  `findreplace`（`techshelps/WCEMFC` の `cfndrdlg_17`、MFC の
  `CFindReplaceDialog`）が載っている。A/W 変形の折込みが
  techshelps 由来の名前に対して効いていない可能性が高い。
* 一方 `dsrole`（Active Directory ドメイン参加）や `mediaobj`（DirectX Media
  Object）は、`docs/COLLECTION-POLICY.md` が「CE は持たなかった API 群」として
  `data/win32-exclude.tsv` に挙げている種類のものに近く、**実違反の可能性**がある。
* 影響: `.github/workflows/` の収集系ワークフロー
  （`harvest.yml` / `crawl-mirror.yml` / `extract-chm.yml` / `import-media.yml` /
  `import-win32.yml`）は全て最後に `tools/check-policy.py` を実行するので、
  **収集系の CI は現在すべて失敗する状態**である。それなのに
  `docs/COLLECTION-POLICY.md` は期待出力として「policy OK」を掲げ、
  README は「every imported page carries its CE evidence」と述べている。

→ 権利レビュー（§5）とは独立した調査が必要なので、ここでは**発見の記録に
とどめる**。70 件を 1 件ずつ「誤検出（規則を直す）／実違反（ページを外す）」
に切り分ける作業は §7 の P4 に登録した。

### 6.12 存在しないツールを参照している文書がある

`corpus/oss/README.md`: 「`tools/gen-include-def.py` does not emit this layer.」
— そのファイルは存在しない（`README.md` と `docs/COLLECTION-POLICY.md` は
「include/.def 生成器は別レイヤで、このリポジトリにはまだ存在しない」と
正しく書いている）。

---

## 7. 推奨措置（優先度順）

### P1 — 公開を止める（R1 の解消。これ以外に優先するものはない）

204,571 ファイルの公開配布を止める。手段は三択で、`docs/LICENSING.md` が
既に「the decision that is still open」として挙げているものと同じだが、
今回の実測で**判断材料が揃った**:

| 選択肢 | 内容 | 評価 |
|-------|------|------|
| **(a) リポジトリを private にする** | 最小限の手間で R1 が消える。A1（CE 3.0「internal, reference purposes」）と A2（Learn「personal and non-commercial use」）の文言に**そのまま適合**する | **推奨。** CE 3.0 の許諾文言は "internal" であり、private リポジトリはまさにその範囲。§3.3 のとおり 77 % は公式代替が無いので、写しを保持する価値は高い |
| **(b) public のまま、制限ツリーとそこから取った引用を全て外に出す** | 公開してよいのは分類 E の 6,387 ファイル（＋条件を揃えた A4 の 9）だけ。KB の逐語引用も同時に出す必要がある | 実質的にプロジェクトの目的（非公開の仕様書作成）と両立しない。`corpus/win32/` だけの公開リポジトリになる |
| **(c) Microsoft から書面許諾を得る** | Learn ToU の「without prior written consent from Microsoft」に対応 | 並行して試みる価値はあるが、これを待って公開を続けるのは順序が逆 |

(a) を採る場合の具体的な作業:
1. **リリースアセット 2 件を削除する**（`gh release delete corpus-latest` /
   `kb-latest`）。git 追跡を止めるだけでは §6.2 の公開は止まらない。
2. **git 履歴からコーパスを除去する**。既定ブランチ `back` の HEAD に
   197,397 ページが入っているので、ツリーから消すだけでは履歴に残る。
   リポジトリを private にするなら履歴の書き換えは必須ではないが、
   将来 public に戻す可能性を残すなら `git filter-repo` 等で
   履歴ごと落とす必要がある。
3. `.gitignore` の意図どおりにする（コーパスは release asset から
   materialize する運用に戻す）。
4. **fork / clone が既に存在するか確認する**（`gh api repos/.../forks`）。
   一度 public だったものは回収できない前提で判断する。

### P2 — B1・B2・D を KB の入力から外す（R3 の解消）

**これは公開を止めても残る問題である。** 削除しても「読んでしまった」事実は
消えないが、少なくとも仕様書に混入した汚染は除去できる。

| 対象 | files | 措置 |
|------|------:|------|
| `corpus/mvb/windows-ce-1.0/`（B1、NDA ベータ） | 2,101 | **KB の入力から除外する**（`tools/kbgen` の入力リストから外す）。CE 1.0 の API 表面が必要なら、NDA 表記のない別資料で置き換える — 具体的には CE 1.0/2.0 期の MSDN Library セット（`corpus/msdn-library/techshelps/` の CE 1.0/2.0 書籍）が同じ API を A3 の立場で文書化している。ページ自体は private 環境で証拠として保持するか、あるいは保持しない判断も成り立つ（内容が "may be inaccurate" かつ "prerelease" なので、仕様書の根拠としての価値が低い） |
| `corpus/mvb/windows-ce-2.0-sdk/PR3910/`（B2、Philips） | 192 | **除外。** use が署名済み契約に限定されている。PR3910 は MIPS RISC コアの CPU 仕様で、include/def の生成には元々不要（CE の API 表面ではない） |
| `sources/bitsavers-microsoft/`（D、商業書籍） | 7 files / 117 MB | **無条件に削除。** `queues/third-party-sources.md` の既存の判断（"stay uncollected"）に戻すだけで、新しい判断は要らない。Prentice Hall の 1 冊は第三者出版社の商業書籍であり、Microsoft の許可では解決しない |
| `corpus/mvb/windows-ce-2.0-sdk/VR4100/`・`SH3PROG/`・`SHASM/`・`SHTOP/`・`SHCALL/`（C） | 1,035 | **KB の入力から除外。** CPU ベンダの文書で、CE の API 表面ではない。include/def の生成に寄与しない |

除外の実装は `tools/kbgen` の入力側に「除外リスト」を持たせるのが
`data/win32-exclude.tsv` の既存パターンと一致する。除外した事実は
`kb/reports/gaps.tsv` に**理由付きで**残す（「値を捏造しない」という
プロジェクトの原則を、ここでも守る）。

### P3 — 条件を満たせば公開できるものを、実際に条件を満たす（E・A4 の強化）

1. `corpus/win32/NOTICE.md` を追加し、CC-BY-4.0 §3(a)(1)(A)–(D) を
   1 枚で満たす（ライセンサー = Microsoft Corporation、ライセンス URI、
   上流リポジトリ URL と commit、変更の有無）。§4.7
2. `sources/oss-licenses/gfdl-1.3.txt` を追加して GFDL 1.3 全文を同梱し、
   Qt 8 ページを `qt-docs-gfdl-1.3` = **yes** に移す。同時に §6.9 の
   矛盾（ページの許諾文言 vs レジストリの no）を解消する
3. リポジトリ自身の LICENSE を決める。`project-own` 127 ファイルが
   「undecided」のまま公开されている

### P4 — 文書と実態を一致させる

| 箇所 | 措置 |
|------|------|
| §6.4 `docs/LICENSING.md` の古い数字 | 2026-10-24 の実測（yes 6,387 / no 204,571 / unclear 584）に更新 |
| §6.5 存在しない `docs/review-2026-10.ja.md` §14 への参照 | この文書への参照に置き換え |
| §6.3 bitsavers の方針矛盾 | `queues/third-party-sources.md` の "stay uncollected" を正とし、`sources/bitsavers-microsoft/PROVENANCE.md` を削除（P2 でファイル自体を削除するので併せて） |
| §6.7 CeGCC 採用層 | `docs/COLLECTION-POLICY.md` の「abolished」と KB の「3,527 + 4,845」のどちらが真かを決めて統一する。**クリーンルームの宣言を守るなら、採用層を本当に廃止するか、少なくとも「ドキュメントが沈黙する箇所に限り、別実装由来であることを明示した暫定値」として仕様書の出力から既定で除外する** |
| §6.8 「the only reference」 | mingw32ce も reference であることを明記 |
| §6.10 SHTOP / SHCALL の権利者 | Hitachi 由来かどうかを原文で確定し、`hitachi-sh-books` に含めるか「権利者未確定」scope を新設 |
| §6.11 `windows-mobile-6.5` の来歴 | 公式媒体（VS2008 SP1 ISO は Microsoft が現存配布している）から再導出して PROVENANCE を書き直すか、来歴不明のままなら削除 |
| §6.12 `tools/gen-include-def.py` | 参照を削除 |
| §6.13 `check-policy.py` の 70 違反 | 1 件ずつ「A/W 折込み等の規則の誤検出」か「CE が本当に持たない API（実違反）」かに切り分け、前者は `tools/ce_api_names.py` の折込み規則を直し、後者は `data/win32-exclude.tsv` に加えてページを外す。**権利レビューとは独立の作業**なので別タスクにする |
| §6.1・6.2 git/リリースの実態 | `docs/LICENSING.md` の「The rule is implemented, not promised」が成立するように、P1 の後に状態を書き直す |

### P5 — 仕様書（KB）側の表現リスク（R2）を測る

`declaration_observations` の逐語引用が**宣言文（シグネチャ・定数式・
構造体定義）だけ**なのか、**説明文の散文**も含むのかを測る。
前者なら §8.1 のとおり保護対象外である主張が強い。後者なら
出力時に散文を落とすか、出典明示の短引用（日本の著作権法第32条の
引用要件: 主従関係の明確性・分量の相当性・出典の明記）に収める設計が
要る。`tools/kbgen` に「引用長が閾値を超えたら説明文は落とす」規則を
入れるのが素直である。

---

## 8. 法的な位置づけ（参考。法的助言ではない）

### 8.1 なぜ「仕様書を書くこと」自体は著作権侵害にならないのか

* **日本 — 著作権法第10条第3項**（逐語）:
  「第一項第九号に掲げる著作物に対するこの法律による保護は、その著作物を
  作成するために用いる**プログラム言語、規約及び解法**に及ばない。」
  同項は「規約」を「特定のプログラムにおける前号のプログラム言語の用法に
  ついての特別な約束」、「解法」を「プログラムにおける電子計算機に対する
  指令を組み合わせる方法であつて、アルゴリズム、データ構造その他これらに
  類するもの」と定義する。
  **API 名、関数シグネチャ、定数の値、ヘッダの構成、構造体のメンバ名と
  並びは、まさに「規約」と「解法」である。** include/def を書くために
  必要な情報の本体は、著作権の保護対象に入らない。
* **日本 — 著作権法第30条の4**（平成30年改正、2019-01-01 施行）:
  「著作物は、次に掲げる場合その他の**当該著作物に表現された思想又は感情の
  享受を目的としない場合**には、必要と認められる限度において、利用する
  ことができる。ただし、当該著作物の種類及び用途並びに当該利用の態様に
  照らし**著作権者の利益を不当に害することとなる場合は、この限りでない**。」
  第2号が「情報解析（多数の著作物その他の大量の情報から、構成、キーワード、
  その他これらに類する事項に関する情報を抽出し、比較、分類その他の解析を
  行うことをいう。）を行う場合」。
  `tools/kbgen` が 210,773 ページから機械的に事実を抽出する処理は
  この号に当たる余地がある。**ただし但書の「著作権者の利益を不当に害する」
  評価は、抽出の後に何を公開するかで決まる。** ページそのものと逐語引用を
  公開配布すれば、Microsoft が Learn／Download Center で行っている配布を
  代替するので、但書に当たる可能性が高い。
* **米国 — 思想／表現の二分論と API**: *Google LLC v. Oracle America, Inc.*,
  593 U.S. ___ (2021) は、Java SE API の宣言コードの複製をフェアユースと
  認めた。*Sony Computer Entertainment v. Connectix*, 203 F.3d 596 (9th Cir.
  2000) — §2 で引用した日本語記事が挙げる判例 — は、互換性のために
  必要な中間的複製をフェアユースとし、「複製しなければ調べようのない、
  保護されない部分」には通常の著作物と同程度の保護を与えないと判示した。
  *Sega v. Accolade*, 977 F.2d 1510 (9th Cir. 1992) も同じ系譜。
* **しかし**: 上記はいずれも「**読んで、非保護の要素を取り出して、
  新しい実装・仕様を書く**」ことを正当化する理屈である。
  **第三者の著作物そのものを公衆に配布することを正当化する理屈はどこにも
  ない。** 分類 A が「あとで削除すれば情報源として使える」のはこのためで、
  分類 E だけが最初から公開できる。

### 8.2 NDA 表記の資料が別枠である理由（B1）

著作権は登録も契約も不要に発生するが、**秘密情報は契約で守られる**。
`corpus/mvb/windows-ce-1.0/PEGSDK/AJ0A.html` の文言は、その文書が
「confidential and proprietary information」であり「non-disclosure agreement
that the recipient has signed with Microsoft」に基づいて開示されたものと
述べている。ここで問題になるのは著作権法ではなく:

* **契約**: NDA の当事者でない者が NDA 付き資料を取得・利用した場合の
  立場。当事者でない以上 NDA の直接の債務者ではないが、第三者からの
  取得経路次第では契約侵害の幇助・誘引、あるいは転得者としての責任が
  問題になりうる。
* **営業秘密（日本: 不正競争防止法第2条第6項）**: 営業秘密の三要件は
  ①秘密管理性 ②有用性 ③公然知性でないこと。「confidential and
  proprietary」＋NDA という表示は①秘密管理性の主張を強く支持する。
  1995 年のベータ資料なので③（今も公然知らずか）と②（現在の有用性）は
  争いやすいが、**リスクがゼロではないという判断は、これを仕様書の入力に
  使うべきでない理由として十分**。
* **クリーンルーム**: §2 のとおり、クリーンルームの効力は「入力が適法に
  入手された情報であること」に依存する。秘密情報を入れた仕様書は、
  もはやクリーンルームの出力ではない。

B2（Philips）も同じ理屈で、あちらは文言がさらに直接的に
「**may be used only as authorized in a signed license agreement or non
disclosure agreement**」と use を制限している。

### 8.3 このレビューが扱っていないもの

* **特許**。CE 3.0 の通知自身が「does not provide you with any legal rights
  to any intellectual property in any Microsoft product」と述べており、
  Hitachi と NEC の通知も特許ライセンスを明示的に否定している
  （「No license is granted by implication or otherwise under any patents」、
  「neither does it convey any license under patent rights」）。
  §2 で引用した Wikipedia 記事も「独立発明は特許権に対しては無防備である」
  と明記する。**include/def を使って CE 互換の OS やツールチェーンを
  作ることの特許リスクは、この文書の対象外であり、著作権の整理では
  何も解決しない。**
* **商標・トレードドレス**。Learn ToU は「Elements of the Services are
  protected by trade dress, trademark, unfair competition, and other laws and
  may not be copied or imitated in whole or in part」と規定する。
  "Windows CE" "Microsoft" "MSDN" の名称を生成物や公開物でどう扱うかは
  別途の判断。
* **第三者ミラーサイト自身の規約**（C 群）。`library.thedatadungeon.com` の
  robots.txt は AI 学習クローラのみを拒否し、`queues/third-party-sources.md`
  はこれを正しく記録している。しかし robots.txt は著作権の許諾ではない。
  ミラー運営者が Microsoft から再配布の許諾を得ている証拠はどこにもなく、
  **C 群は「Microsoft の著作物を、許諾のない第三者のサイトから取った」
  群である**。A3 と同じ「あとで消せばよい」扱いにするのは、入手経路の
  点を無視することになる。

### 8.4 免責

この文書は、リポジトリの中のファイルに実際に書かれている文言と、
Microsoft の公開ページ・公開ブログ・告知 ID、および
`api.github.com` の検索結果を、2026-10-24 に確認した記録である。
法的助言ではない。§5 の分類は**原文の文言が何を禁じ何を許しているか**を
機械的に整理したもので、特定の管轄における法的結論ではない。
実際に公開を続けるか、削除するか、許諾を求めるかの判断は、
§2 が引く Wikipedia 記事のいう「法律家による検査」を経るべきである。

---

## 付録 — このレビューで追加・変更したファイル

| ファイル | 種別 | 内容 |
|---------|------|------|
| `data/provenance-scopes.tsv` | 新規 | 来歴レジストリ（23 規則、取得経路・出版物・公式集積の有無） |
| `tools/provenance_scopes.py` | 新規 | 「このパスはどの入手経路か」の唯一の答え |
| `tools/check-provenance.py` | 新規 | 被覆検査 + 分類レポート生成 |
| `tools/scan-notices.py` | 新規 | 全ページの著作権・許諾文言スキャナ（`--depth` でサブツリー単位） |
| `data/reports/provenance-classification.tsv` | 生成 | scope 別の分類（権利 scope と並置） |
| `data/reports/provenance-groups.tsv` | 生成 | A〜D の合計 |
| `data/reports/notice-scan.tsv` / `notice-scan-depth2.tsv` | 生成 | 通知文言の実測（逐語引用・件数・代表ページ） |
| `data/reports/license-audit.tsv` | 再生成 | 2026-10-24 の実測（yes 6,387 / no 204,571 / unclear 584） |
| `data/license-scopes.tsv` | 更新 | 14 + 17 = 31 規則を追加（新 scope 7 種、project-own 17 件）、`msdn-library-copyright` の古い件数を実測に更新。88 規則 / 27 scope / **0 問題** |
| `sources/terms/mspress-wince-books-copyright-page.txt` | 新規 | Microsoft Press 5 書の著作権表示ページの逐語転記（sha256・抽出方法つき） |
| `sources/terms/prentice-hall-wince30-appprog-copyright-page.txt` | 新規 | Prentice Hall PTR 書籍の著作権表示ページ・背表紙の逐語転記 |
| `sources/w32api-cegcc-mingw/PUBLIC-DOMAIN-DISCLAIMER.txt` | 新規 | pinned tarball からの DISCLAIMER 逐語抽出 |
| `docs/PROVENANCE-SPLIT.ja.md` | 新規 | 資料整理（取得経路別の分類） |
| `docs/review-rights-2026-10.ja.md` | 新規 | この文書 |

新設した権利 scope:

| scope | 再配布 | files | 分類 |
|-------|--------|------:|------|
| `ce10-nda-prerelease` | no | 2,101 | **B1** |
| `philips-pr3910-proprietary` | no | 192 | **B2** |
| `nec-vr4100-proprietary` | no | 361 | C |
| `hitachi-sh-books` | no | 353 | C |
| `mspress-book-copyright` | no | 6 | D |
| `prentice-hall-book-copyright` | no | 1 | D |
| `mingw32ce-public-domain` | **yes** | 2 | E |

再現:

```bash
python3 tools/scan-notices.py --depth 2 --out data/reports/notice-scan-depth2.tsv
python3 tools/check-licenses.py --tracked        # 88 rules, 27 scopes, 0 problems
python3 tools/check-provenance.py                # 23 rules, 0 unscoped
python3 tools/provenance_scopes.py --list
```
