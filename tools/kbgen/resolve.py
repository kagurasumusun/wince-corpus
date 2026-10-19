"""Resolution: observations -> the KB's considered facts.  One place only.

Header evidence ranks (lower = stronger):

    5  reviewed           a human review row (kb/inputs/reviews/)
    10 subject-requirement the name's own page states the header
    20 membership         a page statement files the name ("X is defined
                          in Y.h", a component listing, a constant's
                          group sentence)
    30 constant-page      the page numbering the constant states a header
    40 family-statement   a CE page's "PREFIX_* ... include Y.h" sentence
    45 include-instruction an umbrella include ("req.include-header:
                          Windows.h"): the page says including it brings
                          the name in, not that it declares the name

This is deliberately weaker-evidence-free compared to the old pipeline:
there is no reference-header rank, no pinvoke rank, no co-mention rank
and no prefix guess.  A tie at the top rank is an open conflict, not a
silent pick; a review can break a tie, and unanimous single-header page
evidence beats a disagreeing review (recorded as a conflict so the
review gets re-examined).

Constants: one printed integer resolves; several resolve per CE version
only when the doc sets behind each value have pairwise disjoint version
sets; anything else is an open conflict with no value row.  A reviewed
value is accepted only when a page of that layer prints it.
"""

from __future__ import annotations

import collections
import re

from .common import (doc_set_version, file_tokens, header_tokens, obs_id,
                     parse_availability, parse_constant_value, symbol_key)
from .reviews import Reviews

RANK_REVIEWED = 5
RANK_SUBJECT = 10
RANK_MEMBERSHIP = 20
RANK_CONSTANT_PAGE = 30
RANK_FAMILY = 40
RANK_INCLUDE = 45
RANK_NAMES = {
    RANK_REVIEWED: "reviewed",
    RANK_SUBJECT: "subject-requirement",
    RANK_MEMBERSHIP: "membership",
    RANK_CONSTANT_PAGE: "constant-page",
    RANK_FAMILY: "family-statement",
    RANK_INCLUDE: "include-instruction",
}

_INCLUDE_LABELS = {"req.include-header", "include", "include file"}

_UNICODE_PAIR = re.compile(r"([A-Za-z_][A-Za-z0-9_]*)\s*\((Unicode|ANSI)\)", re.I)


def _symbols(conn) -> set[str]:
    return {r[0] for r in conn.execute("SELECT symbol_key FROM symbols")}


def _displays(conn) -> dict[str, str]:
    return {r[0]: r[1] for r in
            conn.execute("SELECT symbol_key, display_name FROM symbols")}


def _page_layers(conn) -> dict[str, str]:
    return {r[0]: r[1] for r in conn.execute(
        "SELECT p.path, d.layer FROM pages p JOIN doc_sets d ON d.book=p.book")}


def _conflict(conn, kind, sym, layer, detail, status="open"):
    conn.execute(
        "INSERT OR IGNORE INTO conflicts(conflict_id, kind, symbol_key,"
        " layer, detail, status) VALUES (?,?,?,?,?,?)",
        (obs_id("x", kind, sym, layer, detail), kind, sym, layer, detail,
         status))


def _register_header(conn, key: str, display: str) -> None:
    conn.execute(
        "INSERT OR IGNORE INTO headers(header_key, display_name) VALUES (?,?)",
        (key, display))


def _finish_files(conn, reviews: Reviews) -> None:
    """Register every header/file token resolution may name.

    Ingest registers the tokens of requirement values and membership
    statements; constant group headers and review headers are named only
    in constant_observations / the review inputs, so they are added here
    (a symbol_headers candidate must never reference an unregistered
    header -- the FK would fail the whole build).
    """
    for (group_header,) in conn.execute(
            "SELECT DISTINCT group_header FROM constant_observations"
            " WHERE group_header IS NOT NULL"):
        for key, spelling in header_tokens(group_header):
            _register_header(conn, key, spelling)
    for row in reviews.header_rows:
        if row["header"]:
            for key, spelling in header_tokens(row["header"]):
                _register_header(conn, key, spelling)
            if not header_tokens(row["header"]):
                _register_header(conn, row["header"].lower(), row["header"])


# ------------------------------------------------------------------ headers

def _resolve_headers(conn, layers: dict[str, str], reviews: Reviews) -> None:
    known = _symbols(conn)
    displays = _displays(conn)
    cand: dict[tuple[str, str, str], dict] = {}

    def add(sym, hkey, layer, rank, oid=None, review_id=None):
        if not sym or sym not in known or layer == "oss" or not hkey:
            return
        slot = cand.setdefault((sym, hkey, layer),
                               {"rank": rank, "obs": set(), "reviews": set()})
        slot["rank"] = min(slot["rank"], rank)
        if oid:
            slot["obs"].add(oid)
        if review_id:
            slot["reviews"].add(review_id)

    # 1. Requirements: the subject's own page (10), or a name-row target (20).
    #    An include instruction (sdk-api req.include-header: the umbrella a
    #    page tells you to include) is not a declaring-header claim.
    for oid, sym, for_name, page, label in conn.execute(
            "SELECT ro.obs_id, ro.subject_key, ro.for_name, ro.page_path,"
            " ro.label FROM requirement_observations ro WHERE ro.field='header'"):
        headers = [r[0] for r in conn.execute(
            "SELECT file_key FROM requirement_files WHERE obs_id=?"
            " AND file_kind='header'", (oid,))]
        include_only = (label or "").strip().lower() in _INCLUDE_LABELS
        for hkey in headers:
            if include_only:
                add(sym, hkey, layers[page], RANK_INCLUDE, oid)
            elif for_name:
                add(symbol_key(for_name), hkey, layers[page],
                    RANK_MEMBERSHIP, oid)
            else:
                add(sym, hkey, layers[page], RANK_SUBJECT, oid)

    # 2. Membership statements from pages.
    for oid, kind, sym, target, field, hkey, page in conn.execute(
            "SELECT obs_id, stmt_kind, subject_key, target_name, field,"
            " header_key, page_path FROM membership_statements"
            " WHERE header_key IS NOT NULL"):
        if kind == "name-header":
            add(sym, hkey, layers[page], RANK_MEMBERSHIP, oid)
        elif kind == "listed-function" and target:
            add(symbol_key(target), hkey, layers[page], RANK_MEMBERSHIP, oid)

    # 3. Constants: group sentence (20) and the numbering page's headers (30).
    page_headers: dict[str, list[tuple[str, str, bool]]] = (
        collections.defaultdict(list))
    for oid, page, label in conn.execute(
            "SELECT obs_id, page_path, label FROM requirement_observations"
            " WHERE field='header'"):
        is_include = (label or "").strip().lower() in _INCLUDE_LABELS
        for (hkey,) in conn.execute(
                "SELECT file_key FROM requirement_files WHERE obs_id=?"
                " AND file_kind='header'", (oid,)):
            page_headers[page].append((hkey, oid, is_include))
    for oid, sym, page, group_header in conn.execute(
            "SELECT obs_id, symbol_key, page_path, group_header"
            " FROM constant_observations"):
        layer = layers[page]
        for hkey, _sp in header_tokens(group_header):
            add(sym, hkey, layer, RANK_MEMBERSHIP, oid)
        for hkey, roid, is_include in page_headers.get(page, ()):
            add(sym, hkey, layer,
                RANK_INCLUDE if is_include else RANK_CONSTANT_PAGE, roid)

    # 4. Family statements of CE pages ("MFT_* ... include Winuser.h").
    prefixes = []
    for oid, family, hkey, page in conn.execute(
            "SELECT obs_id, family, header_key, page_path"
            " FROM membership_statements WHERE stmt_kind='family-header'"
            " AND family IS NOT NULL AND header_key IS NOT NULL"):
        if layers[page] == "ce":
            prefixes.append((family, hkey, oid))
    if prefixes:
        constant_syms = {r[0] for r in conn.execute(
            "SELECT DISTINCT symbol_key FROM constant_observations"
            " UNION SELECT DISTINCT symbol_key FROM constant_name_observations")}
        for sym in constant_syms:
            display = displays.get(sym, "")
            for family, hkey, oid in prefixes:
                if display.startswith(family) and len(display) > len(family):
                    add(sym, hkey, "ce", RANK_FAMILY, oid)

    # 5. Human reviews (CE layer only).
    rejected: set[str] = set()
    review_of: dict[str, tuple[str, str, str]] = {}   # sym -> (hkey, verdict, rid)
    const_syms = {r[0] for r in conn.execute(
        "SELECT DISTINCT symbol_key FROM constant_observations"
        " UNION SELECT DISTINCT symbol_key FROM constant_name_observations")}
    values = {}
    for sym, raw in conn.execute(
            "SELECT symbol_key, value_raw FROM constant_observations"
            " ORDER BY obs_id"):
        values.setdefault(sym, raw)
    for sym in sorted(const_syms):
        display = displays.get(sym, "")
        row = reviews.match_header(display, values.get(sym))
        if not row:
            continue
        if row["verdict"] == "reject":
            rejected.add(sym)
            continue
        for hkey, _sp in header_tokens(row["header"]) or \
                [(row["header"].lower(), row["header"])]:
            add(sym, hkey, "ce", RANK_REVIEWED, review_id=row["review_id"])
            review_of[sym] = (hkey, row["verdict"], row["review_id"])

    # Exclusions: "not included in X.h" statements about the page subject.
    excluded: set[tuple[str, str, str]] = set()
    for sym, hkey, page in conn.execute(
            "SELECT subject_key, header_key, page_path FROM"
            " membership_statements WHERE stmt_kind='header-exclusion'"
            " AND subject_key IS NOT NULL AND header_key IS NOT NULL"):
        excluded.add((sym, hkey, layers[page]))

    # Choose, per (symbol, layer).
    by_sym_layer: dict[tuple[str, str], list[tuple[str, dict]]] = \
        collections.defaultdict(list)
    for (sym, hkey, layer), slot in cand.items():
        if (sym, hkey, layer) in excluded and slot["rank"] > RANK_REVIEWED:
            continue
        by_sym_layer[(sym, layer)].append((hkey, slot))

    for (sym, layer), slots in sorted(by_sym_layer.items()):
        chosen: str | None = None
        if sym in rejected and layer == "ce":
            chosen = None
        else:
            page_slots = [(h, s) for h, s in slots if s["rank"] > RANK_REVIEWED]
            top_rank = min((s["rank"] for _h, s in page_slots), default=None)
            top_headers = sorted(h for h, s in page_slots
                                 if s["rank"] == top_rank)
            review = review_of.get(sym) if layer == "ce" else None
            if review and len(top_headers) == 1 and review[0] not in top_headers:
                chosen = top_headers[0]
                _conflict(conn, "header-choice", sym, layer,
                          f"review files {review[0]}; unanimous page evidence"
                          f" files {chosen}; page evidence kept, review needs"
                          " re-examination")
            elif review:
                chosen = review[0]
            elif len(top_headers) == 1:
                chosen = top_headers[0]
            elif len(top_headers) > 1:
                _conflict(conn, "header-choice", sym, layer,
                          f"headers at rank {top_rank}: "
                          + ", ".join(top_headers))
                chosen = None
        for hkey, slot in sorted(slots, key=lambda kv: kv[0]):
            is_chosen = 1 if hkey == chosen else 0
            conn.execute(
                "INSERT OR IGNORE INTO symbol_headers(symbol_key, header_key,"
                " layer, rank, rank_name, is_chosen) VALUES (?,?,?,?,?,?)",
                (sym, hkey, layer, slot["rank"], RANK_NAMES[slot["rank"]],
                 is_chosen))
            for oid in sorted(slot["obs"]):
                conn.execute(
                    "INSERT OR IGNORE INTO symbol_header_evidence(evidence_id,"
                    " symbol_key, header_key, layer, obs_id, review_id)"
                    " VALUES (?,?,?,?,?,NULL)",
                    (obs_id("e", sym, hkey, layer, oid), sym, hkey, layer, oid))
            for rid in sorted(slot["reviews"]):
                conn.execute(
                    "INSERT OR IGNORE INTO symbol_header_evidence(evidence_id,"
                    " symbol_key, header_key, layer, obs_id, review_id)"
                    " VALUES (?,?,?, ?,NULL,?)",
                    (obs_id("e", sym, hkey, layer, rid), sym, hkey, layer, rid))


# -------------------------------------------------------------------- files

def _resolve_files(conn, layers: dict[str, str]) -> None:
    known = _symbols(conn)
    cand: dict[tuple[str, str, str, str], dict] = {}

    def add(sym, fkey, fkind, layer, rank, oid):
        if not sym or sym not in known or layer == "oss" \
                or fkind not in ("lib", "dll", "module"):
            return
        slot = cand.setdefault((sym, fkey, fkind, layer),
                               {"rank": rank, "obs": set()})
        slot["rank"] = min(slot["rank"], rank)
        slot["obs"].add(oid)

    for oid, sym, for_name, page, fkey, fkind in conn.execute(
            "SELECT ro.obs_id, ro.subject_key, ro.for_name, ro.page_path,"
            " rf.file_key, rf.file_kind FROM requirement_observations ro"
            " JOIN requirement_files rf ON rf.obs_id = ro.obs_id"
            " WHERE ro.field IN ('library','dll','module')"
            " AND rf.file_kind IN ('lib','dll','module')"
            " AND ro.subject_key IS NOT NULL"):
        add(sym, fkey, fkind, layers[page],
            RANK_MEMBERSHIP if for_name else RANK_SUBJECT, oid)
    for oid, sym, page, fkey, fkind in conn.execute(
            "SELECT obs_id, subject_key, page_path, file_key, file_kind"
            " FROM membership_statements WHERE stmt_kind='link'"
            " AND subject_key IS NOT NULL AND file_key IS NOT NULL"):
        add(sym, fkey, fkind, layers[page], RANK_MEMBERSHIP, oid)
    for oid, target, field, page, fkey, fkind in conn.execute(
            "SELECT obs_id, target_name, field, page_path, file_key, file_kind"
            " FROM membership_statements WHERE stmt_kind='listed-function'"
            " AND file_key IS NOT NULL AND target_name IS NOT NULL"):
        if field not in ("library", "dll"):
            continue
        add(symbol_key(target), fkey, fkind, layers[page], RANK_MEMBERSHIP, oid)
    for oid, sym, page, dll in conn.execute(
            "SELECT obs_id, symbol_key, page_path, dll_name"
            " FROM ordinal_observations WHERE dll_name IS NOT NULL"):
        add(sym, dll.lower(), "dll", layers[page], RANK_MEMBERSHIP, oid)
        conn.execute(
            "INSERT OR IGNORE INTO link_files(file_key, file_kind, display_name)"
            " VALUES (?,?,?)", (dll.lower(), "dll", dll))

    for (sym, fkey, fkind, layer), slot in sorted(cand.items()):
        conn.execute(
            "INSERT OR IGNORE INTO symbol_files(symbol_key, file_key, file_kind,"
            " layer, rank, rank_name, is_chosen) VALUES (?,?,?,?,?,?,?)",
            (sym, fkey, fkind, layer, slot["rank"], RANK_NAMES[slot["rank"]],
             1 if slot["rank"] <= RANK_MEMBERSHIP else 0))
        for oid in sorted(slot["obs"]):
            conn.execute(
                "INSERT OR IGNORE INTO symbol_file_evidence(evidence_id,"
                " symbol_key, file_key, file_kind, layer, obs_id, review_id)"
                " VALUES (?,?,?,?,?,?,NULL)",
                (obs_id("e", sym, fkey, fkind, layer, oid), sym, fkey, fkind,
                 layer, oid))


# -------------------------------------------------------------- declarations

def _resolve_declarations(conn, layers: dict[str, str]) -> None:
    groups: dict[tuple[str, str, str], list[tuple]] = collections.defaultdict(list)
    for row in conn.execute(
            "SELECT obs_id, subject_key, page_path, kind, calling_convention,"
            " spacing, ws_norm_sha256 FROM declaration_observations"
            " WHERE subject_key IS NOT NULL AND role='syntax'"
            " AND implementation=0 ORDER BY obs_id"):
        oid, sym, page, kind, cc, spacing, ws = row
        layer = layers[page]
        if layer == "oss":
            continue
        groups[(sym, layer, ws)].append(row)

    per_symbol: dict[tuple[str, str], list[dict]] = collections.defaultdict(list)
    for (sym, layer, ws), rows in groups.items():
        kinds = collections.Counter(r[3] for r in rows if r[3])
        ccs = collections.Counter(r[4] for r in rows if r[4])
        kind = sorted(kinds.items(), key=lambda kv: (-kv[1], kv[0]))[0][0] \
            if kinds else None
        cc = sorted(ccs.items(), key=lambda kv: (-kv[1], kv[0]))[0][0] \
            if ccs else None
        per_symbol[(sym, layer)].append({
            "ws": ws, "rows": rows, "kind": kind, "cc": cc,
            "n_pages": len({r[2] for r in rows}),
            "n_preserved": sum(1 for r in rows if r[5] == "preserved"),
        })

    books = {r[0]: r[1] for r in conn.execute("SELECT path, book FROM pages")}
    for (sym, layer) in sorted(per_symbol):
        variants = sorted(per_symbol[(sym, layer)],
                          key=lambda v: (0 if v["n_preserved"] else 1,
                                         -v["n_pages"], v["ws"]))
        for i, v in enumerate(variants):
            vid = obs_id("t", sym, layer, v["ws"])
            conn.execute(
                "INSERT OR IGNORE INTO declaration_variants(variant_id,"
                " symbol_key, layer, ws_norm_sha256, kind, calling_convention,"
                " is_primary, n_pages, n_preserved)"
                " VALUES (?,?,?,?,?,?,?,?,?)",
                (vid, sym, layer, v["ws"], v["kind"], v["cc"],
                 1 if i == 0 else 0, v["n_pages"], v["n_preserved"]))
            for r in sorted(v["rows"]):
                conn.execute(
                    "INSERT OR IGNORE INTO declaration_variant_observations"
                    "(variant_id, obs_id) VALUES (?,?)", (vid, r[0]))
        preserved = [v for v in variants if v["n_preserved"]]
        if len(preserved) >= 2:
            parts = []
            for v in preserved[:6]:
                sets = sorted({books[r[2]] for r in v["rows"]})
                parts.append(f"{v['ws'][:8]}: {v['n_pages']}p "
                             f"[{', '.join(sets[:3])}]")
            _conflict(conn, "declaration-divergence", sym, layer,
                      f"{len(preserved)} distinct preserved syntax texts: "
                      + "; ".join(parts))


# ----------------------------------------------------------------- constants

def _resolve_constants(conn, layers: dict[str, str], reviews: Reviews) -> None:
    displays = _displays(conn)
    books = {r[0]: r[1] for r in conn.execute("SELECT path, book FROM pages")}
    obs_by: dict[tuple[str, str], list[tuple]] = collections.defaultdict(list)
    for row in conn.execute(
            "SELECT obs_id, symbol_key, page_path, value_raw, value_int"
            " FROM constant_observations ORDER BY obs_id"):
        oid, sym, page, raw, vint = row
        obs_by[(sym, layers[page])].append(row)

    def chosen_raw(obs_rows) -> str:
        counts = collections.Counter(r[3] for r in obs_rows)
        return sorted(counts.items(), key=lambda kv: (-kv[1], kv[0]))[0][0]

    def write_value(sym, layer, scope, kind, vint, raw, status, obs_rows,
                    review_id=None):
        conn.execute(
            "INSERT OR IGNORE INTO constant_values(symbol_key, layer, scope,"
            " value_kind, value_int, value_raw, status)"
            " VALUES (?,?,?,?,?,?,?)",
            (sym, layer, scope, kind, vint, raw, status))
        for r in obs_rows:
            conn.execute(
                "INSERT OR IGNORE INTO constant_value_evidence(evidence_id,"
                " symbol_key, layer, scope, obs_id, review_id)"
                " VALUES (?,?,?,?,?,NULL)",
                (obs_id("e", sym, layer, scope, r[0]), sym, layer, scope, r[0]))
        if review_id:
            conn.execute(
                "INSERT OR IGNORE INTO constant_value_evidence(evidence_id,"
                " symbol_key, layer, scope, obs_id, review_id)"
                " VALUES (?,?,?,?,NULL,?)",
                (obs_id("e", sym, layer, scope, review_id), sym, layer, scope,
                 review_id))

    for (sym, layer), obs_rows in sorted(obs_by.items()):
        display = displays.get(sym, sym)
        int_groups: dict[int, list[tuple]] = collections.defaultdict(list)
        expr_rows = []
        for r in obs_rows:
            if r[4] is not None:
                int_groups[r[4]].append(r)
            else:
                expr_rows.append(r)
        review = reviews.match_value(display) if layer == "ce" else None

        if len(int_groups) == 1:
            vint, rows = next(iter(int_groups.items()))
            write_value(sym, layer, "*", "integer", vint,
                        chosen_raw(rows), "resolved", rows)
            continue
        if not int_groups:
            raws = {re.sub(r"\s+", " ", r[3]).strip() for r in expr_rows}
            if len(raws) == 1:
                write_value(sym, layer, "*", "expression", None,
                            chosen_raw(expr_rows), "resolved", expr_rows)
            elif len(raws) > 1:
                _conflict(conn, "constant-value", sym, layer,
                          f"{display}: expressions {sorted(raws)[:4]}")
            continue

        # Several distinct integers.
        def versions_of(rows):
            out = set()
            for r in rows:
                out.add(doc_set_version(books[r[2]]))
            return out

        detail_parts = []
        for vint in sorted(int_groups):
            rows = int_groups[vint]
            vers = sorted((v or "(unset)") for v in versions_of(rows))
            detail_parts.append(
                f"{chosen_raw(rows)} x{len(rows)} [{', '.join(vers)}]")
        detail = f"{display}: " + "; ".join(detail_parts)

        if review is not None:
            resolved = (review.get("resolved_value") or "").strip()
            parsed = parse_constant_value(resolved) if resolved else None
            if parsed and parsed[0] == "integer" and parsed[1] in int_groups:
                rows = int_groups[parsed[1]]
                write_value(sym, layer, "*", "integer", parsed[1],
                            chosen_raw(rows), "reviewed", rows,
                            review_id=review["review_id"])
                _conflict(conn, "constant-value", sym, layer, detail,
                          status="reviewed")
                continue
            _conflict(conn, "constant-value", sym, layer,
                      f"reviewed-unresolved: {display} pages print "
                      f"{sorted(int_groups)}", status="reviewed")
            continue

        # Version-scoping: each value's doc-set versions must be non-empty
        # (no unset-version print) and pairwise disjoint.
        version_sets = {}
        scoping_ok = True
        seen: set[str] = set()
        for vint, rows in int_groups.items():
            vers = versions_of(rows)
            if None in vers or not vers or (vers & seen):
                scoping_ok = False
                break
            seen |= vers
            version_sets[vint] = vers
        if scoping_ok:
            for vint in sorted(int_groups):
                rows = int_groups[vint]
                for version in sorted(version_sets[vint]):
                    vrows = [r for r in rows
                             if doc_set_version(books[r[2]]) == version]
                    write_value(sym, layer, version, "integer", vint,
                                chosen_raw(vrows), "resolved", vrows)
            continue
        _conflict(conn, "constant-value", sym, layer, detail)


# ------------------------------------------------------------------ versions

def _resolve_versions(conn, layers: dict[str, str]) -> None:
    for oid, sym, for_name, page, raw in conn.execute(
            "SELECT obs_id, subject_key, for_name, page_path, value_raw"
            " FROM requirement_observations WHERE field='os_versions'"):
        layer = layers[page]
        if layer == "oss":
            continue
        target = symbol_key(for_name) if for_name else sym
        if not target:
            continue
        exists = conn.execute("SELECT 1 FROM symbols WHERE symbol_key=?",
                              (target,)).fetchone()
        if not exists:
            continue
        min_v, max_v, status = parse_availability(raw)
        conn.execute(
            "INSERT OR IGNORE INTO symbol_versions(symbol_key, layer, obs_id,"
            " min_version, max_version, raw, parse_status)"
            " VALUES (?,?,?,?,?,?,?)",
            (target, layer, oid, min_v, max_v, raw, status))


# ----------------------------------------------------------------- relations

def _resolve_relations(conn, layers: dict[str, str], shared_map) -> None:
    known = _symbols(conn)

    def relate(variant_display: str, base_display: str, basis: str):
        vkey, bkey = symbol_key(variant_display), symbol_key(base_display)
        if not vkey or not bkey or vkey == bkey:
            return
        if vkey not in known or bkey not in known:
            return
        last = variant_display.strip()[-1:].upper()
        if last == "W":
            kind = "unicode"
        elif last == "A":
            kind = "ansi"
        else:
            return
        if symbol_key(variant_display.strip()[:-1]) != bkey:
            return
        conn.execute(
            "INSERT OR IGNORE INTO symbol_relations(symbol_key, other_key,"
            " variant_kind, basis) VALUES (?,?,?,?)",
            (vkey, bkey, kind, basis))

    # Page statements: "CreateFileW (Unicode) and CreateFileA (ANSI)".
    for _oid, raw in conn.execute(
            "SELECT obs_id, value_raw FROM requirement_observations"
            " WHERE field='unicode_ansi'"):
        parseable = re.sub(r"\\([_*\[\]()#+.\-!])", r"\1", raw or "")
        parseable = parseable.replace("**", "")
        for name, _tag in dict.fromkeys(_UNICODE_PAIR.findall(parseable)):
            relate(name, name[:-1], "page-statement")

    # Import rule: win32-shared.tsv says which CE name each Win32 page was
    # imported for; an A/W-spelling page subject links to its CE base.
    subjects = {r[0]: r[1] for r in conn.execute(
        "SELECT ps.page_path, s.display_name FROM page_subjects ps"
        " JOIN symbols s ON s.symbol_key = ps.symbol_key"
        " WHERE ps.is_primary = 1")}
    for page, base_names in sorted(shared_map.items()):
        display = subjects.get(page)
        if not display:
            continue
        for base in sorted(base_names):
            relate(display, base, "import-rule")


def read_shared_map(path: str) -> dict[str, set[str]]:
    """win32 corpus path -> the CE names it was imported under."""
    out: dict[str, set[str]] = collections.defaultdict(set)
    try:
        with open(path, encoding="utf-8") as fh:
            next(fh, None)
            for line in fh:
                parts = line.rstrip("\n").split("\t")
                if len(parts) == 4:
                    for page in parts[3].split(";"):
                        if page:
                            out[page].add(parts[0])
    except OSError:
        return {}
    return out


def resolve_all(conn, reviews: Reviews, shared_map_path: str) -> None:
    layers = _page_layers(conn)
    _finish_files(conn, reviews)
    _resolve_headers(conn, layers, reviews)
    _resolve_files(conn, layers)
    _resolve_declarations(conn, layers)
    _resolve_constants(conn, layers, reviews)
    _resolve_versions(conn, layers)
    _resolve_relations(conn, layers, read_shared_map(shared_map_path))
