# dotnet/pinvoke snapshot — provenance

The weak-auxiliary pinvoke reference (the one third-party exception in
`docs/COLLECTION-POLICY.md`) is taken from the archived **dotnet/pinvoke**
repository on GitHub, the .NET Foundation's community-maintained mirror of
the classic pinvoke.net user wiki data, re-formatted as C# bindings.

* Repository: <https://github.com/dotnet/pinvoke> (github.com/dotnet,
  archived read-only upstream)
* Commit: `d974353ca67c4b8e6009096bd3ab7e6f284ed11d` (2023-07-26, branch
  `main`; this is the archival head — the repository's last state)
* Snapshot: `sources/dotnet-pinvoke/pinvoke-d974353ca67c4b8e6009096bd3ab7e6f284ed11d-src.tar.gz`
  (662 `.cs` files, 1.06 MB, the `src/` tree only)
* License: MIT — `pinvoke-LICENSE.txt` is a verbatim copy of the upstream
  `LICENSE` file.

Tarball layout: `pinvoke-main/src/<Library>/<Library>+<Topic>.cs`, one
`.NET` library project per Windows DLL (`Kernel32`, `User32`, `Gdi32`,
`Shell32`, `AdvApi32`, `NCrypt`, …), with constants as `public const`
fields or `[Flags]`/`public enum` member values and APIs as
`[DllImport(nameof(<Library>))]` `public static extern` signatures.

## What is and is not extracted

The `.cs` files are **source code**, so the tree itself is **not** imported
into `corpus/` — the corpus stays documentation-only, and policy checks
continue to enforce that.  What `tools/extract-pinvoke.py` derives from the
snapshot is the isolated weak-auxiliary metadata in `knowledge/aux/`:

* `knowledge/aux/pinvoke-constants.jsonl` — one record per numbered constant
  the snapshot prints (`public const <type> <NAME> = <value>;` or an enum
  member `NAME = value`), with the verbatim line, the library directory the
  file lives in (the *module placement*), the archive member and line
  number, and a best-effort numeric `value` marked as such;
* `knowledge/aux/pinvoke-apis.jsonl` — one record per `[DllImport]` entry,
  with the function name, the library it imports from, and the verbatim
  attribute + signature quote.

## How the material is used (and not used)

Per `docs/COLLECTION-POLICY.md` the aux layer is a **weak auxiliary aid for
judging constant/value↔header linkage, nothing more**:

* it never enters the specification (`knowledge/kb/`);
* its values are **never written into generated headers** — a `#define`
  needs a CE (or, marked, Win32-reference) page that prints the number;
* its module placement (User32/Kernel32/…) feeds the review worklists
  (`knowledge/reports/constant-header-gaps.tsv` shows the hit per name, and
  `knowledge/reports/constant-pinvoke-review.tsv` compares the community
  value against the documented CE value for the unlinked names);
* the wiki (`corpus/pinvoke/`, queue `queues/pinvoke-net.txt`) remains the
  second accept path for the weak rank `pinvoke-weak` when harvested —
  its pages, unlike this repository, print a header field for some names.
