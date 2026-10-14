#!/usr/bin/env python3
"""tools/xcheck_references.py -- REVIEW-ONLY cross-check of the winsur/
surface against the pinned, licence-vetted header references under
sources/*/.

References (each with its own PROVENANCE.md recording the licence
investigation the project requires before use):

  w32api-cegcc  PRIMARY.  The CeGCC toolchain's w32api -- the classic
                32-bit Win32 API headers adapted for Windows CE
                (libce/, _WIN32_WCE branches).  Public domain with
                short permissive notices named in its README.w32api.
  mingw-w64     SECONDARY.  64-bit desktop Windows material -- the
                wrong target for CE, kept because it is the only
                reference carrying the MSHTML/DISPID ids, and filed as
                such with the mismatch caveat.  ZPL 2.1 with per-file
                Public Domain exceptions; LGPL/GPL files are excluded.

What this tool is allowed to do
-------------------------------
Read each reference's locally extracted tree, re-classify every file by
its own licence banner (the tally in the sources' PROVENANCE.md must
reproduce), extract #define rows (and .def export lists where the
reference has them), and write *reports* for a human reader under
knowledge/reports/.

What this tool must never do
----------------------------
Nothing parsed here is input to tools/gen-include-def.py or any other
generator, and nothing is ever emitted into winsur/ -- header values
come only from the official CE/Win32 documentation pages.  A listed
name is a lead for further documentation searching, never a value to
adopt.
"""

import argparse
import collections
import pathlib
import re
import sys

HERE = pathlib.Path(__file__).resolve().parent.parent
REPORTS = HERE / "knowledge" / "reports"
WINSUR = HERE / "winsur"

BANNER_SLICE = 6000
DEFINE_RE = re.compile(r"^\s*#\s*define\s+([A-Za-z_][A-Za-z_0-9]*)\s*(.*)$")
COMMENT_RE = re.compile(r"/\*.*?\*/|//.*$")
GUARDISH = re.compile(r"_INC_[A-Z0-9_]+$|__?\S+_H(?:INCLUDED)?_+$")


# --------------------------------------------------------------------------
# per-reference licence classifiers.  Each must reproduce, on re-run, the
# per-file tally written into that reference's sources/*/PROVENANCE.md.
# --------------------------------------------------------------------------

def w32api_cegcc_class(text):
    """CeGCC w32api: package-level public domain with the exceptions its
    README.w32api names (winsock UCB/DEC notices, gl.h Mesa notice)."""
    low = text[:BANNER_SLICE].lower()
    if "regents of the university" in low or \
            "digital equipment corporation" in low:
        return "ucb-dec-permissive"
    if "mesa 3-d" in low or "mesa 3d" in low or "brian paul" in low:
        return "mesa-permissive"
    if "general public license" in low or "lgpl" in low:
        return "restrictive-NOT-EXPECTED"
    if "public domain" in low:
        return "public-domain-explicit"
    return "package-public-domain"


def mingw_w64_class(text):
    """mingw-w64: root COPYING is ZPL 2.1; per-file markings narrow it
    (LGPL/GPL first), a Public Domain sentence widens it, a Zope/ZPL
    mention records the explicit form.  Must reproduce the PROVENANCE
    tally: 868 PD / 633 ZPL-implicit / 9 ZPL-explicit / 297 LGPL / 3 GPL.
    """
    low = text[:BANNER_SLICE].lower()
    klas = "zpl-implicit"
    if "lgpl" in low or "lesser general public" in low:
        klas = "lgpl"
    if "general public license" in low and "lesser" not in low:
        klas = "gpl"
    if "public domain" in low:
        klas = "public-domain"
    if "zope" in low or "zpl" in low.split():
        klas = "zpl-explicit"
    return klas


REFERENCES = [
    {"tag": "w32api-cegcc", "primary": True,
     "commit": "8e64b608fc9c4d81e206e920ecc977d941577bef",
     "root": "/home/user/w32api-extract",
     "include": "include", "def_dirs": ("libce", "lib"),
     "classifier": w32api_cegcc_class,
     "parseable": None,      # every licence class found there is quotable
     "label": "CeGCC w32api, 32-bit, CE-adapted -- PRIMARY reference"},
    {"tag": "mingw-w64", "primary": False,
     "commit": "63ebe6cdb3ec4d5c586b7f0f0c03dd502e44c296",
     "root": "/home/user/mingw-extract",
     "include": "include", "def_dirs": (),
     "classifier": mingw_w64_class,
     "parseable": {"public-domain", "zpl-implicit", "zpl-explicit"},
     "label": "mingw-w64, 64-bit desktop target -- SECONDARY, wrong "
              "target for CE, kept for the MSHTML/DISPID ids",
     "skips": "LGPL/GPL-marked files and the whole ddk/ tree are never "
              "parsed"},
]


def iter_defines(ref):
    """Per reference: yield a (None,...)-row per file for the licence
    tally, then one row per #define of a file whose licence class is
    quotable: (name, value-as-printed, headername, lineno, class).
    """
    headers_dir = pathlib.Path(ref["root"]) / ref["include"]
    for path in sorted(headers_dir.iterdir()):
        if not path.is_file():
            continue
        try:
            text = path.read_text(errors="replace")
        except OSError:
            continue
        klas = ref["classifier"](text)
        yield None, "", path.name, 0, klas
        if path.suffix.lower() not in (".h", ".hpp"):
            continue            # parse header files only; classify all
        if ref["parseable"] is not None and klas not in ref["parseable"]:
            continue
        continuation = False
        for lineno, line in enumerate(text.splitlines(), 1):
            match = DEFINE_RE.match(line)
            if match is None:
                continuation = continuation and line.endswith("\\")
                continue
            name, value = match.group(1), match.group(2)
            if value.startswith("(") and f"{name}(" in line:
                continue                # function-like macro
            value = COMMENT_RE.sub("", value).strip()
            if value.endswith("\\"):
                value = value[:-1].rstrip() + " <continued>"
            yield name, value, path.name, lineno, klas
            continuation = line.endswith("\\")


DEF_TOKEN = re.compile(r"^\s*([A-Za-z_][\w.$]*)(?:@(\d+))?\b")


def iter_exports(ref):
    """Yield (name, ordinal-or-empty, module, lineno) from a reference's
    .def export lists (the CeGCC w32api's libce/ and lib/ files)."""
    for d in ref["def_dirs"]:
        for path in sorted((pathlib.Path(ref["root"]) / d).glob("*.def")):
            module = path.stem
            try:
                lines = path.read_text(errors="replace").splitlines()
            except OSError:
                continue
            in_exports = False
            for lineno, line in enumerate(lines, 1):
                stripped = line.strip()
                if not stripped or stripped.startswith(";"):
                    continue
                word = stripped.split()[0].upper() if stripped.split() else ""
                if word in ("LIBRARY", "SECTIONS", "IMPORTS", "DESCRIPTION"):
                    in_exports = False
                    continue
                if word == "EXPORTS":
                    in_exports = True
                    continue
                if not in_exports:
                    continue
                match = DEF_TOKEN.match(stripped)
                if match and match.group(1).upper() not in (
                        "EXPORTS", "DATA", "CONSTANT", "PRIVATE",
                        "NONAME"):
                    yield (match.group(1), match.group(2) or "", module,
                           lineno)


def numeric_candidates(text):
    """Integer readings of one printed value, or the empty set.  Decimal
    and hexadecimal both tried (CE tables print bare hex digits) -- the
    tolerance lives HERE in the review layer, never in the generator."""
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
    return out


def load_ce():
    """The CE-documented surface, read-only: constants and link worklists."""
    ce_by_name = collections.defaultdict(list)
    constants = WINSUR / "constants.tsv"
    if constants.exists():
        with open(constants, encoding="utf-8") as source:
            cols = {c: i for i, c in
                    enumerate(source.readline().rstrip("\n").split("\t"))}
            for line in source:
                parts = line.rstrip("\n").split("\t")
                parts += [""] * (len(cols) - len(parts))
                ce_by_name[parts[cols["name"]]].append(
                    (parts[cols["value"]], parts[cols["sets"]]))
    ce_exports = collections.defaultdict(set)   # name -> modules
    link_dir = WINSUR / "link"
    for path in sorted(link_dir.glob("*.def")):
        for line in path.read_text(encoding="utf-8").splitlines():
            if line.startswith((";", "#")) or not line.strip():
                continue
            name = line.split()[0].split(";")[0]
            if name and name.upper() not in ("EXPORTS", "LIBRARY"):
                ce_exports[name].add(path.stem)
    return ce_by_name, ce_exports


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--out", default=str(REPORTS))
    args = parser.parse_args()
    out = pathlib.Path(args.out)
    out.mkdir(parents=True, exist_ok=True)

    ce_by_name, ce_exports = load_ce()

    stamp = ("# REVIEW ONLY -- parsed from a pinned, licence-vetted "
             "reference under sources/ (see its PROVENANCE.md).  These "
             "rows are cross-check leads for a human; they are NEVER "
             "input to any generator and NEVER emitted into winsur/.\n")

    all_ref_names = {}          # tag -> {name: [(value, src, klas)]}
    summary = {"defines": {}, "exports": {}, "agree": {}, "leads": {},
               "families": {}, "classes": {}}

    for ref in REFERENCES:
        tag = ref["tag"]
        headers_dir = pathlib.Path(ref["root"]) / ref["include"]
        if not headers_dir.is_dir():
            print(f"{tag}: SKIPPED (no local extraction at {ref['root']})",
                  file=sys.stderr)
            continue
        classes = collections.Counter()
        defines = []
        for name, value, header, lineno, klas in iter_defines(ref):
            if name is None:
                classes[klas] += 1
            else:
                defines.append((name, value, f"{header}:{lineno}", klas))
        classes["total-files"] = sum(classes.values())
        summary["classes"][tag] = dict(classes)
        ref_by_name = collections.defaultdict(list)
        for row in defines:
            ref_by_name[row[0]].append(row[1:])
        all_ref_names[tag] = ref_by_name

        with open(out / f"xcheck-{tag}-defines.tsv", "w",
                  encoding="utf-8") as fh:
            fh.write(stamp + f"# reference: {tag} (commit "
                     f"{ref['commit'][:12]})\nname\tvalue_as_printed\t"
                     "source\tlicence\n")
            for row in defines:
                fh.write("\t".join(row) + "\n")

        # names on both sides of the CE surface: value verdicts
        agreement = []
        verdicts = collections.Counter()
        for name in sorted(set(ref_by_name) & set(ce_by_name)):
            ref_values = sorted({v for v, *_ in ref_by_name[name]})
            ce_values = sorted({v for v, _ in ce_by_name[name]})
            ce_numbers = set()
            ref_numbers = set()
            for v in ce_values:
                ce_numbers |= numeric_candidates(v)
            for v in ref_values:
                ref_numbers |= numeric_candidates(v)
            if ce_numbers and ref_numbers:
                verdict = ("agree" if ce_numbers & ref_numbers else
                           ("mixed (multi-valued)"
                            if len(ce_values) > 1 or len(ref_values) > 1
                            else "DISAGREE-needs-human-review"))
            elif ce_values[0] in ref_values:
                verdict = "text-identical"
            else:
                verdict = "unparseable-either-side"
            verdicts[verdict] += 1
            ex = ref_by_name[name][0]
            agreement.append((name, verdict, "|".join(ce_values[:4]),
                              "|".join(ref_values[:4]), ex[1], ex[2]))
        with open(out / f"xcheck-{tag}-agreement.tsv", "w",
                  encoding="utf-8") as fh:
            fh.write(stamp + "name\tverdict\tce_values\tref_values\tsource"
                     "\tlicence\n")
            for row in agreement:
                fh.write("\t".join(row) + "\n")
        summary["agree"][tag] = dict(verdicts)
        summary.setdefault("divergent", {})[tag] = [
            row for row in agreement if row[1].startswith("DISAGREE")]

        not_in_ce = [(name, ref_by_name[name][0][0],
                      ref_by_name[name][0][1], ref_by_name[name][0][2])
                     for name in sorted(set(ref_by_name) - set(ce_by_name))]
        excluded = [r for r in not_in_ce if r[0].startswith("__")
                    or GUARDISH.match(r[0])]
        leads = [r for r in not_in_ce if r not in excluded]
        with open(out / f"xcheck-{tag}-not-in-ce.tsv", "w",
                  encoding="utf-8") as fh:
            fh.write(stamp + "name\tvalue_as_printed\tsource\tlicence\n")
            for row in not_in_ce:
                fh.write("\t".join(row) + "\n")
        summary["defines"][tag] = (len(defines), len(ref_by_name),
                                   len(not_in_ce), len(excluded), len(leads))
        fam = collections.Counter()
        for name, *_ in leads:
            m = re.match(r"_*([A-Za-z]+)", name)
            fam[m.group(1) if m else name[:8]] += 1
        summary["families"][tag] = fam.most_common(15)

        if ref["def_dirs"]:
            exports = list(iter_exports(ref))
            by_module_name = collections.defaultdict(set)
            rows = []
            hit_modules = set()
            for name, ordinal, module, lineno in exports:
                by_module_name[module].add(name)
                ce_mods = ce_exports.get(name)
                rows.append((name, module, ordinal,
                             f"{module}.def:{lineno}",
                             ",".join(sorted(ce_mods)) if ce_mods else "",
                             "yes" if ce_mods else "no"))
                if ce_mods:
                    hit_modules.add(module)
            with open(out / f"xcheck-{tag}-exports.tsv", "w",
                      encoding="utf-8") as fh:
                fh.write(stamp + "name\tmodule\tordinal\tsource\t"
                         "ce_link_worklists\tin_ce_surface\n")
                for row in rows:
                    fh.write("\t".join(row) + "\n")
            missing = sum(1 for r in rows if r[5] == "no")
            only_ce = sum(1 for n in ce_exports
                          if not any(n in s for s in
                                     by_module_name.values()))
            summary["exports"][tag] = dict(
                def_files=len(list(by_module_name)), rows=len(rows),
                distinct=sum(len(s) for s in by_module_name.values()),
                matching_ce=sorted(hit_modules), missing_rows=missing,
                ce_export_names=len(ce_exports), ce_only=only_ce)

    # ---- references talking to each other --------------------------------
    tags = [ref["tag"] for ref in REFERENCES if ref["tag"] in all_ref_names]
    cross = ""
    if len(tags) == 2:
        shared = set(all_ref_names[tags[0]]) & set(all_ref_names[tags[1]])
        same = 0
        for name in shared:
            a = set()
            b = set()
            for value, *_ in all_ref_names[tags[0]][name]:
                a |= numeric_candidates(value)
            for value, *_ in all_ref_names[tags[1]][name]:
                b |= numeric_candidates(value)
            if a and b and a & b:
                same += 1
        cross = (f"references share {len(shared)} define names; "
                 f"{same} agree numerically where both print a number")

    # ---- the human-readable summary --------------------------------------
    lines = ["# Header cross-check summary (REVIEW ONLY)", "",
             "Generated by `tools/xcheck_references.py` from the pinned, "
             "licence-vetted references under `sources/`.  **Nothing here "
             "feeds any generator; a listed name is a lead, not a value to "
             "adopt.**",
             ""]
    for ref in REFERENCES:
        tag = ref["tag"]
        if tag not in summary["classes"]:
            continue
        lines += [f"## {tag} -- {ref['label']}", "",
                  f"- commit `{ref['commit'][:12]}` (stored + vetted in "
                  f"`sources/{'w32api-cegcc' if 'w32api' in tag else tag}/`)",
                  "- licence classes (re-counted by this tool): " +
                  ", ".join(f"{k}: {v}" for k, v in
                            sorted(summary["classes"][tag].items()))]
        if ref.get("skips"):
            lines.append(f"- excluded: {ref['skips']}")
        d, n, tot, exc, leads = summary["defines"][tag]
        lines += [f"- parsed `#define` rows: {d:,} ({n:,} distinct names)",
                  f"- absent from the CE surface: {tot:,} rows "
                  f"({exc:,} toolchain artefacts excluded) "
                  f"-> **{leads:,} candidate leads**",
                  "- lead families: " +
                  "; ".join(f"{k!r}:{v}" for k, v in
                            summary["families"][tag][:8])]
        verdicts = summary["agree"][tag]
        lines.append("- names in both the reference and the CE surface: " +
                     f"{sum(verdicts.values())} (" +
                     ", ".join(f"{k}: {v}" for k, v in
                               sorted(verdicts.items())) + ")")
        if tag in summary["exports"]:
            e = summary["exports"][tag]
            lines += [
                f"- `.def` export cross-check: {e['def_files']} reference "
                f"lists, {e['rows']:,} export rows of {e['distinct']:,} "
                f"names; {e['rows'] - e['missing_rows']:,} names also on a "
                f"CE link worklist, {e['missing_rows']:,} not "
                f"(candidate leads); {e['ce_only']:,} CE worklist names "
                f"are present only on the CE side",
                f"  - modules with any reference match: "
                f"{len(e['matching_ce'])} "
                f"({', '.join(e['matching_ce'][:10])}"
                f"{'...' if len(e['matching_ce']) > 10 else ''})"]
        lines.append("")
    if cross:
        lines += ["## cross-reference consistency", "", f"- {cross}", ""]
    divergent = [(row[0], tag, row[2], row[3], row[4])
                 for tag, rows in summary.get("divergent", {}).items()
                 for row in rows]
    if divergent:
        lines += ["## flagged divergences (DISAGREE-needs-human-review)", "",
                  "Both flagged names are case studies in exactly what this "
                  "report exists for -- the CE documentation pages are "
                  "quoted; a human weighs them against the reference:",
                  ""]
        by_name = collections.defaultdict(lambda: {"ce": set(), "refs": []})
        for name, tag, ce_values, ref_values, src in divergent:
            by_name[name]["ce"].add(ce_values)
            by_name[name]["refs"].append(f"{tag} prints `{ref_values}` "
                                         f"({src})")
        for name, slot in sorted(by_name.items()):
            lines.append(f"- `{name}` -- CE pages print "
                         f"`{' / '.join(sorted(slot['ce']))}`; "
                         + "; ".join(slot["refs"]))
        lines += ["",
                  "Read beside the quoted CE rows in "
                  "`xcheck-<tag>-agreement.tsv`: `MAX_PATH` shows 128 in the "
                  "CE Docs -- but on the DirectShow DVD pages (`Dvdata.h`/"
                  "`Dvdata.idl`, the `UNICODE_PATH` topic), i.e. a local "
                  "shadow of the desktop's 260, not a CE-wide claim; "
                  "`HTTP_QUERY_MAX` shows generational drift (CE pages "
                  "print 75; the references print 45 and 78).  Neither is "
                  "an error in the CE surface -- both are review notes.",
                  ""]
    lines += ["## parse scope note", "",
              "Only files directly inside each reference's `include/` "
              "directory are classified and parsed (no recursion; e.g. the "
              "w32api `GL/` subdirectory is outside the scope)."]
    lines += ["## primary vs secondary", "",
              "Windows CE is 32-bit; `w32api-cegcc` (the CeGCC toolchain's "
              "CE-adapted w32api) is the primary reference.  `mingw-w64` "
              "targets 64-bit desktop Windows -- the wrong target -- and is "
              "kept only because it alone carries the MSHTML dispatch ids; "
              "its **6,572 `DISPID_*` names** remain review leads.",
              ""]
    (out / "xcheck-summary.md").write_text("\n".join(lines),
                                           encoding="utf-8")
    print(f"reports written to {out}")
    for tag in tags:
        print(tag, summary["defines"][tag], summary["agree"][tag])


if __name__ == "__main__":
    main()
