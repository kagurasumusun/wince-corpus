"""Page-level statements: support constraints, .def rules, Unicode/ANSI support, CE notes, unsupported constants, OSS pages."""

import re
from ._text import (
    CE_WORDS,
    CONSTRAINT_WORDS,
    text_of,
)



# ---------------------------------------------------------------- constraints

SENTENCE = re.compile(r"[^.\n]{20,400}\.")



def oss_statements(fragment):
    """The open-source document, quoted as this reader sees it.

    One note per page.  The text is the article (everything from the first
    heading), not a summary and not a declaration extracted from a sample.
    ``pattern`` is ``page``: the whole article is the statement.
    """
    text = text_of(fragment, keep_newlines=False)
    if not text:
        return []
    return [{"text": text, "pattern": "page", "kind": "oss-statement"}]



def constraints(fragment):
    """Sentences of the page that state a Windows CE restriction.

    Only a sentence that mentions Windows CE *and* a constraint word is kept,
    and the sentence itself is quoted -- this is not a summary of the page.
    """
    plain = re.sub(r"\s+", " ", text_of(fragment, keep_newlines=False))
    out = []
    for match in SENTENCE.finditer(plain):
        sentence = match.group(0).strip()
        lowered = sentence.lower()
        if not any(word in lowered for word in CE_WORDS):
            continue
        hit = next((word for word in CONSTRAINT_WORDS if word in lowered), None)
        if not hit:
            continue
        out.append({"text": sentence, "pattern": hit})
    return out



# Topics that decide what a generated `.def` may contain.  Each key is the
# topic recorded with the sentence; the values are the words that have to be
# in the sentence for that topic to apply.  A sentence is kept verbatim --
# the rule is the document's wording, never a paraphrase of it.
DEF_RULE_TOPICS = (
    ("module-definition-file", ("module-definition", "module definition file",
                                ".def file", "def file syntax")),
    ("exports-section", ("exports section", "exports statement",
                         "exports keyword")),
    ("name-decoration", ("decorated name", "name decoration",
                         "undecorated", "decorating", "decorates")),
    ("dllexport", ("__declspec(dllexport)", "declspec(dllexport)",
                   "dllexport", "dllimport")),
    ("export-ordinal", ("export ordinal", "ordinal value", "by ordinal",
                        "ordinal number")),
    ("extern-c", ('extern "c"',)),
    # the ABI half of the same question: how the call is made, which the
    # user asked for explicitly
    ("calling-convention", ("calling convention", "__stdcall", "__cdecl",
                            "__fastcall", "winapiv")),
)

# A period that ends a sentence is followed by a space; ``.def`` is not.
_DEF_SENTENCE = re.compile(r"(?<=[.:;!?])\s+(?=[A-Z0-9\"(\u00b7])")

# Without a verb the match is a run of headings or a table of contents.
_DEF_RULE_VERB = re.compile(
    r"\b(is|are|was|were|be|been|must|can|cannot|may|might|should|will|"
    r"would|do|does|did|has|have|had|use|uses|used|requires?|required|"
    r"specif(?:y|ies|ied)|causes?|contains?|exports?|prevents?|allows?|"
    r"list(?:s|ed)?|appends?|adds?|returns?|creates?|calls?|needs?|"
    r"support(?:s|ed)?|produces?|takes?|treats?)\b")

# Cheap gate: a page without one of these strings cannot produce a rule, and
# the corpus is 121,000 pages.
_DEF_RULE_TRIGGERS = tuple(sorted(
    {word for _topic, words in () for word in words} |
    {".def", "module-definition", "module definition file", "exports section",
     "exports statement", "exports keyword", "decorated", "decoration",
     "dllexport", "dllimport", "by ordinal", "ordinal value",
     "ordinal number", "export ordinal", 'extern "c"',
     "calling convention", "__stdcall", "__cdecl", "__fastcall",
     "winapiv"}))

# Page furniture that happens to contain a topic word.
_DEF_RULE_NOISE = ("see also", "send feedback", "in this article",
                   "table of contents", "last updated on", "feedback faqs",
                   "copy markdown", "ask learn")



def def_rules(fragment):
    """Sentences stating how an export, a .def file or a decorated name works.

    These pages are the specification for the artefact this corpus exists to
    produce: what a module-definition file may list, whether the name in it
    is decorated, what ``__declspec(dllexport)`` does, when an export is
    reached by ordinal.  The sentence is quoted as printed, with the topic it
    matched; nothing is generalised into a rule the page does not state.

    Sentences are cut on ``. `` (a period *and* a space), not on every
    period, because the subject of these pages is spelled ``.def`` and a
    naive split turns one rule into two halves of nonsense.  Block structure
    is kept, so a heading does not run into the paragraph under it.
    """
    lowered_fragment = fragment.lower()
    if not any(word in lowered_fragment for word in _DEF_RULE_TRIGGERS):
        return []
    out = []
    seen = set()
    for line in text_of(fragment, keep_newlines=True).splitlines():
        line = re.sub(r"[ \t]+", " ", line).strip()
        if not line:
            continue
        for sentence in _DEF_SENTENCE.split(line):
            sentence = sentence.strip()
            lowered = sentence.lower()
            if not (20 <= len(sentence) <= 400):
                continue
            if any(noise in lowered for noise in _DEF_RULE_NOISE):
                continue
            if len(sentence.split()) < 8:
                continue
            if not _DEF_RULE_VERB.search(lowered):
                continue
            topics = [topic for topic, words in DEF_RULE_TOPICS
                      if any(word in lowered for word in words)]
            if not topics:
                continue
            if lowered in seen:
                continue
            seen.add(lowered)
            out.append({"text": sentence, "topics": topics})
    return out



# "Windows CE supports only the Unicode version of this function."  The A
# spelling of that function is not on the device, so a generated header or
# .def must not carry one.  The Win32 reference page for the same name does
# document the ANSI spelling -- that is the desktop, and this sentence is the
# document saying so.
_UNICODE_ONLY = re.compile(
    r"(?i)supports only (?:the )?unicode(?: version| strings)?")

_UNICODE_ONLY_SUBJECT = re.compile(
    r"(?i)\b(windows ce|windows embedded ce|windows mobile|pocket pc|"
    r"handheld pc|ce \.net|\.net)\b")



def unicode_support(fragment):
    """Sentences stating that only the Unicode form of this API exists.

    Returned verbatim, with the subject the sentence names.  The caller is
    expected to use this only on a Windows CE page: a sentence whose subject
    is a desktop Windows version says nothing about the device.
    """
    if "upports only" not in fragment:
        return []
    out = []
    seen = set()
    for line in text_of(fragment, keep_newlines=True).splitlines():
        line = re.sub(r"[ \t]+", " ", line).strip()
        if not line:
            continue
        for sentence in re.split(r"(?<=[.:;!?])\s+(?=[A-Z0-9\"(])", line):
            sentence = sentence.strip()
            if not (20 <= len(sentence) <= 400):
                continue
            if not _UNICODE_ONLY.search(sentence):
                continue
            subject = _UNICODE_ONLY_SUBJECT.search(sentence)
            if sentence.lower() in seen:
                continue
            seen.add(sentence.lower())
            # "...only the Unicode version of this function" is about the
            # API the page documents; "Windows CE supports only Unicode
            # strings" is about the system.  Only the first one says that
            # this name has no ANSI form, so the two are not merged.
            scope = ("this-api"
                     if re.search(r"(?i)version of (?:this|the )"
                                  r"(?: \w+)? ?"
                                  r"(function|structure|macro|message|"
                                  r"method|interface|api)", sentence)
                     or re.search(r"(?i)supports only the unicode version "
                                  r"of [A-Z_][A-Za-z0-9_]*", sentence)
                     else "system")
            out.append({"text": sentence,
                        "subject": subject.group(1) if subject else "",
                        "scope": scope,
                        "pattern": "supports only Unicode"})
    return out



# The CE 1.0 Books Online print the platform difference as one paragraph
# that starts with the label: "<p>Windows CE Notes   Cannot be used with the
# uObjectType flag OBJ_PAL.</p>".  The whole paragraph is the statement, and
# most of it is not caught by the restriction-word reader ("The only
# supported raster operations are SRCCOPY and SRCINVERT", "The file excpt.h
# has to be explicitly included in order to use this function").
_CE_NOTES = re.compile(
    r"(?is)<p>\s*Windows\s+CE\s+Notes\b[:\s]*(.*?)</p>")

# The CHM 3.0 / MSDN reference pages print it as a section label instead:
# ``<P class="label"><B>Windows CE Remarks</B></P>`` followed by the
# paragraphs that state the difference.
_CE_SECTION_LABEL = re.compile(
    r"(?is)<(p|div|h[1-6])\b[^>]*>\s*(?:<[^>]+>\s*)*"
    r"(Windows\s+CE\s+(?:Remarks|Notes))\s*(?:</[^>]+>\s*)*</\1>")

_CE_SECTION_END = re.compile(
    r"(?is)<p\b[^>]*class\s*=\s*[\"\']?(?:label|clsRef|blue)|<h[1-6]\b|"
    r"<p>\s*(?:<[^>]+>\s*)*(?:See Also|Requirements|Return Values?|"
    r"Parameters|Remarks|Syntax)\s*(?:</[^>]+>)*\s*</p>")



def ce_notes(fragment):
    """The page's own ``Windows CE Notes``/``Windows CE Remarks`` block.

    Two shapes: the CE 1.0 Books Online print the label and the text in one
    paragraph; the CHM 3.0 and MSDN reference pages print the label as a
    section and the text in the paragraphs under it.  Both are quoted as
    printed and neither is summarised.
    """
    out = []
    for match in _CE_SECTION_LABEL.finditer(fragment):
        rest = fragment[match.end():match.end() + 4000]
        stop = _CE_SECTION_END.search(rest)
        block = rest[:stop.start()] if stop else rest
        text = re.sub(r"\s+", " ",
                      text_of(block, keep_newlines=False)).strip()
        if len(text) < 3:
            continue
        out.append({"text": text[:1200], "pattern": match.group(2)})
    for match in _CE_NOTES.finditer(fragment):
        text = re.sub(r"\s+", " ",
                      text_of(match.group(1), keep_newlines=False)).strip()
        if len(text) < 3:
            continue
        out.append({"text": text, "pattern": "Windows CE Notes"})
    return out



# "Windows CE does not support the following nIndex values: SM_ARRANGE
# SM_CXMINIMIZED ...".  The names after the colon are a printed list of
# constants that the device does not accept.  A generator that emits a
# header from the Win32 reference would define them all; the CE page says
# which ones are not there.
_UNSUPPORTED_INTRO = re.compile(
    r"(?is)(Windows (?:Embedded )?CE[^.<>]{0,60}?)?\b"
    r"(does not support|do not support|are not supported(?: by)?|"
    r"supports only)\b([^.:<>]{0,60}?)\s*:")

# A constant is an all-caps identifier with an underscore or a digit in it.
# A bare all-caps word (NULL, TRUE, GDI) is not taken: too many of them are
# prose.  Nothing here is renamed, completed or expanded.
_CONSTANT_TOKEN = re.compile(r"^[A-Z][A-Z0-9]*(?:_[A-Z0-9]+)+$")

_TOKEN = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")



def unsupported_constants(fragment):
    """Constant names a page lists after "does not support the following ...".

    Returns one record per list, with the sentence that introduces it and
    the names as printed.  The list ends at the first word that is not a
    constant: these pages print the names as a run of list items, so the
    first ordinary word is the end of the list.
    """
    plain = re.sub(r"\s+", " ", text_of(fragment, keep_newlines=False))
    out = []
    for match in _UNSUPPORTED_INTRO.finditer(plain):
        # the sentence the list hangs off, so that "For Windows CE versions
        # 2.10 and later, SHGetFileInfo does not support ..." counts as a
        # Windows CE statement even though the subject is the function
        begin = plain.rfind(". ", max(0, match.start() - 300), match.start())
        begin = begin + 2 if begin != -1 else max(0, match.start() - 300)
        intro = re.sub(r"\s+", " ", plain[begin:match.end()]).strip()
        if not re.search(r"(?i)windows (?:embedded )?ce", intro):
            continue
        names = []
        for token in _TOKEN.finditer(plain, match.end(),
                                     min(len(plain), match.end() + 1500)):
            if _CONSTANT_TOKEN.match(token.group(0)):
                if token.group(0) not in names:
                    names.append(token.group(0))
                continue
            break
        if len(names) < 2:
            continue
        out.append({"intro": intro[:300], "names": names,
                    "negated": match.group(2).lower() != "supports only"})
    return out
