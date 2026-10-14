# Third-party sources: what is collected and what is not

The collection policy is *official Microsoft documentation first*, but for the
CE 1.0/2.0 era that material no longer has an official home: the product
documentation shipped on CDs, the MSDN Library editions, and the Knowledge
Base. The owner of this corpus therefore added the mirrors below as accepted
sources (2026-10) - they are filed under `corpus/msdn-library/` and
`corpus/kb/` so they stay distinguishable from Microsoft's own material.

## Accepted (see each tree's README for what was taken)

| Source | What is taken | Where it lands |
|--------|---------------|----------------|
| https://techshelps.github.io/ (github.com/techshelps/techshelps.github.io) | The seven MSDN Library sets that document Windows CE 1.0/2.0 (CEGUIDE, WCEMFC, WCEATL, VBCE, WCEDDK, VCCE, DNEMBED) | `corpus/msdn-library/techshelps/` (tools/import-techshelps.py) |
| https://github.com/jeffpar/kbarchive | The KnowledgeBase articles of the Windows CE product family | `corpus/kb/` (tools/import-kbarchive.py) |
| https://library.thedatadungeon.com/ | The Windows CE documentation of the MSDN Library April 2000 (its 1998/1992 editions can be added later) | `corpus/msdn-library/datadungeon-2000-04/` (tools/crawl-mirror.py, config queues/mirrors.tsv) |

Robots/usage notes: library.thedatadungeon.com/robots.txt disallows
AI-training crawlers (GPTBot, ClaudeBot, anthropic-ai, CCBot, Amazonbot,
Google-Extended) but not documentation crawlers; this corpus uses an honest
user agent, one request at a time, 2.5 s apart, and honours that file.
GitHub-hosted sources are cloned, not crawled.

## Open-source documentation (allowlisted, not a source tree)

`queues/oss-docs.tsv` names the only open-source documents in `corpus/oss/`.
The rule is the same as the rest of the collection: a document that states
Windows CE facts, under a licence text that was read, and nothing around it.
Source trees, headers and project files are not collected. A page that is not
on the list fails `tools/check-policy.py`. What was looked at and refused
(SDL 1.2 `README.WinCE`, because it is a file of the LGPL source distribution;
mixed platform manuals that would have to be excerpted; mailing-list patches)
is in `corpus/oss/PROVENANCE.md`.

## Not collected

Candidate sources that were looked at and deliberately left out - vendor
knowledge bases, blog posts and SDK downloads. They are CE-related but are
either commercial vendor material or not documentation:

* https://blog.ch3cooh.jp/entry/20130417/1366182420 (blog post; an earlier refusal
  note claimed the site had been inactive since 2017 -- that claim was made from
  memory and was wrong.  Fact-checked 2026-10-15 via probe
  : the post is live (200 OK); its actual title is
  "Windows Mobile 6.0 のcoredll.libに含まれるWindowsAPIの関数一覧" -- a personal
  blog's function-name list for one library, not Microsoft documentation, so the
  Not-collected verdict stands for scope reasons alone (community listings are
  never header/#define sources; docs/COLLECTION-POLICY.md).  Keep the probe as the
  write-up of the site; no further action)
* https://datalogic.github.io/wince-sdk/ (vendor SDK page)
* https://developer.toradex.com/windows-ce/knowledge-base/vf50-vf61-wec-software/ (vendor knowledge base)
* https://github.com/datalogic/wince-sdk (2026-10 re-visited: the same Datalogic vendor SDK documentation as the line above, now as a GitHub repository.  The tarball was fetched from codeload.github.com and inspected: 1,963 files under docs/, pages such as AZTEC_*, BATINFO, Beacon*, EAP_CL, CL_Decode*, BTProfile, AUTH -- barcode/scanner SDK reference for the vendor's scanners and mobile computers, not Windows CE documentation; each page footer says "Copyright © Datalogic ADC. All Right Reserved" and the repo has no licence file, so import would be an unlicensed copy)
* https://developer.toradex.com/windows-ce/ (2026-10 re-visited: vendor module knowledge base, as refused above; the imprint probe `data/probe/toradex-imprint/INDEX.md` records the footer "Copyright © 2026 Toradex. All rights reserved." and no reuse licence, so a corpus import would be an unlicensed copy)
* https://ce-programming.github.io/toolchain/ (the TI-84+ CE **calculator** C/C++ toolchain -- a different "CE"; not Windows CE software)
* https://bitsavers.trailing-edge.com/pdf/microsoft/windows_CE/ (2026-10 re-visited via probe `data/probe/bitsavers-microsoft-wince-dir/INDEX.md`: the directory lists 12 files -- Microsoft "Windows CE Programmers Guide" 1998+1999, "Communications Guide" 1999, "Device Driver Kit" 1999, "User Interface Services Guide" 1999, "Developers Kit Cover" 1999, Boling "Programming Microsoft Windows CE" 1998 + 2nd ed. 2001, Murray "Inside Microsoft Windows CE" 1998, "Windows CE 3.0 Application Programming" 2001, one timeline PNG, and one non-CE IL assembler book. Microsoft/MS-Press hardware documentation with no stated redistribution licence; the corpus rule "verbatim books are only collected when a licence or public-domain marking is found" (`docs/COLLECTION-POLICY.md` mirrors / pdf-manuals rows) applies, so these stay uncollected; the inventory above is recorded if a licence ever surfaces)
