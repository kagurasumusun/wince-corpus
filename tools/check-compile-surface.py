#!/usr/bin/env python3
"""tools/check-compile-surface.py -- does the winsur include/def surface
compile?

The question behind it: can a compiler and a linker actually build a
Windows CE program against this tree?  The checker answers with
measurements, not claims:

* include/: one translation unit with every fragment (base types in
  WinDef.h first).  Fragment order is repaired until the compiler stops
  reporting a type as unknown (the fragment that defines it moves ahead
  of its users) -- then whatever remains is a real gap: a type whose
  body no corpus page prints, or a declaration the page prints in a
  form that is not C.
* link/: every .def must carry LIBRARY + EXPORTS (what lib.exe /
  dlltool consume to build an import library).

    python3 tools/check-compile-surface.py          # the winsur tree
    python3 tools/check-compile-surface.py --out X  # another tree

Output: knowledge/reports/compile-surface.{tsv,md}.  gcc is used as the
probe (it is what the sandbox has; the shims in WinDef.h target exactly
that).  Exit code is 0 -- the report is the product.
"""

from __future__ import annotations

import argparse
import collections
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT_TSV = os.path.join(ROOT, "knowledge", "reports", "compile-surface.tsv")
OUT_MD = os.path.join(ROOT, "knowledge", "reports", "compile-surface.md")

ERROR_RE = re.compile(
    r"^(?P<file>[\w./\\-]+\.h):(?P<line>\d+):(?:\d+:)? error: (?P<msg>.*)$")
Q = "\u2018'\""  # gcc prints ‘name’; some builds print 'name'
UNKNOWN_TYPE_RE = re.compile(
    r"unknown type name [\u2018'\"](?P<name>[^\u2019'\"]+)[\u2019'\"]"
    r"\s*;?\s*(did you mean.*)?$")
DEFINES_TYPE = re.compile(
    r"^\s*(?:typedef\s+)?(?:struct|union|enum)\s+(?P<tag>\w+)|"
    r"^\s*typedef\s+[^;]*?\b(?P<tname>\w+)\s*;|"
    r"^\s*\}\s*(?P<stname>\w+)\s*[,;]|"
    r"^\s*#\s*define\s+(?P<macro>[A-Za-z_]\w*)\b", re.M)
FORWARD_HINT = re.compile(r"\b(?:struct|union|enum)\s+(\w+)\s*\*")


def write_tu(path, order):
    with open(path, "w", encoding="utf-8") as fh:
        fh.write("/* compile surface probe */\n")
        for name in order:
            fh.write(f'#include "{name}"\n')


def run_gcc(tu, include_dir):
    proc = subprocess.run(
        ["gcc", "-fsyntax-only", "-std=gnu99", "-fshort-wchar",
         "-I", include_dir, tu],
        capture_output=True, text=True, timeout=600)
    errors = []
    for line in (proc.stderr or "").splitlines():
        match = ERROR_RE.match(line.strip())
        if match:
            errors.append((os.path.basename(match.group("file")),
                           int(match.group("line")), match.group("msg")))
    return errors


def type_definers(fragments):
    """type name -> fragment names that define it."""
    out = collections.defaultdict(set)
    for name, text in fragments.items():
        for match in DEFINES_TYPE.finditer(text):
            for key in ("tag", "tname", "stname", "macro"):
                if match.group(key):
                    out[match.group(key)].add(name)
    return out


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--out", default=os.path.join(ROOT, "winsur"))
    parser.add_argument("--keep", default=os.path.join(ROOT, "build"))
    args = parser.parse_args()
    include_dir = os.path.join(args.out, "include")
    if not os.path.isdir(include_dir):
        print(f"[compile-surface] no include dir at {include_dir}")
        return
    os.makedirs(args.keep, exist_ok=True)

    fragments = {}
    for fn in sorted(os.listdir(include_dir)):
        if fn.endswith(".h") or fn.endswith(".h.fragment"):
            with open(os.path.join(include_dir, fn), encoding="utf-8",
                      errors="replace") as fh:
                fragments[fn] = fh.read()
    order = sorted(fragments)
    # base types first: the fragment the shims live in
    for preferred in ("WinDef.h", "Windef.h", "windef.h"):
        if preferred in order:
            order.remove(preferred)
            order.insert(0, preferred)
            break
    print(f"[compile-surface] {len(order)} fragment(s), gcc probe",
          flush=True)

    tu = os.path.join(args.keep, "compile-surface-tu.c")
    definers = type_definers(fragments)
    errors = []
    for step in range(1, 25):
        write_tu(tu, order)
        errors = run_gcc(tu, include_dir)
        unknown = collections.Counter()
        for fn, _line, msg in errors:
            match = UNKNOWN_TYPE_RE.search(msg)
            if match:
                unknown[match.group("name")] += 1
        moved = False
        for type_name in unknown:
            owners = definers.get(type_name) or set()
            # move a definers' fragment ahead of the first error site
            for fn, line, msg in errors:
                match = UNKNOWN_TYPE_RE.search(msg)
                if not match or match.group("name") != type_name:
                    continue
                for owner in owners:
                    if owner == fn:
                        continue
                    oi, fi = order.index(owner), order.index(fn)
                    if oi > fi:
                        order.remove(owner)
                        order.insert(fi, owner)
                        moved = True
                    break
                break
        print(f"[compile-surface] pass {step}: {len(errors)} error(s), "
              f"{len(unknown)} unknown type(s)", flush=True)
        if not moved or not errors:
            break

    # classify what remains
    by_fragment = collections.defaultdict(lambda: collections.Counter())
    missing_types = collections.Counter()
    other_samples = collections.defaultdict(list)
    for fn, line, msg in errors:
        match = UNKNOWN_TYPE_RE.search(msg)
        if match:
            name = match.group("name")
            by_fragment[fn]["unknown-type"] += 1
            missing_types[name] += 1
        else:
            by_fragment[fn]["not-c"] += 1
            if len(other_samples[fn]) < 3:
                other_samples[fn].append(f"{line}: {msg[:90]}")
    never_defined = sorted(n for n in missing_types if n not in definers)
    order_fixed = sorted(n for n in missing_types if n in definers)

    # link/ audit: LIBRARY + EXPORTS present
    link_dir = os.path.join(args.out, "link")
    defs_ok = defs_bad = 0
    bad_defs = []
    if os.path.isdir(link_dir):
        for fn in sorted(os.listdir(link_dir)):
            if not fn.endswith(".def"):
                continue
            text = open(os.path.join(link_dir, fn), encoding="utf-8",
                        errors="replace").read()
            ok = re.search(r"(?m)^LIBRARY\b", text) and \
                re.search(r"(?m)^EXPORTS\b", text)
            if ok:
                defs_ok += 1
            else:
                defs_bad += 1
                if len(bad_defs) < 10:
                    bad_defs.append(fn)

    os.makedirs(os.path.dirname(OUT_TSV), exist_ok=True)
    with open(OUT_TSV, "w", encoding="utf-8") as fh:
        fh.write("fragment\tunknown-type\tnot-c\tsamples\n")
        for fn in sorted(by_fragment):
            row = by_fragment[fn]
            fh.write(f"{fn}\t{row['unknown-type']}\t{row['not-c']}\t"
                     f"{' | '.join(other_samples.get(fn) or [])}\n")
    lines = [
        "# Compile surface -- can the tree build?",
        "",
        f"Generated by `tools/check-compile-surface.py` against "
        f"`{os.path.relpath(args.out, ROOT)}`.",
        "",
        f"* include fragments: **{len(order)}**, probed as ONE "
        f"translation unit (WinDef.h base types first, then dependency "
        f"order repaired by the compiler itself over {len(errors) and 'passes'}"
        f")",
        f"* residual errors: **{len(errors)}** "
        f"(unknown-type {sum(missing_types.values())}, "
        f"not-C {sum(by_fragment[f]['not-c'] for f in by_fragment)})",
        f"* fragment(s) with errors: **{len(by_fragment)}**",
        f"* unknown type occurrences never defined in the tree: "
        f"**{len(never_defined)}** distinct "
        f"(their bodies no corpus page prints -- the worklist below)",
        f"* link/ `.def` files with LIBRARY+EXPORTS: **{defs_ok}**, "
        f"without: **{defs_bad}**",
        "",
        "## Unknown types (worklist)",
        "",
        "| type | uses |",
        "|---|---:|",
    ]
    for name in sorted(never_defined, key=lambda n: -missing_types[n])[:80]:
        lines.append(f"| {name} | {missing_types[name]} |")
    if order_fixed:
        lines += ["", "## Unknown types that exist in another fragment "
                  "(ordering left them unresolved)", "",
                  ", ".join(order_fixed[:40])]
    lines += ["", "## Fragments with errors", "",
              "| fragment | unknown-type | not-C | sample |",
              "|---|---:|---:|---|"]
    for fn in sorted(by_fragment, key=lambda f: -(by_fragment[f]["unknown-type"]
                                                 + by_fragment[f]["not-c"]))[:40]:
        row = by_fragment[fn]
        sample = (other_samples.get(fn) or [""])[0]
        lines.append(f"| {fn} | {row['unknown-type']} | {row['not-c']} "
                     f"| {sample[:70]} |")
    with open(OUT_MD, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")
    print(f"[compile-surface] residual errors: {len(errors)}; "
          f"never-defined types: {len(never_defined)}; "
          f"defs LIBRARY+EXPORTS: {defs_ok}/{defs_ok + defs_bad}")
    print(f"[compile-surface] {os.path.relpath(OUT_TSV, ROOT)}")


if __name__ == "__main__":
    main()
