#!/usr/bin/env python3
"""The provenance registry: where each corpus page's bytes came from.

``data/provenance-scopes.tsv`` holds one row per rule -- a directory prefix --
with the acquisition group, the publication the bytes came off, and whether
Microsoft itself still publishes a compilation that covers the tree.  The
longest matching rule governs a path, exactly as in ``data/license-scopes.tsv``.

This module is the single place that answers "which acquisition route is this
path in?".  It is deliberately parallel to ``license_scopes``: the two
registries answer different questions and neither substitutes for the other.

* ``license_scopes`` -- what does the statement attached to this item say?
* ``provenance_scopes`` -- where did the bytes come from, and does the
  publisher still distribute them itself?

The rights review (``docs/review-rights-2026-10.ja.md``) needs both: a page
whose *content* is Microsoft's but whose *copy* came from a third party's
mirror is a different risk from the same page taken from Microsoft's own
Download Center ISO.
"""

import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
REGISTRY = os.path.join(ROOT, "data", "provenance-scopes.tsv")

COLUMNS = ("rule", "scope", "group", "origin", "official_compilation",
           "evidence", "notes")

#: The acquisition groups.  A row's group must be one of these.
GROUPS = ("web", "mirror", "media", "upstream")


class Provenance:
    """One rule of the provenance registry."""

    __slots__ = COLUMNS + ("path",)

    def __init__(self, row):
        for column, value in zip(COLUMNS, row):
            setattr(self, column, value)
        self.path = self.rule

    def governs(self, path):
        return path.startswith(self.path)

    def match_length(self, path):
        return len(self.path) if self.governs(path) else -1

    @property
    def has_official_compilation(self):
        """Does Microsoft still publish a compilation covering this tree?"""
        return self.official_compilation.startswith("http")


class ProvenanceRegistry:
    def __init__(self, rows):
        self.rows = list(rows)
        self.by_scope = {}
        for row in self.rows:
            self.by_scope.setdefault(row.scope, []).append(row)
        self._cache = {}

    @classmethod
    def load(cls, path=REGISTRY):
        rows = []
        with open(path, encoding="utf-8") as fh:
            for line in fh:
                if not line.strip() or line.startswith("#"):
                    continue
                fields = line.rstrip("\n").split("\t")
                if len(fields) != len(COLUMNS):
                    raise ValueError(
                        f"{path}: expected {len(COLUMNS)} columns, got "
                        f"{len(fields)}: {line[:80]!r}")
                rows.append(Provenance(fields))
        return cls(rows)

    def row_for(self, path):
        """The governing row for a repository-relative path, or None."""
        best = None
        for row in self.rows:
            length = row.match_length(path)
            if length > (best.match_length(path) if best else -1):
                best = row
        return best

    def scope_for(self, path):
        if path in self._cache:
            return self._cache[path]
        row = self.row_for(path)
        self._cache[path] = row.scope if row else None
        return self._cache[path]

    def group_for(self, path):
        row = self.row_for(path)
        return row.group if row else None

    def scopes(self):
        return sorted({row.scope for row in self.rows})


def check(registry):
    """Integrity: groups valid, evidence readable, no duplicate scope ids."""
    problems = 0
    for row in registry.rows:
        if row.group not in GROUPS:
            print(f"rule {row.rule}: group {row.group!r} is not one of "
                  f"{', '.join(GROUPS)}")
            problems += 1
        if not row.origin or row.origin == "-":
            print(f"rule {row.rule}: names no origin publication")
            problems += 1
        if row.evidence and row.evidence != "-":
            if not os.path.exists(os.path.join(ROOT, row.evidence)):
                print(f"rule {row.rule}: evidence {row.evidence} is missing")
                problems += 1
    seen = {}
    for row in registry.rows:
        if row.scope in seen:
            print(f"rule {row.rule}: scope id {row.scope} is already used by "
                  f"{seen[row.scope]}")
            problems += 1
        seen[row.scope] = row.rule
    print(f"{len(registry.rows)} rule(s), {len(registry.scopes())} scope(s), "
          f"{problems} problem(s)")
    return 1 if problems else 0


def main():
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("path", nargs="*", help="paths to look up")
    parser.add_argument("--list", action="store_true", help="print the registry")
    parser.add_argument("--check", action="store_true",
                        help="check the registry's own integrity")
    args = parser.parse_args()
    registry = ProvenanceRegistry.load()
    if args.list:
        for row in registry.rows:
            print(f"{row.rule:44s} {row.group:9s} {row.scope}")
        return 0
    if args.path:
        for path in args.path:
            row = registry.row_for(path)
            if row is None:
                print(f"{path}\tUNSCOPED")
            else:
                print(f"{path}\t{row.scope}\t{row.group}\t"
                      f"{row.official_compilation}")
        return 0
    return check(registry)


if __name__ == "__main__":
    raise SystemExit(main())
