"""The extractor interface (versioned): one corpus page -> observations.

    EXTRACTOR_VERSION = 2   (the tools/page_parse package behind this module)

kbgen never calls tools/page_parse directly; everything goes through
parse_page() here, so the page-format readers can be replaced or improved
later by bumping EXTRACTOR_VERSION and rebuilding.  The output is plain
dicts (picklable, worker-safe): what the page *prints*, quoted, with no
cross-page judgement -- resolution lives in resolve.py, once.

Job: (page_id, book, path, title) from data/index/INDEX.tsv; the official
catalogue title map comes from load_catalogs()/init_worker().
"""

from __future__ import annotations

import hashlib
import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                os.pardir))

import page_parse  # noqa: E402

from .common import EXTRACTOR_VERSION, ROOT, layer_of  # noqa: E402,F401

CATALOGS: dict[str, str] = {}

PAPERWORK = {"README.md", "PROVENANCE.md"}


def init_worker(catalogs: dict[str, str]) -> None:
    global CATALOGS
    CATALOGS = catalogs


def load_catalogs(catalog_dir: str) -> dict[str, str]:
    """page id -> official title, from data/catalogs/*.tsv."""
    names: dict[str, str] = {}
    if not os.path.isdir(catalog_dir):
        return names
    for name in sorted(os.listdir(catalog_dir)):
        if not name.endswith(".tsv"):
            continue
        with open(os.path.join(catalog_dir, name), encoding="utf-8",
                  errors="replace") as fh:
            for line in fh:
                if line.startswith("#") or not line.strip():
                    continue
                parts = line.rstrip("\n").split("\t")
                if len(parts) >= 2 and parts[0] not in names:
                    names[parts[0]] = parts[1]
    return names


def read_index(index_path: str, only_tree: str | None = None) -> list[tuple]:
    rows = []
    with open(index_path, encoding="utf-8") as fh:
        for line in fh:
            if line.startswith("#") or not line.strip():
                continue
            parts = line.rstrip("\n").split("\t")
            if len(parts) < 4:
                continue
            page_id, book, path, title = parts[0], parts[1], parts[2], parts[3]
            if os.path.basename(path) in PAPERWORK:
                continue
            if only_tree and not path.startswith("corpus/" + only_tree):
                continue
            rows.append((page_id, book, path, title))
    rows.sort(key=lambda r: r[2])
    return rows


def _attach_name_rows(fact: dict, rows: list) -> None:
    """A name|description table documents each name in its own row."""
    if not rows:
        fact["name_rows"] = []
        return
    fact["name_rows"] = [{
        "name": row["name"], "description": row["description"],
        "table": row["table"], "row": row["row"],
    } for row in rows]
    have = {s["name"] for s in fact["subjects"]}
    for row in rows:
        kind = next((d["kind"] for d in row["declarations"] if d.get("kind")),
                    "typedef")
        if row["name"] not in have:
            fact["subjects"].append(
                {"name": row["name"], "basis": "name-row",
                 "is_primary": False, "kind": kind})
            have.add(row["name"])
        # The row's declarations declare the ROW's name, not the page's
        # primary subject; carry that explicitly so the builder never
        # attributes them to the page title's symbol.
        fact["declarations"].extend(
            dict(d, declares=row["name"]) for d in row["declarations"])
        for req in row["requirements"]:
            fact["requirements"].append(dict(req, for_name=row["name"]))


def parse_page(job: tuple) -> dict:
    """One page -> its observations.  Runs in a worker process."""
    page_id, book, path, title = job
    layer = layer_of(book)
    fact = {
        "page_id": page_id, "book": book, "path": path, "title": title,
        "layer": layer, "subjects": [], "primary_name": None,
        "kind_hint": None,
        "requirements": [], "listed_requirements": [],
        "declarations": [], "notes": [],
        "constants": [], "constant_names": [],
        "name_headers": [], "family_headers": [],
        "header_exclusions": [], "link_statements": [],
        "documented_fields": [], "documented_fields_page": None,
        "abi_offsets": [], "export_ordinals": [], "def_rules": [],
        "unicode_only": [], "unsupported_constants": [],
        "module_facts": [], "name_rows": [],
        "missing": False, "sha256": None, "size": 0,
    }
    full = os.path.join(ROOT, path) if not os.path.isabs(path) else path
    try:
        with open(full, "rb") as fh:
            raw = fh.read()
    except OSError:
        fact["missing"] = True
        return fact
    fact["sha256"] = hashlib.sha256(raw).hexdigest()
    fact["size"] = len(raw)

    if layer == "oss":
        # An open-source documentation page is evidence of what that
        # project printed about Windows CE: quoted notes, no symbols.
        fragment = page_parse.article_html(raw)
        fact["notes"] = [dict(item, kind="oss-statement")
                         for item in page_parse.oss_statements(fragment)]
        return fact

    name = os.path.basename(path)
    if name.endswith(".md"):
        text = page_parse.decode(raw)
        fields, reqs, decls, struct_fields = page_parse.markdown(text)
        title_name = page_parse.name_from_markdown_title(fields.get("title", ""))
        api = title_name or page_parse.name_from_filename(name)
        fact["kind_hint"] = page_parse.kind_from_filename(name)
        if api:
            fact["primary_name"] = api
            fact["subjects"].append({
                "name": api,
                "basis": "sdk-api-title" if title_name else "sdk-api-filename",
                "is_primary": True, "kind": fact["kind_hint"]})
        fact["requirements"] = reqs
        fact["declarations"] = decls
        fact["constants"] = (
            page_parse.syntax_constant_rows(decls)
            + page_parse.prose_constants_text(text)
            + page_parse.constant_tables_text(text)
            + page_parse.define_line_constants(text))
        fact["notes"] = [dict(note, kind="abi-note")
                         for note in page_parse.abi_notes(text)]
        fact["documented_fields"] = [f["name"] for f in struct_fields]
        fact["documented_fields_page"] = path if struct_fields else None
        _attach_name_rows(fact, page_parse.listed_type_rows_text(text))
        fact["constant_names"] = page_parse.constant_name_rows_text(text)
        fact["name_headers"] = page_parse.name_header_statements(text, plain=True)
        fact["family_headers"] = page_parse.family_header_statements(text, plain=True)
        fact["header_exclusions"] = page_parse.header_exclusion_statements(text, plain=True)
        fact["link_statements"] = page_parse.link_statements(text, plain=True)
        return fact

    fragment = page_parse.article_html(raw)
    display = None
    basis = None
    catalog_hit = CATALOGS.get(page_id)
    title_name = page_parse.name_from_title(title)
    if catalog_hit and page_parse.name_from_title(catalog_hit):
        display = page_parse.name_from_title(catalog_hit)
        basis = "catalog"
    elif title_name:
        display = title_name
        basis = "page-title"
    fact["requirements"] = page_parse.requirements(fragment)
    fact["listed_requirements"] = page_parse.listed_function_requirements(fragment)
    fact["declarations"] = page_parse.declarations(fragment, page_title=title)

    if not display:
        qualified = page_parse.interface_member_title(title)
        if qualified and any(d["role"] == "syntax" for d in fact["declarations"]):
            headings = [page_parse.text_of(m.group(0), keep_newlines=False)
                        .strip().lower()
                        for m in page_parse.HEADING.finditer(fragment)]
            if any(h in ("c/c++ syntax", "c/c++syntax") for h in headings):
                display, basis = qualified, "page-title"
    extra_subjects: list[str] = []
    if not display:
        named = [n for n in page_parse.documented_title_names(title)
                 if any(d["role"] == "syntax"
                        and page_parse.syntax_declares_name(n, d["text"])
                        for d in fact["declarations"])]
        if named:
            display, basis = named[0], "page-title"
            extra_subjects = named[1:]
    if not display and layer == "ce":
        # A .NET page is not a C name; the kind-word title is CE-only.
        kind_name = page_parse.kind_title_name(title)
        if kind_name:
            display, basis = kind_name, "page-title"

    if display:
        fact["primary_name"] = display
        fact["subjects"].append({"name": display, "basis": basis,
                                 "is_primary": True, "kind": None})
        for n in extra_subjects:
            fact["subjects"].append({"name": n, "basis": basis,
                                     "is_primary": False, "kind": None})

    if layer == "dotnet" and not fact["subjects"]:
        # Managed layer: the Learn title grammar names the documented
        # type/member, the body names its namespace and assembly.
        managed = page_parse.managed_title(title)
        if managed:
            type_path, managed_kind = managed
            ref = page_parse.managed_reference(fragment)
            namespace = ref.get("namespace")
            full = f"{namespace}.{type_path}" if namespace else type_path
            fact["primary_name"] = full
            fact["subjects"].append({
                "name": full, "basis": "learn-managed-title",
                "is_primary": True, "kind": managed_kind})
            if ref.get("version_statement"):
                fact["requirements"].append({
                    "field": "os_versions", "label": "Version Information",
                    "value": ref["version_statement"],
                    "evidence": ref.get("version_evidence", "")})

    fact["notes"] = [dict(item, kind="ce-restriction")
                     for item in page_parse.constraints(fragment)]
    fact["notes"] += [dict(note, kind="ce-note")
                      for note in page_parse.ce_notes(fragment)]
    fact["notes"] += [dict(note, kind="abi-note")
                      for note in page_parse.abi_notes(
                          page_parse.text_of(fragment, keep_newlines=False))]
    fact["abi_offsets"] = page_parse.offset_tables(fragment)
    fact["constants"] = page_parse.constant_tables(fragment)
    page_parse.attach_group_headers(fragment, fact["constants"])
    fact["name_headers"] = page_parse.name_header_statements(fragment)
    fact["family_headers"] = page_parse.family_header_statements(fragment)
    fact["header_exclusions"] = page_parse.header_exclusion_statements(fragment)
    fact["link_statements"] = page_parse.link_statements(fragment)
    fact["constants"] += page_parse.prose_constants(fragment)
    _attach_name_rows(fact, page_parse.listed_type_rows(fragment))
    fact["constant_names"] = page_parse.constant_name_rows(fragment)
    fact["constants"] += page_parse.syntax_constant_rows(fact["declarations"])
    fact["constants"] += page_parse.define_line_constants(fragment,
                                                          quote_stripped=True)
    fact["export_ordinals"] = page_parse.export_ordinal_tables(fragment)
    fact["def_rules"] = page_parse.def_rules(fragment)
    fact["unicode_only"] = (page_parse.unicode_support(fragment)
                            if layer == "ce" else [])
    fact["unsupported_constants"] = (page_parse.unsupported_constants(fragment)
                                     if layer == "ce" else [])
    if layer == "ce":
        fact["module_facts"] = page_parse.module_facts(fragment,
                                                       page_title=title)
    import collections
    kinds = collections.Counter(d["kind"] for d in fact["declarations"]
                                if d["role"] == "syntax" and d["kind"])
    if kinds and layer != "dotnet":
        # Managed kinds come from the title grammar, not from classifying
        # C# syntax quotes with the C shape rules.
        fact["kind_hint"] = kinds.most_common(1)[0][0]
    return fact
