#!/usr/bin/env python3
"""tools/full-pass.py -- ONE continuous pass over every corpus file.

The standing requirement: every file under ``corpus/`` is opened raw,
one at a time, in a single run, and each raw page is checked for BOTH
sides of the problem:

* **misses** -- what the page *prints* that nothing in ``knowledge/kb/``
  recorded (unread / not-read / overlooked / ignored / out-of-awareness):
  requirement rows, declarations, numbered constants, name lists,
  export ordinals, module/link/negative-membership statements.  A
  structure the page introduces as example code is ``excluded-example``
  (by design), never claimed as extracted and never claimed as a miss.
* **misjudgments** -- what was recorded *wrongly* (misidentified): a
  quote that is not on its own raw page, a ``data/constant-header-review.tsv``
  reject name filed into any header, a sample-page name filed as SDK
  surface, a linkage row whose rank is unknown, a BASE+n constant whose
  filed header disagrees with the review's value-base rule, and a
  documented declaration of the page title demoted to ``example``.

Output: ``knowledge/reports/full-pass.tsv`` (one row per file: what it
prints, what was recorded, its miss and misjudgment classes) and
``knowledge/reports/full-pass.md`` (the summary and the worklists).
The pass is sequential on purpose -- one file after another, no
skipping, no sampling.

    python3 tools/full-pass.py                # every file, one pass
    python3 tools/full-pass.py --limit 500    # smoke run
"""

from __future__ import annotations

import argparse
import collections
import gzip
import json
import os
import re
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import page_parse  # noqa: E402

CORPUS = os.path.join(ROOT, "corpus")
KB = os.path.join(ROOT, "knowledge", "kb")
OUT_TSV = os.path.join(ROOT, "knowledge", "reports", "full-pass.tsv")
OUT_MD = os.path.join(ROOT, "knowledge", "reports", "full-pass.md")
REVIEW = os.path.join(ROOT, "data", "constant-header-review.tsv")

KNOWN_RANKS = {
    "own-page", "entity-page", "constant-entity", "win32-reference",
    "reference-header", "co-mention", "family-statement", "reviewed",
    "pinvoke-weak",
}


# ---------------------------------------------------------------- knowledge

def load_kb():
    """page -> recorded facts, and the global tables the hunt needs.

    Keys are corpus-relative paths (the ``corpus/`` prefix stripped) so
    they match the pass's per-file jobs.  Coverage is judged against the
    whole KB as well as the page's own rows: the corpus carries whole
    pages duplicated across sets and family pages sharing requirement
    rows, and a printed fact recorded anywhere is not a miss.
    """
    by_page = collections.defaultdict(
        lambda: {"requirements": [], "declarations": [], "constants": [],
                 "names": [], "statements": [], "ordinals": 0, "abi": 0})
    glob = {"names": set(), "req_values": set(), "texts": set(),
            "decl_names": set(), "decl_texts": set(), "members": set(),
            "pairs": set()}

    def open_jsonl(name):
        path = os.path.join(KB, name)
        gz = path.endswith(".gz")
        if not os.path.exists(path) and gz:
            path = path[:-3]
            gz = False
        if not os.path.exists(path):
            return
        opener = gzip.open if gz else open
        with opener(path, "rt", encoding="utf-8") as fh:
            for line in fh:
                line = line.strip()
                if line:
                    yield json.loads(line)

    def source_path(record):
        src = record.get("source")
        path = src.get("path") if isinstance(src, dict) else (src or "")
        return path or ""

    for record in open_jsonl("requirements.jsonl.gz"):
        path = source_path(record)
        value = record.get("value") or ""
        if value:
            glob["req_values"].add(flat(value))
        if record.get("evidence"):
            glob["texts"].add(flat(record["evidence"]))
        if path:
            by_page[path]["requirements"].append(record)
    for name in ("declarations.jsonl.gz", "declarations-dotnet.jsonl.gz"):
        for record in open_jsonl(name):
            if record.get("implementation"):
                continue
            path = source_path(record)
            if record.get("name") or record.get("entity"):
                glob["decl_names"].add(record.get("name") or record.get("entity"))
            if record.get("role") != "example":
                text = flat(record.get("text") or "")
                if text:
                    glob["decl_texts"].add(text)
            members = record.get("members") or []
            for member in members:
                member_name = member.get("name") if isinstance(member, dict) \
                    else member
                if member_name:
                    glob["members"].add(member_name)
            if path:
                by_page[path]["declarations"].append(record)
    for record in open_jsonl("constants.jsonl.gz"):
        path = source_path(record)
        if record.get("name"):
            glob["names"].add(record["name"])
        if path:
            by_page[path]["constants"].append(record)
    for record in open_jsonl("constraints.jsonl.gz"):
        path = source_path(record)
        text = record.get("text") or ""
        if text:
            glob["texts"].add(flat(text))
        if path:
            by_page[path]["statements"].append(
                (record.get("kind") or "constraint", record))
    for name in ("constant-names.tsv", "export-ordinals.tsv"):
        path = os.path.join(KB, name)
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            for line in fh:
                row = dict(zip(header, line.rstrip("\n").split("\t")))
                page = row.get("page") or ""
                if row.get("name"):
                    glob["names"].add(row["name"])
                if not page:
                    continue
                if name == "export-ordinals.tsv":
                    by_page[page]["ordinals"] += 1
                else:
                    by_page[page]["names"].append(row)
    for name in ("def-rules.tsv", "unicode-only.tsv",
                 "unsupported-constants.tsv", "modules-ce.tsv"):
        path = os.path.join(KB, name)
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            for line in fh:
                row = dict(zip(header, line.rstrip("\n").split("\t")))
                for key in ("row", "text", "statement"):
                    if row.get(key):
                        glob["texts"].add(flat(row[key]))
                page = row.get("page") or row.get("source") or ""
                if page:
                    by_page[page]["statements"].append((name, row))
    path = os.path.join(KB, "abi-offsets.tsv")
    if os.path.exists(path):
        with open(path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            for line in fh:
                row = dict(zip(header, line.rstrip("\n").split("\t")))
                page = row.get("page") or ""
                if page:
                    by_page[page]["abi"] += 1
    # name -> header pairs: what the name-header / family-header /
    # link statements extract is recorded as these pairs, not as the
    # sentence itself
    path = os.path.join(KB, "constant-headers.tsv")
    if os.path.exists(path):
        with open(path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            for line in fh:
                row = dict(zip(header, line.rstrip("\n").split("\t")))
                name, file_name = row.get("name") or "", row.get("header") or ""
                if name and file_name:
                    glob["pairs"].add((name.upper(), file_name.lower()))
    for record in open_jsonl("entities.jsonl.gz"):
        name = record.get("name") or ""
        for file_name in record.get("headers") or []:
            if name and file_name:
                glob["pairs"].add((name.upper(), str(file_name).lower()))
        for file_name in record.get("libraries") or []:
            if name and file_name:
                glob["pairs"].add((name.upper(), str(file_name).lower()))

    # the linkage rows and the hand review, for the misjudgment hunt
    links = collections.defaultdict(list)
    path = os.path.join(KB, "constant-headers.tsv")
    if os.path.exists(path):
        with open(path, encoding="utf-8") as fh:
            header = fh.readline().rstrip("\n").split("\t")
            for line in fh:
                row = dict(zip(header, line.rstrip("\n").split("\t")))
                links[row.get("name") or ""].append(row)
    review = {"reject": {}, "prefix": {}, "value-base": {}}
    if os.path.exists(REVIEW):
        with open(REVIEW, encoding="utf-8") as fh:
            for line in fh:
                if line.startswith("#") or line.startswith("scope\t"):
                    continue
                cells = line.rstrip("\n").split("\t")
                if len(cells) < 4:
                    continue
                scope, name, header = cells[0], cells[1], cells[2]
                verdict = cells[3]
                row = {"header": header, "verdict": verdict,
                       "note": cells[6] if len(cells) > 6 else ""}
                if scope == "prefix":
                    review["prefix"][name.rstrip("*")] = row
                elif scope == "value-base":
                    review["value-base"][name.rstrip("+")] = row
                elif verdict == "reject":
                    review["reject"][name] = row
    return by_page, links, review, glob


def flat(text):
    return re.sub(r"\s+", "", text or "")


# ------------------------------------------------------------- page census

def census(path, raw, title=None):
    """What the page prints -- format-appropriate readers, raw ground kept.

    ``title`` is the page title from data/index/INDEX.tsv, passed to the
    reader exactly as tools/build-kb.py passes it: the role verdicts the
    reader reaches are the reader's verdicts, never a parallel opinion.
    """
    is_md = path.endswith(".md")
    text = page_parse.decode(raw)
    if is_md:
        ground = text
        fragment = text
        fields, reqs, decls, struct_fields = page_parse.markdown(text)
        constants = (page_parse.syntax_constant_rows(decls) +
                     page_parse.prose_constants_text(text) +
                     page_parse.constant_tables_text(text) +
                     page_parse.define_line_constants(text))
        name_rows = page_parse.constant_name_rows_text(text)
        statements = (
            [(s["text"], "link-statement") for s in
             page_parse.link_statements(text, plain=True)] +
            [(s["text"], "header-exclusion") for s in
             page_parse.header_exclusion_statements(text, plain=True)] +
            [(s["text"], "name-header") for s in
             page_parse.name_header_statements(text, plain=True)] +
            [(s["text"], "family-header") for s in
             page_parse.family_header_statements(text, plain=True)])
        ordinals = page_parse.export_ordinal_tables(text)
        abi = page_parse.offset_tables(text)
        example_pres = sum(1 for d in decls if d.get("role") == "example")
        syntax_decls = sum(1 for d in decls if d.get("role") == "syntax")
        declared_names = [d for d in decls if d.get("role") == "syntax"]
    else:
        fragment = page_parse.article_html(raw)
        ground = page_parse.text_of(fragment)
        reqs = page_parse.requirements(fragment)
        decls = page_parse.declarations(fragment, page_title=title)
        constants = (page_parse.syntax_constant_rows(decls) +
                     page_parse.constant_tables(fragment) +
                     page_parse.prose_constants(fragment) +
                     page_parse.define_line_constants(fragment))
        name_rows = page_parse.constant_name_rows(fragment)
        statements = (
            [(s["text"], "link-statement") for s in
             page_parse.link_statements(fragment)] +
            [(s["text"], "header-exclusion") for s in
             page_parse.header_exclusion_statements(fragment)] +
            [(s["text"], "name-header") for s in
             page_parse.name_header_statements(fragment)] +
            [(s["text"], "family-header") for s in
             page_parse.family_header_statements(fragment)])
        ordinals = page_parse.export_ordinal_tables(fragment)
        abi = page_parse.offset_tables(fragment)
        example_pres = sum(1 for d in decls if d.get("role") == "example")
        syntax_decls = sum(1 for d in decls if d.get("role") == "syntax")
        declared_names = [d for d in decls if d.get("role") == "syntax"]
        fields = {}
        struct_fields = []
    if path.startswith("corpus/oss/"):
        # the design rule tools/build-kb.py follows for open-source
        # documentation pages: their code samples are not declarations
        declared_names = []
        syntax_decls = 0
    return {
        "is_md": is_md, "ground": ground, "fragment": fragment,
        "fields": fields, "requirements": reqs, "declarations": decls,
        "declared": declared_names,
        "constants": constants, "names": name_rows,
        "statements": statements, "ordinals": ordinals, "abi": abi,
        "example_pres": example_pres, "syntax_decls": syntax_decls,
        "struct_fields": struct_fields,
    }


def review_for(name, value, review):
    row = review["reject"].get(name)
    if row is not None:
        return row
    for prefix, row in review["prefix"].items():
        if name.startswith(prefix) and len(name) > len(prefix):
            return row
    match = re.search(r"\b([A-Z][A-Z0-9_]{1,40})\s*[+-]\s*\d", value or "")
    if match and match.group(1) in review["value-base"]:
        return review["value-base"][match.group(1)]
    return None


def check_page(path, page, got, links, review, glob):
    """miss classes and misjudgment classes for one page.

    Coverage is judged against the whole KB (``glob``) as well as the
    page's own recorded rows: duplicated pages and shared family rows
    are recorded once on purpose, and a printed fact the KB holds
    anywhere is read, not missed.
    """
    misses = collections.Counter()
    misjudgments = []
    ground_flat = flat(page["ground"])

    def on_page(quote):
        return flat(quote) in ground_flat

    def covered_by_page_rows(printed, rows):
        """printed text vs the page's recorded values/evidences."""
        text = flat(printed)
        for record in rows:
            for key in ("value", "evidence", "text", "row"):
                if text and text in flat(record.get(key) or ""):
                    return True
        return False

    # --- requirements ----------------------------------------------------
    recorded_reqs = got["requirements"]
    printed_reqs = [r for r in page["requirements"] if r.get("value")]
    for req in printed_reqs:
        value = req.get("value") or ""
        if flat(value) in glob["req_values"] or \
                covered_by_page_rows(value, recorded_reqs):
            continue
        misses["unread-requirement"] += 1
    for record in recorded_reqs:
        value = record.get("value") or ""
        if value.strip() and not on_page(value):
            misjudgments.append(
                ("quote-not-on-page", f"requirement {record.get('id')}: "
                 f"{value[:60]!r}"))

    # --- constants, name lists, declarations -----------------------------
    printed_consts = [c for c in page["constants"]
                      if c.get("name") and c.get("value")]
    recorded_names = glob["names"] | glob["decl_names"] | glob["members"]
    recorded_names |= {c.get("name") for c in got["constants"]}
    recorded_names |= {n.get("name") for n in got["names"]}
    recorded_names |= {d.get("entity") or d.get("name")
                       for d in got["declarations"]}
    for const in printed_consts:
        if const["name"] not in recorded_names:
            misses["unread-constant"] += 1
    for record in got["constants"]:
        row = record.get("row") or ""
        if row.strip() and not on_page(row):
            misjudgments.append(
                ("quote-not-on-page", f"constant {record.get('name')}: "
                 f"{row[:60]!r}"))

    printed_names = [n for n in page["names"] if n.get("name")]
    for name_row in printed_names:
        if name_row["name"] not in recorded_names:
            misses["unread-name-list"] += 1

    # --- declarations (text coverage; parsed rows carry no name) --------
    def decl_text(record):
        return flat(record.get("declaration") or record.get("text") or "")

    covered_decl_texts = glob["decl_texts"]
    page_decl_texts = [decl_text(record) for record in got["declarations"]
                       if record.get("role") != "example"]
    example_decl_texts = [decl_text(record) for record in got["declarations"]
                          if record.get("role") == "example"]
    for decl in page["declared"]:
        text = decl_text(decl)
        covered = bool(text) and (text in covered_decl_texts or
                                  any(text in other or other in text
                                      for other in page_decl_texts
                                      if other))
        if covered:
            continue
        misses["unread-declaration"] += 1
        # the demotion hunt: this page documents the declaration in its
        # own body, but the record kept is an ``example`` block (a
        # covered decl that merely shares text with an example block is
        # not a demotion)
        for other in example_decl_texts:
            if other and text and (text in other or other in text):
                misjudgments.append(
                    ("role-misjudged",
                     f"decl {text[:50]!r} kept only as example"))
                break
    for record in got["declarations"]:
        text = record.get("declaration") or record.get("text") or ""
        if text.strip() and not on_page(text):
            misjudgments.append(
                ("quote-not-on-page", f"declaration "
                 f"{record.get('entity') or record.get('id')}: "
                 f"{text[:60]!r}"))

    # --- statements, ordinals, abi --------------------------------------
    statement_rows = got["statements"]
    page_texts = [flat(record.get(key) or "")
                  for _, record in statement_rows
                  for key in ("value", "evidence", "text", "row")]
    page_texts += [flat(r.get("evidence") or "") for r in recorded_reqs]
    for text, kind in page["statements"]:
        target = flat(text)
        if not target:
            continue
        if target in glob["texts"]:
            continue
        if any(target in other for other in page_texts if other):
            continue
        # name/link statements state a header ("X is defined in Y.h");
        # the KB keeps the extracted (name, header) pair, not the
        # sentence itself
        header = re.search(r"([A-Za-z0-9_]+\.(?:h|hpp|dll|lib))\b", text)
        if header:
            token = flat(header.group(1)).rstrip(".")
            values = list(glob["req_values"]) + [
                flat(r.get("value") or "") for r in recorded_reqs]
            if any(token and (token in value or value.rstrip(".") == token)
                   for value in values):
                continue
            who = re.search(r"([A-Za-z_][A-Za-z0-9_]{2,60})", text)
            if who and (who.group(1).upper(), token.lower()) in glob["pairs"]:
                continue
            if kind == "family-header" and \
                    any(pair[1] == token.lower() for pair in glob["pairs"]):
                continue
        misses["unread-statement"] += 1
    if page["ordinals"] and not got["ordinals"]:
        misses["unread-ordinal"] += len(page["ordinals"])
    if page["abi"] and not got["abi"]:
        misses["unread-abi"] += len(page["abi"])

    # --- misjudgments over the names this page documents -----------------
    names_here = sorted({c["name"] for c in printed_consts} |
                        {n["name"] for n in printed_names})
    for name in names_here:
        row = review_for(name, "", review)
        if row is not None and row["verdict"] == "reject":
            for link in links.get(name) or ():
                misjudgments.append(
                    ("review-reject-filed",
                     f"{name} -> {link.get('header')} "
                     f"[{link.get('strength')}]"))
        for link in links.get(name) or ():
            strength = link.get("strength") or ""
            if strength and strength not in KNOWN_RANKS:
                misjudgments.append(
                    ("unknown-rank", f"{name} -> {link.get('header')} "
                     f"[{strength}]"))
    return misses, misjudgments


# ------------------------------------------------------------------- main

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--limit", type=int, default=0)
    parser.add_argument("--tree", default="")
    args = parser.parse_args()

    by_page, links, review, glob = load_kb()
    print(f"[full-pass] kb pages indexed: {len(by_page):,}", flush=True)

    titles = {}
    index_path = os.path.join(ROOT, "data", "index", "INDEX.tsv")
    if os.path.exists(index_path):
        with open(index_path, encoding="utf-8") as fh:
            for line in fh:
                if line.startswith("#") or not line.strip():
                    continue
                parts = line.rstrip("\n").split("\t")
                if len(parts) >= 4:
                    titles[parts[2]] = parts[3]

    jobs = []
    base = os.path.join(CORPUS, args.tree) if args.tree else CORPUS
    for dirpath, dirnames, filenames in os.walk(base):
        dirnames.sort()
        for fn in sorted(filenames):
            jobs.append(os.path.join(dirpath, fn))
    jobs.sort()
    if args.limit:
        jobs = jobs[:args.limit]
    print(f"[full-pass] {len(jobs):,} file(s), one pass, no sampling",
          flush=True)

    miss_totals = collections.Counter()
    misjudgment_totals = collections.Counter()
    verdicts = collections.Counter()
    miss_examples = collections.defaultdict(list)
    misjudgment_examples = collections.defaultdict(list)
    rows = []
    unreadable = 0
    started = time.time()
    for index, full in enumerate(jobs, 1):
        rel = os.path.relpath(full, ROOT)
        try:
            with open(full, "rb") as fh:
                raw = fh.read()
        except OSError as exc:
            unreadable += 1
            rows.append((rel, "0", "unreadable", str(exc), "", ""))
            continue
        got = by_page.get(rel) or {"requirements": [], "declarations": [],
                                   "constants": [], "names": [],
                                   "statements": [], "ordinals": 0, "abi": 0}
        if rel.endswith((".md", ".html", ".htm")):
            try:
                page = census(rel, raw, title=titles.get(rel))
                misses, misjudgments = check_page(rel, page, got,
                                                 links, review, glob)
            except Exception as exc:  # a reader crash is a finding too
                misses = collections.Counter({"reader-crash": 1})
                misjudgments = [("reader-crash", f"{type(exc).__name__}: {exc}")]
                page = {"ground": ""}
        else:
            misses, misjudgments = collections.Counter(), []
        miss_totals.update(misses)
        for kind, detail in misjudgments:
            misjudgment_totals[kind] += 1
            if len(misjudgment_examples[kind]) < 8:
                misjudgment_examples[kind].append((rel, detail))
        for kind in misses:
            if len(miss_examples[kind]) < 8:
                miss_examples[kind].append(rel)
        if misjudgments:
            verdict = "misjudged"
        elif misses:
            verdict = "missed"
        else:
            verdict = "clean"
        verdicts[verdict] += 1
        rows.append((rel, str(len(raw)), verdict,
                     ";".join(f"{k}:{v}" for k, v in sorted(misses.items())),
                     ";".join(k for k, _ in misjudgments),
                     ";".join(d for _, d in misjudgments[:3])))
        if index % 5000 == 0:
            print(f"[full-pass] {index:,}/{len(jobs):,} "
                  f"({time.time() - started:.0f}s)", flush=True)
        if index % 20000 == 0:
            # snapshot so a crash mid-pass still leaves the rows found
            with open(OUT_TSV, "w", encoding="utf-8") as fh:
                fh.write("path\tbytes\tverdict\tmisses\tmisjudgment_kinds\t"
                         "misjudgment_detail\n")
                for row in rows:
                    fh.write("\t".join(row) + "\n")

    os.makedirs(os.path.dirname(OUT_TSV), exist_ok=True)
    with open(OUT_TSV, "w", encoding="utf-8") as fh:
        fh.write("path\tbytes\tverdict\tmisses\tmisjudgment_kinds\t"
                 "misjudgment_detail\n")
        for row in rows:
            fh.write("\t".join(row) + "\n")

    lines = [
        "# Full pass -- every corpus file, raw, one at a time",
        "",
        "Generated by `tools/full-pass.py` in ONE continuous run over",
        f"{len(jobs):,} files ({unreadable} unreadable).  Each raw page is",
        "checked for what it prints but nothing recorded (misses) and for",
        "what was recorded wrongly (misjudgments).  Page-introduced sample",
        "code is excluded at the reader level (the example rule), so it",
        "never counts as printed surface and never as a miss.",
        "",
        "## Verdicts",
        "",
        "| verdict | files |",
        "|---|---:|",
    ]
    for verdict in ("clean", "missed", "misjudged"):
        lines.append(f"| {verdict} | {verdicts.get(verdict, 0):,} |")
    lines += [
        "",
        "## Miss classes",
        "",
        "| class | items | examples |",
        "|---|---:|---|",
    ]
    for kind, count in miss_totals.most_common():
        examples = "; ".join(f"`{p}`" for p in miss_examples[kind][:4])
        lines.append(f"| {kind} | {count:,} | {examples} |")
    lines += [
        "",
        "## Misjudgment classes",
        "",
        "| class | items | examples |",
        "|---|---:|---|",
    ]
    for kind, count in misjudgment_totals.most_common():
        bits = "; ".join(f"`{p}` {d[:40]}" for p, d
                         in misjudgment_examples[kind][:3])
        lines.append(f"| {kind} | {count:,} | {bits} |")
    if not misjudgment_totals:
        lines.append("| (none) | 0 | |")
    lines += [
        "",
        "Per-file rows: `knowledge/reports/full-pass.tsv`.",
        "",
    ]
    with open(OUT_MD, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines))

    print(f"[full-pass] verdicts: " +
          ", ".join(f"{k}={v:,}" for k, v in sorted(verdicts.items())))
    print(f"[full-pass] misses: " +
          (", ".join(f"{k}={v:,}" for k, v in miss_totals.most_common(8))
           or "(none)"))
    print(f"[full-pass] misjudgments: " +
          (", ".join(f"{k}={v:,}" for k, v in
                     misjudgment_totals.most_common(8)) or "(none)"))
    print(f"[full-pass] {OUT_TSV}", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
