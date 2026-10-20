"""The sdk-api markdown reader (corpus/win32 pages)."""

import re
from ._code import (
    _EXAMPLE_CUE,
    _EXAMPLE_SECTION,
    _calling_convention,
    _is_macro_block,
    _kind_of,
    _looks_like_declaration,
    _members,
    _spacing,
    abi_flags,
    is_implementation,
    member_type,
)
from ._requirements import (
    _field,
    _plausible,
    stated_none,
)
from ._text import (
    text_of,
)



# ---------------------------------------------------------------- markdown

FRONT_FIELD = re.compile(r"^(?P<key>[A-Za-z][A-Za-z0-9_.-]*):[ \t]*(?P<value>.*)$")

FENCE = re.compile(r"(?s)```([A-Za-z0-9+#-]*)[ \t]*\n(.*?)```")



MD_FIELD = re.compile(r"^###\s*-field\s+([A-Za-z_]\w*)\s*$", re.M)

MD_FIELD_BODY = re.compile(
    r"^###\s*-field\s+([A-Za-z_]\w*)\s*$\s*\n+(.*?)(?=\n###\s|\n##\s|\Z)",
    re.M | re.S)



def markdown_struct_fields(text):
    """sdk-api ``## -struct-fields`` -> [{name, description}], in page order.

    Some sdk-api structure pages document every member but print no syntax
    block (``AVIMAINHEADER`` is one).  The member names and their order are a
    documented fact, so they are extracted; the description is kept to the
    first sentence as the page's own wording.
    """
    fields = []
    for match in MD_FIELD_BODY.finditer(text):
        name = match.group(1)
        body = re.sub(r"\s+", " ", match.group(2)).strip()
        sentence = body.split(". ")[0].strip()
        fields.append({"name": name, "description": sentence[:300]})
    return fields



def markdown_structured_requirements(text):
    """The body ``| Requirement | Value |`` table of an sdk-api page.

    Every Win32 reference page closes with one: ``Header | Winuser.h
    (include Windows.h)``, ``Unicode and ANSI names | **ACM_OPENW**
    (Unicode) and **ACM_OPENA** (ANSI)``, ``Minimum supported client |
    Windows Vista [desktop apps only]``.  The rows are requirement
    statements of the page -- the only place a message or notification
    page names its header -- so they are read like every other
    Requirements block.  The value is the cell's own characters (markup
    and markdown escapes included -- a quote must match the raw page);
    the label goes through the same ``_field`` map as the HTML templates.

    A row whose label maps to no field (``Minimum supported ...`` maps to
    ``os_versions``) is kept under its mapped field; ``None.`` cells stay
    out (the page states no such requirement).  The desktop minimum-OS
    rows are statements of the *Win32 reference* (the layer mark lives on
    the record); they are never read as a Windows CE version.
    """
    out = []
    if not text:
        return out
    # One table after a Requirements heading.  Rows look like
    # ``| Header<br/> | <dl> <dt>Winuser.h</dt> </dl> |``.  A page with
    # no Requirements heading states no requirement table -- never scan
    # the whole page for label-shaped cells (a ``| Type | Description |``
    # parameter table is not a requirement).
    section = re.search(
        r"(?im)^#{2,6}\s*-?\s*requirements\s*$([\s\S]{0,4000})", text)
    if not section:
        return out
    body = section.group(1)
    for line in body.splitlines():
        stripped = line.strip()
        if not stripped.startswith("|") or stripped.startswith("|--") \
                or stripped.startswith("| --"):
            continue
        cells = [c for c in stripped.strip("|").split("|")]
        if len(cells) < 2:
            continue
        label = re.sub(r"<[^>]+>", " ", cells[0])
        label = re.sub(r"[*\\`_]", "", label)
        label = re.sub(r"\s+", " ", label).strip().rstrip(":")
        field = _field(label)
        if field in (None, "other") or field == "requires":
            continue
        value = " ".join(cells[1:])
        # The value keeps every character the cell prints -- tags
        # included.  ``<dl> <dt>BaseTsd.h; </dt> ...`` is the page's own
        # spelling of a multi-file header cell, and ``kbgen check``
        # verifies the value against the raw markdown file character for
        # character (whitespace aside): stripping the tags would delete
        # printed characters and the quote would no longer be on the
        # page.  Consumers parse names out of the raw value locally
        # (HEADER_TOKEN finds BaseTsd.h inside the markup).
        # The value stays as PRINTED -- markdown escapes (`\_`) and bold
        # markers are the page's own characters (``kbgen check`` verifies
        # the value character-for-character against the page).  Consumers
        # that parse names out of the value unescape locally.
        value = re.sub(r"\s+", " ", value).strip()
        if not value or stated_none(value):
            continue
        if not _plausible(field, value):
            continue
        out.append({"field": field, "label": label, "value": value,
                    "evidence": f"Requirements table: {label} | {value}"})
        if len(out) >= 24:
            break
    return out



# ``title: ACM_OPEN message (Commctrl.h)`` -- the title parenthetical is
# the page's own header statement (sdk-api prints it on every page).
_MD_TITLE_HEADER = re.compile(
    r"\(([A-Za-z_][\w.+-]*\.(?:h|hpp|hh|hxx|idl|inc))\)\s*$")



def markdown_title_header(title):
    """The header file an sdk-api title parenthetical states, or None."""
    if not title:
        return None
    match = _MD_TITLE_HEADER.search(title.strip())
    if not match:
        return None
    return match.group(1)



def markdown(text):
    """sdk-api page -> (fields, requirements, declarations, struct fields).

    The front matter is the YAML block the Win32 reference ships
    (``req.header``, ``req.lib``, ``req.dll``, ``api_location``, ...); the
    declaration is the fenced code block, usually under ``## -syntax``, and a
    structure page may instead (or also) document its members under
    ``## -struct-fields``.

    YAML *list* fields (``api_location:`` followed by ``- Winuser.h``) are
    read as their items -- every win32/common page ships its header that
    way, and the previous same-line-only reading left those pages with no
    requirement at all.  ``api_location`` is classified by the file
    extension the page prints (a header, a library or a DLL -- never
    re-tagged), and the body ``| Requirement | Value |`` table is read by
    :func:`markdown_structured_requirements`.
    """
    fields = {}
    body = text
    if text.startswith("---"):
        end = text.find("\n---", 3)
        head = text[3:end if end > 0 else len(text)]
        body = text[end + 4:] if end > 0 else ""
        pending = None
        for line in head.splitlines():
            # A YAML list item under the pending key (``- Winuser.h``).
            item = re.match(r"^\s*-\s+(.+?)\s*$", line)
            if item and pending:
                value = item.group(1).strip().strip("\"'")
                if value:
                    fields.setdefault(pending, [])
                    if isinstance(fields[pending], list):
                        fields[pending].append(value)
                continue
            match = FRONT_FIELD.match(line.strip())
            if match:
                key = match.group("key").strip()
                value = match.group("value").strip()
                pending = None
                if value and not value.startswith("|"):
                    fields.setdefault(key, value)
                elif not value:
                    # ``api_location:`` with the items on the lines below.
                    pending = key
                    fields.setdefault(key, [])
                continue
            pending = None

    def field_values(key):
        value = fields.get(key)
        if not value:
            return []
        if isinstance(value, list):
            return [v for v in value if v]
        return [item.strip() for item in re.split(r",|;", value) if item.strip()]

    reqs = []
    for key, field in (("req.header", "header"),
                       ("req.include-header", "header"),
                       ("req.lib", "library"),
                       ("req.dll", "dll"),
                       ("req.unicode-ansi", "unicode_ansi"),
                       ("req.typenames", "type"),
                       ("req.namespace", "namespace"),
                       ("req.assembly", "assembly")):
        for item in field_values(key):
            item = item.strip().strip("-").strip()
            if item:
                reqs.append({"field": field, "label": key, "value": item,
                             "evidence": f"{key}: {item}"})
    # ``api_location`` prints the file the name lives in: a header
    # (``Winuser.h``), an import library or the DLL itself.  The extension
    # the page prints decides the field -- the value is never re-tagged
    # from its shape, and a value naming no file gets no requirement.
    for item in field_values("api_location"):
        item = item.strip().strip("-").strip()
        if not item:
            continue
        low = item.lower()
        if re.search(r"\.(h|hpp|hh|hxx|idl|inc)\b", low):
            field = "header"
        elif re.search(r"\.(lib)\b", low):
            field = "library"
        elif re.search(r"\.(dll|drv|ocx|exe|sys)\b", low):
            field = "dll"
        else:
            continue
        reqs.append({"field": field, "label": "api_location", "value": item,
                     "evidence": f"api_location: {item}"})
    # The title parenthetical is the same header statement sdk-api prints
    # on every page: ``BN_CLICKED notification code (Winuser.h)``.
    title_header = markdown_title_header(fields.get("title", ""))
    if title_header:
        reqs.append({"field": "header", "label": "title",
                     "value": title_header,
                     "evidence": f"title: {fields.get('title', '')}"})
    # The body Requirements table (Header | ..., Unicode and ANSI names | ...).
    reqs.extend(markdown_structured_requirements(body))

    # The UID names the API exactly and its module:
    #   UID: NF:fileapi.CreateFileW  ->  module "fileapi", name "CreateFileW"
    uid = fields.get("UID")
    if uid and ":" in uid:
        module = uid.split(":", 1)[1].split(".")[0].strip()
        if module:
            reqs.append({"field": "module", "label": "UID", "value": module,
                         "evidence": f"UID: {uid}"})

    decls = []
    for match in FENCE.finditer(text):
        language, fence_body = match.group(1), match.group(2)
        fence_body = fence_body.strip()
        if not fence_body or not _looks_like_declaration(fence_body):
            continue
        before = text[:match.start()]
        implementation = is_implementation(fence_body)
        role = "example" if implementation else (
            "syntax" if re.search(r"(?im)^##\s+-?syntax\s*$", before)
            else "example")
        # A block that is only #define definition lines is the declaration
        # of those macros (the message reference prints ``#define WM_CREATE
        # 0x0001`` with no Syntax heading at all), unless the page put it
        # under an Example heading -- same rule as the HTML reader, with
        # the same example-cue guard on the introducing sentence.
        if role == "example" and _is_macro_block(fence_body) and not implementation:
            title = ""
            for line in before.splitlines()[::-1]:
                m = re.match(r"(?im)^#{1,6}\s+(.+?)\s*$", line)
                if m:
                    title = m.group(1).strip().lower()
                    break
            cued = bool(_EXAMPLE_CUE.search(
                text_of(before[-400:], keep_newlines=False)))
            if title not in _EXAMPLE_SECTION and \
                    not title.startswith("example") and not cued:
                role = "syntax"
        decls.append({"text": fence_body, "markup": f"fence:{language or 'text'}",
                      "spacing": _spacing(fence_body), "role": role,
                      "calling_convention": _calling_convention(fence_body),
                      "kind": _kind_of(fence_body), "members": _members(fence_body),
                      "member_types": [member_type(line)
                                       for line in _members(fence_body)],
                      "abi_flags": abi_flags(fence_body),
                      "implementation": implementation})
    return fields, reqs, decls, markdown_struct_fields(text)
