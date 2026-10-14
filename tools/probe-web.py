#!/usr/bin/env python3
"""Probe one-off web targets from a GitHub runner, without touching the corpus.

The sandbox this corpus is maintained from cannot reach most of the web; a
runner can.  This tool fetches the URLs of `queues/probe-web.txt` and writes
a small, reviewable report (`data/probe/<name>/INDEX.md` plus the pages
themselves when they are small enough to commit) so the sources of a new
candidate can be judged from real data instead of guesses: what is on a
directory listing, what a vendor's licence text says, what the URL shape of
an archive is.

    name <TAB> url [<TAB> mode]

mode: `small` (default) fetch and commit bodies up to 512 KB; `list` fetch
only to record existence/size/hash (never commit the body); `cache` same as
`list` but write the body to `.cache/probe/<name>/` (git-ignored) so a
document can be inspected in the runner log's artifact cache; `keep` write
the body VERBATIM to `sources/bitsavers-microsoft/<basename>` (for the
media that the licence review has accepted; the INDEX.md receipt records
size and sha256 next to it); `json` fetch
a JSON document (toc feeds etc.) and commit it verbatim to
`data/probe/<name>/` when it is <= 2,048 KB, INDEX.md records the entry
count and a few sample hrefs.

Politeness matches tools/harvest.py (its Fetcher is reused): one request in
flight per host, a fixed delay, robots.txt honoured, retries on 429/5xx.
"""

import argparse
import hashlib
import html
import json
import re as _re
import signal
import os
import re
import sys
import time
import urllib.parse

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import harvest  # noqa: E402  (Fetcher, HostPacer, robots handling)

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SMALL_CAP = 512 * 1024
JSON_CAP = 2048 * 1024
TITLE = re.compile(r"<title>(.*?)</title>", re.S | re.I)
LINK = re.compile(r'''href\s*=\s*["']([^"'#]+)''', re.I)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--queue", required=True)
    ap.add_argument("--out", default="data/probe")
    ap.add_argument("--delay", type=float, default=2.0,
                    help="fixed delay per host (seconds)")
    ap.add_argument("--max-seconds", type=int, default=1500,
                    help="hard wall-clock budget for the whole probe run; "
                         "when it is spent each later row is recorded as "
                         "'budget-exhausted' instead of fetching, so the "
                         "run always terminates (a hung host must not hold "
                         "the queue for an hour)")
    ap.add_argument("--row-timeout", type=int, default=240,
                    help="hard cap seconds per row's fetch (SIGALRM); "
                         "a trickling mirror that never ends a read "
                         "otherwise burns the whole job")
    ap.add_argument("--commit-every-row", action="store_true",
                    help="git add/commit/push after each answered row, so "
                         "a hung later row does not lose the run's "
                         "progress")
    ap.add_argument("--refresh-all", action="store_true",
                    help="re-probe rows whose earlier probe already "
                         "succeeded (default: skip them -- a probe answer "
                         "is recorded once, delete data/probe/<name>/ to "
                         "re-ask a question)")
    args = ap.parse_args()

    rows = []
    with open(os.path.join(ROOT, args.queue), encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = [p.strip() for p in line.split("\t")]
            if len(parts) < 2 or not parts[1].startswith("http"):
                continue
            rows.append((parts[0], parts[1],
                         parts[2] if len(parts) > 2 else "small"))

    fetcher = harvest.Fetcher(harvest.HostPacer(), respect_robots=True)
    out_root = os.path.join(ROOT, args.out)
    started = time.monotonic()
    def _budget_dead():
        return time.monotonic() - started >= args.max_seconds

    class _RowTimeout(BaseException):
        pass  # must escape fetcher.get's 'except Exception' retry loop

    def _row_alarm(signum, frame):
        raise _RowTimeout()

    import subprocess as _sp

    def _commit_row(name):
        if not args.commit_every_row:
            return
        try:
            _sp.run(["git", "add", args.out, "sources/bitsavers-microsoft"],
                    cwd=ROOT, check=True, capture_output=True)
            _sp.run(["git", "diff", "--staged", "--quiet"],
                    cwd=ROOT, check=False, capture_output=True)
            r = _sp.run(["git", "diff", "--staged", "--name-only"],
                        cwd=ROOT, check=True, capture_output=True, text=True)
            if not r.stdout.strip():
                return
            _sp.run(["git", "commit", "-q", "-m",
                     f"probe: {name}", "--",
                     os.path.join(args.out, name),
                     "sources/bitsavers-microsoft"],
                    cwd=ROOT, check=True, capture_output=True)
            _sp.run(["git", "pull", "--rebase"], cwd=ROOT, check=True,
                    capture_output=True)
            _sp.run(["git", "push"], cwd=ROOT, check=True,
                    capture_output=True)
        except _sp.CalledProcessError as e:
            print(f"[probe] row-commit failed for {name}: "
                  f"{e.stderr.decode(errors='replace')[:200]}", flush=True)
    summary = []
    for ordinal, (name, url, mode) in enumerate(rows, 1):
        target_dir = os.path.join(out_root, name)
        index_md = os.path.join(target_dir, "INDEX.md")
        if (not args.refresh_all and os.path.exists(index_md)
                and "- status: 200" in open(index_md,
                                            encoding="utf-8").read()):
            print(f"[probe] {name}: skipped (already probed, "
                  "delete data/probe/%s to re-ask)" % name, flush=True)
            continue
        os.makedirs(target_dir, exist_ok=True)
        stamp = time.strftime("%Y-%m-%d %H:%M:%S UTC", time.gmtime())
        base_head = [f"# probe: {name}", "", f"- url: {url}", f"- mode: {mode}",
                     f"- fetched: {stamp}"]
        if _budget_dead():
            head = base_head + ["- status: budget-exhausted", "",
                                "**skipped: wall-clock budget spent by earlier "
                                "rows** (host did not answer; "
                                "probe is re-runnable -- idempotency skips "
                                "answered rows)", ""]
            with open(os.path.join(target_dir, "INDEX.md"), "w",
                      encoding="utf-8") as fh:
                fh.write("\n".join(head))
            summary.append(f"{name}\tbudget-exhausted\t0")
            print(f"[probe] {name}: budget-exhausted (row recorded as "
                  "skipped)", flush=True)
            continue
        signal.signal(signal.SIGALRM, _row_alarm)
        signal.alarm(args.row_timeout)
        try:
            body, status = fetcher.get(url, args.delay)
        except _RowTimeout:
            body, status = None, f"fetch-aborted(>{args.row_timeout}s)"
        finally:
            signal.alarm(0)
        head = base_head + [f"- status: {status}"]
        if body is None:
            head += ["", "**fetch failed** (see status)", ""]
        else:
            p = urllib.parse.urlparse(url)
            sha = hashlib.sha256(body).hexdigest()
            ctype = ""
            title = ""
            is_html = body[:2048].lower().find(b"<html") >= 0 or \
                body[:512].lower().find(b"<!doctype html") >= 0
            text = body.decode("utf-8", "replace")
            m = TITLE.search(text)
            title = re.sub(r"\s+", " ", m.group(1)).strip() if m else ""
            head += [f"- bytes: {len(body):,}", f"- sha256: {sha}"]
            if title:
                head.append(f"- title: {title}")
            stored = False
            if mode == "small" and len(body) <= SMALL_CAP:
                ext = ".html" if is_html else os.path.splitext(p.path)[1] or \
                    ".bin"
                fname = f"{ordinal:02d}-{os.path.basename(p.path) or 'index'}"
                with open(os.path.join(target_dir, fname), "wb") as fh:
                    fh.write(body)
                head.append(f"- stored: {args.out}/{name}/{fname}")
                stored = True
            elif mode == "cache":
                cache_dir = os.path.join(ROOT, ".cache", "probe", name)
                os.makedirs(cache_dir, exist_ok=True)
                fname = os.path.basename(p.path) or "index.html"
                with open(os.path.join(cache_dir, fname), "wb") as fh:
                    fh.write(body)
                head.append(f"- cached (not committed): .cache/probe/"
                            f"{name}/{fname}")
            elif mode == "keep":
                keep_dir = os.path.join(ROOT, "sources",
                                        "bitsavers-microsoft")
                os.makedirs(keep_dir, exist_ok=True)
                fname = os.path.basename(p.path) or "index.bin"
                dest = os.path.join(keep_dir, fname)
                if os.path.exists(dest):
                    head.append(f"- kept already: sources/"
                                f"bitsavers-microsoft/{fname}")
                else:
                    with open(dest, "wb") as fh:
                        fh.write(body)
                    head.append(f"- kept: sources/bitsavers-microsoft/{fname}")
            elif mode == "json":
                try:
                    parsed = json.loads(text)
                    entries = (f"top-level entries: {len(parsed)}"
                               if isinstance(parsed, (list, dict)) else
                               f"scalar: {type(parsed).__name__}")
                except (ValueError, TypeError):
                    parsed = None
                    entries = "not valid JSON"
                hrefs = sorted(set(re.findall(
                    r'"href"\s*:\s*"([^"]+)"', text)))
                head += [f"- {entries}",
                         f"- href-like values: {len(hrefs)}"]
                head += [f"    {h}" for h in hrefs[:8]]
                if len(body) <= JSON_CAP:
                    fname = (os.path.basename(p.path) or "index.json")
                    with open(os.path.join(target_dir, fname), "wb") as fh:
                        fh.write(body)
                    head.append(f"- stored: {args.out}/{name}/{fname}")
                else:
                    head.append(f"- over {JSON_CAP:,} bytes, body not "
                                f"stored (summary above)")
            else:
                head.append("- body not stored (mode or size)")
            if is_html:
                links = []
                for lm in LINK.finditer(text):
                    target = urllib.parse.urljoin(url,
                                                  html.unescape(lm.group(1)))
                    tp = urllib.parse.urlparse(target)
                    if tp.netloc == p.netloc and target not in links:
                        links.append(tp.path)
                    if len(links) >= 300:
                        break
                head += ["", f"## same-host links seen ({len(links)}, "
                         f"capped at 300)", ""]
                head += [f"- {link}" for link in links]
        head.append("")
        with open(os.path.join(target_dir, "INDEX.md"), "w",
                  encoding="utf-8") as fh:
            fh.write("\n".join(head))
        _commit_row(name)
        summary.append(f"{name}\t{status}\t"
                       f"{len(body) if body else 0}")
        print(f"[probe] {name}: {status} "
              f"{len(body) if body else 0:,} bytes", flush=True)

    print("[probe] " + "; ".join(summary))
    return 0


if __name__ == "__main__":
    sys.exit(main())
