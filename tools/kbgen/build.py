"""Build kb/kb.sqlite3 from the corpus (the KB Gen layer's only writer).

Deterministic: the same inputs (corpus pages, catalogs, licence registry,
shared-surface map, reviews, reference tarballs, schema, this code and
the extractor) always produce the same database bytes -- pages are
ingested in path order, every id is a content hash, and the manifest
records the input hashes and per-table content hashes so drift and
hand-edits are detectable (`tools.kbgen check`).
"""

from __future__ import annotations

import collections
import concurrent.futures
import hashlib
import json
import os
import re
import sqlite3
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                os.pardir))

import license_scopes  # noqa: E402
import page_parse  # noqa: E402

from . import extract, references, resolve  # noqa: E402
from .common import (BUILDER_VERSION, CATALOG_DIR, CE_VERSIONS,
                     EXTRACTOR_VERSION, INDEX_PATH, KB_DIR, LICENSE_REGISTRY,
                     SCHEMA_PATH, SCHEMA_VERSION, SHARED_MAP_PATH,
                     doc_set_version, file_tokens, header_tokens,
                     normalize_value, obs_id, parent_and_local,
                     parse_constant_value, sha256_text, symbol_key, tree_of,
                     ws_norm)
from .reviews import load_reviews

_IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


def _file_sha256(path: str) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


class Builder:
    def __init__(self, conn: sqlite3.Connection, licenses) -> None:
        self.conn = conn
        self.licenses = licenses
        self._symbol_seen: set[str] = set()
        self.missing: list[str] = []
        self.rejects: dict[tuple[str, str], dict] = {}

    # ------------------------------------------------------------- symbols
    def register_symbol(self, display: str | None, page_path: str,
                        basis: str) -> str | None:
        key = symbol_key(display)
        if not key or not display:
            return None
        if key not in self._symbol_seen:
            parent_display, local = parent_and_local(display)
            parent_key = None
            if parent_display:
                parent_key = self.register_symbol(parent_display, page_path,
                                                  basis)
            self.conn.execute(
                "INSERT OR IGNORE INTO symbols(symbol_key, display_name,"
                " parent_key, local_name) VALUES (?,?,?,?)",
                (key, display, parent_key, local))
            self._symbol_seen.add(key)
        self.conn.execute(
            "INSERT OR IGNORE INTO symbol_spellings(symbol_key, spelling,"
            " page_path, basis) VALUES (?,?,?,?)",
            (key, display, page_path, basis))
        return key

    def add_kind(self, key: str | None, kind: str | None, basis: str) -> None:
        if key and kind:
            self.conn.execute(
                "INSERT OR IGNORE INTO symbol_kinds(symbol_key, kind, basis)"
                " VALUES (?,?,?)", (key, kind, basis))

    def blob(self, text: str) -> str:
        sha = sha256_text(text)
        self.conn.execute(
            "INSERT OR IGNORE INTO text_blobs(sha256, text) VALUES (?,?)",
            (sha, text))
        return sha

    def register_obs(self, oid: str, kind: str, page_path: str) -> bool:
        cur = self.conn.execute(
            "INSERT OR IGNORE INTO observation_index(obs_id, obs_kind, page_path)"
            " VALUES (?,?,?)", (oid, kind, page_path))
        return cur.rowcount > 0

    def register_header(self, hkey: str, spelling: str, page_path: str) -> None:
        self.conn.execute(
            "INSERT OR IGNORE INTO headers(header_key, display_name)"
            " VALUES (?,?)", (hkey, spelling))
        self.conn.execute(
            "INSERT OR IGNORE INTO header_spellings(header_key, spelling,"
            " page_path) VALUES (?,?,?)", (hkey, spelling, page_path))

    def register_file(self, fkey: str, fkind: str, display: str) -> None:
        self.conn.execute(
            "INSERT OR IGNORE INTO link_files(file_key, file_kind, display_name)"
            " VALUES (?,?,?)", (fkey, fkind, display))

    def reject(self, extractor: str, reason: str, page: str, text: str) -> None:
        slot = self.rejects.setdefault(
            (extractor, reason),
            {"n": 0, "example_page": page, "example_text": text})
        slot["n"] += 1

    # ------------------------------------------------------------ per page
    def ingest_page(self, fact: dict) -> None:
        path, book = fact["path"], fact["book"]
        layer = fact["layer"]
        if fact.get("missing"):
            self.missing.append(path)
            return
        scope = self.licenses.scope_for(path)
        if not scope:
            raise SystemExit(
                f"kbgen: no license scope for {path} (data/license-scopes.tsv); "
                "run tools/check-licenses.py")
        self.conn.execute(
            "INSERT OR IGNORE INTO doc_sets(book, tree, layer, ce_version)"
            " VALUES (?,?,?,?)",
            (book, tree_of(book), layer, doc_set_version(book)))
        self.conn.execute(
            "INSERT INTO pages(path, page_id, book, title, sha256, size,"
            " license_scope) VALUES (?,?,?,?,?,?,?)",
            (path, fact["page_id"], book, fact["title"], fact["sha256"],
             fact["size"], scope))

        # Subjects first: everything else points at them.
        subject_keys: dict[str, str] = {}
        primary_key = None
        for subj in fact["subjects"]:
            key = self.register_symbol(subj["name"], path, subj["basis"])
            if not key:
                continue
            subject_keys[subj["name"]] = key
            if subj.get("is_primary") and primary_key is None:
                primary_key = key
            self.conn.execute(
                "INSERT OR IGNORE INTO page_subjects(page_path, symbol_key,"
                " basis, is_primary) VALUES (?,?,?,?)",
                (path, key, subj["basis"], 1 if subj.get("is_primary") else 0))
            self.add_kind(key, subj.get("kind"), subj["basis"])
        # No fallback to "first subject": a page whose only subjects are
        # name-row entries has no page-level subject, and attributing its
        # page-level requirements/declarations to the alphabetically first
        # row name (APIENTRY on windows-data-types) was a misattribution.
        self.add_kind(primary_key, fact.get("kind_hint"), "page-kind")

        self._ingest_declarations(fact, primary_key)
        self._ingest_requirements(fact, primary_key, subject_keys)
        self._ingest_constants(fact)
        self._ingest_notes(fact, primary_key)
        self._ingest_memberships(fact, primary_key)
        self._ingest_rest(fact, primary_key)

    def _ingest_declarations(self, fact, primary_key):
        path = fact["path"]
        language = "managed" if fact["layer"] == "dotnet" else "c"
        for decl in fact["declarations"]:
            oid = obs_id("d", path, decl["text"], decl["role"])
            if not self.register_obs(oid, "declaration", path):
                continue
            # A declaration the reader could attribute to a specific name
            # (a name-row/listed-type row, a corresponding macro) belongs
            # to THAT symbol, not to the page's primary subject.
            declares = decl.get("declares")
            subject_key = primary_key
            if declares:
                self.register_symbol(declares, path, "name-row")
                subject_key = symbol_key(declares)
            text_sha = self.blob(decl["text"])
            ws_sha = self.blob(ws_norm(decl["text"]))
            self.conn.execute(
                "INSERT OR IGNORE INTO declaration_observations(obs_id,"
                " subject_key, page_path, kind, role, markup, spacing,"
                " calling_convention, implementation, language, text_sha256,"
                " ws_norm_sha256) VALUES (?,?,?,?,?,?,?,?,?,?,?,?)",
                (oid, subject_key, path, decl.get("kind"), decl["role"],
                 decl.get("markup"), decl["spacing"],
                 decl.get("calling_convention"),
                 1 if decl.get("implementation") else 0, language,
                 text_sha, ws_sha))
            if decl["role"] == "syntax":
                if language != "managed":
                    # A C#-syntax quote has no C declaration kind; the
                    # managed kind comes from the page's title grammar.
                    self.add_kind(subject_key, decl.get("kind"),
                                  "declaration")
            member_types = decl.get("member_types") or []
            for pos, member in enumerate(decl.get("members") or []):
                mtype, mname = page_parse.member_parts(member)
                if pos < len(member_types) and member_types[pos]:
                    mtype = member_types[pos]
                self.conn.execute(
                    "INSERT OR IGNORE INTO declaration_members(obs_id, position,"
                    " member_name, member_type, raw) VALUES (?,?,?,?,?)",
                    (oid, pos, mname, mtype, member))
            for flag in decl.get("abi_flags") or []:
                self.conn.execute(
                    "INSERT OR IGNORE INTO declaration_abi_flags(obs_id, flag)"
                    " VALUES (?,?)", (oid, flag))

    def _req_tokens(self, oid, field, value, page_path):
        """Register the file/header tokens one requirement value names."""
        if field == "header":
            for hkey, spelling in header_tokens(value):
                self.register_header(hkey, spelling, page_path)
                self.conn.execute(
                    "INSERT OR IGNORE INTO requirement_files(obs_id, file_key,"
                    " file_kind) VALUES (?,?,?)", (oid, hkey, "header"))
        elif field in ("library", "dll", "assembly"):
            for fkey, fkind, display in file_tokens(value):
                self.register_file(fkey, fkind, display)
                self.conn.execute(
                    "INSERT OR IGNORE INTO requirement_files(obs_id, file_key,"
                    " file_kind) VALUES (?,?,?)", (oid, fkey, fkind))
        elif field == "module":
            token = normalize_value(value, "component")
            if token:
                self.register_file(token.lower(), "module", token)
                self.conn.execute(
                    "INSERT OR IGNORE INTO requirement_files(obs_id, file_key,"
                    " file_kind) VALUES (?,?,?)", (oid, token.lower(), "module"))

    def _ingest_requirements(self, fact, primary_key, subject_keys):
        path = fact["path"]
        for index, req in enumerate(fact["requirements"]):
            for_name = req.get("for_name")
            # A page may print the same field/value in two sections (a
            # Requirements table and an Information list); each print is
            # its own observation, so the per-page index is part of the id.
            oid = obs_id("r", path, index, req["field"], req["value"],
                         for_name or "")
            if not self.register_obs(oid, "requirement", path):
                continue
            subject = primary_key
            if for_name:
                subject = subject_keys.get(for_name) or \
                    self.register_symbol(for_name, path, "name-row")
            self.conn.execute(
                "INSERT OR IGNORE INTO requirement_observations(obs_id,"
                " subject_key, for_name, page_path, field, label, value_raw,"
                " value_key, evidence_sha256) VALUES (?,?,?,?,?,?,?,?,?)",
                (oid, subject, for_name, path, req["field"], req["label"],
                 req["value"], normalize_value(req["value"], req["field"]),
                 self.blob(req["evidence"])))
            self._req_tokens(oid, req["field"], req["value"], path)

    def _ingest_constants(self, fact):
        path = fact["path"]
        for index, item in enumerate(fact["constants"]):
            name = item.get("name") or ""
            raw_value = item.get("value")
            parsed = parse_constant_value(
                None if raw_value is None
                else re.sub(r"^0X", "0x", str(raw_value)))
            if parsed is None:
                origin = item.get("origin") or "table"
                self.reject(f"constants:{origin}", "value-not-a-constant",
                            path, f"{name} = {raw_value}")
                continue
            key = self.register_symbol(name, path, "constant")
            if not key:
                continue
            oid = obs_id("k", path, item.get("table", ""), index,
                         item.get("row", ""))
            if not self.register_obs(oid, "constant", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO constant_observations(obs_id, symbol_key,"
                " page_path, value_raw, value_int, decimal_raw, origin,"
                " group_header, table_sha256, row_sha256)"
                " VALUES (?,?,?,?,?,?,?,?,?,?)",
                (oid, key, path, re.sub(r"^0X", "0x", str(raw_value)),
                 parsed[1], item.get("decimal"),
                 item.get("origin") or "table", item.get("group_header"),
                 self.blob(item.get("table") or ""),
                 self.blob(item.get("row") or "")))
        for item in fact["constant_names"]:
            name = item.get("name") or ""
            key = self.register_symbol(name, path, "constant-name")
            if not key:
                continue
            oid = obs_id("n", path, item.get("table", ""), item.get("row", ""),
                         name)
            if not self.register_obs(oid, "constant-name", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO constant_name_observations(obs_id,"
                " symbol_key, page_path, table_sha256, row_sha256)"
                " VALUES (?,?,?,?,?)",
                (oid, key, path, self.blob(item.get("table") or ""),
                 self.blob(item.get("row") or "")))

    def _ingest_notes(self, fact, primary_key):
        path = fact["path"]
        for item in fact["notes"]:
            kind = item.get("kind") or "ce-restriction"
            oid = obs_id("c", kind, path, item.get("text", ""))
            if not self.register_obs(oid, "note", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO note_observations(obs_id, subject_key,"
                " page_path, kind, pattern, text_sha256) VALUES (?,?,?,?,?,?)",
                (oid, primary_key, path, kind, item.get("pattern"),
                 self.blob(item.get("text") or "")))
        for item in fact["def_rules"]:
            oid = obs_id("c", "def-rule", path, item.get("text", ""))
            if not self.register_obs(oid, "note", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO note_observations(obs_id, subject_key,"
                " page_path, kind, pattern, text_sha256) VALUES (?,?,?,?,?,?)",
                (oid, primary_key, path, "def-rule",
                 ";".join(item.get("topics") or []),
                 self.blob(item.get("text") or "")))

    def _ingest_memberships(self, fact, primary_key):
        path = fact["path"]

        def membership(kind, subject, target, family, field, header,
                       file_pair, text):
            hkey = None
            if header:
                tokens = header_tokens(header)
                if tokens:
                    hkey, spelling = tokens[0]
                    self.register_header(hkey, spelling, path)
            fkey = fkind = None
            if file_pair:
                fkey, fkind, display = file_pair
                self.register_file(fkey, fkind, display)
            oid = obs_id("m", kind, path, target or (subject or ""),
                         header or (fkey or ""), text)
            if not self.register_obs(oid, "membership", path):
                return
            self.conn.execute(
                "INSERT OR IGNORE INTO membership_statements(obs_id, page_path,"
                " stmt_kind, subject_key, target_name, family, field,"
                " header_key, file_key, file_kind, text_sha256)"
                " VALUES (?,?,?,?,?,?,?,?,?,?,?)",
                (oid, path, kind, subject, target, family, field, hkey,
                 fkey, fkind, self.blob(text or "")))

        for item in fact["name_headers"]:
            key = self.register_symbol(item.get("name"), path, "name-header")
            membership("name-header", key, item.get("name"), None, None,
                       item.get("header"), None, item.get("text"))
        for item in fact["family_headers"]:
            if item.get("kind") != "prefix":
                continue
            family = (item.get("family") or "").rstrip("*") \
                or (item.get("prefix") or "")
            membership("family-header", None, None, family, None,
                       item.get("header"), None, item.get("text"))
        for item in fact["header_exclusions"]:
            membership("header-exclusion", primary_key, None, None, None,
                       item.get("header"), None, item.get("text"))
        for item in fact["link_statements"]:
            tokens = file_tokens(item.get("file"))
            membership("link", primary_key, None, None, None, None,
                       tokens[0] if tokens else None, item.get("text"))
        for item in fact["listed_requirements"]:
            self.register_symbol(item.get("name"), path, "listed-function")
            field = item.get("field")
            tokens = file_tokens(item.get("value")) \
                if field in ("library", "dll") else []
            membership("listed-function", primary_key, item.get("name"),
                       None, field,
                       item.get("value") if field == "header" else None,
                       tokens[0] if tokens else None,
                       item.get("evidence") or item.get("value"))

    def _ingest_rest(self, fact, primary_key):
        path = fact["path"]
        for pos, member in enumerate(fact["documented_fields"]):
            oid = obs_id("f", path, member, pos)
            if not self.register_obs(oid, "documented-member", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO documented_members(obs_id, subject_key,"
                " page_path, member_name, position) VALUES (?,?,?,?,?)",
                (oid, primary_key, path, member, pos))
        declared = set()
        for decl in fact["declarations"]:
            if decl["role"] != "syntax":
                continue
            for member in decl.get("members") or []:
                _type, mname = page_parse.member_parts(member)
                if mname:
                    declared.add(mname.lower())
        for item in fact["abi_offsets"]:
            oid = obs_id("o", path, item.get("row", ""))
            if not self.register_obs(oid, "layout", path):
                continue
            member = item.get("member") or ""
            matches = re.sub(r"\[[^\]]*\]$", "", member).strip().lower() \
                in declared
            self.conn.execute(
                "INSERT OR IGNORE INTO layout_observations(obs_id, subject_key,"
                " page_path, member, offset_value, offset_printed, size_value,"
                " size_printed, size_unit, matches_declared_member,"
                " table_sha256, row_sha256) VALUES (?,?,?,?,?,?,?,?,?,?,?,?)",
                (oid, primary_key, path, member, item.get("offset"),
                 item.get("offset_printed"), item.get("size"),
                 item.get("size_printed"), item.get("size_unit"),
                 1 if matches else 0, self.blob(item.get("table") or ""),
                 self.blob(item.get("row") or "")))
        for item in fact["export_ordinals"]:
            key = self.register_symbol(item.get("name"), path, "ordinal")
            oid = obs_id("x", path, item.get("row", ""), item.get("name", ""))
            if not self.register_obs(oid, "ordinal", path):
                continue
            ordinal = item.get("ordinal")
            if ordinal is None:
                try:
                    ordinal = int(str(item.get("ordinal_printed")), 10)
                except (TypeError, ValueError):
                    ordinal = None
            self.conn.execute(
                "INSERT OR IGNORE INTO ordinal_observations(obs_id, symbol_key,"
                " page_path, dll_name, ordinal, row_sha256)"
                " VALUES (?,?,?,?,?,?)",
                (oid, key, path, item.get("dll"), ordinal,
                 self.blob(item.get("row") or "")))
        for item in fact["module_facts"]:
            oid = obs_id("u", path, item.get("module", ""), item.get("field", ""),
                         item.get("value", ""), item.get("evidence", ""))
            if not self.register_obs(oid, "module", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO module_observations(obs_id, subject_key,"
                " page_path, fact_kind, name, value, row_sha256)"
                " VALUES (?,?,?,?,?,?,?)",
                (oid, primary_key, path, item.get("field") or "",
                 item.get("module"), item.get("value"),
                 self.blob(item.get("evidence") or "")))
        for item in fact["unicode_only"]:
            oid = obs_id("s", "unicode-only", path, item.get("text", ""))
            if not self.register_obs(oid, "support", path):
                continue
            self.conn.execute(
                "INSERT OR IGNORE INTO support_statements(obs_id, subject_key,"
                " page_path, stmt_kind, name, text_sha256) VALUES (?,?,?,?,?,?)",
                (oid, primary_key, path, "unicode-only",
                 item.get("subject") or None, self.blob(item.get("text") or "")))
        for item in fact["unsupported_constants"]:
            kind = "unsupported-constant" if item.get("negated") \
                else "only-supported-constant"
            for name in item.get("names") or []:
                oid = obs_id("s", kind, path, name, item.get("intro", ""))
                if not self.register_obs(oid, "support", path):
                    continue
                self.conn.execute(
                    "INSERT OR IGNORE INTO support_statements(obs_id,"
                    " subject_key, page_path, stmt_kind, name, text_sha256)"
                    " VALUES (?,?,?,?,?,?)",
                    (oid, primary_key, path, kind, name,
                     self.blob(item.get("intro") or "")))

    # --------------------------------------------------------------- finish
    def finish(self, reviews, ref_sources_rows) -> None:
        if self.missing:
            raise SystemExit(
                f"kbgen: {len(self.missing)} indexed pages missing on disk, "
                f"e.g. {self.missing[0]}; the index has drifted from corpus/")
        for (extractor, reason), slot in sorted(self.rejects.items()):
            self.conn.execute(
                "INSERT OR REPLACE INTO ingest_rejects(extractor, reason, n,"
                " example_page, example_text) VALUES (?,?,?,?,?)",
                (extractor, reason, slot["n"], slot["example_page"],
                 slot["example_text"]))
        self.conn.executemany(
            "INSERT OR IGNORE INTO reviews(review_id, kind, scope, name,"
            " name_key, header_key, verdict, resolved_value, category,"
            " evidence_page, note, source_file)"
            " VALUES (?,?,?,?,?,?,?,?,?,?,?,?)",
            list(reviews.table_rows()))
        for source, rows in ref_sources_rows:
            self.conn.execute(
                "INSERT OR IGNORE INTO reference_sources(source_id, description,"
                " archive, sha256) VALUES (?,?,?,?)", source)
            self.conn.executemany(
                "INSERT OR IGNORE INTO reference_names(reference_id, source_id,"
                " kind, name, name_key, header_key, module_name, value_printed,"
                " value_int, locator, adoptable)"
                " VALUES (?,?,?,?,?,?,?,?,?,?,?)",
                [(obs_id("x", r[0], r[1], r[8], r[2]), *r) for r in rows])


def canonical_table_hashes(conn) -> dict[str, dict]:
    """Per-table content hash: rows as sorted text, so a hand-edit anywhere
    in the DB changes exactly the table it touched."""
    out = {}
    tables = [r[0] for r in conn.execute(
        "SELECT name FROM sqlite_master WHERE type='table'"
        " AND name NOT LIKE 'sqlite_%' ORDER BY name")]
    for table in tables:
        h = hashlib.sha256()
        n = 0
        cols = [r[1] for r in conn.execute(f"PRAGMA table_info({table})")]
        order = ", ".join(cols)
        for row in conn.execute(f"SELECT {order} FROM {table} ORDER BY {order}"):
            h.update(repr(row).encode("utf-8"))
            h.update(b"\n")
            n += 1
        out[table] = {"rows": n, "sha256": h.hexdigest()}
    return out


def _input_rows(jobs_tree: str | None) -> list[tuple[str, str, str]]:
    """(path, role, absolute path) of every build input that is a file."""
    here = os.path.dirname(os.path.abspath(__file__))
    rows: list[tuple[str, str, str]] = []

    def add(role, abspath):
        if abspath and os.path.isfile(abspath):
            rows.append((os.path.relpath(abspath, KB_DIR + "/..")
                         .replace(os.sep, "/"), role, abspath))

    add("index", INDEX_PATH)
    if os.path.isdir(CATALOG_DIR):
        for name in sorted(os.listdir(CATALOG_DIR)):
            if name.endswith(".tsv"):
                add("catalog", os.path.join(CATALOG_DIR, name))
    add("licenses", LICENSE_REGISTRY)
    add("shared-map", SHARED_MAP_PATH)
    add("schema", SCHEMA_PATH)
    rows.append(("tools/page_parse/*.py", "extractor", "*page_parse*"))
    rows.append(("tools/kbgen/*.py", "builder", "*kbgen*"))
    for name in ("constant-header-review.tsv", "constant-value-review.tsv"):
        add("review", os.path.join(KB_DIR, "inputs", "reviews", name))
    w = references.find_w32api()
    if w:
        add("reference", w)
    m = references.find_mingw()
    if m:
        add("reference", m)
    p = references.find_pinvoke()
    if p:
        add("reference", p)
    return rows


def _package_hash(package_dir: str) -> str:
    """Hash every .py file of a package directory (sorted, name + bytes)."""
    h = hashlib.sha256()
    for name in sorted(os.listdir(package_dir)):
        if name.endswith(".py"):
            h.update(name.encode())
            with open(os.path.join(package_dir, name), "rb") as fh:
                h.update(fh.read())
    return h.hexdigest()


def _reconcile_hex_columns(conn) -> None:
    """Re-read 8-digit values in a proven hex column as hex.

    HRESULT-style tables print the value column in bare hex
    (``80091008`` next to ``8009100F``).  The letter-bearing prints
    parse as hex on their own (common.parse_constant_value); the
    all-digit prints of the SAME printed table are then known to be
    hex too -- the column's own convention proves the radix, so this
    is a reading of the page, not a guess.  Only the 8-digit HRESULT
    shape is re-read, and rows that also carry a printed decimal are
    left alone.
    """
    # Group by (page, printed table).  Rows without a table (define
    # lines) all share the empty-text blob hash -- they are NOT a
    # column and must never form a group.
    empty_sha = sha256_text("")
    hex_tables = {(row[0], row[1]) for row in conn.execute(
        "SELECT DISTINCT page_path, table_sha256 FROM constant_observations"
        " WHERE value_raw GLOB '[0-9]*[A-Fa-f]*'"
        " AND value_raw NOT GLOB '*[^0-9A-Fa-f]*'"
        " AND length(value_raw) >= 4 AND table_sha256 != ?", (empty_sha,))}
    if not hex_tables:
        return
    for obs_id, raw, page, table_sha in conn.execute(
            "SELECT obs_id, value_raw, page_path, table_sha256"
            " FROM constant_observations"
            " WHERE decimal_raw IS NULL AND length(value_raw) = 8"
            " AND value_raw GLOB '[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]'"
            ).fetchall():
        if (page, table_sha) in hex_tables:
            conn.execute(
                "UPDATE constant_observations SET value_int=? WHERE obs_id=?",
                (int(raw, 16), obs_id))
    conn.commit()


def build(db_path: str, manifest_path: str, reports_dir: str | None,
          workers: int = 2, only_tree: str | None = None,
          page_jobs: list[tuple] | None = None) -> str:
    """Build the DB at db_path; return its sha256.  Reports go to
    reports_dir (None skips them, for reproducibility rebuilds)."""
    from .report import write_reports

    jobs = page_jobs if page_jobs is not None else \
        extract.read_index(INDEX_PATH, only_tree)
    catalogs = extract.load_catalogs(CATALOG_DIR)
    licenses = license_scopes.Registry.load()
    reviews = load_reviews()

    tmp_path = db_path + ".tmp"
    for suffix in ("", "-journal", "-wal", "-shm"):
        if os.path.exists(tmp_path + suffix):
            os.remove(tmp_path + suffix)
    os.makedirs(os.path.dirname(os.path.abspath(db_path)), exist_ok=True)
    conn = sqlite3.connect(tmp_path)
    try:
        conn.execute("PRAGMA journal_mode=OFF")
        conn.execute("PRAGMA synchronous=OFF")
        conn.executescript(open(SCHEMA_PATH, encoding="utf-8").read())
        conn.execute("PRAGMA foreign_keys=ON")
        conn.executemany("INSERT INTO ce_versions(version) VALUES (?)",
                         [(v,) for v in CE_VERSIONS])

        builder = Builder(conn, licenses)
        total = len(jobs)
        done = 0
        if workers and workers > 1:
            with concurrent.futures.ProcessPoolExecutor(
                    max_workers=workers, initializer=extract.init_worker,
                    initargs=(catalogs,)) as pool:
                for fact in pool.map(extract.parse_page, jobs, chunksize=64):
                    builder.ingest_page(fact)
                    done += 1
                    if done % 10000 == 0:
                        print(f"kbgen: {done:,}/{total:,}", flush=True)
        else:
            extract.init_worker(catalogs)
            for job in jobs:
                builder.ingest_page(extract.parse_page(job))
                done += 1
                if done % 10000 == 0:
                    print(f"kbgen: {done:,}/{total:,}", flush=True)

        ref_data = references.load_all()
        builder.finish(reviews, ref_data)
        _reconcile_hex_columns(conn)
        resolve.resolve_all(conn, reviews, SHARED_MAP_PATH)

        index_sha = _file_sha256(INDEX_PATH)
        meta = {
            "schema_version": str(SCHEMA_VERSION),
            "extractor_version": str(EXTRACTOR_VERSION),
            "builder_version": str(BUILDER_VERSION),
            "builder": "tools/kbgen",
            "corpus_pages": str(total),
            "index_sha256": index_sha,
            "subset_tree": only_tree or "",
            "references": ",".join(s[0] for s, _r in ref_data),
        }
        conn.executemany("INSERT OR REPLACE INTO kb_meta(key, value)"
                         " VALUES (?,?)", sorted(meta.items()))

        here = os.path.dirname(os.path.abspath(__file__))
        package_dirs = {"*kbgen*": here,
                        "*page_parse*": os.path.join(here, os.pardir,
                                                     "page_parse")}
        for relpath, role, abspath in _input_rows(only_tree):
            if abspath in package_dirs:
                conn.execute(
                    "INSERT OR IGNORE INTO build_inputs(path, role, sha256, size)"
                    " VALUES (?,?,?,?)", (relpath, role,
                                          _package_hash(package_dirs[abspath]), 0))
            else:
                conn.execute(
                    "INSERT OR IGNORE INTO build_inputs(path, role, sha256, size)"
                    " VALUES (?,?,?,?)",
                    (relpath, role, _file_sha256(abspath),
                     os.path.getsize(abspath)))
        conn.commit()
        tables = canonical_table_hashes(conn)
        if reports_dir:
            write_reports(conn, reports_dir)
        conn.execute("VACUUM")
        conn.commit()
    finally:
        conn.close()
    os.replace(tmp_path, db_path)
    digest = _file_sha256(db_path)
    manifest = {
        "schema_version": SCHEMA_VERSION,
        "extractor_version": EXTRACTOR_VERSION,
        "builder_version": BUILDER_VERSION,
        "db_sha256": digest,
        "db_size": os.path.getsize(db_path),
        "corpus_pages": len(jobs),
        "index_sha256": _file_sha256(INDEX_PATH),
        "subset_tree": only_tree,
        "tables": tables,
    }
    with open(manifest_path, "w", encoding="utf-8") as fh:
        json.dump(manifest, fh, indent=1, sort_keys=True)
        fh.write("\n")
    return digest
