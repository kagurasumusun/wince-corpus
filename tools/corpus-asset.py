#!/usr/bin/env python3
"""tools/corpus-asset.py -- the corpus bytes live in a release asset, not git.

Since the 2026-10-21 policy review (docs/kb-design.ja.md section 16) the
repository tracks only the *recipes and the ledger*: queues/, tools/,
docs/, data/index/ and the kb/ inputs.  The page bytes under corpus/ and
the verbatim media payloads under sources/windows-ce-*/ are distributed
as one tar.zst asset of the rolling `corpus-latest` release, exactly the
way kb/kb.sqlite3 is published through kb-latest.  Workflows materialize
the asset before they read the corpus; collection workflows fetch only
the delta their queue asks for, refresh the ledger, upload a new asset
and commit the ledger (never the pages).

The ledger is `data/index/corpus-hashes.tsv`: path, size and sha256 of
every managed file.  Paperwork (README.md / PROVENANCE.md) stays in git
and is never part of the asset.  The asset carries a copy of the ledger
it was packed from (`.corpus-hashes.tsv` at the tar root), so materialize
can prove the bytes match both the asset's own manifest and the ledger
committed next to the code that reads them.

Commands
    hash                     regenerate the ledger from the worktree
    hash --check             exit 1 unless the ledger matches the worktree
    pack [OUT]               write the asset (refuses a stale ledger and
                             un-ledgered extras under the managed roots)
    fetch                    download the asset of corpus-latest
    unpack SRC               extract an asset file at the repository root
    prune                    delete managed files the ledger no longer lists
    verify                   worktree == ledger?  (missing/mismatch/extras)
    materialize              fetch + unpack + prune + verify (CI entry point)
    publish                  pack + upload to corpus-latest (CI entry point)

Compression is zstd through the PyPI `zstandard` module (the CLI is not
required):  pip install zstandard
"""

import argparse
import hashlib
import io
import os
import subprocess
import sys
import tarfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LEDGER = os.path.join(ROOT, "data", "index", "corpus-hashes.tsv")
RELEASE = "corpus-latest"
ASSET_NAME = "corpus-asset.tar.zst"
TAR_MANIFEST = ".corpus-hashes.tsv"
CACHE_ASSET = os.path.join(ROOT, ".cache", ASSET_NAME)

# Paperwork is project-authored text and stays in git; it is never part
# of the asset and never counted as an "extra" (same set as check-policy).
PAPERWORK = {"README.md", "PROVENANCE.md"}

# sources/ directories whose snapshots carry their own redistributable
# licence and stay tracked in git (MicrosoftDocs CC-BY, pinvoke MIT,
# w32api public domain) plus the statement/notice folders the rights
# registry quotes.  Every other sources/<name>/ is a verbatim media
# payload and is asset-managed like corpus/.
SOURCES_EXEMPT = {
    "microsoftdocs",
    "w32api-cegcc",
    "w32api-cegcc-mingw",
    "dotnet-pinvoke",
    "terms",
    "oss-licenses",
}


def managed_roots():
    roots = ["corpus"]
    sources = os.path.join(ROOT, "sources")
    if os.path.isdir(sources):
        for name in sorted(os.listdir(sources)):
            if name in SOURCES_EXEMPT:
                continue
            if os.path.isdir(os.path.join(sources, name)):
                roots.append(os.path.join("sources", name))
    return roots


def walk_managed():
    """Yield (relpath, abspath) of every managed file, sorted."""
    out = []
    for rel_root in managed_roots():
        abs_root = os.path.join(ROOT, rel_root)
        if not os.path.isdir(abs_root):
            continue
        for dirpath, dirnames, filenames in os.walk(abs_root):
            dirnames.sort()
            for name in sorted(filenames):
                if name in PAPERWORK:
                    continue
                abspath = os.path.join(dirpath, name)
                if os.path.islink(abspath):
                    raise SystemExit(f"symlink under a managed root: {abspath}")
                out.append((os.path.relpath(abspath, ROOT), abspath))
    out.sort()
    return out


def sha256_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def compute_rows(progress=False):
    rows = []
    files = walk_managed()
    total = 0
    for i, (rel, abspath) in enumerate(files):
        size = os.path.getsize(abspath)
        total += size
        rows.append((rel, size, sha256_file(abspath)))
        if progress and (i + 1) % 20000 == 0:
            print(f"  hashed {i + 1}/{len(files)}", file=sys.stderr)
    return rows, total


def ledger_text(rows, total):
    lines = [
        "# Corpus asset ledger: every file of the corpus-latest release asset.",
        "# Regenerate with: python3 tools/corpus-asset.py hash",
        f"# files={len(rows)} bytes={total}",
        "# path\tsize\tsha256",
    ]
    lines += [f"{rel}\t{size}\t{digest}" for rel, size, digest in rows]
    return "\n".join(lines) + "\n"


def read_ledger(path=LEDGER):
    rows = {}
    with open(path, encoding="utf-8") as f:
        for line in f:
            if line.startswith("#") or not line.strip():
                continue
            rel, size, digest = line.rstrip("\n").split("\t")
            rows[rel] = (int(size), digest)
    return rows


def cmd_hash(args):
    rows, total = compute_rows(progress=True)
    text = ledger_text(rows, total)
    if args.check:
        try:
            current = open(LEDGER, encoding="utf-8").read()
        except OSError:
            current = ""
        if current != text:
            print("ledger is stale; run: python3 tools/corpus-asset.py hash",
                  file=sys.stderr)
            return 1
        print(f"ledger fresh: {len(rows)} files, {total} bytes")
        return 0
    with open(LEDGER, "w", encoding="utf-8") as f:
        f.write(text)
    print(f"wrote {LEDGER}: {len(rows)} files, {total} bytes")
    return 0


def compare(rows, check_hashes=True):
    """Compare ledger rows (dict) against the worktree; return problems."""
    problems = []
    disk = {rel: abspath for rel, abspath in walk_managed()}
    for rel, (size, digest) in sorted(rows.items()):
        abspath = disk.pop(rel, None)
        if abspath is None:
            problems.append(f"missing: {rel}")
            continue
        if os.path.getsize(abspath) != size:
            problems.append(f"size differs: {rel}")
        elif check_hashes and sha256_file(abspath) != digest:
            problems.append(f"sha256 differs: {rel}")
    for rel in sorted(disk):
        problems.append(f"extra (not in ledger): {rel}")
    return problems


def cmd_verify(args):
    rows = read_ledger()
    problems = compare(rows)
    for p in problems[:50]:
        print(p, file=sys.stderr)
    if len(problems) > 50:
        print(f"... and {len(problems) - 50} more", file=sys.stderr)
    if problems:
        print(f"verify: {len(problems)} problem(s) against {len(rows)} ledger rows",
              file=sys.stderr)
        return 1
    print(f"verify OK: {len(rows)} files match the ledger")
    return 0


def cmd_prune(args):
    rows = read_ledger()
    removed = 0
    for rel, abspath in walk_managed():
        if rel not in rows:
            os.remove(abspath)
            removed += 1
    print(f"prune: removed {removed} file(s) the ledger no longer lists")
    return 0


def _zstd():
    try:
        import zstandard
        return zstandard
    except ImportError:
        raise SystemExit("the PyPI 'zstandard' module is required: "
                         "pip install zstandard")


def pack_to(out_path):
    rows_list, total = compute_rows()
    text = ledger_text(rows_list, total)
    try:
        committed = open(LEDGER, encoding="utf-8").read()
    except OSError:
        committed = ""
    if committed != text:
        raise SystemExit("ledger is stale; run: python3 tools/corpus-asset.py hash")
    zstandard = _zstd()
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    with open(out_path, "wb") as raw:
        cctx = zstandard.ZstdCompressor(level=10, threads=0)
        with cctx.stream_writer(raw) as comp:
            with tarfile.open(fileobj=comp, mode="w|") as tar:
                info = tarfile.TarInfo(TAR_MANIFEST)
                data = text.encode("utf-8")
                info.size = len(data)
                info.mtime = 0
                tar.addfile(info, io.BytesIO(data))
                for rel, size, _digest in rows_list:
                    info = tarfile.TarInfo(rel)
                    info.size = size
                    info.mtime = 0
                    info.mode = 0o644
                    with open(os.path.join(ROOT, rel), "rb") as f:
                        tar.addfile(info, f)
    print(f"packed {out_path}: {len(rows_list)} files, {total} bytes "
          f"-> {os.path.getsize(out_path)} bytes")
    return 0


def cmd_pack(args):
    return pack_to(args.out or CACHE_ASSET)


def unpack_from(asset_path):
    zstandard = _zstd()
    count = 0
    with open(asset_path, "rb") as raw:
        dctx = zstandard.ZstdDecompressor()
        with dctx.stream_reader(raw) as reader:
            with tarfile.open(fileobj=reader, mode="r|") as tar:
                for member in tar:
                    if member.name == TAR_MANIFEST:
                        tar.extractfile(member).read()
                        continue
                    if not member.isfile():
                        continue
                    rel = member.name
                    if rel.startswith("/") or ".." in rel.split("/"):
                        raise SystemExit(f"unsafe path in asset: {rel}")
                    dest = os.path.join(ROOT, rel)
                    os.makedirs(os.path.dirname(dest), exist_ok=True)
                    src = tar.extractfile(member)
                    with open(dest, "wb") as out:
                        for chunk in iter(lambda: src.read(1 << 20), b""):
                            out.write(chunk)
                    count += 1
    print(f"unpacked {count} files from {asset_path}")
    return 0


def cmd_unpack(args):
    return unpack_from(args.src)


def _gh(*argv):
    return subprocess.run(["gh", *argv], cwd=ROOT, check=True)


def fetch_to(dest):
    os.makedirs(os.path.dirname(dest), exist_ok=True)
    _gh("release", "download", RELEASE, "-p", ASSET_NAME,
        "-O", dest, "--clobber")
    print(f"fetched {RELEASE}/{ASSET_NAME} -> {dest} "
          f"({os.path.getsize(dest)} bytes)")
    return 0


def cmd_fetch(args):
    return fetch_to(args.out or CACHE_ASSET)


def cmd_materialize(args):
    asset = args.src or CACHE_ASSET
    if not args.src:
        fetch_to(asset)
    unpack_from(asset)
    cmd_prune(args)
    return cmd_verify(args)


def cmd_publish(args):
    out = args.out or CACHE_ASSET
    pack_to(out)
    exists = subprocess.run(
        ["gh", "release", "view", RELEASE], cwd=ROOT,
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL).returncode == 0
    if not exists:
        _gh("release", "create", RELEASE,
            "--title", "Corpus asset (rolling)",
            "--notes",
            "The corpus/ page bytes and sources/ media payloads matching "
            "data/index/corpus-hashes.tsv. Managed by tools/corpus-asset.py; "
            "see docs/LICENSING.md for the rights position of every file.")
    _gh("release", "upload", RELEASE, out, "--clobber")
    print(f"published {out} to release {RELEASE}")
    return 0


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="cmd", required=True)
    p = sub.add_parser("hash")
    p.add_argument("--check", action="store_true")
    p.set_defaults(fn=cmd_hash)
    p = sub.add_parser("verify")
    p.set_defaults(fn=cmd_verify)
    p = sub.add_parser("prune")
    p.set_defaults(fn=cmd_prune)
    p = sub.add_parser("pack")
    p.add_argument("out", nargs="?")
    p.set_defaults(fn=cmd_pack)
    p = sub.add_parser("unpack")
    p.add_argument("src")
    p.set_defaults(fn=cmd_unpack)
    p = sub.add_parser("fetch")
    p.add_argument("out", nargs="?")
    p.set_defaults(fn=cmd_fetch)
    p = sub.add_parser("materialize")
    p.add_argument("src", nargs="?")
    p.set_defaults(fn=cmd_materialize)
    p = sub.add_parser("publish")
    p.add_argument("out", nargs="?")
    p.set_defaults(fn=cmd_publish)
    args = ap.parse_args()
    return args.fn(args)


if __name__ == "__main__":
    sys.exit(main())
