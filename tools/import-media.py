#!/usr/bin/env python3
"""Bring a piece of official media into the corpus.

The releases under ``sources/`` were collected by hand: download the medium
(the CD/DVD image or installer archive), keep it verbatim, extract the
documentation pages from it.  This tool does the same thing on a runner, for
media that the working environment cannot reach (archive.org is not on its
network allow list) but a GitHub runner can:

    # what is in an Internet Archive item?  (download + inventory only)
    python3 tools/import-media.py --item MPLATSDK.20 --name windows-ce-2.0-sdk

    # extract the documentation of an already downloaded medium
    python3 tools/import-media.py --scan sources/windows-ce-2.0-sdk \\
        --extract --out corpus/msdn-library/windows-ce-2.0-sdk --name windows-ce-2.0-sdk

What "documentation" means here, per file type inside the medium:

* ``.htm``/``.html``            copied as pages (re-encoded to UTF-8)
* ``.chm``                      unpacked with 7z (see tools/extract-chm.py)
* ``.hlp``/``.mvb``             decoded with helpdeco (if it is on PATH; see
                                tools/extract-mvb.py for the MVB recipe)
* ``.ivt``/``.ivi``             InfoViewer titles, decoded by
                                tools/extract-ivt.py (pure Python; the
                                CE 2.0 SDK Books Online lives in these)
* ``.iso``                      read with tools/iso9660.py (no 7z needed)
* ``.cab``                      InstallShield cabinets are unpacked with
                                ``unshield`` when it is on PATH
* ``.zip``/``.exe``/``.7z``     unpacked with 7z and then scanned again

Everything else (binaries, sources, samples, images) is skipped and counted,
so the inventory says what the medium holds without importing it.

A config row may carry a 6th field, a regex: documentation files whose path
inside the medium matches it are refused - a medium holds help for its own
viewer and IDE, which is not documentation *of the product* the corpus is
about.  Refused files are counted (``excluded``) and not imported.

By default the medium is kept verbatim under ``sources/<name>/`` and gets a
``PROVENANCE.md`` recording the Internet Archive item, the file name, size
and md5 of every file that was downloaded.  Action ``import-scratch`` is for a
medium that is *not* kept: it is fetched to ``.cache/media/<name>/``, the
documentation pages go to the corpus, and a ``PROVENANCE.md`` next to those
pages records where they came from, while ``data/reports/media-imported.tsv``
keeps a later run from downloading the same image again (``--force`` redoes it).
Action ``inventory-scratch`` only probes such a medium: fetch it, list what
it holds by extension and throw it away, importing nothing
(``inventory-list-scratch`` names every file instead -- for scouting a disc
whose packaging is unknown).  Either way, only documentation is imported:
this is a documentation corpus, not a source-code mirror.
"""

import argparse
import collections
import hashlib
import html
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
import time
import urllib.parse
import urllib.request
import zipfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BASE_URL = "https://archive.org"          # overridable with --base-url
USER_AGENT = ("wince-docs-corpus/2.0 "
              "(+https://github.com/kagurasumusun/wince-docs-corpus)")
ARCHIVE = ("archive", "archive.zip", "archive.rar", "archive.7z")
# Media that is fetched and thrown away again (scratch mode) still needs its
# provenance recorded - next to the pages it produced, not next to the image.
_SCRATCH = {}
ARCHIVE_EXT = (".iso", ".zip", ".7z", ".rar", ".cab", ".exe", ".msi", ".img",
               ".bin", ".tar", ".gz", ".tgz")
# What has been imported already.  A scratch medium is downloaded to a
# directory a runner throws away, so without this a later run would download
# the same image again to import the same pages; the receipt says which
# (item, exclude) pair has been imported where, and --force redoes it anyway.
IMPORTED = os.path.join(ROOT, "data", "reports", "media-imported.tsv")
PAGE_EXT = (".htm", ".html")
# Leftovers that are never documentation of the product, whatever the medium:
# the metadata directories FrontPage (and the IIS it published to) leaves in a
# documentation tree.  A medium that carries a shop window or a sample tree
# instead is handled with the per-medium exclude regex in queues/media.tsv.
DEFAULT_EXCLUDE = r"(^|/)(_vti_cnf|_vti_pvt|_derived|_private)(/|\\)"

HELP_EXT = (".hlp", ".mvb", ".mvw", ".gid", ".ivt", ".ivi")

# MS Help 2 titles on installer media (the MSDN Library DVDs) carry MSI
# file names -- FL_<title>_hxs_enu, sometimes with a merge-module GUID
# after a final dot -- while a loose title keeps its plain <title>.HxS.
HELP2_GUID_SUFFIX = re.compile(r"\.[0-9A-F]{8}(?:_[0-9A-F]+)+$", re.I)
HELP2_MANGLED = re.compile(r"^FL_(.+)_hxs(?:_[A-Za-z0-9]+)*$", re.I)


def help2_title(filename):
    """The MS Help 2 (.HxS) title of a payload file name, or None.

    The title is the book the pages land under; the companion index
    payloads (_hxi/_hxt/_hxq/_hxa) are not titles and return None.
    """
    name = os.path.basename(filename)
    stem, ext = os.path.splitext(name)
    if ext.lower() == ".hxs":
        title = stem
    else:
        match = HELP2_MANGLED.match(HELP2_GUID_SUFFIX.sub("", name))
        if not match:
            return None
        title = match.group(1)
    title = re.sub(r"[^A-Za-z0-9._-]+", "_", title).strip(".").lower()
    return title or None
# Assets, binaries, toolchains and source code: counted, never imported.  A
# medium is a carrier for its documentation; the code it ships stays where it
# is (see "What is collected" in the top-level README).
SKIP_EXT = (".gif", ".png", ".jpg", ".jpeg", ".bmp", ".ico", ".css", ".js",
            ".xml", ".dtd", ".xsl", ".hhc", ".hhk", ".cnt", ".dll", ".exe",
            ".lib", ".obj", ".pdb", ".sys", ".cab", ".msi", ".c", ".h",
            ".cpp", ".cxx", ".hpp", ".cs", ".vb", ".java", ".rc", ".def",
            ".asm", ".s", ".inc", ".mak", ".dsp", ".dsw", ".vbp", ".vcp",
            ".vcxproj", ".sln", ".py", ".sh", ".bat", ".ocx", ".tlb", ".res",
            ".map", ".pch", ".ncb", ".opt", ".plg", ".bsc", ".exp")
CHARSET_RE = re.compile(rb"charset\s*=\s*[\"']?([A-Za-z0-9_.:-]+)", re.I)
TITLE_RE = re.compile(r"<title>(.*?)</title>", re.S | re.I)


def log(message):
    print(message, flush=True)


# ---------------------------------------------------------------------------
# downloading
# ---------------------------------------------------------------------------
def open_url(url, timeout):
    request = urllib.request.Request(url, headers={"User-Agent": USER_AGENT})
    return urllib.request.urlopen(request, timeout=timeout)


def metadata(item):
    url = f"{BASE_URL}/metadata/{urllib.parse.quote(item)}"
    with open_url(url, 60) as fh:
        return json.load(fh)


def download(url, dest, attempts=3):
    log(f"[media] {url}")
    os.makedirs(os.path.dirname(dest), exist_ok=True)
    last_error = None
    for attempt in range(1, attempts + 1):
        digest = hashlib.md5()
        try:
            with open_url(url, 600) as response, \
                    open(dest + ".part", "wb") as out:
                while True:
                    chunk = response.read(1 << 20)
                    if not chunk:
                        break
                    out.write(chunk)
                    digest.update(chunk)
            os.replace(dest + ".part", dest)
            return digest.hexdigest(), os.path.getsize(dest)
        except Exception as exc:                          # noqa: BLE001
            last_error = exc
            log(f"[media] attempt {attempt}/{attempts} failed: "
                f"{type(exc).__name__}: {exc}")
            if os.path.exists(dest + ".part"):
                os.remove(dest + ".part")
            time.sleep(5 * attempt)
    raise RuntimeError(f"could not download {url}: {last_error}")


def provenance_text(item, data, rows, medium_note):
    meta = data.get("metadata", {})
    lines = [f"# {medium_note} — provenance", "",
             f"* Internet Archive item: <https://archive.org/details/{item}>",
             f"* Title: {meta.get('title', '')}",
             f"* Creator / date: {meta.get('creator', '')} / "
             f"{meta.get('date', '')}",
             f"* Collected: {_today()} by tools/import-media.py "
             "(via .github/workflows/import-media.yml)", "",
             "| File | Bytes | md5 (Internet Archive) | URL |",
             "|------|------:|------------------------|-----|"]
    for name, size, md5, url in rows:
        lines.append(f"| `{name}` | {size:,} | `{md5}` | {url} |")
    return "\n".join(lines) + "\n"


def write_scratch_provenance(out, item, data, rows):
    """The medium was not kept: record where the pages came from instead."""
    os.makedirs(out, exist_ok=True)
    rel = os.path.relpath(out, ROOT) if out.startswith(ROOT) else out
    text = provenance_text(item, data, rows, rel)
    text += (
        "\nThe medium itself is **not** kept in this repository: "
        ".github/workflows/import-media.yml\ndownloads it to a scratch "
        "directory, imports the documentation pages of the\ntree above and "
        "discards the image. Binaries, headers, samples and toolchains\nare "
        "not part of this corpus - see \"What is collected\" in the "
        "top-level\nREADME.\n")
    with open(os.path.join(out, "PROVENANCE.md"), "w", encoding="utf-8") as fh:
        fh.write(text)


def fetch_item(item, name, pattern, keep=True, list_files=False):
    data = metadata(item)
    files = [f for f in data.get("files", [])
             if f.get("source") == "original"
             and not f["name"].lower().endswith((".torrent", ".xml", ".sqlite",
                                                 ".jpg", ".jpeg", ".png"))
             and re.search(pattern, f["name"], re.I)]
    if not files:
        log(f"[media] {item}: nothing matches {pattern!r}")
        return 1
    out = (os.path.join(ROOT, "sources", name) if keep
           else os.path.join(ROOT, ".cache", "media", name))
    os.makedirs(out, exist_ok=True)
    rows = []
    for entry in files:
        url = (f"{BASE_URL}/download/{urllib.parse.quote(item)}/"
               f"{urllib.parse.quote(entry['name'])}")
        dest = os.path.join(out, entry["name"])
        if os.path.exists(dest):
            log(f"[media] {entry['name']}: already here")
        else:
            md5, size = download(url, dest)
            log(f"[media] {entry['name']}: {size:,} bytes, md5 {md5}")
        rows.append((entry["name"], os.path.getsize(dest),
                     entry.get("md5", ""), url))
    if keep:
        write_provenance(out, item, data, rows)
    else:
        # No medium in the repository: the provenance goes next to the pages.
        _SCRATCH[name] = {"rows": rows, "data": data, "item": item}
    inventory(out, name, list_files=list_files)
    return 0


def write_provenance(out, item, data, rows):
    """Provenance of a medium that stays in the repository (sources/<name>)."""
    path = os.path.join(out, "PROVENANCE.md")
    if os.path.exists(path):
        return
    text = provenance_text(item, data, rows,
                           f"sources/{os.path.basename(out)}")
    text += ("\nThe files here are the untouched medium. The documentation "
             "pages\nextracted from them are under `corpus/` (see the tree's "
             "own README\nfor what was taken).\n")
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(text)


def _today():
    import datetime as _dt
    return _dt.datetime.now(_dt.timezone.utc).strftime("%Y-%m-%d")


# ---------------------------------------------------------------------------
# inventory / extraction
# ---------------------------------------------------------------------------
def seven_zip():
    for name in ("7z", "7za", "7zr"):
        path = shutil.which(name)
        if path:
            return path
    return None


def _tool_module(name):
    """Import a tools/ module by path (``extract-chm.py`` has a hyphen)."""
    import importlib.util
    path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                        name + ".py")
    spec = importlib.util.spec_from_file_location(name.replace("-", "_"), path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


alias_index = _tool_module("alias_index")


def unpack(seven, source, dest):
    """Unpack an archive into dest; returns True when it worked."""
    os.makedirs(dest, exist_ok=True)
    result = subprocess.run([seven, "x", "-y", "-bso0", "-bsp0", source,
                             f"-o{dest}"], capture_output=True, text=True,
                            errors="replace")
    if result.returncode != 0:
        tail = (result.stderr or result.stdout or "").strip().splitlines()
        log(f"[media] 7z could not unpack {os.path.basename(source)}: "
            f"{tail[-1] if tail else 'no output'}")
        return False
    return True


UDF_IDENTIFIERS = (b"NSR02", b"NSR03")


def has_udf_filesystem(source):
    """True when the image's volume recognition sequence declares UDF.

    Both ISO 9660 and UDF images start their descriptors at sector 16
    (2048-byte sectors); each carries a 5-byte identifier (``CD001``
    for ISO 9660, ``BEA01``/``NSR02``/``NSR03``/``TEA01`` for the
    ECMA-167 sequence UDF lives in).  A UDF-mastered DVD may carry
    only a one-file ISO 9660 stub (a README telling the reader to use
    UDF), so detecting UDF matters more than reading that stub.
    """
    try:
        with open(source, "rb") as fh:
            fh.seek(16 * 2048)
            for _ in range(32):
                sector = fh.read(2048)
                if len(sector) < 2048:
                    return False
                identifier = sector[1:6]
                if identifier in UDF_IDENTIFIERS:
                    return True
                if identifier not in (b"CD001", b"BEA01", b"TEA01",
                                      b"CDW02"):
                    return False
    except OSError:
        return False
    return False


def unpack_iso(source, dest):
    """Read an ISO 9660 image with tools/iso9660.py; no external tool needed."""
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import iso9660  # noqa: E402  (local tool, same directory)
    try:
        image = iso9660.ISO9660(source)
    except Exception as exc:                                  # noqa: BLE001
        log(f"[media] {os.path.basename(source)}: not ISO 9660 ({exc})")
        return False
    entries = [e for e in image.entries if not e.is_dir]
    if not entries:
        log(f"[media] {os.path.basename(source)}: ISO 9660 tree holds no "
            f"files; leaving the image to 7z")
        return False
    for entry in entries:
        target = os.path.join(dest, *entry.path.split("/"))
        os.makedirs(os.path.dirname(target), exist_ok=True)
        with open(target, "wb") as fh:
            fh.write(image.read(entry))
    log(f"[media] {os.path.basename(source)}: ISO 9660, "
        f"{len(entries)} file(s) read with tools/iso9660.py")
    return True


def is_microsoft_cab(source):
    """True for a Microsoft cabinet (``MSCF`` signature)."""
    try:
        with open(source, "rb") as fh:
            return fh.read(4) == b"MSCF"
    except OSError:
        return False


def unpack_cab(source, dest):
    """Unpack an InstallShield cabinet with unshield (7z cannot read them)."""
    tool = shutil.which("unshield")
    if not tool:
        return False
    os.makedirs(dest, exist_ok=True)
    result = subprocess.run([tool, "x", "-d", dest, source],
                            capture_output=True, text=True,
                            errors="replace")
    if result.returncode != 0:
        tail = (result.stderr or result.stdout or "").strip().splitlines()
        log(f"[media] unshield could not unpack {os.path.basename(source)}: "
            f"{tail[-1] if tail else 'no output'}")
        return False
    return True


def walk_medium(root, seven, depth=0, unpacked=None, prefix=""):
    """Yield (path, kind, rel) for every interesting file below root.

    Archives are unpacked as they are met (depth-limited) and the files inside
    them keep the archive's name as a path prefix, so a medium that holds two
    archives does not mix their documentation trees.
    """
    unpacked = unpacked if unpacked is not None else {}
    for dirpath, dirnames, filenames in os.walk(root):
        dirnames.sort()
        for name in sorted(filenames):
            path = os.path.join(dirpath, name)
            lower = name.lower()
            rel = prefix + os.path.relpath(path, root).replace(os.sep, "/")
            if lower.endswith(ARCHIVE_EXT) and depth < 4:
                key = rel
                if key in unpacked:
                    continue
                stem = re.sub(r"\.(iso|zip|7z|rar|cab|exe|msi|img|bin|tar|gz|tgz)$",
                              "", name, flags=re.I)
                # A medium's file name becomes a directory name: keep it a
                # path segment (a conference disc is "… CD (Microsoft
                # Corporation)(1999).iso", which is not a directory name).
                stem = re.sub(r"[^A-Za-z0-9._-]+", "_", stem).strip("_")
                if len(stem) > 60:                 # cut at a word boundary
                    stem = stem[:60].rsplit("_", 1)[0].rstrip("_")
                inner_prefix = f"{prefix}{stem}/" if stem else prefix
                if seven or lower.endswith(".iso") or lower.endswith(".cab"):
                    target = os.path.join(
                        tempfile.gettempdir(), "media-unpack", f"d{depth}",
                        hashlib.md5(key.encode()).hexdigest()[:12])
                    done = os.path.isdir(target)
                    if not done and lower.endswith(".iso"):
                        if seven and has_udf_filesystem(path):
                            # UDF disc (its ISO 9660 side may be a stub):
                            # 7z reads UDF, tools/iso9660.py does not.
                            log(f"[media] {name}: UDF image, leaving "
                                f"it to 7z")
                        else:
                            done = unpack_iso(path, target)
                    if not done and lower.endswith(".cab") \
                            and not is_microsoft_cab(path):
                        # unshield reads InstallShield cabinets only;
                        # a Microsoft cabinet (MSCF) belongs to 7z.
                        done = unpack_cab(path, target)
                    if not done and seven:
                        done = unpack(seven, path, target)
                    if done:
                        unpacked[key] = target
                        yield from walk_medium(target, seven, depth + 1,
                                               unpacked, inner_prefix)
                        continue
                    # Could not look inside: count it as the asset it is.
                    yield path, "asset", rel
                    continue
                if lower.endswith(".zip"):
                    # A machine without 7z can still look inside a zip.
                    target = os.path.join(
                        tempfile.gettempdir(), "media-unpack", f"d{depth}",
                        hashlib.md5(key.encode()).hexdigest()[:12])
                    if not os.path.isdir(target):
                        os.makedirs(target, exist_ok=True)
                        try:
                            with zipfile.ZipFile(path) as archive:
                                archive.extractall(target)
                        except (zipfile.BadZipFile, OSError) as exc:
                            log(f"[media] zip {name}: {exc}")
                            continue
                    unpacked[key] = target
                    yield from walk_medium(target, seven, depth + 1, unpacked,
                                           inner_prefix)
                    continue
            if lower.endswith(PAGE_EXT + HELP_EXT + (".chm",)) \
                    or help2_title(name):
                yield path, "documentation", rel
            elif lower.endswith(SKIP_EXT):
                yield path, "asset", rel
            else:
                yield path, "other", rel


def excluder(exclude=""):
    """The compiled refuser: the tool's defaults plus the medium's patterns."""
    pattern = DEFAULT_EXCLUDE
    if exclude:
        # a medium's regex may carry its own (?i): fold it into the flags
        pattern += "|(?:" + re.sub(r"^\(\?i\)", "", exclude) + ")"
    return re.compile(pattern, re.I)


def inventory(root, label, exclude="", list_files=False):
    """Print (and return) what a medium holds, without importing anything.

    With ``list_files`` every file of the medium is named as well --
    the scouting mode for a disc whose packaging has to be understood
    (e.g. an MSI payload of MS Help 2 titles) before an import can be
    scoped to the part this corpus collects.
    """
    seven = seven_zip()
    counts = collections.Counter()
    examples = collections.defaultdict(list)
    pages = help_files = chms = 0
    for path, kind, rel in walk_medium(root, seven):
        if list_files:
            log(f"    = {rel}")
        ext = os.path.splitext(path)[1].lower() or "(none)"
        if kind == "documentation":
            if ext in PAGE_EXT:
                pages += 1
            elif ext in HELP_EXT or help2_title(os.path.basename(path)):
                help_files += 1
            elif ext == ".chm":
                chms += 1
        counts[ext] += 1
        if len(examples[ext]) < 3:
            examples[ext].append(rel)
    refused = excluder(exclude)
    log(f"[media] {label}: {sum(counts.values()):,} files "
        f"({pages:,} HTML pages, {help_files:,} WinHelp/MVB/InfoViewer/HxS,"
        f" {chms:,} CHM"
        f"{', import excludes ' + exclude if refused else ''})")
    for ext, number in counts.most_common(20):
        first = examples[ext][0][:70] if examples[ext] else ""
        log(f"    {ext:10s} {number:6,d}   e.g. {first}")
    return counts


def page_title(path):
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            head = fh.read(8000)
    except OSError:
        return ""
    match = TITLE_RE.search(head)
    return html.unescape(re.sub(r"\s+", " ", match.group(1)).strip()) \
        if match else ""


def to_utf8(body):
    match = CHARSET_RE.search(body[:2048])
    charset = match.group(1).decode("ascii", "replace").lower() if match else ""
    if charset in ("utf-8", "utf8", "us-ascii", "ascii"):
        return body
    if not charset:
        try:
            body.decode("utf-8")
            return body
        except UnicodeDecodeError:
            charset = "cp1252"
    codec = "cp1252" if charset in ("windows-1252", "cp1252", "iso-8859-1",
                                    "latin-1", "iso8859-1") else charset
    try:
        text = body.decode(codec)
    except (UnicodeDecodeError, LookupError):
        text = body.decode("cp1252", "replace")
    return text.encode("utf-8")


PLACEHOLDER = re.compile(rb"<title>\s*(Topic Not Found|Page Not Found)\s*"
                         rb"</title>", re.I)


def extract_pages(root, out, label, dry_run=False, exclude=""):
    """Copy the documentation pages of a medium into the corpus."""
    seven = seven_zip()
    refused = excluder(exclude)
    imported = skipped = excluded = 0
    for path, kind, rel in walk_medium(root, seven):
        if kind != "documentation":
            continue
        if refused.search(rel):
            excluded += 1
            log(f"    {rel}: excluded by {exclude!r}")
            continue
        ext = os.path.splitext(path)[1].lower()
        if ext in PAGE_EXT:
            with open(path, "rb") as fh:
                body = fh.read()
            if not body.strip() or PLACEHOLDER.search(body[:2048]):
                skipped += 1
                continue
            if dry_run:
                imported += 1
                continue
            body = to_utf8(body)
            target = os.path.join(out, os.path.splitext(rel)[0] + ".html")
            if alias_index.is_aliased(target):
                # an identical page of another medium is already in the
                # corpus (see data/index/aliases.tsv)
                skipped += 1
                continue
            os.makedirs(os.path.dirname(target), exist_ok=True)
            with open(target, "wb") as fh:
                fh.write(body)
            imported += 1
        elif ext == ".chm":
            components = os.path.join(out, os.path.splitext(
                os.path.basename(path))[0])
            if os.path.isdir(components) and not dry_run:
                continue
            if dry_run:
                imported += 1
                continue
            extract_chm = _tool_module("extract-chm")
            pages, _size = extract_chm.extract_chm(seven, path, components)
            imported += pages
        elif help2_title(os.path.basename(path)):
            title = help2_title(os.path.basename(path))
            components = os.path.join(out, title)
            if dry_run:
                imported += 1
                continue
            if os.path.isdir(components):
                continue
            extract_hxs = _tool_module("extract-chm")
            pages, _size = extract_hxs.extract_hxs(seven, path, components)
            imported += pages
            log(f"[media] {os.path.basename(rel)} -> {pages} pages "
                f"(HxS title {title})")
        elif ext in HELP_EXT:
            imported += extract_helpfile(path, out, rel, dry_run)
        log(f"    {os.path.basename(path)}: {kind} ({ext})")
    log(f"[media] {label}: imported {imported:,} pages "
        f"({skipped} placeholders/empties skipped"
        f"{f', {excluded} excluded by {exclude!r}' if excluded else ''})")
    return imported


def extract_helpfile(path, out, rel, dry_run=False):
    """A compiled help file: decode it into HTML pages under out/<BOOK>/.

    WinHelp/MVB goes to tools/extract-mvb.py (helpdeco + RTF; helpdeco
    itself is a third-party decompiler that is not part of this
    repository -- the workflow builds it from its pinned commit, and
    without it the file is reported and left for a run that has it).
    InfoViewer titles (.ivt/.ivi) go to tools/extract-ivt.py, this
    repository's own pure-Python decoder, so they need no toolchain.
    """
    if dry_run:
        return 1
    ext = os.path.splitext(path)[1].lower()
    tool_name, flag, tag = ("extract-ivt.py", "--ivt", "[ivt]") \
        if ext in (".ivt", ".ivi") else ("extract-mvb.py", "--mvb", "[mvb]")
    tool = os.path.join(os.path.dirname(os.path.abspath(__file__)), tool_name)
    book = re.sub(r"[^A-Za-z0-9_]+", "_",
                  os.path.splitext(os.path.basename(path))[0]).upper()
    book_dir = os.path.join(out, book)

    def book_files():
        found = set()
        for dirpath, _dirs, filenames in os.walk(book_dir):
            for name in filenames:
                found.add(os.path.join(dirpath, name))
        return found

    before = book_files()
    result = subprocess.run(
        [sys.executable, tool, flag, os.path.abspath(path),
         "--book", book, "--out", os.path.abspath(out)],
        capture_output=True, text=True, errors="replace")
    pages = 0
    for line in (result.stdout or "").splitlines():
        if line.startswith(tag) and "pages" in line:
            match = re.search(r"(\d+) pages", line)
            if match:
                pages = int(match.group(1))
    if result.returncode != 0:
        tail = (result.stderr or result.stdout or "").strip().splitlines()
        log(f"[media] {tool_name} failed on {rel}: "
            f"{tail[-1] if tail else 'no output'}")
        return pages
    # The extractor subprocess writes straight into the book directory,
    # so the alias rule the other routes honour at write time is applied
    # here on what it just wrote: a page dedupe-corpus.py collapsed must
    # not come back (its surviving copy is already in the corpus).
    held_back = 0
    for written in sorted(book_files() - before):
        if alias_index.is_aliased(written):
            os.remove(written)
            held_back += 1
            try:
                os.removedirs(os.path.dirname(written))
            except OSError:
                pass
    if held_back:
        pages -= held_back
        log(f"[media] {os.path.basename(rel)}: {held_back} page(s) held "
            f"back (already in the corpus, see data/index/aliases.tsv)")
    log(f"[media] {os.path.basename(rel)} -> {pages} pages (book {book})")
    return pages


def imported_state():
    """name -> {item, exclude, action, out, pages, date} of finished imports."""
    rows = {}
    if not os.path.exists(IMPORTED):
        return rows
    with open(IMPORTED, encoding="utf-8") as fh:
        keys = fh.readline().rstrip("\n").lstrip("# ").split("\t")
        for line in fh:
            parts = line.rstrip("\n").split("\t")
            if len(parts) != len(keys):
                continue
            row = dict(zip(keys, parts))
            rows[row.get("name", "")] = row
    return rows


def mark_imported(entry, pages, out):
    """Record a finished import so the next run does not fetch it again."""
    os.makedirs(os.path.dirname(IMPORTED), exist_ok=True)
    keys = ["name", "item", "exclude", "action", "out", "pages", "date"]
    rows = imported_state()
    rows[entry["name"]] = {
        "name": entry["name"], "item": entry["item"],
        "exclude": entry.get("exclude", ""), "action": entry["action"],
        "out": entry["out"], "pages": str(pages), "date": _today()}
    with open(IMPORTED, "w", encoding="utf-8", newline="") as fh:
        fh.write("# " + "\t".join(keys) + "\n")
        for name in sorted(rows):
            fh.write("\t".join(rows[name].get(k, "") for k in keys) + "\n")


def load_config(path):
    entries = []
    with open(path, encoding="utf-8") as fh:
        for line_no, line in enumerate(fh, 1):
            line = line.rstrip("\n")
            if not line.strip() or line.lstrip().startswith("#"):
                continue
            parts = [p.strip() for p in line.split("\t")]
            if len(parts) < 4:
                print(f"[media] {path}: line {line_no} has {len(parts)} "
                      f"fields, expected name/item/pattern/out [+action]",
                      file=sys.stderr)
                continue
            name, item, pattern, out = parts[:4]
            action = parts[4] if len(parts) > 4 else "inventory"
            exclude = parts[5] if len(parts) > 5 else ""
            if exclude:
                re.compile(exclude)                  # fail on a bad regex here
            entries.append({"name": name, "item": item, "pattern": pattern,
                            "out": out, "action": action,
                            "exclude": exclude})
    return entries


def run_config(config, only, dry_run=False, force=False):
    entries = load_config(config)
    if only:
        entries = [e for e in entries if e["name"] == only]
        if not entries:
            log(f"[media] no config entry named {only}")
            return 1
    done = imported_state()
    for entry in entries:
        scratch = entry["action"] in ("import-scratch", "inventory-scratch",
                                      "inventory-list-scratch")
        list_files = entry["action"] == "inventory-list-scratch"
        wanted = entry["action"] in ("import", "import-scratch")
        if scratch and wanted and not force:
            receipt = done.get(entry["name"])
            if receipt and receipt["item"] == entry["item"] \
                    and receipt["exclude"] == entry.get("exclude", "") \
                    and receipt["action"] == entry["action"]:
                log(f"[media] {entry['name']}: already imported on "
                    f"{receipt['date']} ({receipt['pages']} pages) - "
                    f"nothing to fetch (--force to redo)")
                continue
        source_dir = (os.path.join(ROOT, ".cache", "media", entry["name"])
                      if scratch else
                      os.path.join(ROOT, "sources", entry["name"]))
        if not os.path.isdir(source_dir) or not os.listdir(source_dir):
            log(f"[media] {entry['name']}: fetching {entry['item']}"
                f"{' (scratch: the medium is not kept)' if scratch else ''}")
            if dry_run:
                continue
            if fetch_item(entry["item"], entry["name"], entry["pattern"],
                          keep=not scratch, list_files=list_files):
                return 1
        else:
            log(f"[media] {entry['name']}: already fetched, inventory:")
            inventory(source_dir, entry["name"], entry.get("exclude", ""),
                      list_files=list_files)
        if wanted and entry["out"]:
            out = entry["out"] if os.path.isabs(entry["out"]) else os.path.join(
                ROOT, entry["out"])
            log(f"[media] {entry['name']}: importing pages into {entry['out']}")
            pages = extract_pages(source_dir, out, entry["name"], dry_run,
                                  entry.get("exclude", ""))
            if scratch and not dry_run:
                mark_imported(entry, pages, out)
            if scratch and not dry_run and entry["name"] in _SCRATCH:
                scratch_info = _SCRATCH[entry["name"]]
                write_scratch_provenance(out, scratch_info["item"],
                                         scratch_info["data"],
                                         scratch_info["rows"])
                log(f"[media] {entry['name']}: provenance written to "
                    f"{os.path.relpath(os.path.join(out, 'PROVENANCE.md'), ROOT)}")
    return 0


def main():
    ap = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--base-url", default=BASE_URL,
                    help="archive host (for tests; default archive.org)")
    ap.add_argument("--config", help="queues/media.tsv (declare media to fetch)")
    ap.add_argument("--only", help="one entry of --config")
    ap.add_argument("--item", help="Internet Archive item to download")
    ap.add_argument("--file", default=r"\.(iso|zip|7z|rar|cab|exe|msi|img|bin)$",
                    help="which files of the item to download (regex)")
    ap.add_argument("--name", help="directory under sources/ (and label)")
    ap.add_argument("--scan", help="a directory (already downloaded medium)")
    ap.add_argument("--extract", action="store_true",
                    help="import the documentation pages into --out")
    ap.add_argument("--out", help="corpus directory to import into")
    ap.add_argument("--force", action="store_true",
                    help="import even if data/reports/media-imported.tsv says "
                         "this entry is already done")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    globals()["BASE_URL"] = args.base_url.rstrip("/")

    if args.config:
        return run_config(os.path.join(ROOT, args.config), args.only,
                          args.dry_run, args.force)

    if args.item:
        if not args.name:
            ap.error("--item needs --name")
        return fetch_item(args.item, args.name, args.file)

    if args.scan:
        label = args.name or os.path.basename(args.scan.rstrip("/"))
        if args.extract:
            if not args.out:
                ap.error("--extract needs --out")
            out = args.out if os.path.isabs(args.out) else os.path.join(
                ROOT, args.out)
            return 0 if extract_pages(args.scan, out, label,
                                      args.dry_run) >= 0 else 1
        inventory(args.scan, label)
        return 0

    ap.error("give --config, --item or --scan")


if __name__ == "__main__":
    sys.exit(main())
