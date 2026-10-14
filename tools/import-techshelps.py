#!/usr/bin/env python3
"""Import the Windows CE documentation sets of the techshelps MSDN mirror.

The mirror (https://techshelps.github.io/ , repository
https://github.com/techshelps/techshelps.github.io) is a decompiled copy of
MSDN Library content from the late 1990s — the editions that documented
**Windows CE 1.0 and 2.0**, which Microsoft never put on the Web and which the
rest of this corpus does not cover.

Seven CE sets are imported (5,170 pages) plus the BACKGRND-CE subset:
MSDN/BACKGRND is a 1,251-page "Backgrounder" pile of which exactly 13
pages are Windows CE material (the CE Technical FAQ, the Communications
Model, Memory Use, Display Drivers, Real-Time Systems, Porting Win95
programs, the Win32 Programming Model primer, and five more -- named in
SUBSETS).

Pages are copied verbatim except for the mirror's injected Google Analytics
snippet, which is removed (documented in the tree's PROVENANCE.md).

    # work with an existing clone
    python3 tools/import-techshelps.py --src /tmp/techshelps

    # or let the tool make a partial clone (only the CE sets are fetched)
    python3 tools/import-techshelps.py --clone --cache-dir .cache/techshelps

    python3 tools/import-techshelps.py --src ... --list   # show the sets
"""

import argparse
import os
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
REPO_URL = "https://github.com/techshelps/techshelps.github.io.git"
REPO_SHA = "dbd21c49bbe919fd089084f2a5dd90a602685ba1"  # master as of 2021-03-11 (see PROVENANCE.md)
OUT = os.path.join("corpus", "msdn-library", "techshelps")

SETS = {
    "CEGUIDE": "Windows CE Guide (SDK guide, CE 1.0/2.0)",
    "WCEMFC": "Windows CE MFC",
    "WCEATL": "Windows CE ATL",
    "VBCE": "Visual Basic for Windows CE",
    "WCEDDK": "Windows CE DDK",
    "VCCE": "Visual C++ for Windows CE",
    "DNEMBED": "Windows CE embedded development",
}

# The MSDN Library "Backgrounder" section (MSDN/BACKGRND) is one mixed
# 1,251-file pile; exactly these 13 pages are Windows CE material (found by
# title/body scan of the whole pile -- their images are dropped like every
# other techshelps set's images, see walk_html).
SUBSETS = {
    "BACKGRND-CE": ("BACKGRND/html", [
        "msdn_cetecfaq.htm",   # Microsoft Windows CE Technical FAQ
        "msdn_comm_mod.htm",   # The Microsoft Windows CE Communications Model
        "msdn_devwince.htm",   # Developing Applications for Microsoft Windows CE
        "msdn_embeddev.htm",   # Embedded Development with Microsoft Windows CE 2.0
        "msdn_memdrft2.htm",   # Microsoft Windows CE Memory Use
        "msdn_mgdidft1.htm",   # Microsoft Windows CE Graphics Features
        "msdn_mgdiview.htm",   # Microsoft Windows CE Display Drivers and Hardware
        "msdn_porting.htm",    # Porting Windows 95 Programs to Windows CE
        "msdn_rtdraft6.htm",   # Real-Time Systems with Microsoft Windows CE
        "msdn_vcceembo.htm",   # Introducing the Windows CE Embedded Toolkit for VC++ 5.0
        "msdn_vcwincefaq.htm", # Visual C++ for Windows CE FAQ
        "msdn_w32model.htm",   # The Microsoft Win32 Programming Model: A Primer
        "msdn_wince.htm",      # Microsoft Windows CE: The New Choice for Dedicated Systems
    ]),
}

# The mirror injects a Google Analytics snippet into every page.
GA_RE = re.compile(
    r"<script[^>]*googletagmanager[^>]*>\s*</script>"
    r"|<script>\s*window\.dataLayer.*?</script>",
    re.S | re.I)


def run(cmd, **kw):
    return subprocess.run(cmd, check=True, text=True, **kw)


def clone_to(cache_dir):
    os.makedirs(cache_dir, exist_ok=True)
    target = os.path.join(cache_dir, "techshelps.github.io")
    if os.path.isdir(os.path.join(target, ".git")):
        print(f"[techshelps] reusing {target}")
        return target
    print(f"[techshelps] partial clone into {target} ...", flush=True)
    run(["git", "clone", "--filter=blob:none", "--no-checkout", "--depth", "1",
         REPO_URL, target])
    run(["git", "-C", target, "sparse-checkout", "init", "--no-cone"])
    patterns = [f"MSDN/{name}/**" for name in SETS]
    for directory, files in SUBSETS.values():
        patterns += [f"MSDN/{directory}/{name}" for name in files]
    run(["git", "-C", target, "sparse-checkout", "set"] + patterns)
    run(["git", "-C", target, "checkout"])
    return target


def page_title(text):
    m = re.search(r"<title>(.*?)</title>", text, re.S | re.I)
    if not m:
        return ""
    return re.sub(r"\s+", " ", m.group(1)).strip()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    src = ap.add_mutually_exclusive_group(required=True)
    src.add_argument("--src", help="existing clone of techshelps.github.io")
    src.add_argument("--clone", action="store_true",
                     help="partial-clone the repository into --cache-dir")
    ap.add_argument("--cache-dir", default=os.path.join(ROOT, ".cache"))
    ap.add_argument("--out", default=OUT)
    ap.add_argument("--list", action="store_true",
                    help="list the CE sets and their page counts, then stop")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    if args.clone:
        root = clone_to(args.cache_dir)
    else:
        root = args.src
    if not os.path.isdir(os.path.join(root, "MSDN")):
        print(f"not a techshelps clone: {root}", file=sys.stderr)
        return 1

    total = 0
    for name, description in SETS.items():
        source = os.path.join(root, "MSDN", name)
        if not os.path.isdir(source):
            print(f"[techshelps] {name}: missing (sparse checkout?)")
            continue
        pages = [p for p in walk_html(source)]
        if args.list:
            print(f"  {name:9s} {len(pages):5d} pages  {description}")
            continue
        target = os.path.join(ROOT, args.out, name)
        if args.dry_run:
            print(f"[techshelps] {name}: would write {len(pages)} pages to "
                  f"{os.path.relpath(target, ROOT)}")
            continue
        os.makedirs(target, exist_ok=True)
        written = 0
        for path in pages:
            rel = os.path.relpath(path, source)
            dest = os.path.join(target, rel)
            os.makedirs(os.path.dirname(dest), exist_ok=True)
            with open(path, "rb") as fh:
                raw = fh.read()
            text = raw.decode("cp1252", "replace")
            new = GA_RE.sub("", text)
            if new == text:
                new = text.replace("\r\n", "\n")
            with open(dest, "w", encoding="utf-8", newline="\n") as fh:
                fh.write(new)
            written += 1
        total += written
        print(f"[techshelps] {name}: {written} pages -> {os.path.relpath(target, ROOT)}")

    for name, (directory, files) in SUBSETS.items():
        source = os.path.join(root, "MSDN", directory)
        target = os.path.join(ROOT, args.out, name)
        written = 0
        for f in files:
            path = os.path.join(source, f)
            if not os.path.isfile(path):
                print(f"[techshelps] {name}: MISSING {f} (sparse checkout?)")
                continue
            if args.list or args.dry_run:
                written += 1
                continue
            os.makedirs(target, exist_ok=True)
            with open(path, "rb") as fh:
                text = fh.read().decode("cp1252", "replace")
            new = GA_RE.sub("", text)
            if new == text:
                new = text.replace("\r\n", "\n")
            with open(os.path.join(target, f), "w", encoding="utf-8",
                      newline="\n") as fh:
                fh.write(new)
            written += 1
        verb = "would write" if args.dry_run else             ("have" if args.list else "wrote")
        print(f"[techshelps] {name}: {written} pages ({directory}, CE subset)")
        total += 0 if (args.list or args.dry_run) else written

    print(f"[techshelps] {total} pages imported")
    return 0


def walk_html(directory):
    for dirpath, dirnames, filenames in os.walk(directory):
        dirnames.sort()
        for name in sorted(filenames):
            if name.lower().endswith((".htm", ".html")) \
                    and not name.lower().startswith("notopic"):
                yield os.path.join(dirpath, name)


if __name__ == "__main__":
    sys.exit(main())
