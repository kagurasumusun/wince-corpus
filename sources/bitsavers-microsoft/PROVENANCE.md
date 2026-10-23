# bitsavers-microsoft — vintage Microsoft Windows CE guides

## What this directory is

Verbatim PDFs of printed Microsoft **Windows CE** documentation from the
late 1990s / early 2000s (Programmers Guide, Communications Guide, Device
Driver Kit, User Interface Services Guide, Developers Kit cover, and the
2001 "Windows CE 3.0 Application Programming" book), mirrored on
bitsavers.trailing-edge.com — one of the archival collectors that keep
superseded hardware/OS documentation around after vendors take it down.

## Decision

The corpus collects **Microsoft** Windows CE documentation (see
`docs/COLLECTION-POLICY.md`): site pages are already fetched through the
harvest lanes from learn.microsoft.com, mirrors and archives are accepted
when the material is Microsoft's own and no free access remains.

The same reading applies to these printed guides: they are Microsoft's
official CE books/manuals, long delisted, mirrored by a non-profit archive.
The archive's inventory was first probed on 2026-10-14
(`data/probe/bitsavers-*/INDEX.md`, which records URL, fetch date, size and
sha256 of each file before it was kept here).

**Not collected** (deliberately): the third-party MS Press *books* in the
same bitsavers directory — Boling's "Programming Microsoft Windows CE"
(1998, and its 2nd edition 2001), Murray's "Inside Microsoft Windows CE"
(1998), Lidin's "Inside Microsoft .NET IL Assembler" — commercial books by
individual authors, not Microsoft's own product documentation, and Lidin's
is not even CE material.  Same for the directory's one PNG (a CE timeline).

## Files

One row per PDF, metadata from `data/probe/bitsavers-keep-*/INDEX.md`
(each receipt names URL, date, byte size, sha256):

- `Microsoft_-_Windows_CE_Programmers_Guide_1998.pdf`
- `Microsoft_-_Windows_CE_Programmers_Guide_1999.pdf`
- `Microsoft_-_Windows_CE_Communications_Guide_1999.pdf`
- `Microsoft_-_Windows_CE_Device_Driver_Kit_1999.pdf`
- `Microsoft_-_Windows_CE_User_Interface_Services_Guide_1999.pdf`
- `Microsoft_-_Windows_CE_Developers_Kit_Cover_1999.pdf`
- `Windows_CE_3.0_Application_Programming_2001.pdf`;

The files are the untouched medium; the corpus does not re-host their
printed text as pages until an OCR/text pass decides that is worth it.

## Status 2026-10-24 — the statements on these pages were read, and they forbid this

The decision above ("the same reading applies to these printed guides") was made
without reading the books' copyright pages.  They have now been read
(text extracted from the PDFs and transcribed, with each file's sha256, to
`sources/terms/mspress-wince-books-copyright-page.txt` and
`sources/terms/prentice-hall-wince30-appprog-copyright-page.txt`):

* Five of the seven files are **Microsoft Press commercial books**, each with
  "PUBLISHED BY Microsoft Press", a copyright year, an ISBN and a Library of
  Congress Cataloging-in-Publication record, and each with:
  "All rights reserved. **No part of the contents of this book may be reproduced
  or transmitted in any form or by any means without the written permission of
  the publisher.**"
* `Windows_CE_3.0_Application_Programming_2001.pdf` is **not a Microsoft
  publication at all**.  It is a Prentice Hall PTR retail book
  (ISBN 0-13-025592-0, $49.99 U.S. / $75.00 Canada) whose copyright page reads
  "All rights reserved. No part of this book may be reproduced, in any form or
  by any means, without permission in writing from the publisher."  Its bundled
  CD-ROM additionally carries Microsoft eMbedded Visual C++/Visual Basic 3.0
  "reproduced by Prentice Hall PTR under a special arrangement with Microsoft
  Corporation", so two rightsholders restrict this one item.

So the corpus rule this directory's own collection policy quotes — "verbatim
books are only collected when a licence or public-domain marking is found" —
is **not** satisfied by any of these files, and
`queues/third-party-sources.md` reaches exactly that conclusion for this same
bitsavers directory ("these stay uncollected").  The two documents contradict
each other; this one is the outlier.

Registry scopes: `mspress-book-copyright` (6 files) and
`prentice-hall-book-copyright` (1 file), both redistribution **no**.
Recommended action: delete the directory (`docs/review-rights-2026-10.ja.md`
§7 P2).  Nothing in the knowledge base needs it — the material is printed
prose, not an API reference, and the CE 1.0–3.0 API surface it describes is
already covered by `corpus/chm/windows-ce-3.0/` under an explicit
"internal, reference purposes" permission.
