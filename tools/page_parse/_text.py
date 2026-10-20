"""Document layer: bytes/fragment -> text, regions, headings."""

import html as _html
import re


# ---------------------------------------------------------------- documents

# The archived Learn pages wrap the article in site chrome whose markup carries
# words like "Header" (``uhfHeaderId``); the article starts at the first <h1>.
END_MARKERS = (
    '<div id="ms--inline-notifications"',
    '<div id="assertive-live-region"',
    '<div id="affixed-right-container"',
    'Send Feedback on this topic',
    '<div class="feedback-verbatim',
)

SCRIPT = re.compile(r"(?is)<(script|style|noscript)\b.*?</\1>")

HEAD_TAG = re.compile(r"(?is)^.*?<h1\b[^>]*>")

BLOCK_END = re.compile(r"(?i)</(p|div|li|tr|td|th|h[1-6]|pre|table|ul|ol|dl|dt|dd)>")

BR = re.compile(r"(?i)<br\s*/?>")

TAG = re.compile(r"(?s)<[^>]+>")

TITLE_RE = re.compile(r"(?is)<title>(.*?)</title>")

HEADING = re.compile(
    r"(?is)<h([1-6])[^>]*>(?:\s*<[^>]+>)*\s*([^<]{2,60}?)\s*(?:<[^>]+>)*</h\1>")


# Requirement labels of the templates in the corpus, mapped to a stable field.
LABEL_MAP = {
    "header": "header", "headers": "header", "header file": "header",
    "header files": "header", "include file": "header",
    "required header": "header", "required headers": "header",
    "link library": "library", "library": "library", "link libraries": "library",
    "library file": "library", "import library": "library", "libraries": "library",
    "required library": "library", "required link library": "library",
    "dll": "dll", "dlls": "dll", "dll file": "dll", "dynamic link library": "dll",
    "os versions": "os_versions", "os version": "os_versions",
    "windows ce versions": "os_versions", "windows ce version": "os_versions",
    "operating system": "os_versions", "platform": "os_versions",
    "windows embedded ce": "os_versions", "windows mobile": "os_versions",
    "namespace": "namespace", "assembly": "assembly", "class": "class",
    "requires": "requires", "requirement": "requires", "type": "type",
    # ``Versions: 2.0 and later`` is the MFC template's OS-version line.
    # ``Pocket PC`` / ``Smartphone`` print the platform version.  ``Module:
    # Nk`` is the module the page names; it is not rewritten to ``nk.dll``.
    # ``sysgen`` and ``Architecture`` are the catalog variable and the CPU
    # list the page prints.  ``C++ Namespace: av_upnp.`` keeps the printed
    # value; the trailing period is sentence punctuation, stripped only
    # from the derived key, the same way ``Winbase.h.`` is.
    "versions": "os_versions", "pocket pc": "os_versions",
    # ``Smartphones: Windows Mobile 5.0 and later`` is the same fact as
    # ``Smartphone``, plural.  ``Platforms`` is not mapped: its values are
    # not a version.
    "smartphone": "os_versions", "smartphones": "os_versions",
    "pocket": "os_versions",
    "module": "module", "c++ namespace": "namespace",
    # ``Component: fsdbase`` is the catalog component the page names.  It is
    # not a DLL, and the template sentence ``Windows CE component that
    # includes this API element.`` is not a component name (empty key).
    "sysgen": "sysgen", "architecture": "architecture",
    "component": "component",
    "send feedback": None, "see also": None, "note": None, "notes": None,
    "reference": None, "applies to": "os_versions", "imports": "requires",
    "complete documentation": None, "online documentation": None,
    "sample application": None, "example": None, "unicode": "unicode_ansi",
    "unicode/ansi": "unicode_ansi", "ansi": "unicode_ansi",
    # sdk-api markdown Requirement tables (| Requirement | Value |):
    # the Unicode/ANSI row is the page's own A/W statement, and the
    # "Minimum supported" rows are the OS-version statements of the page.
    "unicode and ansi names": "unicode_ansi",
    "unicode and ansi name": "unicode_ansi",
    "minimum supported client": "os_versions",
    "minimum supported server": "os_versions",
    "minimum supported phone": "os_versions",
}


CONSTRAINT_WORDS = (
    "not supported", "does not support", "do not support", "not implemented",
    "not available", "unsupported", "does not implement", "is not provided",
    "not provided", "no support for", "limitation", "restriction",
    "cannot be used", "must not be used", "is ignored",
)

CE_WORDS = ("windows ce", "windows embedded ce", "ce .net", "wince",
            "pocket pc", "handheld pc")



def decode(raw):
    """bytes -> str, deciding the encoding the way the rest of the tools do."""
    if raw[:2] in (b"\xff\xfe", b"\xfe\xff"):
        # UTF-16 by BOM (stored pages are normalised to UTF-8 at
        # extraction; this guards any route that keeps raw bytes).
        return raw.decode("utf-16")
    for codec in ("utf-8", "cp1252"):
        try:
            return raw.decode(codec)
        except UnicodeDecodeError:
            continue
    return raw.decode("utf-8", "replace")



def article_html(raw):
    """The article part of a harvested page (no site chrome)."""
    text = SCRIPT.sub(" ", decode(raw))
    match = HEAD_TAG.match(text)
    if match:
        text = text[match.end():]
    for marker in END_MARKERS:
        index = text.find(marker)
        if index > 0 and not text[:index].rstrip().endswith("</html>"):
            text = text[:index]
            break
    return text



def text_of(fragment, keep_newlines=True):
    """Tag -> text.  Block tags become newlines; inline tags vanish."""
    fragment = BR.sub("\n", fragment)
    fragment = BLOCK_END.sub("\n", fragment)
    fragment = TAG.sub("", fragment)
    text = _html.unescape(fragment)
    if keep_newlines:
        text = re.sub(r"[ \t\r\f\v\u00a0]+", " ", text)
        return re.sub(r"\n\s*\n+", "\n", text).strip()
    return re.sub(r"\s+", " ", text).strip()



def region(fragment, *headings, window=6000):
    """The part of an article that follows one of ``headings``."""
    for match in HEADING.finditer(fragment):
        title = text_of(match.group(0), keep_newlines=False).strip(": ")
        if title.lower() in headings:
            rest = fragment[match.end():]
            next_heading = HEADING.search(rest)
            if next_heading and next_heading.start() < window:
                rest = rest[:next_heading.start()]
            return rest[:window]
    return ""



def regions(fragment, *headings, window=6000):
    """Every block that follows one of ``headings``, not only the first.

    A Learn page prints ``Requirements`` twice: the first heading is a note,
    and the header is under the second.  ``region`` keeps the first block,
    which is what a Syntax heading wants.  A requirements reader has to see
    both, and ``Windows Mobile Requirements`` is a second requirements block
    on the same page, not a different API.
    """
    wanted = {heading.lower() for heading in headings}
    for match in HEADING.finditer(fragment):
        title = text_of(match.group(0), keep_newlines=False).strip(": ")
        if title.lower() not in wanted:
            continue
        rest = fragment[match.end():]
        next_heading = HEADING.search(rest)
        if next_heading and next_heading.start() < window:
            rest = rest[:next_heading.start()]
        yield rest[:window]



# ``<p class="clsRef">Syntax</p>`` is the section label in the CE 5.0 MSHTML
# and shdocvw CHM.  ``<p class=blue><b>At a Glance</b></p>`` is the 2000-04
# ATL template; the class is often unquoted.  Neither is an ``<h1>``–``<h6>``,
# so ``region`` does not see it.  A blue paragraph that is a procedure step
# (``To import a desktop computer database``) is not a heading — only the
# titles listed here are.  ``<p class="label">`` stays on its own path: the
# CE 3.0 requirements table is read from its column headers, and cutting
# every label paragraph would shorten regions that reader already handles.
_P_CLASS_SECTION = re.compile(
    r"(?is)<p\b[^>]*\bclass\s*=\s*[\"']?(clsRef|blue|label)(?=[\"'\s>])"
    r"[^>]*>\s*(?:<[^>]+>\s*)*([^<]{2,40})")

_P_CLASS_TITLES = {
    "syntax", "c/c++ syntax", "c/c++syntax", "declaration", "prototype",
    "parameters", "parameter", "c/c++ parameters",
    "return value", "return values", "remarks", "general remarks",
    "requirements", "at a glance", "system requirements",
    "c/c++ requirements", "c/c++requirements",
    "members", "elements", "constants",
    "example", "examples", "code example", "sample", "samples",
    "see also", "enumerator values", "enumerators",
    # the CE-difference section of the CHM/MSDN reference pages; a label
    # like any other, and a boundary for the readers that scan forward
    "windows ce remarks", "windows ce notes",
}



def _p_class_sections(fragment, start, end):
    """``(pos, end, title)`` of clsRef/blue section labels in ``[start, end)``."""
    out = []
    for match in _P_CLASS_SECTION.finditer(fragment, start, end):
        title = text_of(match.group(2), keep_newlines=False).strip(": ").lower()
        if title not in _P_CLASS_TITLES:
            continue
        out.append((match.start(), match.end(), title))
    return out



def labeled_region(fragment, *headings, window=6000):
    """The block after a clsRef/blue label, until the next heading.

    An ``<h1>``–``<h6>`` is a boundary only.  It is not a start: ``region``
    already returns those, and a page that has one is not this template.
    """
    wanted = {heading.lower() for heading in headings}
    marks = [(match.start(), match.end(), None)
             for match in HEADING.finditer(fragment)]
    marks.extend(_p_class_sections(fragment, 0, len(fragment)))
    marks.sort()
    for index, (_start, end, title) in enumerate(marks):
        if title not in wanted:
            continue
        stop = end + window
        if index + 1 < len(marks) and marks[index + 1][0] < stop:
            stop = marks[index + 1][0]
        return fragment[end:stop]
    return ""



# ------------------------------------------------------------- requirements

ROW = re.compile(r"(?is)<tr\b[^>]*>(.*?)</tr>")

CELL = re.compile(r"(?is)<t[dh]\b[^>]*>(.*?)</t[dh]>")



TABLE = re.compile(r"(?is)<table\b[^>]*>(.*?)</table>")

_LISTED_NAME = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
