"""What a page is about: names and kinds from titles and filenames."""

import html as _html
import re



# ------------------------------------------------------------------ entities

_PAREN_SUFFIX = re.compile(r"\s*\([^()]*\)\s*$")

_API_NAME = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*(::[A-Za-z_][A-Za-z0-9_]*)*$")



_LEARN_SUFFIX = re.compile(r"\s*\|\s*Microsoft Learn\s*$", re.I)

_WIN_SUFFIX = re.compile(r"\s*\(Windows[^)]*\)\s*$", re.I)

# ``abort Method (DOMDocument)`` -- the title prints the member and the parent.
# A title that is only ``abort Method`` does not name the parent, so it is not
# this form.  The parent is taken as printed, not completed to a C++ interface.
_MEMBER_TITLE = re.compile(
    r"^([A-Za-z_][\w]*)\s+(?:Method|Property|Event)\s*"
    r"\(([A-Za-z_][\w./]*)\)\s*$")



def interface_member_title(title):
    """``abort Method (DOMDocument) (Windows CE 5.0)`` -> ``DOMDocument::abort``.

    None when the title does not print both.  Used only for a page whose
    ``C/C++ Syntax`` heading holds the declaration, so a script-only page is
    not turned into an entity.
    """
    if not title:
        return None
    text = _LEARN_SUFFIX.sub("", title).strip()
    for _ in range(2):
        text = _WIN_SUFFIX.sub("", text).strip()
    match = _MEMBER_TITLE.match(text)
    if not match:
        return None
    return f"{match.group(2)}::{match.group(1)}"



_QUALIFIED_KIND = re.compile(
    r"^([A-Za-z_][\w]*::[A-Za-z_][\w]*)\s+(?:Method|Property|Event)\s*$",
    re.I)

_IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")



def _title_core(title):
    """Drop the Learn suffix and a trailing ``(Windows …)`` parenthetical."""
    if not title:
        return ""
    text = _LEARN_SUFFIX.sub("", title).strip()
    for _ in range(2):
        text = _WIN_SUFFIX.sub("", text).strip()
    return text



# ``MSMQMessage.Priority`` prints the parent and the member with a dot, the
# same fact as ``Interface::Member``.  ``winbase.h`` is a file name, not a
# member, so a trailing extension is not this form.
_DOTTED_MEMBER = re.compile(r"^([A-Za-z_][\w]*)\.([A-Za-z_][\w]*)$")

_DOTTED_EXTENSION = {
    "h", "hpp", "hh", "hxx", "lib", "dll", "htm", "html", "txt", "idl",
    "inc", "def",
}

# ``IXRCollection<In_T, Out_T>::Insert`` prints the parent, including the
# template arguments, and the member.  The stored title may still have the
# HTML escapes (``&lt;``); the page printed the brackets.
_TEMPLATED_MEMBER = re.compile(
    r"^([A-Za-z_][\w]*<[^<>]+>::[A-Za-z_][\w]*)$")

# ``CComPtr::operator !`` and ``wstring::operator+=`` print the class and
# the operator.  ``COleDateTime::operator ==, !=`` prints several; each
# token is one operator, and only a syntax block that declares that token
# is attached.  A conversion operator may contain spaces
# (``operator const wchar_t*``).
_OPERATOR_TITLE = re.compile(
    r"^([A-Za-z_][\w]*)::\s*(operators?)\s*(.+)$", re.I)

_DESTRUCTOR_TITLE = re.compile(
    r"^([A-Za-z_][\w]*)::(~[A-Za-z_][\w]*)$")

# ``COleControl:: OnMnemonic`` prints the parent and the member with a
# space the template inserted.  The identifiers are those two words.
_SPACED_QUALIFIED = re.compile(
    r"^([A-Za-z_][\w]*)::[ \t]+([A-Za-z_][\w]*)$")



def _declared_member(name):
    """The member a qualified title names, or the name itself."""
    text = name or ""
    if "::" in text:
        return text.rsplit("::", 1)[-1]
    if _DOTTED_MEMBER.match(text):
        return text.split(".", 1)[1]
    return text



def operator_token(name):
    """The operator a title prints after ``operator``, or empty.

    Spaces are kept here.  ``entity_id`` strips them so ``operator +=`` and
    ``operator+=`` are one key.  A title that is not an operator is empty.
    """
    text = _html.unescape(name or "")
    match = re.search(r"(?i)\boperators?\s*(.+)$", text)
    if not match or "::" not in text:
        return ""
    return match.group(1).strip()



def operator_title_names(title):
    """``CComPtr::operator !`` and ``CTime::operators <<, >>``.

    A comma list becomes one name per token the title prints.  Nothing is
    added that the title does not print.  The caller still requires a
    syntax block that declares that token.
    """
    text = _html.unescape(_title_core(title))
    match = _OPERATOR_TITLE.match(text)
    if not match:
        return []
    parent, rest = match.group(1), match.group(3).strip()
    if not rest or len(rest) > 60:
        return []
    if "," not in rest:
        return [text]
    names = []
    for part in rest.split(","):
        part = part.strip()
        if not part or len(part) > 12 or re.search(r"\s", part):
            return []
        names.append(f"{parent}::operator {part}")
    return names



def printed_parent(name):
    """The parent a qualified name prints, or empty.

    ``ITimerService::CreateTimer`` and ``MSMQMessage.Priority`` both print
    one.  The spelling is kept (``::`` is not rewritten to a dot, or the
    reverse).  A file name such as ``winbase.h`` is not a parent.
    """
    text = name or ""
    if "::" in text:
        return text.split("::", 1)[0]
    if _DOTTED_MEMBER.match(text) and text.split(".", 1)[1].lower() not in _DOTTED_EXTENSION:
        return text.split(".", 1)[0]
    return ""



def documented_title_names(title):
    """Names a title prints, when the title is itself the list of APIs.

    ``CreateFile`` and ``GPE::AllocSurface`` are one name.
    ``ITimerService::CreateTimer Method`` prints the parent and the member.
    ``abort Method (DOMDocument)`` does too.  ``strcpy, wcscpy`` prints both.
    ``MSMQMessage.Priority`` prints the parent and the member with a dot.
    ``IXRCollection<In_T, Out_T>::Insert`` prints both, template arguments
    included.  ``CComPtr::operator !`` prints the class and the operator.
    ``absoluteChildNumber Method`` does not name a parent, and
    ``IContact Properties`` is not a list of identifiers, so both are empty.
    Nothing is completed or invented.
    """
    single = name_from_title(title)
    if single:
        return [single]
    text = _title_core(title)
    match = _QUALIFIED_KIND.match(text)
    if match:
        return [match.group(1)]
    qualified = interface_member_title(title)
    if qualified:
        return [qualified]
    printed = _html.unescape(text)
    printed_base = re.sub(r"\s*\([^()]*\)\s*$", "", printed)
    templated = _TEMPLATED_MEMBER.match(printed_base)
    if templated:
        return [templated.group(1)]
    operators = operator_title_names(title)
    if operators:
        return operators
    destructor = _DESTRUCTOR_TITLE.match(printed)
    if destructor:
        return [printed]
    spaced = _SPACED_QUALIFIED.match(printed)
    if spaced:
        return [f"{spaced.group(1)}::{spaced.group(2)}"]
    dotted = _DOTTED_MEMBER.match(text)
    if dotted and dotted.group(2).lower() not in _DOTTED_EXTENSION:
        return [text]
    parts = [part.strip() for part in text.split(",")]
    if 2 <= len(parts) <= 4 and all(_IDENT.match(part) for part in parts):
        return parts
    return []



_KIND_TITLE = re.compile(
    r"(?i)^([A-Za-z_][A-Za-z0-9_]*)\s+"
    r"(interface|dispinterface|structure|function|prototype|"
    r"enumerated\s+type)$")



def _api_shaped(name):
    """True when a kind-suffixed title is an API name, not an English word.

    ``IElementBehaviorSubmit Interface`` and ``HTML_PAINTER_INFO Structure``
    name an API.  ``Message Function``, ``User Interface`` and ``COM
    Interface`` do not: one English word, or all-caps shorter than a type.
    """
    if re.match(r"I[A-Z][A-Za-z0-9_]+$", name):
        return True
    if "_" in name and re.match(r"[A-Z][A-Za-z0-9_]+$", name):
        return True
    if re.fullmatch(r"[A-Z][A-Z0-9]{7,}", name):
        return True
    # ``HTMLInputTextElementEvents`` and ``DWebBrowserEvents2`` have an
    # acronym and then a capital.  ``COM``, ``User`` and ``Message`` do not.
    if (re.match(r"[A-Z]", name) and re.search(r"[a-z]", name)
            and len(re.findall(r"[A-Z]", name)) >= 2 and len(name) >= 6):
        return True
    return False



def kind_title_name(title):
    """``IHTMLTableRowMetrics Interface`` -> ``IHTMLTableRowMetrics``.

    The kind word is part of the title template, not part of the name.
    A title that is not one API-shaped identifier is left alone.
    """
    text = _title_core(title)
    text = re.sub(r"\s*\([^)]*\)\s*$", "", text).strip()
    match = _KIND_TITLE.match(text)
    if not match:
        return None
    name = match.group(1)
    if not _api_shaped(name):
        return None
    return name



def name_from_title(title):
    """``CreateFile (Windows CE 5.0)`` -> ``CreateFile``; None for an article.

    Only a title that is a single identifier (with the optional ``Class::Member``
    form) names an API: everything else is a documentation article about
    something, not a definition of a name.
    """
    if not title:
        return None
    text = re.sub(r"\s*\|\s*Microsoft Learn\s*$", "", title).strip()
    for _ in range(2):
        text = _PAREN_SUFFIX.sub("", text).strip()
    if not text or not _API_NAME.match(text):
        return None
    return text



MD_KIND_WORD = re.compile(
    r"(?i)\s+(function|structure|enumeration|callback|interface|class|"
    r"library|attribute|macro|union|typedef|constant|method|property|"
    r"event|operator|constructor|destructor|field|message|transaction)$")



def name_from_markdown_title(title):
    """``DEVMODEW (wingdi.h)`` / ``CreateFileW function (fileapi.h)`` ->
    ``DEVMODEW`` / ``CreateFileW``.

    The sdk-api title carries the public name in its own casing (the file name
    is lower-case, and the UID uses the C tag name for structures:
    ``NS:wingdi._devicemodeW``), so this is the name a declaration must use.
    Returns None when the title is not a name (e.g. a README).
    """
    text = (title or "").strip().strip('"').strip()
    for _ in range(2):
        text = _PAREN_SUFFIX.sub("", text).strip()
    while True:
        stripped = MD_KIND_WORD.sub("", text)
        if stripped == text:
            break
        text = stripped
    return text if text and _API_NAME.match(text) else None



def name_from_filename(name):
    """``nf-fileapi-createfilew.md`` -> ``CreateFileW`` (sdk-api page name)."""
    match = re.match(r"^(nf|ns|ne|nc|ni|nn|nl|na)-([^-]+)-(.+)\.md$", name)
    return match.group(3) if match else None



KIND_FROM_PREFIX = {"nf": "function", "ns": "struct", "ne": "enum",
                    "nc": "callback", "ni": "other", "nn": "interface",
                    "nl": "library", "na": "attribute"}



def kind_from_filename(name):
    """``nf-fileapi-createfilew.md`` -> ``function``."""
    match = re.match(r"^(nf|ns|ne|nc|ni|nn|nl|na)-", name)
    return KIND_FROM_PREFIX.get(match.group(1)) if match else None
