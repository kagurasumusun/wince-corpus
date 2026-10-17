#!/usr/bin/env python3
"""tools/verify-assignments.py -- hunt misjudgments in the constant ->
header assignments and in the generated include/def surface.

The standing requirement: an assignment nothing states and nothing
reviewed is a misjudgment waiting to happen.  This tool opens the
knowledge base one row at a time and cross-checks every linkage row
against the ONLY external reference the project accepts (the pinned,
licence-vetted CeGCC w32api headers under sources/ -- membership only,
values never taken; Wine/ReactOS/MinGW-w64 are prohibited) and against
the hand review in data/constant-header-review.tsv.

What it flags (one row per case in knowledge/reports/assignment-review.tsv):

* review-reject-filed   a name the review rejects (sample identifiers,
                        page typos, CRT constants) got a header anyway
* reference-disagrees   the pinned reference defines the name in a
                        DIFFERENT header than the row files it in (a
                        desktop/CE difference is legitimate -- the row
                        says which side the page evidence is on)
* family-mismatch       the name's printed value is BASE+n and the
                        review's value-base rule says another header
* sample-origin-filed   every page numbering the name is a sample page
                        ("Sample TSP", "PhCommon Control Identifiers")
                        and the name is filed into a public header
* winsur-reject-define  the generated surface emits ``#define`` for a
                        name the review rejects

Evidence columns carry the row's own cells (name, header, rank, the
example page) plus the disagreeing side, so every verdict can be
re-checked against the quoted pages.  Nothing is repaired here: this
tool reports, tools/build-kb.py + the review file decide.

    python3 tools/verify-assignments.py
    python3 tools/verify-assignments.py --winsur winsur
"""

from __future__ import annotations

import argparse
import collections
import csv
import glob
import gzip
import html
import json
import os
import re
import sys
import tarfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
KB = os.path.join(ROOT, "knowledge", "kb")
REPORTS = os.path.join(ROOT, "knowledge", "reports")
REVIEW = os.path.join(ROOT, "data", "constant-header-review.tsv")
REFERENCE_GLOB = os.path.join(ROOT, "sources", "w32api-cegcc",
                              "w32api-*-src.tar.gz")

SAMPLE_TITLE = re.compile(
    r"(?i)\b(sample|samples|example|examples|suite|demonstration)\b")
REF_DEFINE_RE = re.compile(r"^\s*#\s*define\s+([A-Za-z_]\w*)\s*(.*)$")
REF_COMMENT_RE = re.compile(r"/\*.*?\*/|//.*$")
REF_ENUM_RE = re.compile(r"\benum\b[^{};]*\{([^{}]*)\}", re.S)
REF_MEMBER_RE = re.compile(r"^\s*([A-Za-z_]\w*)\s*(?:=|,|$)")
VALUE_BASE_RE = re.compile(r"^([A-Z][A-Z0-9_]{1,40})\s*[+-]")

# Ranks that are a page *stating* the header of the name itself.  They
# outrank the desktop reference and the review.
PAGE_RANKS = {"own-page", "entity-page", "constant-entity"}


def load_reference_headers():
    """name -> {lower(header)} from the pinned w32api-cegcc include/."""
    out = collections.defaultdict(set)
    tarballs = sorted(glob.glob(REFERENCE_GLOB))
    if not tarballs:
        print("[verify] no pinned w32api-cegcc tarball -- reference "
              "cross-check skipped", flush=True)
        return out
    tarball = tarballs[-1]
    with tarfile.open(tarball) as tar:
        for member in tar.getmembers():
            if not member.isfile():
                continue
            parts = member.name.split("/")
            if len(parts) < 2 or parts[-2] != "include":
                continue
            if not parts[-1].lower().endswith((".h", ".hpp")):
                continue
            handle = tar.extractfile(member)
            if handle is None:
                continue
            text = handle.read().decode("utf-8", "replace")
            header = parts[-1]
            seen = set()
            for line in text.splitlines():
                match = REF_DEFINE_RE.match(line)
                if match is None:
                    continue
                name = match.group(1)
                value = REF_COMMENT_RE.sub("", match.group(2)).strip()
                if value.startswith("(") and f"{name}(" in line:
                    continue        # function-like macro
                if name.startswith("__") or name in seen:
                    continue
                seen.add(name)
                out[name].add(header.lower())
            for enum in REF_ENUM_RE.findall(text):
                for piece in enum.split(","):
                    match = REF_MEMBER_RE.match(
                        piece.split("/*")[0].split("//")[0])
                    if match and match.group(1) not in seen:
                        seen.add(match.group(1))
                        out[match.group(1)].add(header.lower())
    print(f"[verify] reference {os.path.basename(tarball)}: "
          f"{len(out):,} name -> header membership row(s)", flush=True)
    return out


def load_review():
    """-> (names, prefixes, value_bases) as in build-kb's review reader."""
    names, prefixes, value_bases = {}, {}, {}
    if not os.path.exists(REVIEW):
        return names, prefixes, value_bases
    with open(REVIEW, encoding="utf-8") as fh:
        header = None
        for line in fh:
            if line.startswith("#"):
                continue
            cells = line.rstrip("\n").split("\t")
            if header is None:
                header = cells
                continue
            if len(cells) < 4:
                continue
            row = dict(zip(header, cells + [""] * (len(header) - len(cells))))
            scope = (row.get("scope") or "name").strip()
            name = (row.get("name") or "").strip()
            verdict = (row.get("verdict") or "").strip().lower()
            if not name or verdict not in ("approve", "reject"):
                continue
            row["verdict"] = verdict
            row["header"] = (row.get("header") or "").strip()
            if scope == "prefix" and name.endswith("*"):
                prefixes[name[:-1]] = row
            elif scope == "value-base":
                value_bases[name] = row
            else:
                names[name] = row
    return names, prefixes, value_bases


def review_match(names, prefixes, value_bases, name, value):
    row = names.get(name)
    if row is not None:
        return row
    for prefix, row in sorted(prefixes.items(), key=lambda kv: -len(kv[0])):
        if name.startswith(prefix) and len(name) > len(prefix):
            return row
    match = VALUE_BASE_RE.match((value or "").strip())
    if match and match.group(1) in value_bases:
        return value_bases[match.group(1)]
    return None


def load_constant_headers():
    rows = []
    path = os.path.join(KB, "constant-headers.tsv")
    if not os.path.exists(path):
        return rows
    with open(path, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            if len(cells) != len(header):
                continue
            rows.append(dict(zip(header, cells)))
    return rows


def load_constant_origins():
    """name -> (printed value, {page titles}) from kb/constants.tsv."""
    values = {}
    titles = collections.defaultdict(set)
    path = os.path.join(KB, "constants.tsv")
    if not os.path.exists(path):
        return values, titles
    with open(path, encoding="utf-8") as fh:
        header = fh.readline().rstrip("\n").split("\t")
        try:
            name_i = header.index("name")
            value_i = header.index("value")
            title_i = header.index("title")
        except ValueError:
            return values, titles
        for line in fh:
            cells = line.rstrip("\n").split("\t")
            if len(cells) <= max(name_i, value_i, title_i):
                continue
            name = cells[name_i]
            values.setdefault(name, cells[value_i])
            if cells[title_i]:
                titles[name].add(cells[title_i])
    return values, titles


def scan_winsur(winsur):
    """-> set of names the generated fragments #define."""
    defined = set()
    if not winsur or not os.path.isdir(winsur):
        return defined
    include = os.path.join(winsur, "include")
    for path in sorted(glob.glob(os.path.join(include, "*"))):
        try:
            with open(path, encoding="utf-8", errors="replace") as fh:
                for line in fh:
                    match = re.match(r"#\s*define\s+([A-Za-z_]\w*)", line)
                    if match:
                        defined.add(match.group(1))
        except OSError:
            continue
    return defined


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--winsur", default=os.path.join(ROOT, "winsur"),
                    help="generated surface to scan (default: winsur/)")
    args = ap.parse_args()

    reference = load_reference_headers()
    names, prefixes, value_bases = load_review()
    link_rows = load_constant_headers()
    values, titles = load_constant_origins()
    defined = scan_winsur(args.winsur)
    print(f"[verify] linkage rows {len(link_rows):,}; review rows "
          f"{len(names) + len(prefixes) + len(value_bases):,}; "
          f"winsur #defines {len(defined):,}", flush=True)

    findings = []

    def flag(kind, name, detail, row=None):
        findings.append({
            "kind": kind,
            "name": name,
            "header": (row or {}).get("header", ""),
            "rank": (row or {}).get("strength", ""),
            "example_page": (row or {}).get("example_page", ""),
            "detail": detail,
        })

    filed = {}
    for row in link_rows:
        name = row.get("name") or ""
        if not name:
            continue
        filed.setdefault(name, []).append(row)
        header = (row.get("header") or "").lower()
        rank = row.get("strength") or ""
        # 1) the review rejects this name
        verdict = review_match(names, prefixes, value_bases, name,
                               values.get(name, ""))
        if verdict is not None and verdict["verdict"] == "reject":
            if rank not in PAGE_RANKS:
                flag("review-reject-filed", name,
                     f"review rejects the name ({verdict.get('note', '')[:80]}) "
                     f"but the row files it at rank {rank}", row)
        # 2) the pinned reference defines it elsewhere
        ref_headers = reference.get(name) or set()
        if ref_headers and header not in ref_headers:
            side = "reference says " + "/".join(sorted(ref_headers))
            if rank in PAGE_RANKS:
                side += " (page evidence outranks the desktop reference;" \
                        " a CE/desktop header difference is legitimate)"
            flag("reference-disagrees", name, side, row)
        # 3) the review's value-base rule disagrees
        if verdict is not None and verdict["verdict"] == "approve" \
                and verdict["header"] and verdict["header"].lower() != header \
                and rank not in PAGE_RANKS:
            flag("family-mismatch", name,
                 f"review files it in {verdict['header']} "
                 f"({verdict.get('note', '')[:60]})", row)

    # 4) sample-origin names filed anywhere
    for name, row_list in sorted(filed.items()):
        page_titles = titles.get(name) or set()
        if not page_titles:
            continue
        if all(SAMPLE_TITLE.search(t) for t in page_titles):
            for row in row_list:
                if (row.get("strength") or "") not in PAGE_RANKS:
                    flag("sample-origin-filed", name,
                         "every page numbering it is a sample page: " +
                         "; ".join(sorted(page_titles))[:120], row)

    # 5) the generated surface defining a rejected name
    for name in sorted(defined):
        verdict = names.get(name)
        if verdict is not None and verdict["verdict"] == "reject":
            flag("winsur-reject-define", name,
                 f"winsur emits #define but the review rejects it "
                 f"({verdict.get('note', '')[:80]})")

    os.makedirs(REPORTS, exist_ok=True)
    out_path = os.path.join(REPORTS, "assignment-review.tsv")
    with open(out_path, "w", encoding="utf-8", newline="") as fh:
        writer = csv.DictWriter(
            fh, fieldnames=["kind", "name", "header", "rank",
                            "example_page", "detail"],
            delimiter="\t", lineterminator="\n")
        writer.writeheader()
        for row in findings:
            writer.writerow(row)

    counts = collections.Counter(f["kind"] for f in findings)
    summary = os.path.join(REPORTS, "assignment-review.md")
    with open(summary, "w", encoding="utf-8") as fh:
        fh.write("# Assignment review -- every linkage row, one at a time\n\n")
        fh.write("Generated by `tools/verify-assignments.py`.  Each row of "
                 "`knowledge/kb/constant-headers.tsv` is checked against "
                 "the pinned w32api-cegcc reference (membership only, "
                 "values never taken; Wine/ReactOS/MinGW-w64 prohibited) "
                 "and the hand review in `data/constant-header-review.tsv`. "
                 " Findings are *review candidates*: a "
                 "`reference-disagrees` row can be a legitimate CE/desktop "
                 "difference (the page evidence wins), the rest are "
                 "misjudgments to close.\n\n")
        fh.write("| finding | rows |\n|---|---:|\n")
        for kind in ("review-reject-filed", "family-mismatch",
                     "sample-origin-filed", "winsur-reject-define",
                     "reference-disagrees"):
            fh.write(f"| {kind} | {counts.get(kind, 0):,} |\n")
        fh.write(f"| **total** | **{len(findings):,}** |\n\n")
        by_kind = collections.defaultdict(list)
        for row in findings:
            by_kind[row["kind"]].append(row)
        for kind in ("review-reject-filed", "family-mismatch",
                     "sample-origin-filed", "winsur-reject-define",
                     "reference-disagrees"):
            rows = by_kind.get(kind) or []
            if not rows:
                continue
            fh.write(f"## {kind}\n\n")
            for row in rows[:40]:
                fh.write(f"* `{row['name']}` -> `{row['header']}` "
                         f"[{row['rank']}] {row['detail']}\n")
            if len(rows) > 40:
                fh.write(f"* ... and {len(rows) - 40} more "
                         f"(see the TSV)\n")
            fh.write("\n")

    print(f"[verify] {out_path}")
    print(f"[verify] {summary}")
    for kind, count in counts.most_common():
        print(f"  {kind:22} {count:,}")
    # A closed review means the misjudgment classes are empty; the
    # reference-disagrees class is a standing review worklist (CE does
    # not always file names where desktop does) and never fails alone.
    hard = sum(counts.get(kind, 0) for kind in
               ("review-reject-filed", "family-mismatch",
                "sample-origin-filed", "winsur-reject-define"))
    return 1 if hard else 0


if __name__ == "__main__":
    sys.exit(main())
