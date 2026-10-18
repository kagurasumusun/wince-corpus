#!/usr/bin/env python3
"""Build import libraries from the winsur/link .def worklists.

Target level: the mingw/CeGCC developer experience -- one ``libXXX.a``
per module, produced with dlltool (or llvm-dlltool) from the printed
EXPORTS.  The corpus never prints ordinals except Fpcrt, so ordinal-less
``--kill-at``-free definitions are the honest surface; run this on a
machine that has binutils (``dlltool``) or LLVM (``llvm-dlltool``).

Usage:
    python3 tools/build-import-libs.py --def-dir winsur/link --out build/implib
"""
import argparse
import pathlib
import re
import shutil
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parents[1]


def find_dlltool():
    for cand, flavor in (("dlltool", "gnu"), ("llvm-dlltool", "llvm")):
        path = shutil.which(cand)
        if path:
            return path, flavor
    return None, None


def parse_def(path: pathlib.Path):
    name = None
    exports = []
    in_exports = False
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        s = line.strip()
        if s.upper().startswith("LIBRARY"):
            parts = s.split(None, 1)
            if len(parts) == 2:
                name = parts[1].strip().strip('"')
        elif s.upper().startswith("EXPORTS"):
            in_exports = True
        elif s and in_exports:
            if s.startswith(";") or s.startswith("#"):
                continue
            if re.match(r"^[A-Za-z]", s) and "=" not in s.split()[0]:
                pass
            toks = s.split()
            if toks:
                exports.append(toks[0].split("@")[0])
    return name, exports


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--def-dir", default=str(ROOT / "winsur" / "link"))
    ap.add_argument("--out", default=str(ROOT / "build" / "implib"))
    ap.add_argument("--machine", default="arm",
                    help="dlltool -m machine (arm for CE; i386 for x86 CE)")
    args = ap.parse_args()
    tool, flavor = find_dlltool()
    def_dir = pathlib.Path(args.def_dir)
    defs = sorted(def_dir.glob("*.def"))
    if not defs:
        print(f"no .def files under {def_dir}", file=sys.stderr)
        return 2
    if not tool:
        print(f"[build-import-libs] {len(defs)} .def worklist(s) ready, but "
              f"neither dlltool nor llvm-dlltool is installed on this "
              f"machine; install binutils (or LLVM) and re-run to produce "
              f"lib*.a.", file=sys.stderr)
        for d in defs:
            name, exports = parse_def(d)
            print(f"[build-import-libs] would build {name or d.stem}: "
                  f"{len(exports)} export(s)")
        return 1
    out = pathlib.Path(args.out)
    out.mkdir(parents=True, exist_ok=True)
    built = 0
    for d in defs:
        name, exports = parse_def(d)
        if not name or not exports:
            print(f"[build-import-libs] skip {d.name}: no LIBRARY/EXPORTS",
                  file=sys.stderr)
            continue
        lib = out / f"lib{name}.a"
        if flavor == "gnu":
            cmd = [tool, "-k", "-m", args.machine, "-D", name,
                   "-d", str(d), "-l", str(lib)]
        else:
            cmd = [tool, "-m", args.machine, "-d", str(d), "-l", str(lib),
                   "-D", name]
        r = subprocess.run(cmd, capture_output=True, text=True)
        if r.returncode == 0:
            built += 1
            print(f"[build-import-libs] {lib.name}: {len(exports)} export(s)")
        else:
            print(f"[build-import-libs] {d.name} FAILED: {r.stderr.strip()}",
                  file=sys.stderr)
    print(f"[build-import-libs] built {built}/{len(defs)} import libraries "
          f"into {out}")
    return 0 if built == len(defs) else 1


if __name__ == "__main__":
    sys.exit(main())
