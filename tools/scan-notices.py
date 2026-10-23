#!/usr/bin/env python3
"""Scan every corpus page for the copyright / licence / permission wording that
actually appears in it, and report the distinct wordings per corpus tree.

This is the evidence pass behind the licensing review: instead of trusting a
scope label, it reads the bytes of every page and records what notice text is
there (verbatim, whitespace-folded), how many pages carry it, and one example
page per notice.  Notices that no page carries are reported as absent.

Usage:
    python3 tools/scan-notices.py [--out data/reports/notice-scan.tsv]
                                  [--trees corpus/learn corpus/chm ...]
                                  [--max-per-tree N]
"""

from __future__ import annotations

import argparse
import html
import os
import re
import sys
from collections import defaultdict

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Sentence-ish extraction: pull the notice out of whatever markup surrounds it.
TAG_RE = re.compile(r"(?s)<(script|style|head)\b.*?</\1>")
ANY_TAG_RE = re.compile(r"(?s)<[^>]+>")
WS_RE = re.compile(r"\s+")

# What we look for.  Each entry is (id, compiled pattern over the *text*).
# Patterns are deliberately literal where the wording is known, so the report
# can say "this exact sentence is in N pages".
NOTICES = [
    ("ms-all-rights-reserved",
     re.compile(r"(?i)\bAll rights reserved\b")),
    ("copyright-ms",
     re.compile(r"(?i)(?:©|\(c\)|copyright)\s*(?:\d{4}\s*[-–—]?\s*\d{0,4}\s*)?Microsoft")),
    ("copyright-year-ms",
     re.compile(r"(?i)©\s*\d{4}\s*Microsoft")),
    ("ce30-internal-reference",
     re.compile(r"(?i)You may copy and use this document for your internal, reference purposes")),
    ("retired-content-notice",
     re.compile(r"(?i)This is retired content")),
    ("no-legal-rights",
     re.compile(r"(?i)does not provide you with any legal rights")),
    ("provided-as-is",
     re.compile(r"(?i)This document is provided .as-is")),
    ("no-reproduction-express-permission",
     re.compile(r"(?i)without the express written permission of Microsoft")),
    ("no-reproduction-any-form",
     re.compile(r"(?i)no part of this document may be reproduced")),
    ("retrieval-system",
     re.compile(r"(?i)stored in or introduced into a retrieval system")),
    ("hitachi-no-reproduce",
     re.compile(r"(?i)No one is permitted to reproduce or duplicate")),
    ("gfdl",
     re.compile(r"(?i)GNU Free Documentation License")),
    ("lgpl",
     re.compile(r"(?i)GNU (?:Lesser )?General Public License")),
    ("cc-by",
     re.compile(r"(?i)Creative Commons Attribution|Attribution 4\.0 International|CC[ -]BY")),
    ("mit",
     re.compile(r"(?i)Permission is hereby granted, free of charge")),
    ("permission-to-copy-verbatim",
     re.compile(r"(?i)Permission is granted to make and distribute verbatim copies")),
    ("public-domain",
     re.compile(r"(?i)public domain|NOT COPYRIGHTED")),
    ("openssl-ack",
     re.compile(r"(?i)the holder is Tim Hudson")),
    ("eula",
     re.compile(r"(?i)\bEULA\b|End[- ]User License Agreement|End User License Agreement")),
    ("license-agreement-terms",
     re.compile(r"(?i)License Agreement")),
    ("redistribution-prohibited",
     re.compile(r"(?i)(?:may not|must not|shall not|not permitted to)\s+(?:be\s+)?"
                r"(?:redistribut|reproduc|copy|distribute)")),
    ("informational-non-commercial",
     re.compile(r"(?i)informational and non-commercial")),
    ("shared-source",
     re.compile(r"(?i)Shared Source")),
    ("confidential",
     re.compile(r"(?i)\bconfidential\b")),
    ("trade-secret",
     re.compile(r"(?i)trade secret")),
    ("restricted-rights",
     re.compile(r"(?i)Restricted Rights")),
    ("us-gov-legend",
     re.compile(r"(?i)DFARS|48 CFR|U\.S\. Government")),
]

# Where a notice sentence is captured verbatim for the report.
CAPTURE = {
    "ce30-internal-reference": re.compile(
        r"(?i)(This document does not provide you with any legal rights[^<]{0,300})"),
    "no-reproduction-express-permission": re.compile(
        r"(?i)([^<]{0,260}without the express written permission of Microsoft[^<]{0,80})"),
    "hitachi-no-reproduce": re.compile(
        r"(?i)([^<]{0,200}No one is permitted to reproduce or duplicate[^<]{0,200})"),
    "gfdl": re.compile(r"(?i)([^<]{0,200}GNU Free Documentation License[^<]{0,200})"),
    "permission-to-copy-verbatim": re.compile(
        r"(?i)([^<]{0,220}Permission is granted to make and distribute verbatim copies[^<]{0,220})"),
    "openssl-ack": re.compile(r"(?i)([^<]{0,260}the holder is Tim Hudson[^<]{0,80})"),
    "copyright-year-ms": re.compile(r"(?i)(©\s*\d{4}[^<]{0,60}Microsoft[^<]{0,60})"),
    "public-domain": re.compile(r"(?i)([^<]{0,200}(?:public domain|NOT COPYRIGHTED)[^<]{0,200})"),
}


def page_text(path: str, limit: int) -> str:
    """Read a page the way the corpus reads it: no charset conversion beyond
    what the bytes allow, markup stripped, whitespace folded."""
    try:
        with open(path, "rb") as fh:
            raw = fh.read(limit)
    except OSError:
        return ""
    try:
        text = raw.decode("utf-8", errors="replace")
    except Exception:  # pragma: no cover
        return ""
    text = TAG_RE.sub(" ", text)
    text = ANY_TAG_RE.sub(" ", text)
    text = html.unescape(text)
    return WS_RE.sub(" ", text)


def main(argv: list[str] | None = None) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--corpus", default=os.path.join(REPO, "corpus"))
    ap.add_argument("--out", default=os.path.join(REPO, "data", "reports", "notice-scan.tsv"))
    ap.add_argument("--max-bytes", type=int, default=400_000,
                    help="read at most this many bytes of each page (notices are "
                         "at the top or the bottom; 400 KB covers both)")
    ap.add_argument("--trees", nargs="*", default=None,
                    help="only these directories (relative to the repository root)")
    ap.add_argument("--depth", type=int, default=1,
                    help="how many path components below corpus/ form one reporting "
                         "scope (2 reports corpus/msdn-library/jan-2002 separately "
                         "from corpus/msdn-library/vsnet-2003)")
    args = ap.parse_args(argv)

    trees = args.trees
    if trees:
        roots = [os.path.join(REPO, t) for t in trees]
    else:
        roots = [os.path.join(args.corpus, d) for d in sorted(os.listdir(args.corpus))
                 if os.path.isdir(os.path.join(args.corpus, d))]

    # scope -> notice -> {"count": n, "example": path, "quote": text}
    found: dict[str, dict[str, dict]] = defaultdict(lambda: defaultdict(dict))
    scanned: dict[str, int] = defaultdict(int)
    # scope -> second-level group -> count (so msdn-library/jan-2002 etc. split)
    groups: dict[str, int] = defaultdict(int)

    for root in roots:
        if not os.path.isdir(root):
            print(f"skip (missing): {root}", file=sys.stderr)
            continue
        corpus_rel = os.path.relpath(args.corpus, REPO)
        rel_root = os.path.relpath(root, REPO)
        if rel_root.startswith(corpus_rel + os.sep):
            parts = rel_root.split(os.sep)
            scope = os.sep.join(parts[: 1 + max(1, args.depth)])
        else:
            scope = rel_root
        for dirpath, dirnames, filenames in os.walk(root):
            dirnames.sort()
            for name in sorted(filenames):
                if not name.lower().endswith((".html", ".htm", ".md", ".txt")):
                    continue
                path = os.path.join(dirpath, name)
                rel = os.path.relpath(path, REPO)
                # the reporting scope is `depth` components below corpus/
                parts = rel.split(os.sep)
                if parts[0] == os.path.basename(corpus_rel):
                    sc = os.sep.join(parts[: 1 + max(1, args.depth)])
                else:
                    sc = scope
                scanned[sc] += 1
                tail = os.path.relpath(rel, sc)
                grp = tail.split(os.sep)[0] if os.sep in tail else "-"
                groups[f"{sc}\t{grp}"] += 1
                text = page_text(path, args.max_bytes)
                if not text:
                    continue
                for nid, pat in NOTICES:
                    if pat.search(text):
                        rec = found[sc][nid]
                        if not rec:
                            cap = CAPTURE.get(nid)
                            quote = ""
                            if cap:
                                m = cap.search(text)
                                if m:
                                    quote = m.group(1).strip()[:400]
                            found[sc][nid] = {"count": 1, "example": rel, "quote": quote}
                        else:
                            rec["count"] += 1
                            if not rec["quote"]:
                                cap = CAPTURE.get(nid)
                                if cap:
                                    m = cap.search(text)
                                    if m:
                                        rec["quote"] = m.group(1).strip()[:400]

    os.makedirs(os.path.dirname(args.out), exist_ok=True)
    with open(args.out, "w", encoding="utf-8") as fh:
        fh.write("scope\tscanned_pages\tnotice\tmatching_pages\tshare\tsample_quote\texample_page\n")
        for scope in sorted(scanned):
            total = scanned[scope]
            rows = found.get(scope, {})
            for nid, _ in NOTICES:
                rec = rows.get(nid)
                if not rec:
                    continue
                share = f"{100.0 * rec['count'] / total:.2f}%" if total else "-"
                fh.write("\t".join([
                    scope, str(total), nid, str(rec["count"]), share,
                    rec["quote"].replace("\t", " "), rec["example"],
                ]) + "\n")
            # always emit the page total so a tree with no notices is visible
            if not rows:
                fh.write("\t".join([scope, str(total), "(no notice found)", "0", "0.00%",
                                    "", ""]) + "\n")

    with open(args.out + ".groups.tsv", "w", encoding="utf-8") as fh:
        fh.write("scope\tsubtree\tpages\n")
        for key in sorted(groups):
            scope, grp = key.split("\t")
            fh.write(f"{scope}\t{grp}\t{groups[key]}\n")

    for scope in sorted(scanned):
        print(f"{scope}\t{scanned[scope]} pages\t{len(found.get(scope, {}))} notice kinds")
    out_rel = (os.path.relpath(args.out, REPO)
               if os.path.abspath(args.out).startswith(REPO + os.sep)
               else os.path.abspath(args.out))
    print(f"wrote {out_rel}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
