# Licensing — per item, from the statement that actually attaches to it

The collection keeps one published documentation page per file in `corpus/`
(210,773 pages), and the pages were not all published under the same terms.
Where each page's bytes came from is a separate question with its own registry
(`data/provenance-scopes.tsv`, `tools/check-provenance.py`,
`docs/PROVENANCE-SPLIT.ja.md`).
The rule of this project is therefore: **handle each item according to the
licence text that actually attaches to it, and never substitute a general
assumption or a summary for that text.**

The rule is implemented, not promised:

| Artefact | What it is |
|----------|------------|
| `data/provenance-scopes.tsv` | The acquisition registry: one row per tree with the route the bytes took (`web` / `mirror` / `media` / `upstream`), the publication they came off, and whether Microsoft still publishes a compilation that covers the tree. `tools/check-provenance.py` verifies every corpus page resolves to exactly one row. See `docs/PROVENANCE-SPLIT.ja.md`. |
| `tools/scan-notices.py` | Reads the bytes of all 210,773 pages and counts the copyright / licence / permission wordings that actually appear in them, with a verbatim quote and a sample page per notice kind. `data/reports/notice-scan.tsv` (per tree) and `notice-scan-depth2.tsv` (per subtree) are the output; they are what corrected several `terms` cells below. |
| `data/license-scopes.tsv` | The rights registry. One row per rule (a directory prefix, or `file:` for a single file), each carrying **the wording itself quoted**, the file it was read from, what is permitted, the conditions, and the finding (`yes`/`no`/`unclear`). The longest matching rule governs, so a file rule overrides its tree. |
| `sources/terms/` | Statements that are not in the repository as a file of their own (the Microsoft Learn Terms of Use excerpt), quoted verbatim with the URL and the date read. |
| `license_scope` on every page | Every knowledge-base observation joins to its page, and the `pages` table carries that page's scope id (one name can have a CE page and a Win32 page under different statements; `tools/kbgen check` verifies every citation chain). |
| `tools/check-licenses.py` | Checks the registry: every corpus page and every tracked file resolves to exactly one rule; every quoted statement is found, verbatim, in the file it names; and counts what is published. |
| `data/reports/license-audit.tsv` | The result: pages and published files per scope, with the permission and the terms. |
| `docs/LICENSING.md` (this file) | The finding, and the decision that is still open. |

Every record names its page, and that page's terms govern the record (the
registry's own sheet for `docs/` quotes this sentence as the basis). The
knowledge base is not a new work under a new licence: it is a set of facts and
quotes, each traceable to one page.

## The finding (`python3 tools/check-licenses.py --tracked`, 2026-10-24)

```
corpus pages: 210,773  unscoped: 0
git-tracked files: 211,542  unscoped: 0
88 rule(s), 27 scope(s), 0 problem(s)

published (git-tracked) files by redistribution: yes 6,387, no 204,571, unclear 584
```

The 2026-10-05 finding this replaces read `yes 5,291, no 115,943, unclear 137`.
It is kept here only as history: the 2026-10 disc imports (MSDN Library
VS.NET 2003, VS2008 SP1, January 2002, DevCon '99) roughly doubled the
restricted count, and a fresh scan of every page located statements that this
registry had recorded as "no licence statement located" (§ New scopes below).

| Scope | Covers | The statement it rests on (as read from the item) | May be published |
|-------|--------|---------------------------------------------------|------------------|
| `sdk-api-cc-by-4.0` | 5,279 Win32 reference pages + `sources/microsoftdocs/` | `sources/microsoftdocs/sdk-api/LICENSE`: "Attribution 4.0 International" (CC-BY-4.0; the code licence of the same snapshot is MIT, `LICENSE-CODE`) | **yes**, with attribution, a link to the licence and an indication of changes |
| `learn-tou` | `corpus/learn/` 58,046 + `corpus/dotnet/` 10,657 | Microsoft Learn Terms of Use: "use of such Documents from the Services is for informational and non-commercial or personal use only and **will not be copied or posted on any network computer**"; "You may not modify, copy, distribute, transmit, publicly display, perform, reproduce, publish … without prior written consent from Microsoft." (`sources/terms/learn-com-termsofuse-excerpt.txt`) | no |
| `ce30-internal-reference` | 8,962 pages of the CE 3.0 archive + the archive | The retired-content notice on every page: "You may copy and use this document for your internal, reference purposes." — and, in the same sentence, "does not provide you with any legal rights to any intellectual property in any Microsoft product" | no (internal reference use) |
| `ms-media-copyright` | CE 4.2 / 5.0 / 6.0 media payload and `sources/`, 25,081 files | What is there is a notice, and CE 6.0's release notes state a restriction: "Without limiting the rights under copyright, no part of this document may be reproduced, stored in or introduced into a retrieval system, or transmitted in any form or by any means … without the express written permission of Microsoft Corporation." CE 5.0: 6,569 of 20,180 pages carry "© 2002 Microsoft Corporation. All rights reserved."; CE 4.2's 567 pages carry **no notice at all** | no (treated as all rights reserved) |
| `mvb-third-party-notice` | 2 pages of the CE 1.0 Pegasus SDK | The pages' own Hitachi/HMSI notice: "No one is permitted to reproduce or duplicate, in any form, the whole or part of this document without Hitachi's permission." (a second page, `PEGSDK/1NOLSNU.html`, was located 2026-10-24) | no |
| `kb-article-copyright` | 260 Knowledge Base articles | "Copyright Microsoft Corporation" on every article | no |
| `msdn-library-copyright` | 98,508 MSDN Library files | "© 2011 Microsoft. All rights reserved." where a notice is present — re-measured 2026-10-24 over the whole tree: **49,902 of 98,516 pages** carry a Microsoft copyright notice and 49,877 an explicit "All rights reserved" (the old "143 of 14,678" predates the 2026-10 disc imports). Concentrated in the disc-derived sets (`jan-2002` 13,426/13,430, `vs2008-sp1` 31,301/33,011) and near-absent in the mirror-crawled ones (`techshelps` 4/5,179, `datadungeon-2000-04` 2/2,932) | no |
| `site-copyright` | 25 pages of the CE 2.0 CD site mirror | "© 1997 Microsoft Corporation. All rights reserved." | no |
| `qt-docs-gfdl-1.3` | 8 Qt Windows CE documents + the notice file | the page footer: "The documentation provided herein is licensed under the terms of the GNU Free Documentation License version 1.3 as published by the Free Software Foundation." A reconstructed full licence text is not stored, so the copies are not offered as a GFDL redistribution | no |
| `sdl-wiki-cc-by-4.0` | the SDL wiki WinCE page + its notice | "All wiki content is licensed under Creative Commons Attribution 4.0 International (CC BY 4.0)." Attribution, the licence link and the modification note are on the page | yes |
| `openssl-1.0.2` | OpenSSL 1.0.2u `INSTALL.WCE` + the notice | "The SSL documentation included with this distribution is covered by the same copyright terms except that the holder is Tim Hudson (tjh@cryptsoft.com)." The acknowledgment the licence requires is on the page. The library source was not collected | yes |
| `wx-docs-licendoc` | wxWidgets 3.0.5 `docs/msw/wince/readme.txt` + `licendoc.txt` | "Permission is granted to make and distribute verbatim copies of this manual or piece of documentation provided any copyright notice and this permission notice are preserved on all copies." | yes |
| `sdl-1.2-lgpl-2.1` | the SDL 1.2 LGPL notice excerpt | "Activities other than copying, distribution and modification are not covered by this License; they are outside its scope." The source was not stored. The excerpt is not a verbatim copy of COPYING, so it is not offered as one | no |
| `qt-4.8-wince-lgpl` | the licence notice in Qt 4.8 `qfunctions_wince.h` | "this file may be used under the terms of the GNU Lesser" (LGPL 2.1 or 3, also GPL 3 or commercial, in the same notice). The header and the implementation were not stored | no |
| `dotnet-pinvoke-mit` | the pinned dotnet/pinvoke tarball + its licence under `sources/dotnet-pinvoke/` | The archived .NET Foundation repo's `LICENSE`: \"Permission is hereby granted, free of charge, to any person obtaining a copy\" (MIT) | yes |
| `w32api-public-domain` | the pinned CeGCC w32api tarball + its `README.w32api` under `sources/w32api-cegcc/` | The package statement: \"THIS SOFTWARE IS NOT COPYRIGHTED. This source code is offered for use in the public domain. You may use, modify or distribute it freely.\" — file-level exceptions it names: permissive UCB/DEC notices in the three winsock headers, Mesa's `gl.h` (outside the top-level parse scope). Use: comparison only, inside the knowledge base's isolated `reference_*` tables — since the 2026-10-19 redesign it is never used as a gap-fill value or header-membership evidence. Headers are not copied. | yes |
| `derived-from-sources` | `kb/`, `data/` | No separate statement: each record names its page, and that page's terms govern the record | per record |

### New scopes located by the 2026-10-24 full-page scan

The rows above said "no licence statement located" for `corpus/mvb/` and for
`sources/`. Scanning every page instead of trusting the label found statements
in seven places, and two of them change what the material may be **used for**,
not only what may be published. Full analysis, with the verbatim wording and the
clean-room consequence: `docs/review-rights-2026-10.ja.md` §4.3–4.6 and §5.

| Scope | Covers | The statement it rests on | May be published | May be used as a specification input |
|-------|--------|---------------------------|------------------|--------------------------------------|
| `ce10-nda-prerelease` | the CE 1.0 Pegasus SDK books, 2,101 files | `PEGSDK/AJ0A.html`, "Non-disclosure Agreement Note": "This documentation is an early release of the final documentation and is **confidential and proprietary information of Microsoft Corporation. It is disclosed pursuant to a non-disclosure agreement that the recipient has signed with Microsoft.**" — and `AJ0B.html`: "only for limited distribution outside of Microsoft and **not for redistribution**" | no | **no** — confidential prerelease material disclosed under an NDA; the medium is the CE 1.0 SDK **Beta 2.1** and the notice itself says the information "may be inaccurate" |
| `philips-pr3910-proprietary` | the Philips PR3910 Chipset Reference inside the CE 2.0 SDK, 192 files | `PR3910/p3900000.html`: "This document and the products described in this document are owned by Philips Semiconductors, and **may be used only as authorized in a signed license agreement or non disclosure agreement controlling such use.**" | no | **no** — the only statement in the collection that restricts *use* itself |
| `nec-vr4100-proprietary` | the NEC VR4100 Chipset Reference inside the CE 2.0 SDK, 361 files | `VR4100/VR41home.html`: "Copyright 1994-1997 by NEC Corporation. **No part of this document may be copied by any means without written permission of NEC Corporation.** This Document contains information tht is proprietary to NEC Corporation." … "neither does it convey any license under patent rights" | no | no — third-party proprietary, preliminary, and not part of the CE API surface |
| `hitachi-sh-books` | the Hitachi SH-3 Programming Manual and SH Cross Assembler manual inside the CE 2.0 SDK, 353 files | `SH3PROG/sh300001.html` and `SHASM/asm00001.html`: "No one is permitted to reproduce or duplicate, in any form, the whole or part of this document without Hitachi's permission." … "No license is granted by implication or otherwise under any patents" | no | no — same wording also appears on two Learn CE .NET 4.x pages and one `vsnet-2003` page |
| `mspress-book-copyright` | five scanned Microsoft Press books in `sources/bitsavers-microsoft/`, 117 MB | "PUBLISHED BY Microsoft Press … Copyright © 1998/1999 by Microsoft Corporation All rights reserved. **No part of the contents of this book may be reproduced or transmitted in any form or by any means without the written permission of the publisher.**" ISBNs and Library of Congress CIP records. Transcribed to `sources/terms/mspress-wince-books-copyright-page.txt` so the quote is checkable (the checker reads text, not PDF) | no | no — commercial retail books, not free product documentation; `queues/third-party-sources.md` records the opposite decision for the same bitsavers directory ("these stay uncollected") |
| `prentice-hall-book-copyright` | `sources/bitsavers-microsoft/Windows_CE_3.0_Application_Programming_2001.pdf`, 37.9 MB | "**All rights reserved. No part of this book may be reproduced, in any form or by any means, without permission in writing from the publisher.**" — Prentice Hall PTR, ISBN 0-13-025592-0, $49.99 U.S.; the bundled CD-ROM carries Microsoft software "reproduced by Prentice Hall PTR under a special arrangement with Microsoft Corporation". Transcribed to `sources/terms/prentice-hall-wince30-appprog-copyright-page.txt` | no | no — a third-party publisher's commercial book; two rightsholders restrict it |
| `mingw32ce-public-domain` | the pinned CeGCC mingw tarball + its DISCLAIMER | "**This file has no copyright assigned and is placed in the Public Domain.** … You are free to use this package and its code without limitation." Extracted verbatim to `sources/w32api-cegcc-mingw/PUBLIC-DOMAIN-DISCLAIMER.txt`. Was previously governed by the `sources/` fallback, i.e. labelled all-rights-reserved Microsoft media | **yes** | as the w32api scope's: isolated `reference_*` comparison rows only |
| `project-own` | `tools/`, `docs/`, `queues/`, `.github/`, the READMEs | **The repository publishes no LICENSE file** — its own licence is undecided | undecided |

Every quote above is checked against the file it was read from
(`tools/check-licenses.py`; HTML pages are read the way the corpus reads them,
whitespace aside). A summary is never used in place of the wording.

## What this means

* As a **public** repository, 204,571 of the 211,542 files it carries (96.7 %)
  are not licensed for redistribution. The Learn terms forbid copying the pages onto a
  network computer; the CE 3.0 notice grants internal reference use only; for
  the CHM/MVB media no permission statement was located at all. The Qt
  documents are in that count too: the footer names the GNU Free Documentation
  License 1.3, and a reconstructed full licence text is not stored, so those
  copies are not offered as a redistribution.
* That is a property of the **publication**, not of the collection. Keeping the
  pages and the knowledge built from them for one's own use is what the CE 3.0
  notice describes, and the Learn terms allow personal, non-commercial use.
* What the statements that were read do permit publishing is the CC-BY-4.0
  Win32 reference (`sdk-api-cc-by-4.0` 5,284 + `win32-cc-by-4.0` 1,091 files,
  with the attribution obligation), the SDL wiki page and its notice
  (CC BY 4.0, same obligation), the OpenSSL 1.0.2u `INSTALL.WCE` and the notice
  it requires, the wxWidgets Windows CE readme with the permission notice the
  licence requires, the MIT `dotnet/pinvoke` snapshot, and the two public-domain
  CeGCC packages. That is **6,387 files**. Two attribution gaps remain: no
  CC-BY §3(a)(1)(D) link to the material sits next to `corpus/win32/`, and the
  repository still publishes no LICENSE of its own.
* Two scopes are recorded as "no" that could become "yes" by meeting a
  condition rather than by permission: `qt-docs-gfdl-1.3` (8 Qt pages whose
  footer is GFDL 1.3 — the full licence text is not stored, so the GFDL's own
  requirement is unmet; **and the pages themselves carry a project-written
  sentence granting GFDL copying, which contradicts this row**), and the two
  LGPL notice excerpts (`qt-4.8-wince-lgpl`, `sdl-1.2-lgpl-2.1`), which are not
  verbatim copies of COPYING and so are not offered as one.
* Knowing a declaration's text is not the same as being allowed to publish it:
  the declaration quotes in the knowledge base (`kb/kb.sqlite3`, `declaration_observations`) are as restricted as the
  pages they come from.
* Learning the Win32 terms' priority clause — "Certain documentation may be
  subject to explicit license terms separate from the terms contained here. To
  the extent the terms conflict, the explicit license terms control." — is why
  the registry decides by longest match: `corpus/win32/` is CC-BY-4.0, not
  Learn terms.

## What the project does about it

1. **Measure, per item.** `tools/check-licenses.py --tracked` is the audit;
   `data/reports/license-audit.tsv` is the committed result.
2. **Make the gate available.** `--fail-on-restricted` exits non-zero while
   anything that may not be published is tracked. It is *not* enabled in CI:
   the decision is the owner's, and the report is what CI keeps.
3. **Do not publish what is generated.** The include/.def generator (being
   designed separately, on top of the KB) must write into a git-ignored
   `build/` and list the rights scopes behind its output, so an export can
   be filtered before it leaves the machine.
4. **Do not launder the terms into the facts.** `unclear` and `no` are recorded
   as they are; a media whose statement was not located is treated as all rights
   reserved rather than rounded up to something convenient.

## The decision that is still open

* Make the repository **private** while it carries the restricted trees, or
* keep it public and **move the restricted trees (and the quotes taken from
  them) out of it**, publishing only the CC-BY-4.0 part, or
* obtain **written permission** from Microsoft for the CE material.

Until one of those is chosen, nothing in this repository asserts a right it does
not have. **`docs/review-rights-2026-10.ja.md` records the finding for the
owner** (the earlier reference to `docs/review-2026-10.ja.md` §14 named a file
that does not exist), together with:

* the verbatim wording of every statement above, re-read from the pages
  themselves on 2026-10-24 (`tools/scan-notices.py`),
* the Microsoft Learn Terms of Use re-fetched from the live page and confirmed
  identical to the 2026-10-04 copy in `sources/terms/`,
* a survey of what Microsoft itself still publishes as a documentation-only
  compilation (§3): three things — the CE 3.0 archive ZIP (Download Center
  id=41197), the MSDN Library for VS2008 SP1 ISO (id=20955, the last MSDN
  Library ISO Microsoft released) and the CC-BY-4.0 `MicrosoftDocs` GitHub
  repositories — covering 48,343 of the 210,792 corpus files (22.93 %), with
  the CE 5.0/6.0/Compact 7 content retired from the Download Center on
  2022-09-30 (MC350659),
* and a classification of the violations by **what the wording actually
  forbids** (§5): 201,546 files where only redistribution is refused and
  internal use as a reference is permitted or unrefused, 3,016 files where the
  wording also refuses *use* (an NDA-marked CE 1.0 beta, a Philips document
  restricted to signed agreements, NEC/Hitachi proprietary chipset manuals,
  and seven scanned commercial books), 6,396 files that are licensed for use
  and — with conditions met — for publication, and 584 project-authored or
  derived files whose licence is undecided.

**Two facts found while checking the original text are not in the table above
because they are not about a scope**: `.gitignore` declares `/corpus/**` and
`/sources/**` ignored and the HEAD commit message says "the page bytes and
media payloads are ignored by git", yet `git ls-tree -r HEAD` counts 197,397
corpus HTML files in the commit — the ignore has no effect on already-tracked
paths, so the restricted trees are published by git *and* by the two public
release assets (`corpus-latest` 273 MB, `kb-latest` 283 MB, the latter carrying
the KB's verbatim declaration quotes). See `docs/review-rights-2026-10.ja.md`
§6.1–6.2 and the priority list in §7.

## Limits

This page records what the statements say and what the tools check. It is not
legal advice, and it does not cover patents, trademarks or trade secrets —
those are separate from copyright and are not addressed by the statements
above. Where the registry says "no licence statement located", the safe reading
(all rights reserved) is used.
