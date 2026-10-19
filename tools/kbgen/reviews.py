"""The human review inputs (kb/inputs/reviews/*.tsv).

Two hand-maintained files, and nothing else, may override what the pages
say -- and even they may only *select among page prints*:

* constant-header-review.tsv -- verdicts on constant -> header filing.
  scope=name (one name), scope=prefix (a ``PREFIX_*`` family; longest
  matching stem wins), scope=value-base (names whose printed value is an
  expression on one base, e.g. ``RASBASE+153``).  verdict=approve files
  the name in ``header`` at the reviewed rank; verdict=reject forbids
  filing; verdict=prefer breaks a tie between headers the corpus states.
* constant-value-review.tsv -- one row per name whose pages print more
  than one number.  ``resolved_value`` must be a value the pages print
  (the builder verifies); empty means the corpus alone cannot say.
"""

from __future__ import annotations

import os
import re

from .common import REVIEWS_DIR, obs_id, symbol_key

HEADER_REVIEW = os.path.join(REVIEWS_DIR, "constant-header-review.tsv")
VALUE_REVIEW = os.path.join(REVIEWS_DIR, "constant-value-review.tsv")

_VALUE_BASE_RE = re.compile(r"\b([A-Z][A-Z0-9_]{1,40})\s*[+-]\s*\d")


def _rows(path: str) -> list[dict]:
    if not os.path.exists(path):
        return []
    rows = []
    header = None
    with open(path, encoding="utf-8") as fh:
        for line in fh:
            if line.startswith("#"):
                continue
            cells = line.rstrip("\n").split("\t")
            if header is None:
                header = cells
                continue
            if len(cells) < 4:
                continue
            rows.append(dict(zip(header,
                                 cells + [""] * (len(header) - len(cells)))))
    return rows


class Reviews:
    def __init__(self) -> None:
        self.header_rows: list[dict] = []
        self.names: dict[str, dict] = {}
        self.prefixes: dict[str, dict] = {}
        self.value_bases: dict[str, dict] = {}
        self.values: dict[str, dict] = {}   # display name -> row

    # ------------------------------------------------------------ matching
    def match_header(self, display: str, value: str | None) -> dict | None:
        """The header-review row governing one constant name, if any."""
        row = self.names.get(display)
        if row is not None:
            return row
        for prefix, row in sorted(self.prefixes.items(),
                                  key=lambda kv: -len(kv[0])):
            if display.startswith(prefix) and len(display) > len(prefix):
                return row
        match = _VALUE_BASE_RE.search((value or "").strip())
        if match and match.group(1) in self.value_bases:
            return self.value_bases[match.group(1)]
        return None

    def match_value(self, display: str) -> dict | None:
        return self.values.get(display)

    # ------------------------------------------------------------ DB rows
    def table_rows(self):
        """Yield rows for the reviews table (traceability of every input)."""
        for row in self.header_rows:
            yield (
                obs_id("v", "constant-header", row["scope"], row["name"],
                       row["header"], row["verdict"]),
                "constant-header", row["scope"], row["name"],
                symbol_key(row["name"].rstrip("*+")) or "",
                row["header"].lower() or None, row["verdict"],
                None, None,
                row.get("evidence_page") or None,
                row.get("note") or None,
                "kb/inputs/reviews/constant-header-review.tsv")
        for row in self.values.values():
            yield (
                obs_id("v", "constant-value", row["name"],
                       row.get("resolved_value", "")),
                "constant-value", "name", row["name"],
                symbol_key(row["name"]) or "",
                None, row.get("verdict") or None,
                row.get("resolved_value") or None,
                row.get("category") or None,
                None, row.get("note") or None,
                "kb/inputs/reviews/constant-value-review.tsv")


def load_reviews(header_path: str = HEADER_REVIEW,
                 value_path: str = VALUE_REVIEW) -> Reviews:
    reviews = Reviews()
    for raw in _rows(header_path):
        scope = (raw.get("scope") or "name").strip()
        name = (raw.get("name") or "").strip()
        verdict = (raw.get("verdict") or "").strip().lower()
        if not name or verdict not in ("approve", "reject", "prefer"):
            continue
        row = dict(raw)
        row["scope"] = scope
        row["name"] = name
        row["verdict"] = verdict
        row["header"] = (raw.get("header") or "").strip()
        row["evidence_page"] = (raw.get("evidence_page") or "").strip()
        row["review_id"] = obs_id("v", "constant-header", scope, name,
                                  row["header"], verdict)
        reviews.header_rows.append(row)
        if scope == "prefix":
            reviews.prefixes[name.rstrip("*")] = row
        elif scope == "value-base":
            reviews.value_bases[name.rstrip("+")] = row
        else:
            reviews.names[name] = row
    for raw in _rows(value_path):
        name = (raw.get("name") or "").strip()
        if not name:
            continue
        row = dict(raw)
        row["review_id"] = obs_id("v", "constant-value", name,
                                  raw.get("resolved_value", ""))
        reviews.values[name] = row
    return reviews
