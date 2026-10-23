# `sources/terms/` — licence statements kept as evidence

The corpus is a collection of documents published by different teams, in
different years, under different statements.  Where a statement is not already
inside the repository as a file of its own (a `LICENSE` next to a snapshot, a
copyright page inside a CHM), the text that governs an item is kept here, so
that `data/license-scopes.tsv` can point at it and the wording can be checked
instead of remembered.

| File | What it is |
|------|------------|
| `learn-com-termsofuse-excerpt.txt` | The sections of the Microsoft Learn Terms of Use that govern copying and publishing content taken from learn.microsoft.com, quoted verbatim with the URL and the fetch date. Re-fetched from the live page 2026-10-24 and confirmed identical. |
| `mspress-wince-books-copyright-page.txt` | The copyright page of the five Microsoft Press books in `sources/bitsavers-microsoft/`, transcribed verbatim with each PDF's sha256 and the extraction method. Kept as text because `tools/check-licenses.py` reads HTML and text, not PDF, so a scope that quotes a book's copyright page needs the wording in a file the checker can open. |
| `prentice-hall-wince30-appprog-copyright-page.txt` | The copyright page and imprint of `Windows_CE_3.0_Application_Programming_2001.pdf` — a **Prentice Hall PTR** retail book (ISBN 0-13-025592-0), not a Microsoft publication, whose bundled CD-ROM additionally carries Microsoft software reproduced under a special arrangement. Same reason, same method. |

Rules for this directory:

* Only the wording that decides something for this project is kept, quoted, with
  the URL and the date it was read.  A summary is never substituted for the
  statement.
* The controlling text is the one at the publisher's URL; this file is a copy
  made for offline checking, and is itself governed by that statement.
* Nothing here is presented as a licence granted by this project.
