"""Requirements blocks (Header:/Library:/OS versions: ...) and component-page listed-function rows."""

import re
from ._code import (
    _mvb_syntax_tables,
)
from ._evidence import (
    _names_in_next_table,
)
from ._text import (
    CELL,
    LABEL_MAP,
    ROW,
    TABLE,
    _LISTED_NAME,
    labeled_region,
    regions,
    text_of,
)

# The value has to be on the label's own line.  ``\s*`` used to cross the
# newline, so an empty ``Platforms:`` cell became the value ``Versions:``
# and an empty ``Header File:`` cell became ``Module:``.  The page printed
# neither.  A value that really is on the next row is read from the table.
# The colon that separates a label from its value is not the second colon
# of ``::``.  ``IReplStore::FindNextItem`` is a C++ name, not a requirement
# whose value is ``:FindNextItem``.  ``C++ Namespace: av_upnp::DIDL_Lite``
# still matches: only the label's own colon is the separator, and that
# colon is not followed by another colon.
LINE_LABEL = re.compile(
    r"(?<![:A-Za-z])([A-Za-z][A-Za-z /+.]{2,28}?)[ \t]*:(?!:)"
    r"[ \t]*([^\n]{1,200})")



FILEISH = re.compile(r"[A-Za-z0-9_.+\-]+\.(h|hpp|hh|hxx|lib|dll|hlp|inc)\b", re.I)

PROSE_WORDS = re.compile(r"\b(this|your|the|to|of|for|and|see|use|must|not)\b", re.I)

# The extensions treated as a library/DLL file token (kbgen agrees).
ASSIGNED_FILE = re.compile(
    r"[\w.+-]+\.(?:lib|dll|drv|sys|ocx|tlb)\b", re.I)



def _file_cell(value):
    """True when ``value`` is only file names, commas, and parentheticals.

    ``mshtml.h, mshtml.idl`` and ``Quartz.dll`` are file cells.
    ``Default set to "\\\\windows\\\\mboxcht.dll"`` is a registry sentence,
    even though a file name occurs in it.  ``None`` is not a file.
    """
    if not value:
        return False
    residue = re.sub(
        r"(?i)[A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc|lib|dll|drv|sys)\b",
        " ", value)
    residue = re.sub(r"\([^)]*\)", " ", residue)
    residue = re.sub(r"[,;/]|\bor\b|\band\b|[.]", " ", residue, flags=re.I)
    return not residue.strip() and bool(re.search(
        r"(?i)\.(?:h|hpp|hh|hxx|idl|inc|lib|dll|drv|sys)\b", value))



def _file_list(value):
    """True when the value is only file names, commas, and ``or`` / ``and``.

    A display-driver page prints eight ``.lib`` names joined by commas and
    ``or``.  That is a list of files, not prose, even though it is longer
    than 120 characters and contains ``or``.  ``Shell32.dll (version 4.0 or
    later)`` is not a list: the ``or`` sits inside a version sentence, and
    the parenthetical remains after the file name is removed.
    """
    # ``findall`` would return the extension group only (``lib``), and
    # replacing that would eat the ``lib`` inside ``Ddi_ati_lib.lib``.
    files = [match.group(0) for match in FILEISH.finditer(value or "")]
    if not files:
        return False
    residue = value or ""
    for name in files:
        residue = residue.replace(name, " ", 1)
    # ``Rts.lib (for development workstation), PSPubSubCE.lib (for target
    # device)`` is a file list.  The parenthetical says which machine, and
    # it is not a second file.  It stays in the printed value.
    residue = re.sub(r"\([^)]*\)", " ", residue)
    residue = re.sub(r"[,;/]|\bor\b|\band\b|[.]", " ", residue, flags=re.I)
    return not residue.strip()



def assigned_files(value):
    """Every library/DLL file a requirement value assigns, in printed order.

    ``Ole32.lib, Uuid.lib`` and ``OEMMain.lib or OEMMain_StaticKITL.lib``
    assign each name.  ``Iphlpapi.dll on Windows Server 2008`` assigns the
    one file the sentence names.  ``Shell32.dll (version 4.0 or later)``
    assigns ``Shell32.dll`` only.  A value that names no file
    (``Developer Implemented``) assigns nothing.  Nothing is invented: a
    second file is kept only when removing the file names, commas and
    ``or`` / ``and`` leaves nothing else.
    """
    files = ASSIGNED_FILE.findall(value or "")
    if len(files) <= 1:
        return files
    residue = value or ""
    for name in files:
        residue = residue.replace(name, " ", 1)
    residue = re.sub(r"[,;/]|\bor\b|\band\b|[.]", " ", residue, flags=re.I)
    if residue.strip():
        return files[:1]
    out = []
    seen = set()
    for name in files:
        if name.lower() in seen:
            continue
        seen.add(name.lower())
        out.append(name)
    return out



# ``Not applicable``, ``None``, ``N/A`` and ``Developer Implemented`` are
# the whole cell: the page says this API has no header / no link library /
# no DLL of its own.  A cell that also names a file is not one of these.
_STATED_NONE = re.compile(
    r"(?i)^\s*(?:not\s+applicable|none(?:\s+required)?|n/?a|"
    r"developer\s+implemented|not\s+required)\s*[.]?\s*$")



def stated_none(value):
    """True when the cell says there is no such file, rather than naming one."""
    return bool(_STATED_NONE.match(value or ""))



def _plausible(field, value):
    """Reject prose that a template put into a requirement table cell.

    ``Add this macro to your class's header file`` is a *description* of an
    MFC header requirement, not a header name; a header/library/DLL value has
    to look like a file name (or be a short bare name).  A cell that is only
    a list of file names is kept whole, however long.
    ``Windows CE versions that include this API element.`` is the blank
    template's own instruction, not a version the page assigns.
    """
    # The blank ATL template prints ``that include this API element``
    # (no ``s``).  A real version line does not.
    if field == "os_versions" and re.search(
            r"(?i)that includes? this API element", value or ""):
        return False
    if field in ("header", "library", "dll"):
        if _file_list(value):
            return True
        # ``Link Library: Not applicable.`` and ``DLL: None`` are the page
        # saying there is no such file.  That is a statement, not a missing
        # cell, and it is the difference between "the documents do not say"
        # and "the documents say there is none".  It is kept as printed; it
        # names no file, so it never enters the include/link map.
        if stated_none(value):
            return True
        # ``Uuid.lib. Not supported in Windows CE.`` and
        # ``CEPubSub.h (for development workstation), CePubSub.idl.`` start
        # with the file the label assigns.  The rest of the cell is kept as
        # printed.  ``Add this macro to your class's header file`` does not
        # start with a file, and stays prose.
        # ``Uuid.lib. Not supported in Windows CE.`` names a file and then
        # says the file is not a CE library.  The non-support sentence is
        # the fact.  The file is not recorded as a header or a library.
        if re.search(r"(?i)\bnot\s+supported\b", value or ""):
            return False
        if re.match(r"(?i)\s*[A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|lib|dll|idl|inc)\b",
                    value or ""):
            return True
        if len(value) > 120 or PROSE_WORDS.search(value):
            return len(value.split()) <= 2 and bool(FILEISH.search(value))
        if not FILEISH.search(value) and len(value.split()) > 2:
            return False
    return True



def _field(label):
    key = re.sub(r"\s+", " ", label.strip().rstrip(":")).lower()
    if key in LABEL_MAP:
        return LABEL_MAP[key]
    return "other"



def _column_labels(cells):
    """The column-header row of an old-SDK requirements table, or None.

    The Windows CE 3.0 SDK CHM prints requirements as one wide table whose
    first row names the columns instead of one label per row::

        Runs on | Versions | Defined in | Include | Link to
        Windows CE OS | 3.0 and later | Windbase.h | Winbase.h | coredll.lib

    Reading that table row by row (label = first cell) flattens three facts
    into one string, so the column names map each cell to its own field.
    """
    labels = [re.sub(r"\s+", " ", c).strip().rstrip(":").lower()
              for c in cells]
    # The usual row is ``Defined in | Include | Link to``.  DirectDraw and a
    # few other components print ``Declared in`` instead of ``Defined in`` /
    # ``Include``, and some of those tables have no ``Link to`` column.  Both
    # are the same table.  Requiring ``Include`` dropped the header and the
    # library together.
    file_columns = {"include", "defined in", "declared in", "link to"}
    if len(labels) >= 3 and labels[0].startswith("runs on") \
            and file_columns.intersection(labels):
        return labels
    return None



def _requirements_from_columns(block, seen):
    """Requirements from column-header tables in the block.

    Returns ``(records, had_column_table)``; the caller skips the generic
    row-by-row read when a column table is present, because that read is what
    flattened the columns into one string.
    """
    out = []
    found = False
    for table in TABLE.finditer(block):
        rows = ROW.findall(table.group(1))
        if not rows:
            continue
        header = [text_of(c, keep_newlines=False) for c in
                  CELL.findall(rows[0])]
        labels = _column_labels(header)
        if not labels:
            continue
        found = True
        index = {}
        for i, label in enumerate(labels):
            index.setdefault(label, i)

        def cell(values, name):
            i = index.get(name)
            if i is None or i >= len(values):
                return ""
            return re.sub(r"\s+", " ", values[i]).strip()

        for body in rows[1:]:
            values = [text_of(c, keep_newlines=False) for c in
                      CELL.findall(body)]
            if not any(values):
                continue
            runs = cell(values, "runs on")
            versions = cell(values, "versions")
            if runs or versions:
                value = " ".join(v for v in (runs, versions) if v)
                if ("os_versions", value) not in seen:
                    seen.add(("os_versions", value))
                    out.append({
                        "field": "os_versions", "label": "Runs on / Versions",
                        "value": value,
                        "evidence": f"Runs on: {runs}, Versions: {versions}"})
            for name, field in (("defined in", "header"),
                                ("declared in", "header"),
                                ("include", "header"),
                                ("link to", "library")):
                value = cell(values, name)
                if value and _plausible(field, value) \
                        and (field, value) not in seen:
                    seen.add((field, value))
                    label = {"defined in": "Defined in",
                             "declared in": "Declared in",
                             "include": "Include",
                             "link to": "Link to"}[name]
                    out.append({"field": field, "label": label,
                                "value": value,
                                "evidence": f"{label}: {value}"})
    return out, found



def requirements(fragment):
    """Requirement label/value pairs, from a table or from ``Label: value``."""
    out = []
    seen = set()
    got_columns = False
    # ``C/C++ Requirements`` is the requirements heading on the dual
    # Script/C++ template.  A few pages print it without the space
    # (``C/C++Requirements``).  ``Script Syntax`` is not a C declaration
    # and is not a requirements heading.
    # ``Windows Mobile Requirements`` is the same page's second requirements
    # block (Pocket PC / Smartphone header and library).  It is not a
    # hardware "system requirements" topic.  Every occurrence is read: the
    # first ``Requirements`` heading is sometimes empty or a note, and the
    # files are under the next one.
    requirement_headings = (
        "requirements", "windows mobile requirements", "at a glance",
        "system requirements", "c/c++ requirements", "c/c++requirements")
    blocks = list(regions(fragment, *requirement_headings))
    if not blocks:
        for heading in requirement_headings:
            labeled = labeled_region(fragment, heading)
            if labeled:
                blocks.append(labeled)
                break
    for block in blocks:
        column_records, had_column_table = _requirements_from_columns(block,
                                                                      seen)
        out += column_records
        if had_column_table:
            got_columns = True
            plain = text_of(block)
            for match in LINE_LABEL.finditer(plain):
                label, value = match.group(1).strip(), match.group(2).strip()
                field = _field(label)
                if not field or not value or (field, value) in seen \
                        or not _plausible(field, value):
                    continue
                seen.add((field, value))
                out.append({"field": field, "label": label, "value": value,
                            "evidence": match.group(0).strip()})
            continue
        for row in ROW.finditer(block):
            cells = [text_of(c, keep_newlines=False) for c in CELL.findall(row.group(1))]
            if len(cells) < 2 or not cells[0]:
                continue
            label = cells[0].rstrip(":").strip()
            value = " ".join(c for c in cells[1:] if c).strip()
            # ``IUnknown::QueryInterface | Returns pointers...`` is a method
            # row, not a requirement label.  A real label does not contain
            # ``::``.
            if "::" in label:
                continue
            field = _field(label)
            if not field or not value or (field, value) in seen \
                    or not _plausible(field, value):
                continue
            seen.add((field, value))
            out.append({"field": field, "label": label, "value": value,
                        "evidence": f"{label}: {value}"})
        plain = text_of(block)
        for match in LINE_LABEL.finditer(plain):
            label, value = match.group(1).strip(), match.group(2).strip()
            field = _field(label)
            if not field or not value or (field, value) in seen \
                    or not _plausible(field, value):
                continue
            seen.add((field, value))
            out.append({"field": field, "label": label, "value": value,
                        "evidence": match.group(0).strip()})
    # The CE 3.0 SDK marks the section with <p class="label">Requirements</p>,
    # not a heading, and a few pages split the word across tags
    # (<b>Requir</b>e<b>ments</b>) or omit it.  The column header itself
    # (Runs on | Versions | Defined in | Include | Link to) is the fact, so
    # when the heading search did not already read that table, read it from
    # the article.  The header check is the whole guard: no other table in
    # the corpus starts with those columns.
    # A ``Declared in`` table has no ``Include`` column, and a few of them
    # have no ``Link to`` either.  The heading search does not see a
    # ``<b>Requirements</b>`` label, so the table is read from the article.
    # ``seen`` drops a table the heading search already read.
    if ("Runs on" in fragment or "Runs On" in fragment) and (
            "Link to" in fragment or "Declared in" in fragment
            or "Defined in" in fragment):
        extra, had = _requirements_from_columns(fragment, seen)
        if had:
            got_columns = True
        out.extend(extra)
    # ``Header file | mshtmcid.h`` sits under ``C++ Information``, which is
    # not a requirements heading.  The row is the requirement.  The same
    # table's ``Applies to`` cell is not a version and is not read.  A cell
    # that does not name a header file (a column title, a sentence) is not
    # a requirement either.
    for row in ROW.finditer(fragment):
        cells = [text_of(cell, keep_newlines=False).strip()
                 for cell in CELL.findall(row.group(1))]
        if len(cells) < 2 or not cells[0]:
            continue
        label = cells[0].rstrip(":").strip()
        if label.lower() not in ("header file", "header files"):
            continue
        value = re.sub(r"\s+", " ", " ".join(cell for cell in cells[1:] if cell)).strip()
        if not value or ("header", value) in seen:
            continue
        if not FILEISH.search(value) or not _plausible("header", value):
            continue
        seen.add(("header", value))
        out.append({"field": "header", "label": label, "value": value,
                    "evidence": f"{label}: {value}"})
    # A sentence that assigns the header or the exporting DLL, not a mention
    # of some other type.  ``The DISPID for this event is defined in
    # mshtmdid.h`` is the event page's header.  ``This function is declared
    # in the Serhw.h`` is that function's header.  ``This function is
    # exported by Ppcload.dll`` is the DLL.  ``BT_ADDR is defined in
    # Ws2bth.h`` and ``CGID_MSHTML (defined in mshtmhst.h)`` name a different
    # thing, so they are not this page's requirement.  A sample ``#include``
    # is not one either.
    plain = text_of(fragment, keep_newlines=False)
    stated = (
        ("header", "defined in",
         re.compile(r"(?i)the\s+DISPID\s+for\s+this\s+event\s+is\s+defined\s+"
                    r"in\s+([A-Za-z0-9_]+\.h)\b")),
        ("header", "declared in",
         re.compile(r"(?i)\bthis\s+(?:function|macro|structure|struct|"
                    r"message|control code|interface|callback|method)\s+"
                    r"is\s+(?:declared|defined)\s+in\s+(?:the\s+)?"
                    r"(?:header\s+(?:file\s+)?)?([A-Za-z0-9_]+\.h)\b")),
        ("dll", "exported by",
         re.compile(r"(?i)\bthis\s+(?:function|macro)\s+is\s+exported\s+"
                    r"(?:by|from)\s+([A-Za-z0-9_]+\.dll)\b")),
        ("dll", "implemented in",
         re.compile(r"(?i)\bthis\s+function\s+is\s+implemented\s+in\s+"
                    r"(?:the\s+)?([A-Za-z0-9_]+\.dll)\b")),
        ("dll", "exported by",
         re.compile(r"(?i)\bthis\s+is\s+an\s+(?:application\s+programming\s+"
                    r"interface\s+\(API\)|API)\s+exported\s+by\s+(?:the\s+)?"
                    r"([A-Za-z0-9_]+\.dll)\b")),
        # ``It is declared in Stdlib.h as follows:`` -- the subject is the
        # variable or function the page documents.  ``the`` before the file
        # name is optional; ``as follows`` or a colon ends the clause.
        ("header", "declared in",
         re.compile(r"(?i)\bit\s+is\s+(?:declared|defined)\s+in\s+(?:the\s+)?"
                    r"([A-Za-z0-9_]+\.h)\b")),
        # ``The library (X.lib)`` or ``library X.lib`` assigns a library.
        # ``The ACM Driver Wrapper library (Acmdwrap.lib)`` is the library
        # for the API the page documents.
        ("library", "library",
         re.compile(r"(?i)\b(?:the\s+)?[A-Z][\w\s]*library\s*"
                    r"\(\s*([A-Za-z0-9_]+\.lib)\s*\)")),
        # ``link to X.lib`` / ``link with X.lib`` in prose.  Not a
        # requirements table: ``you must link to the Coredll.lib file``.
        ("library", "link to",
         re.compile(r"(?i)\b(?:must|need\s+to|should)?\s*link\s+(?:to|with)"
                    r"\s+(?:the\s+)?([A-Za-z0-9_]+\.lib)\b")),
        # ``defined in X.h`` without ``header file`` -- the CE 3.0 OAL pages
        # print ``defined in dstruct.h`` for structures and variables.  The
        # match has to be about *this* page's subject, not a random mention.
        ("header", "defined in",
         re.compile(r"(?i)\b(?:this\s+)?(?:structure|variable|type|enum|"\
                    r"union|constant|macro)\s+(?:is\s+)?defined\s+in\s+"
                    r"(?:the\s+)?([A-Za-z0-9_]+\.h)\b")),
        # ``X.h include file`` -- error code tables and similar pages
        # mention the header file that defines the constants.
        ("header", "include file",
         re.compile(r"(?i)\b([A-Za-z0-9_]+\.h)\s+include\s+file\b")),
    )
    for field, label, pattern in stated:
        for match in pattern.finditer(plain):
            value = match.group(1)
            if (field, value) in seen or not _plausible(field, value):
                continue
            seen.add((field, value))
            out.append({"field": field, "label": label, "value": value,
                        "evidence": re.sub(r"\s+", " ", match.group(0)).strip()})
    # MSHTML prints the header and the implementing DLL under
    # ``Interface Information``, not under Requirements:
    # ``Header and IDL files | mshtml.h, mshtml.idl``,
    # ``Stock Implementation | Mshtml.dll``,
    # ``Import library | mshtml.dll``.  A DirectShow filter page prints
    # ``Executable | Quartz.dll``.  ``None`` is not a DLL.  A registry
    # sentence that mentions a DLL is not this table.  ``Minimum operating
    # systems`` is kept only when the cell names Windows CE; the desktop
    # names in the same cell stay as printed.
    out.extend(_information_rows(fragment, seen))
    # ``To use this API, include the shellcb.h header file and link with
    # shellcb.lib.``  The subject is this API.  A sentence about some other
    # API is not matched.
    use = re.compile(
        r"(?i)(?:to\s+use\s+this\s+API|implementing\s+this\s+function)"
        r".{0,80}?include\s+(?:the\s+)?([A-Za-z0-9_]+\.h)\s+header\s+file"
        r"\s+and\s+link\s+with\s+(?:the\s+)?([A-Za-z0-9_]+\.lib)\b")
    for match in use.finditer(plain):
        evidence = re.sub(r"\s+", " ", match.group(0)).strip()
        for field, label, value in (("header", "include", match.group(1)),
                                    ("library", "link with", match.group(2))):
            if (field, value) in seen or not _plausible(field, value):
                continue
            seen.add((field, value))
            out.append({"field": field, "label": label, "value": value,
                        "evidence": evidence})
    # An MVB syntax table states the header as the prototype's first
    # ``//`` comment (``HMENU CommandBar_GetMenu(`` | ``// commctrl.h``);
    # those pages have no Requirements block at all.
    for _lines, header in _mvb_syntax_tables(fragment):
        if header and ("header", header) not in seen \
                and _plausible("header", header):
            seen.add(("header", header))
            out.append({"field": "header", "label": "Syntax",
                        "value": header, "evidence": f"// {header}"})
    return out



def _information_rows(fragment, seen):
    """File rows of an Interface Information or filter table.

    These labels are not Requirements headings, so the heading search never
    sees them.  The row itself is the statement.  The field follows the file
    the cell names: ``Import library | mshtml.dll`` is a DLL, not a ``.lib``.
    """
    out = []
    header_labels = {"header", "header and idl files", "idl file", "idl files"}
    dll_labels = {"stock implementation", "executable"}
    for row in ROW.finditer(fragment):
        cells = [text_of(cell, keep_newlines=False).strip()
                 for cell in CELL.findall(row.group(1))]
        if len(cells) < 2 or not cells[0]:
            continue
        label = cells[0].rstrip(":").strip()
        key = re.sub(r"\s+", " ", label).lower()
        value = re.sub(r"\s+", " ",
                       " ".join(cell for cell in cells[1:] if cell)).strip()
        if not value or len(value) > 200:
            continue
        field = None
        if key == "minimum operating systems":
            if PROSE_WORDS.search(value):
                continue
            if not re.search(r"(?i)windows\s+(?:embedded\s+)?ce\b|"
                             r"pocket\s+pc|windows\s+mobile", value):
                continue
            field = "os_versions"
        elif key == "import library":
            if not _file_cell(value):
                continue
            if re.search(r"(?i)\.dll\b", value) and not re.search(
                    r"(?i)\.lib\b", value):
                field = "dll"
            elif re.search(r"(?i)\.lib\b", value):
                field = "library"
        elif key in header_labels:
            if _file_cell(value) and re.search(
                    r"(?i)\.(?:h|hpp|hh|hxx|idl|inc)\b", value):
                field = "header"
        elif key in dll_labels:
            if _file_cell(value) and re.search(
                    r"(?i)\.(?:dll|drv|sys)\b", value):
                field = "dll"
        if not field or (field, value) in seen:
            continue
        seen.add((field, value))
        out.append({"field": field, "label": label, "value": value,
                    "evidence": f"{label}: {value}"})
    
    # Learn pages sometimes embed "Requirements" inside a <pre> block and
    # place the actual requirement data in the next paragraph as
    # <strong>Label:</strong> value pairs (e.g., <strong>Header:</strong> Dmusici.h.).
    # Extract these <strong>Label:</strong> patterns from the fragment.
    # Handle both <strong>Label:</strong> and <strong>Label</strong>: forms.
    strong_label_pattern = re.compile(
        r"<strong>([^<]+?)</strong>\s*:?\s*([^<]+?)(?:<br|</p)", re.I)
    for match in strong_label_pattern.finditer(fragment):
        label = text_of(match.group(1), keep_newlines=False).strip().rstrip(":")
        value = text_of(match.group(2), keep_newlines=False).strip()
        if not label or not value:
            continue
        field = _field(label)
        if not field or field == "other":
            continue
        if not value or (field, value) in seen:
            continue
        # For header/library/dll fields, the value should look like a file name
        # or be a stated-none value. Reject prose text.
        if field in ("header", "library", "dll"):
            if not stated_none(value) and not FILEISH.search(value):
                continue
        if not _plausible(field, value):
            continue
        seen.add((field, value))
        out.append({"field": field, "label": label, "value": value,
                    "evidence": match.group(0).strip()})
    
    return out



# ``To import these functions, you need to link to the fsdmgr.lib file.``
# The header, when the same paragraph names one, is ``defined in the
# Fsdmgr.h header file``.  The names are the identifier cells of the table
# that follows.  A page that states the library and lists no names assigns
# nothing: the component is not one of the functions.
_IMPORT_LIB = re.compile(
    r"(?i)to\s+import\s+(?:this|these)\s+functions?\s*,\s*you\s+"
    r"(?:must|need\s+to)\s+link\s+to\s+the\s+([A-Za-z0-9_]+\.lib)\b")

_DEFINED_HEADER_FILE = re.compile(
    r"(?i)defined\s+in\s+(?:the\s+)?([A-Za-z0-9_]+\.h)\s+header\s+file")



def listed_function_requirements(fragment):
    """Header and link library a component page assigns to the functions it lists.

    The page says which file the following functions are defined in, and which
    library imports them, then prints their names.  Each name is kept as
    printed, including a misspelling.  Nothing is attached to the component
    itself, and a sentence that lists no names is not guessed into one.
    """
    out = []
    seen = set()
    low = fragment.lower()
    start = 0
    while True:
        idx = low.find("to import", start)
        if idx < 0:
            break
        start = idx + len("to import")
        sentence = text_of(fragment[idx:idx + 420], keep_newlines=False)
        lib = _IMPORT_LIB.search(sentence)
        if not lib:
            continue
        before = text_of(fragment[max(0, idx - 700):idx], keep_newlines=False)
        headers = list(_DEFINED_HEADER_FILE.finditer(before))
        header = headers[-1] if headers else None
        rest = fragment[idx:idx + 8000]
        see = rest.lower().find("see also")
        chunk = rest[:see] if see >= 0 else rest
        table = re.search(r"(?is)<table\b[^>]*>(.*?)</table>", chunk)
        if not table:
            continue
        names = []
        for row in ROW.finditer(table.group(1)):
            for cell in CELL.findall(row.group(1)):
                name = text_of(cell, keep_newlines=False).strip()
                if _LISTED_NAME.match(name) and name.lower() not in (
                        "function", "functions"):
                    names.append(name)
        if not names:
            continue
        lib_value = lib.group(1)
        lib_evidence = re.sub(r"\s+", " ", lib.group(0)).strip()
        header_value = header.group(1) if header else None
        header_evidence = (re.sub(r"\s+", " ", header.group(0)).strip()
                           if header else None)
        for name in names:
            key = (name, "library", lib_value)
            if key not in seen and _plausible("library", lib_value):
                seen.add(key)
                out.append({"name": name, "field": "library",
                            "label": "link to", "value": lib_value,
                            "evidence": lib_evidence})
            if header_value and _plausible("header", header_value):
                key = (name, "header", header_value)
                if key not in seen:
                    seen.add(key)
                    out.append({"name": name, "field": "header",
                                "label": "defined in", "value": header_value,
                                "evidence": header_evidence})
    # ``The following functions are implemented in Ws2.dll`` then a table of
    # those names.  The DLL is assigned to each listed name, not to the page
    # title.  A sentence that lists no names assigns nothing.
    impl = re.compile(
        r"(?i)the\s+following\s+functions\s+are\s+implemented\s+in\s+"
        r"(?:the\s+)?([A-Za-z0-9_]+\.dll)\b")
    start = 0
    while True:
        match = impl.search(low[start:])
        if not match:
            break
        idx = start + match.start()
        start = idx + len("the following")
        sentence = text_of(fragment[idx:idx + 220], keep_newlines=False)
        found = impl.search(sentence)
        if not found:
            continue
        rest = fragment[idx:idx + 12000]
        see = rest.lower().find("see also")
        chunk = rest[:see] if see >= 0 else rest
        table = re.search(r"(?is)<table\b[^>]*>(.*?)</table>", chunk)
        if not table:
            continue
        names = []
        for row in ROW.finditer(table.group(1)):
            for cell in CELL.findall(row.group(1)):
                name = text_of(cell, keep_newlines=False).strip()
                if _LISTED_NAME.match(name) and name.lower() not in (
                        "function", "functions", "description"):
                    names.append(name)
        dll_value = found.group(1)
        evidence = re.sub(r"\s+", " ", found.group(0)).strip()
        for name in names:
            key = (name, "dll", dll_value)
            if key in seen or not _plausible("dll", dll_value):
                continue
            seen.add(key)
            out.append({"name": name, "field": "dll", "label": "implemented in",
                        "value": dll_value, "evidence": evidence})
    # ``The following table shows the functions that are exported by
    # Setup.dll`` then a Function column.  The DLL is assigned to each
    # listed name.  ``exported by the client driver`` names no DLL, so it
    # assigns nothing.  The page title is not given the DLL.
    exported = re.compile(
        r"(?i)following\s+(?:table\s+shows\s+the\s+)?functions\s+"
        r"(?:that\s+are\s+)?exported\s+by\s+(?:the\s+)?"
        r"([A-Za-z0-9_]+\.dll)\b")
    start = 0
    while True:
        match = exported.search(low[start:])
        if not match:
            break
        idx = start + match.start()
        start = idx + len("following")
        sentence = text_of(fragment[idx:idx + 240], keep_newlines=False)
        found = exported.search(sentence)
        if not found:
            continue
        names = _names_in_next_table(fragment, idx)
        dll_value = found.group(1)
        evidence = re.sub(r"\s+", " ", found.group(0)).strip()
        for name in names:
            key = (name, "dll", dll_value)
            if key in seen or not _plausible("dll", dll_value):
                continue
            seen.add(key)
            out.append({"name": name, "field": "dll",
                        "label": "exported by", "value": dll_value,
                        "evidence": evidence})
    # ``The Install_Exit function prototype is part of Setup.dll, an
    # ISV-created file``.  The named function gets the DLL.  The page says
    # the DLL is ISV-created when it says so; that clause stays in the
    # evidence.  It is not rewritten into a system DLL.
    part_of = re.compile(
        r"(?i)the\s+([A-Za-z_][A-Za-z0-9_]*)\s+function\s+prototype\s+is\s+"
        r"part\s+of\s+([A-Za-z0-9_]+\.dll)\b"
        r"(?:\s*,\s*an\s+ISV-created\s+file)?")
    for match in part_of.finditer(text_of(fragment, keep_newlines=False)):
        name, dll_value = match.group(1), match.group(2)
        key = (name, "dll", dll_value)
        if key in seen or not _plausible("dll", dll_value):
            continue
        seen.add(key)
        out.append({"name": name, "field": "dll", "label": "part of",
                    "value": dll_value,
                    "evidence": re.sub(r"\s+", " ", match.group(0)).strip()})
    # ``Function | Required Header`` tables (the CE CRT reference):
    # one row per routine, the header in its own column, sometimes
    # with an Architecture column beside it.  Each row is the page
    # filing that name under a header -- the same listed-function
    # statement as a component listing, read off the table's own
    # column names.
    for table in TABLE.finditer(fragment):
        rows = list(ROW.finditer(table.group(1)))
        if len(rows) < 2:
            continue
        heads = [text_of(c, keep_newlines=False).strip()
                 for c in CELL.findall(rows[0].group(1))]
        name_col = header_col = None
        for i, head in enumerate(heads):
            if head.lower().rstrip(":") in ("function", "functions",
                                            "routine", "name"):
                name_col = i
            elif _field(head) == "header":
                header_col = i
        if name_col is None or header_col is None:
            continue
        for row in rows[1:]:
            cells = [text_of(c, keep_newlines=False).strip()
                     for c in CELL.findall(row.group(1))]
            if len(cells) != len(heads):
                continue
            name, value = cells[name_col], cells[header_col]
            if not _LISTED_NAME.match(name):
                continue
            key = (name, "header", value)
            if key in seen or not _plausible("header", value):
                continue
            seen.add(key)
            out.append({"name": name, "field": "header",
                        "label": heads[header_col], "value": value,
                        "evidence": re.sub(
                            r"\s+", " ",
                            text_of(row.group(1),
                                    keep_newlines=False)).strip()})
    return out

_NAMESPACE_RE = re.compile(
    r"<strong>\s*Namespace:\s*</strong>(.*?)(?:<br|</p>)", re.S | re.I)
_ASSEMBLY_RE = re.compile(
    r"<strong>\s*Assembly:\s*</strong>(.*?)</p>", re.S | re.I)
_ASSEMBLY_DLL_RE = re.compile(r"\(in\s+([^()\s]+\.dll)\)", re.I)
_VERSION_INFO_RE = re.compile(
    r"Version Information</h[23]>(.*?)(?=<h[23]\b|$)", re.S | re.I)


def managed_reference(fragment):
    """A managed page's Namespace / Assembly / Version Information lines.

    Returns dicts in the requirement-observation shape (without field),
    keyed: namespace (plain name), assembly (the dll file name),
    version_statement (the section text, verbatim-ish).  Each carries
    an ``*_evidence`` quote.  Missing pieces are absent.
    """
    out = {}
    match = _NAMESPACE_RE.search(fragment)
    if match:
        name = text_of(match.group(1), keep_newlines=False).strip()
        if name:
            out["namespace"] = name.split()[0]
            out["namespace_evidence"] = "Namespace: " + name
    match = _ASSEMBLY_RE.search(fragment)
    if match:
        line = text_of(match.group(1), keep_newlines=False).strip()
        dll = _ASSEMBLY_DLL_RE.search(line)
        if dll:
            out["assembly"] = dll.group(1)
            out["assembly_evidence"] = "Assembly: " + line
    match = _VERSION_INFO_RE.search(fragment)
    if match:
        text = text_of(match.group(1), keep_newlines=False).strip()
        if text:
            out["version_statement"] = text
            out["version_evidence"] = "Version Information: " + text
    return out
