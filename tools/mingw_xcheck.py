#!/usr/bin/env python3
"""tools/mingw_xcheck.py -- REVIEW-ONLY cross-check of the winsur/ surface
against the pinned mingw-w64 headers stored in sources/mingw-w64/.

What this tool is allowed to do
-------------------------------
Read the pinned commit's `mingw-w64-headers/include/` tree, classify
every file by its own licence banner, extract the `#define` rows of the
Public-Domain and ZPL files, and write *reports* for a human reader:

  knowledge/reports/mingw-w64-defines.tsv     one row per parsed #define
  knowledge/reports/mingw-w64-not-in-ce.tsv   reference names absent from
                                              the CE-documented surface
  knowledge/reports/mingw-w64-agreement.tsv   names in both: value verdict
  knowledge/reports/mingw-w64-crosscheck.md   the summary a human reads

What this tool must never do
----------------------------
Nothing parsed here is input to tools/gen-include-def.py or any other
generator, and no `#define` from here is ever emitted into winsur/ --
header values come only from the official CE/Win32 documentation pages
(see sources/mingw-w64/PROVENANCE.md for the licence investigation and
the usage decision).  LGPL/GPL-marked files and the whole ddk/ tree are
never parsed.
"""

import argparse
import collections
import os
import pathlib
import re

HERE = pathlib.Path(__file__).resolve().parent.parent
DEFAULT_TREE = "/home/user/mingw-extract"     # local-only extraction
REPORTS = HERE / "knowledge" / "reports"

BANNER_SLICE = 6000

# Licence banners recognised in a file's header comment.  This exact
# sequence reproduces the vetting tally recorded in
# sources/mingw-w64/PROVENANCE.md: every file starts governed by the
# root COPYING (ZPL 2.1); a "prominently marked" mention narrows it
# (LGPL/GPL first), a Public Domain sentence narrows it to PD, and a
# Zope/ZPL mention records the explicit form.
def license_class(text):
    low = text[:BANNER_SLICE].lower()
    klas = "zpl-implicit"
    if "lgpl" in low or "lesser general public" in low:
        klas = "lgpl"
    if "general public license" in low and "lesser" not in low:
        klas = "gpl"
    if "public domain" in low:
        klas = "public-domain"
    if "zope" in low or "zpl" in low.split():
        klas = "zpl-explicit"     # last step of the recorded vetting tally
    return klas


PARSEABLE = {"public-domain", "zpl-implicit", "zpl-explicit"}
DEFINE_RE = re.compile(r"^\s*#\s*define\s+([A-Za-z_][A-Za-z_0-9]*)\s*(.*)$")
COMMENT_RE = re.compile(r"/\*.*?\*/|//.*$")


def iter_defines(headers_dir):
    """Yield (name, value-as-printed, relpath, lineno, license_class)."""
    for path in sorted(headers_dir.iterdir()):
        if not path.is_file():
            continue
        try:
            text = path.read_text(errors="replace")
        except OSError:
            continue
        klas = license_class(text)
        yield None, "", path.name, 0, klas
        if path.suffix.lower() not in (".h", ".hpp"):
            continue            # parse header files only; classify all
        if klas not in PARSEABLE:
            continue            # LGPL/GPL-marked files are never parsed
        continuation = False
        for lineno, line in enumerate(text.splitlines(), 1):
            match = DEFINE_RE.match(line)
            if match is None:
                continuation = continuation and line.endswith("\\")
                continue
            name, value = match.group(1), match.group(2)
            # function-like macro: no space between name and '('
            if value.startswith("(") and f"{name}(" in line:
                continue
            value = COMMENT_RE.sub("", value).strip()
            if value.endswith("\\"):
                value = value[:-1].rstrip() + " <continued>"
            yield name, value, path.name, lineno, klas
            continuation = line.endswith("\\")


def numeric_candidates(text):
    """Integer readings of one printed value, or the empty set.

    Decimal and hexadecimal both tried because CE tables print bare hex
    digits ("28" means 0x28) -- tolerance lives HERE in the review layer,
    never in the generator.
    """
    cleaned = COMMENT_RE.sub("", text).strip().rstrip("uUlL").strip()
    if not re.fullmatch(r"(?:0[xX])?[0-9A-Fa-f]+", cleaned):
        return set()
    out = set()
    try:
        out.add(int(cleaned, 10))
    except ValueError:
        pass
    if re.fullmatch(r"[0-9A-Fa-f]*[A-Fa-f][0-9A-Fa-f]*", cleaned) or \
            len(cleaned) in (2, 4, 6, 8):
        try:
            out.add(int(cleaned, 16))
        except ValueError:
            pass
    lowered = cleaned.lower()
    if lowered.startswith("0x"):
        out.add(int(lowered, 16))
    return out


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--tree", default=DEFAULT_TREE,
                        help="local extraction of the pinned tarball "
                             "(must contain include/)")
    parser.add_argument("--constants", default=str(HERE / "winsur"
                                                   / "constants.tsv"))
    parser.add_argument("--out", default=str(REPORTS))
    args = parser.parse_args()

    headers_dir = pathlib.Path(args.tree) / "include"
    if not headers_dir.is_dir():
        raise SystemExit(f"no include/ under {args.tree} -- extract the "
                         "pinned tarball locally (see "
                         "sources/mingw-w64/PROVENANCE.md)")

    classes = collections.Counter()
    defines = []           # (name, value, header, lineno, klas)
    weather = "63ebe6cdb3ec4d5c586b7f0f0c03dd502e44c296"
    for name, value, header, lineno, klas in iter_defines(headers_dir):
        if name is None:
            classes[klas] += 1
            continue
        defines.append((name, value, header, lineno, klas))
    classes["total-files"] = sum(classes.values())

    # ---- CE-documented surface for comparison (read-only) ----------------
    ce_rows = []           # (name, ce printed value, sets, header)
    with open(args.constants, encoding="utf-8") as source:
        header_row = source.readline().rstrip("\n").split("\t")
        cols = {c: i for i, c in enumerate(header_row)}
        for line in source:
            parts = line.rstrip("\n").split("\t")
            if len(parts) < len(cols):
                parts += [""] * (len(cols) - len(parts))
            ce_rows.append((parts[cols["name"]], parts[cols["value"]],
                            parts[cols["sets"]],
                            parts[cols["header"]] if "header" in cols else ""))
    ce_by_name = collections.defaultdict(list)
    for name, value, sets, header in ce_rows:
        ce_by_name[name].append((value, sets, header))

    # ---- verdicts ----------------------------------------------------------
    ref_by_name = collections.defaultdict(list)
    for name, value, header, lineno, klas in defines:
        ref_by_name[name].append((value, header, lineno, klas))

    agreement = []
    verdicts = collections.Counter()
    for name in sorted(set(ref_by_name) & set(ce_by_name)):
        ref_values = [v for v, *_ in ref_by_name[name]]
        ce_values = [v for v, *_ in ce_by_name[name]]
        ce_numbers = set()
        for v in ce_values:
            ce_numbers |= numeric_candidates(v)
        ref_numbers = set()
        for v in ref_values:
            ref_numbers |= numeric_candidates(v)
        if ce_numbers and ref_numbers:
            if ce_numbers & ref_numbers:
                verdict = "agree"
            elif len(ce_values) > 1 or len(ref_values) > 1:
                verdict = "mixed (multi-valued)"
            else:
                verdict = "DISAGREE-needs-human-review"
        elif ce_values[0] in ref_values:
            verdict = "text-identical"
        else:
            verdict = "unparseable-either-side"
        verdicts[verdict] += 1
        ex_ref = ref_by_name[name][0]
        agreement.append((name, verdict, len(ce_values),
                          "|".join(sorted(set(ce_values))[:4]),
                          "|".join(sorted(set(ref_values))[:4]),
                          f"{ex_ref[1]}:{ex_ref[2]}", ex_ref[3]))

    GUARDISH = re.compile(r"_INC_[A-Z0-9_]+$|__?\S+_H(?:INCLUDED)?_+$")
    not_in_ce = []
    for name in sorted(set(ref_by_name) - set(ce_by_name)):
        for value, header, lineno, klas in ref_by_name[name][:1]:
            not_in_ce.append((name, value, f"{header}:{lineno}", klas))
    # toolchain artefacts, not CE-surface candidates: compiler-internal
    # `__...` macros and per-file include guards.  They stay in the TSV
    # (everything is a visible lead) but are excluded from the summary.
    excluded_internal = sum(1 for name, *_ in not_in_ce
                            if name.startswith("__"))
    excluded_guards = sum(1 for name, *_ in not_in_ce
                          if not name.startswith("__") and
                          GUARDISH.match(name))
    leads = [(n, v, s, k) for n, v, s, k in not_in_ce
             if not n.startswith("__") and not GUARDISH.match(n)]
    families = collections.Counter()
    for name, *_ in leads:
        m = re.match(r"_*([A-Za-z]+)", name)
        families[m.group(1) if m else name[:8]] += 1

    # ---- write the reports --------------------------------------------------
    out = pathlib.Path(args.out)
    out.mkdir(parents=True, exist_ok=True)
    stamp = ("# REVIEW ONLY -- parsed from the pinned mingw-w64 headers "
             f"(commit {weather}, stored in sources/mingw-w64/).  These "
             "rows are cross-check leads for a human; they are NEVER "
             "input to any generator and NEVER emitted into winsur/.  "
             "Each line names its source header:line of that commit.\n")
    with open(out / "mingw-w64-defines.tsv", "w", encoding="utf-8") as fh:
        fh.write(stamp + "name\tvalue_as_printed\tsource\tlicence\n")
        for name, value, header, lineno, klas in defines:
            fh.write(f"{name}\t{value}\t{header}:{lineno}\t{klas}\n")
    with open(out / "mingw-w64-not-in-ce.tsv", "w", encoding="utf-8") as fh:
        fh.write(stamp + "name\tvalue_as_printed_in_mingw_w64\tsource\t"
                 "licence\n")
        for row in not_in_ce:
            fh.write("\t".join(row) + "\n")
    with open(out / "mingw-w64-agreement.tsv", "w", encoding="utf-8") as fh:
        fh.write(stamp + "name\tverdict\tce_rows\tce_values\tref_values\t"
                 "source\tlicence\n")
        for row in agreement:
            fh.write("\t".join(str(c) for c in row) + "\n")

    dispid = [r for r in not_in_ce if r[0].startswith("DISPID")]
    lines = [f"# mingw-w64 cross-check (REVIEW ONLY) -- commit {weather[:12]}",
             "",
             "Reference material: pinned mingw-w64 headers in "
             "`sources/mingw-w64/` (licence investigation and usage rules "
             "in its PROVENANCE.md).  These reports compare the CE-documented"
             " surface (`winsur/constants.tsv`) against that reference.  "
             "**Nothing here feeds any generator; a listed name is a lead, "
             "not a value to adopt.**",
             "",
             "## licence classes of include/ files (re-counted by this tool)",
             ""]
    lines += [f"- {k}: {v}" for k, v in sorted(classes.items())]
    lines += ["", "## counts", "",
              f"- reference `#define` rows parsed (PD+ZPL files): "
              f"{len(defines)}",
              f"- distinct reference names: {len(ref_by_name)}",
              f"- CE-documented constant names: {len(ce_by_name)}",
              f"- names in both: {len(set(ref_by_name) & set(ce_by_name))}",
              f"  - " +
              "\n  - ".join(f"{k}: {v}"
                             for k, v in verdicts.most_common()),
              "",
              f"## reference names absent from the CE surface",
              f"- rows in the full lead list (`mingw-w64-not-in-ce.tsv`): "
              f"{len(not_in_ce):,}",
              f"- excluded as toolchain artefacts: {excluded_internal:,} "
              f"compiler-internal (`__...`), {excluded_guards:,} include "
              f"guards",
              f"- **candidate cross-check leads: {len(leads):,}**",
              "",
              "Top families (prefix before first underscore):", ""]
    lines += [f"- {k!r}: {v}" for k, v in families.most_common(15)]
    lines += ["", f"## DISPID spotlight: {len(dispid):,} `DISPID_*` names "
                  "in the reference are undocumented in the CE corpus", "",
              "The CE corpus documents the MSHTML event handlers"
              " themselves but never their dispatch ids (`mshtmdid.h` in "
              "the generated surface is declarations-only).  First 40 "
              "reference rows (full list in `mingw-w64-not-in-ce.tsv`):",
              ""]
    lines += [f"- `{r[0]}` = `{r[1]}` ({r[2]}, {r[3]})"
              for r in dispid[:40]]
    (out / "mingw-w64-crosscheck.md").write_text("\n".join(lines) + "\n",
                                                 encoding="utf-8")

    print(f"licence classes: {dict(classes)}")
    print(f"parsed defines: {len(defines)} rows, {len(ref_by_name)} names")
    print(f"in both: {len(agreement)} ({dict(verdicts)})")
    print(f"not in CE surface: {len(not_in_ce)} (DISPID family: {len(dispid)})")
    print(f"reports written to {out}")


if __name__ == "__main__":
    main()
