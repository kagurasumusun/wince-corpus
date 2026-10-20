"""The Syntax-block declaration reader of HTML pages."""

import re
from ._code import (
    PARA,
    PRE,
    _EXAMPLE_CUE,
    _EXAMPLE_SECTION,
    _calling_convention,
    _is_macro_block,
    _kind_of,
    _looks_like_declaration,
    _members,
    _mvb_line_prototypes,
    _mvb_syntax_tables,
    _spacing,
    abi_flags,
    is_implementation,
    member_type,
)
from ._entities import (
    _declared_member,
    documented_title_names,
    operator_token,
)
from ._text import (
    HEADING,
    _p_class_sections,
    labeled_region,
    region,
    text_of,
)



def _section_title_after(fragment, pos, window=800):
    """The first heading or section label after ``pos``, lower-cased."""
    titles = []
    for match in HEADING.finditer(fragment, pos, pos + window):
        titles.append((match.start(),
                       text_of(match.group(0), keep_newlines=False)
                       .strip(": ").lower()))
    for match in re.finditer(
            r"(?is)<p\b[^>]*\bclass\s*=\s*[\"']label[\"'][^>]*>\s*"
            r"(?:<[^>]+>\s*)*([^<]{2,40})",
            fragment[pos:pos + window]):
        titles.append((pos + match.start(),
                       re.sub(r"\s+", " ", match.group(1)).strip(": ").lower()))
    for start, _end, title in _p_class_sections(fragment, pos, pos + window):
        titles.append((start, title))
    if not titles:
        return ""
    titles.sort()
    return titles[0][1]



_PROTO_AFTER = ("parameters", "parameter", "members", "elements", "constants",
                "c/c++ parameters", "return values", "return value",
                "enumerators", "enumerator values")

_NOT_PROTO_BEFORE = ("parameters", "return values", "return value", "remarks",
                     "general remarks", "script syntax", "script parameters",
                     "script return value", "example", "examples",
                     "code example", "sample", "samples", "example code")

# A resource script states the keyword in uppercase (``IDD_ABOUT DIALOG``,
# a line that starts with ``MENU``).  A C parameter named ``dialog`` is not
# that statement; a case-insensitive match used to reject
# ``showModalDialog``.
_RESOURCE_GRAMMAR = re.compile(
    r"(?m)^[ \t]*(?:[A-Za-z_][\w]*\s+)?"
    r"(?:ACCELERATORS|DIALOGEX|DIALOG|STRINGTABLE|RCDATA|VERSIONINFO|MENU)\b"
    r"|^\s*POPUP\b|\[\[")

_VB_BLOCK = re.compile(
    r"(?i)^\s*(?:dim |sub |function |private |public |end |select )")

# Compact Framework pages print JScript as ``protected abstract function
# Dispose( disposing : boolean )``.  That is not a C prototype.  A comment
# that merely says "callback function" is not this form.
_JSCRIPT_FUNCTION = re.compile(
    r"(?im)^(?!\s*(?://|/\*|\*))\s*"
    r"(?:(?:public|private|protected|internal|override|virtual|abstract|"
    r"sealed|static)\s+)*function\s+[A-Za-z_]")

_SIGNATURE = re.compile(
    r"(?is)^(?:typedef\s+)?(?:enum\s+|struct\s+|union\s+)?"
    r"[A-Za-z_][\w\s\*]*\s+[*&]*\s*"
    r"[A-Za-z_][\w]*(?:::[A-Za-z_][\w]*)?\s*\(")

# Function pointer typedef: ``DWORD (APIENTRY *PDD_CREATESURFACEEX)(...)``
# or ``typedef DWORD (*LPFN)(...)``
_FUNC_PTR_TYPEDEF = re.compile(
    r"(?is)^(?:typedef\s+)?[A-Za-z_][\w\s\*]*\(\s*(?:\w+\s+)?\*\s*"
    r"[A-Za-z_][\w]*\s*\)\s*\(")

# Constructor-style declaration: ``ClassName();`` (single line, no type prefix)
_CONSTRUCTOR_DECL = re.compile(
    r"(?i)^[A-Za-z_][\w]*(?:::[A-Za-z_][\w]*)?\s*\(\s*\)\s*;?\s*$")

# ``typedef CComAutoCriticalSection AutoCriticalSection`` is the declaration.
# The page omitted the semicolon.  A sentence that starts with typedef is not
# this form: the whole paragraph has to be the two identifiers.
_TYPEDEF_ALIAS = re.compile(
    r"(?i)^typedef\s+[A-Za-z_][\w:<>]*\s+[A-Za-z_][\w:]*\s*;?\s*$")



def _prototype_name(text):
    """The identifier immediately before the first call parenthesis."""
    cleaned = re.sub(r"/\*.*?\*/", " ", text or "", flags=re.S)
    cleaned = re.sub(r"//.*?$", " ", cleaned, flags=re.M)
    match = re.search(r"([A-Za-z_][A-Za-z0-9_]*)\s*\(", cleaned)
    return match.group(1) if match else ""



def _slot_belongs_to_title(text, page_title):
    """A prototype slot is this page's declaration only when the title names it.

    A title that is not one API name (``IContact Properties``) has no entity,
    so the quote stays unattached.  A title that names an API does not adopt
    a different function printed in the same slot (``CryptDuplicateHash`` on
    the ``CryptDuplicateKey`` page, ``WindowProc`` on ``WM_NCPAINT``).
    A title that lists several names (``strcpy, wcscpy``) or prints
    ``Interface::Member Method`` names those APIs; the slot has to print
    one of them.
    """
    names = documented_title_names(page_title)
    if not names:
        return True
    cleaned = re.sub(r"/\*.*?\*/", " ", text or "", flags=re.S)
    cleaned = re.sub(r"//.*?$", " ", cleaned, flags=re.M)
    return any(name_in_syntax(name, cleaned) for name in names)



def _fragment_defines(fragment, name):
    """True when this page prints ``#define <name>``."""
    if not name:
        return False
    return re.search(r"#\s*define\s+" + re.escape(name) + r"\b",
                     fragment or "") is not None



def _is_documented_prototype(text):
    """A block the page put in the declaration slot, not a call or a script.

    Resource-compiler grammar (``DIALOG``, ``[[optional]]``) and Visual Basic
    are not C prototypes.  A default argument (``tStart = 0``) still is.
    """
    body = (text or "").strip()
    if not body or _VB_BLOCK.match(body) or _RESOURCE_GRAMMAR.search(body):
        return False
    if _JSCRIPT_FUNCTION.search(body):
        return False
    if re.match(r"(?i)(?:if|for|while|switch|return|sizeof|do|else|case)\b",
                body):
        return False
    lowered = body.lower()
    if lowered.startswith(("typedef enum", "typedef struct", "typedef union",
                           "enum ", "struct ", "union ")):
        return True
    # A type page prints its typedef line above the enum/struct body
    # (VARTYPE: "typedef unsigned short VARTYPE;" then "enum VARENUM {").
    # That composite IS the declaration; the sample guard below still
    # demotes blocks whose name is not the page's own.
    if lowered.startswith("typedef ") and "{" in body and \
            ";" in body.split("{", 1)[0]:
        return True
    lines = [line.strip() for line in body.splitlines()
             if line.strip() and not line.strip().startswith(("/*", "*", "//"))]
    # A long parameter list is still the declaration.  A long block with a
    # brace is a body, not the prototype the page put in the slot.
    if len(lines) > 8 and ("{" in body or not (
            _SIGNATURE.match(body) and ";" in body)):
        return False
    # Check standard signature, function pointer typedef, or constructor
    return bool(_SIGNATURE.match(body) or _FUNC_PTR_TYPEDEF.match(body) or
                _CONSTRUCTOR_DECL.match(body)) and (";" in body or len(lines) <= 3)



def _section_title_before(fragment, pos):
    """The last heading or section label before ``pos``, lower-cased."""
    titles = []
    for match in HEADING.finditer(fragment, 0, pos):
        titles.append((match.start(),
                       text_of(match.group(0), keep_newlines=False)
                       .strip(": ").lower()))
    for match in re.finditer(
            r"(?is)<p\b[^>]*\bclass\s*=\s*[\"']label[\"'][^>]*>\s*"
            r"(?:<[^>]+>\s*)*([^<]{2,40})", fragment[:pos]):
        titles.append((match.start(),
                       re.sub(r"\s+", " ", match.group(1)).strip(": ").lower()))
    for start, _end, title in _p_class_sections(fragment, 0, pos):
        titles.append((start, title))
    if not titles:
        return ""
    titles.sort()
    return titles[-1][1]



def _example_cued(fragment, pos, window=400):
    """True when the prose before position ``pos`` introduces example code."""
    before = fragment[max(0, pos - window):pos]
    # never look past the previous heading
    cut = re.split(r"(?is)<h[1-6][^>]*>", before)
    before = cut[-1] if cut else before
    plain = text_of(before, keep_newlines=False)
    return bool(_EXAMPLE_CUE.search(plain))



def _syntax_paragraph(inner, strict):
    """The declaration text of a Syntax paragraph, or None.

    An unclosed ``<p>`` runs into the member ``<dl>``.  The declaration is
    the text before that list, when that text is itself a prototype.  A
    clsRef/blue Syntax paragraph (``strict``) is kept only when it is a C
    prototype or a typedef alias.  ``SINK_ENTRY(id, dispid, fn)`` and
    ``Len(<string>)`` are calling forms the page did not print as C, and
    they are not turned into one.
    """
    cut_html = re.split(
        r"(?i)<(?:dl|table|h[1-6]|ul|ol|pre)\b", inner, maxsplit=1)[0]
    cut = text_of(cut_html).strip()
    full = text_of(inner).strip()
    if _TYPEDEF_ALIAS.match(cut):
        return cut, False
    if _is_documented_prototype(cut) and not is_implementation(cut) \
            and (strict or cut != full):
        return cut, False
    if strict:
        return None
    if _looks_like_declaration(full) and re.search(r"[;{()]", full):
        return full, is_implementation(full)
    return None



def declarations(fragment, page_title=None):
    """Syntax blocks of one page, with their markup and the raw text."""
    out = []
    # ``C/C++ Syntax`` is the declaration on the dual Script/C++ template.
    # ``Script Syntax`` is Visual Basic and is not read as a C declaration.
    # ``Syntax 1`` / command-line ``syntax`` headings are grammar or a tool
    # invocation, not this heading, so they are not listed.
    syntax_region = region(fragment, "syntax", "declaration", "prototype",
                           "c/c++ syntax", "c/c++syntax")
    for match in PRE.finditer(fragment):
        attrs, inner = match.group(1), match.group(2)
        text = text_of(inner)
        if not _looks_like_declaration(text):
            # Under an explicit Syntax heading the page asserts the block
            # is the declaration; a block the archive printed with a
            # typo'd terminator ('HRESULT GetSIPMessage( ... }' for
            # ');') is still quoted -- verbatim, never repaired.
            if not (syntax_region and syntax_region.find(inner[:200]) != -1
                    and 8 <= len(text) <= 4000
                    and re.search(r"[A-Za-z_]\w*\s*\(", text)):
                continue
        implementation = is_implementation(text)
        macro_block = _is_macro_block(text)
        role = "example" if implementation else (
            "syntax" if (syntax_region and
                         syntax_region.find(inner[:200]) != -1) else "example")
        # A block that is only #define/#pragma lines is the declaration of
        # those macros, unless the page put it under an Example heading.
        # Templates without a Syntax heading were leaving these as examples,
        # so a header generator never saw them.
        if role == "example" and macro_block and not implementation:
            title = _section_title_before(fragment, match.start())
            if title not in _EXAMPLE_SECTION and not title.startswith("example") \
                    and not _example_cued(fragment, match.start()):
                role = "syntax"
        if role == "example" and not implementation and not syntax_region \
                and not _example_cued(fragment, match.start()):
            # Templates without a Syntax heading put the prototype between the
            # description and the Parameters/Remarks heading; a page with a
            # single code block there is documenting a declaration, not
            # quoting an example.
            before = fragment[:match.start()]
            tail = text_of(before[-200:], keep_newlines=False)
            following = fragment[match.end():match.end() + 400]
            head = re.search(r"(?is)<h[2-6][^>]*>\s*([^<]{2,30})", following)
            nxt = head.group(1).strip().lower() if head else ""
            if len(PRE.findall(fragment)) == 1 and \
                    tail and nxt in ("parameters", "return values", "remarks",
                                     "members", "elements", "constants",
                                     "enumerators", "see also",
                                     "requirements", ""):
                role = "syntax"
            # A page with an Example pre as well still prints the prototype
            # immediately before Parameters / Members / Elements.  That slot
            # is the declaration.  A block already under Example, or one that
            # follows Parameters, is a call, not this slot.  Resource-compiler
            # grammar and Visual Basic stay out.
            if role == "example" and _is_documented_prototype(text):
                prev = _section_title_before(fragment, match.start())
                nxt_any = _section_title_after(fragment, match.end())
                if nxt_any in _PROTO_AFTER and prev not in _NOT_PROTO_BEFORE \
                        and not prev.startswith("example") \
                        and not prev.startswith("sample"):
                    role = "syntax"
                    # A page that also prints ``#define Name`` is documenting a
                    # macro.  The prototype-shaped line is the calling form,
                    # not a second declaration that should replace the macro.
                    # A prototype of a different name than the title is not
                    # this page's declaration.
                    body = text.lstrip().lower()
                    if body.startswith(("typedef enum", "typedef struct",
                                        "typedef union", "enum ", "struct ",
                                        "union ")):
                        pass
                    elif not _slot_belongs_to_title(text, page_title) \
                            or _fragment_defines(fragment, _prototype_name(text)):
                        role = "example"
        # Print language, when the page marks it (``lang-csharp`` on the
        # <pre> or its opening <code>): managed pages print one signature
        # per language, so the resolver must compare like with like.
        lang_m = re.search(r'class\s*=\s*"[^"]*?\b(lang-[a-z+#]+)',
                           attrs + inner[:200], re.I)
        out.append({
            "text": text,
            "markup": (lang_m.group(1).lower() if lang_m else
                       (re.search(r'class\s*=\s*"([^"]+)"', attrs, re.I) or
                        [None, "pre"])[1]
                       if 'class=' in attrs.lower() else "pre"),
            "spacing": _spacing(text),
            "calling_convention": _calling_convention(text),
            "role": role,
            "kind": "macro" if macro_block else _kind_of(text),
            "members": _members(text),
            "member_types": [member_type(line) for line in _members(text)],
            "abi_flags": abi_flags(text),
            "implementation": implementation,
        })
    if not any(d["role"] == "syntax" for d in out):
        # An ``<h*>`` Syntax region keeps the looser paragraph rule.  A
        # clsRef/blue Syntax region is used only when there is no heading,
        # and only a C prototype or a typedef alias is the declaration.
        blocks = []
        if syntax_region:
            blocks.append((syntax_region, False))
        labeled = labeled_region(
            fragment, "syntax", "declaration", "prototype",
            "c/c++ syntax", "c/c++syntax")
        if labeled:
            blocks.append((labeled, True))
        for block, strict in blocks:
            taken = None
            for para in PARA.finditer(block):
                taken = _syntax_paragraph(para.group(1), strict)
                if taken:
                    break
            if not taken:
                continue
            text, implementation = taken
            out.insert(0, {
                "text": text, "markup": "paragraph",
                "spacing": _spacing(text),
                "calling_convention": _calling_convention(text),
                "role": "example" if implementation else "syntax",
                "kind": _kind_of(text), "members": _members(text),
                "member_types": [member_type(line)
                                 for line in _members(text)],
                "abi_flags": abi_flags(text),
                "implementation": implementation,
            })
            break
    # MVB Books Online prototypes (CE 1.0/2.0): a code-line/``//``-comment
    # table, or one code line per block.  The shapes are template-specific
    # enough to read directly; a page that already yielded a syntax block
    # keeps it, except that a "corresponding macro" prototype is always
    # recorded -- attributed to the macro it declares, never to the
    # page's subject (a message).
    have_syntax = any(d["role"] == "syntax" for d in out)
    mvb_texts = []
    if not have_syntax:
        mvb_texts += [("\n".join(lines), "mvb-table", False)
                      for lines, _header in _mvb_syntax_tables(fragment)]
    if any(marker in fragment for marker in
           ('class="code"', "Corresponding macro", "typedef struct",
            "typedef enum", "typedef union")):
        mvb_texts += [("\n".join(lines), "mvb-lines", macro_cue)
                      for lines, macro_cue in _mvb_line_prototypes(fragment)
                      if macro_cue or not have_syntax]
    for text, markup, macro_cue in mvb_texts:
        if any(d["text"] == text for d in out):
            continue
        if not _looks_like_declaration(text) or is_implementation(text):
            continue
        decl = {
            "text": text, "markup": markup,
            "spacing": _spacing(text),
            "calling_convention": _calling_convention(text),
            "role": "syntax",
            "kind": _kind_of(text), "members": _members(text),
            "member_types": [member_type(line)
                             for line in _members(text)],
            "abi_flags": abi_flags(text),
            "implementation": False,
        }
        name = _prototype_name(text) or _typedef_tail_name(text)
        if name:
            decl["declares"] = name
        out.append(decl)
    return out


_TYPEDEF_TAIL = re.compile(r"}\s*([A-Za-z_]\w*)\s*;\s*$")


def _typedef_tail_name(text):
    """The alias of a ``typedef struct {...} Name;`` block, if any."""
    match = _TYPEDEF_TAIL.search(text.rstrip())
    return match.group(1) if match else None



def _syntax_declares_operator(name, text):
    """True when ``text`` declares the operator the title prints.

    ``BOOL operator !( );`` declares ``operator !``.  ``operator !=`` does
    not.  A mention with no semicolon is not a declaration.
    """
    token = operator_token(name)
    body = text or ""
    # Some pages omit the semicolon (``T** operator &( VOID )``).  A list of
    # overloads has no brace.  A block with a brace is a body, not this
    # declaration.
    lines = [line for line in body.splitlines() if line.strip()]
    if not token or "{" in body or len(lines) > 24:
        return False
    if ";" not in body and (len(lines) > 4 or "(" not in body):
        return False
    compact = re.sub(r"\s+", "", token)
    for match in re.finditer(r"(?i)\boperator\s*([^\n;]+)", body):
        found = match.group(1).strip()
        found = re.split(r"\s*\(", found, maxsplit=1)[0].strip()
        if re.sub(r"\s+", "", found) == compact:
            return True
    return False



def syntax_declares_name(name, text):
    """True when ``text`` is a declaration of ``name``, not a mention of it.

    ``recordset.{MoveFirst | MoveNext}`` mentions the name and is not a
    declaration.  ``FILE *stdin;`` and ``HRESULT CreateTimer(...)`` are.
    ``BOOL operator !( );`` declares ``CComPtr::operator !``.
    ``~CBasePropertyPage(void);`` declares that destructor.
    """
    if operator_token(name):
        return _syntax_declares_operator(name, text)
    if "::" in (name or "") and name.rsplit("::", 1)[-1].startswith("~"):
        member = name.rsplit("::", 1)[-1]
        return (";" in (text or "") and re.search(
            r"(?<![A-Za-z0-9_])" + re.escape(member) + r"\s*\(",
            text or "") is not None)
    if not name_in_syntax(name, text):
        return False
    body = (text or "").strip()
    if _is_documented_prototype(body):
        return True
    if re.match(r"(?is)(?:typedef\s+)?(?:struct|enum|union)\b", body):
        return True
    if re.match(r"(?m)\s*#\s*define\b", body):
        return True
    member = _declared_member(name)
    return re.search(
        r"(?i)(?<![A-Za-z0-9_])" + re.escape(member) + r"\s*;",
        body) is not None



def name_in_syntax(name, text):
    """True when ``text`` prints ``name`` (or, for a property, its get/put).

    ``IHTMLElement3::onactivate`` is documented as ``get_onactivate``.
    ``MSMQMessage.Priority`` is documented as ``get_Priority``.  A
    comma-list name has to be that identifier, not a substring of another.
    """
    member = _declared_member(name)
    if not member:
        return False
    qualified = member != (name or "")
    if qualified:
        pattern = (r"(?i)(?<![A-Za-z0-9_])(?:get_|put_)?"
                   + re.escape(member) + r"(?![A-Za-z0-9_])")
    else:
        pattern = (r"(?i)(?<![A-Za-z0-9_])" + re.escape(member)
                   + r"(?![A-Za-z0-9_])")
    return re.search(pattern, text or "") is not None
