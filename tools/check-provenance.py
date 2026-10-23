#!/usr/bin/env python3
"""Classify the whole corpus by acquisition route, and check the registry.

Two things, both answerable from the repository itself:

1. **Coverage** -- does every page in ``data/index/INDEX.tsv`` and every file
   Git tracks under ``corpus/`` resolve to exactly one rule of
   ``data/provenance-scopes.tsv``?  A page with no route is a page nobody can
   say where it came from.
2. **Classification** -- the split the rights review needs: how much of the
   corpus came off a site Microsoft publishes (``web``), how much off a third
   party's mirror (``mirror``), how much off official Microsoft media
   (``media``), and how much from a publisher-hosted repository that carries an
   actual licence (``upstream``).  For each scope the report also says whether
   Microsoft still publishes a documentation compilation that covers it.

Writes ``data/reports/provenance-classification.tsv`` (one row per scope, with
the page count and the rights scope that governs the same paths, so a row of
this report and a row of ``license-audit.tsv`` can be read side by side) and
``data/reports/provenance-groups.tsv`` (the four-group total).

Usage::

    python3 tools/check-provenance.py                 # coverage + report
    python3 tools/check-provenance.py --fail-on-unscoped
    python3 tools/check-provenance.py --list 5        # sample paths per scope
"""

import argparse
import collections
import os
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import license_scopes  # noqa: E402
import provenance_scopes  # noqa: E402

ROOT = provenance_scopes.ROOT
REPORTS = os.path.join(ROOT, "data", "reports")
INDEX = os.path.join(ROOT, "data", "index", "INDEX.tsv")


def corpus_pages():
    """Every page the index knows, as repository-relative paths."""
    pages = []
    with open(INDEX, encoding="utf-8") as fh:
        for line in fh:
            if line.startswith("#") or not line.strip():
                continue
            fields = line.rstrip("\n").split("\t")
            if len(fields) >= 3:
                pages.append(fields[2])
    return pages


def tracked_files():
    result = subprocess.run(["git", "ls-files", "--", "corpus"], cwd=ROOT,
                            check=True, capture_output=True, text=True)
    return [line for line in result.stdout.splitlines() if line]


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--fail-on-unscoped", action="store_true",
                        help="exit non-zero when a corpus page has no route")
    parser.add_argument("--list", type=int, default=0, metavar="N",
                        help="print up to N example paths per scope")
    args = parser.parse_args()

    prov = provenance_scopes.ProvenanceRegistry.load()
    rights = license_scopes.Registry.load()

    if provenance_scopes.check(prov):
        return 1

    pages = corpus_pages()
    tracked = tracked_files()
    universe = sorted(set(pages) | set(tracked))

    unscoped = [p for p in universe if prov.row_for(p) is None]
    print(f"corpus pages in the index: {len(pages):,}")
    print(f"corpus files Git tracks:   {len(tracked):,}")
    print(f"classified universe:       {len(universe):,}  "
          f"unscoped: {len(unscoped):,}")
    for path in unscoped[:10]:
        print(f"    unscoped: {path}")

    per_scope = collections.Counter()
    per_group = collections.Counter()
    examples = collections.defaultdict(list)
    # scope -> rights scope -> count.  Reported as the majority, because a tree
    # also carries its own README/PROVENANCE paperwork, which is project-own
    # and would otherwise be the alphabetical first sample.
    rights_of = collections.defaultdict(collections.Counter)
    for path in universe:
        row = prov.row_for(path)
        if row is None:
            per_scope["(unscoped)"] += 1
            per_group["(unscoped)"] += 1
            continue
        per_scope[row.scope] += 1
        per_group[row.group] += 1
        rrow = rights.row_for(path)
        rights_of[row.scope][rrow.scope if rrow else "(none)"] += 1
        if len(examples[row.scope]) < args.list:
            examples[row.scope].append(path)

    os.makedirs(REPORTS, exist_ok=True)
    out = os.path.join(REPORTS, "provenance-classification.tsv")
    with open(out, "w", encoding="utf-8") as fh:
        fh.write("# scope\tgroup\tfiles\tofficial_ms_compilation\t"
                 "rights_scope_majority\tredistribution\tmajority_share\t"
                 "rights_scopes_spanned\torigin\tevidence\n")
        for scope in sorted(per_scope, key=lambda s: (-per_scope[s], s)):
            rows = prov.by_scope.get(scope, [])
            row = rows[0] if rows else None
            if row is None:
                fh.write(f"(unscoped)\t-\t{per_scope[scope]}\t-\t-\t-\t-\t-\n")
                continue
            # the rights scope of a sample path of this tree
            counts = rights_of[scope]
            top, top_n = counts.most_common(1)[0]
            trow = next((r for r in rights.rows if r.scope == top), None)
            # every rights scope the tree actually spans, majority first
            spans = " ".join(f"{s}:{n}" for s, n in counts.most_common())
            fh.write("\t".join([
                scope, row.group, str(per_scope[scope]),
                row.official_compilation,
                top,
                trow.redistribution if trow else "-",
                f"{top_n}/{per_scope[scope]}",
                spans,
                row.origin.replace("\t", " "),
                row.evidence,
            ]) + "\n")

    groups_out = os.path.join(REPORTS, "provenance-groups.tsv")
    with open(groups_out, "w", encoding="utf-8") as fh:
        fh.write("# group\tfiles\twhat it means\n")
        meaning = {
            "web": "taken from a site Microsoft publishes (learn.microsoft.com) "
                   "or from Wayback captures of msdn.microsoft.com",
            "mirror": "taken from a third party's web mirror or repository",
            "media": "Extracted from an official Microsoft medium (CD/DVD image, "
                     "installer payload, documentation archive)",
            "upstream": "Taken from a publisher-hosted repository carrying an "
                        "explicit licence, or an allowlisted OSS document",
        }
        for group in list(provenance_scopes.GROUPS) + ["(unscoped)"]:
            if not per_group.get(group):
                continue
            fh.write(f"{group}\t{per_group[group]}\t{meaning.get(group, '-')}\n")

    total = sum(per_group.values()) or 1
    print()
    print("acquisition route            files     share")
    for group in list(provenance_scopes.GROUPS) + ["(unscoped)"]:
        if not per_group.get(group):
            continue
        print(f"  {group:24s} {per_group[group]:8,}  "
              f"{100.0 * per_group[group] / total:6.2f}%")
    with_official = sum(n for scope, n in per_scope.items()
                        if scope in prov.by_scope
                        and prov.by_scope[scope][0].has_official_compilation)
    print(f"\n  covered by a compilation Microsoft still publishes: "
          f"{with_official:,} files ({100.0 * with_official / total:.2f}%)")
    print(f"  no Microsoft-published compilation found:           "
          f"{total - with_official:,} files")

    if args.list:
        print()
        for scope in sorted(examples):
            print(f"{scope}")
            for path in examples[scope]:
                print(f"    {path}")

    print(f"\nwrote {os.path.relpath(out, ROOT)}")
    print(f"wrote {os.path.relpath(groups_out, ROOT)}")

    if unscoped and args.fail_on_unscoped:
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
