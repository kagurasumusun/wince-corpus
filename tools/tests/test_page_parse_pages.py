"""Golden-page tests: real corpus pages through the kbgen extractor.

These pin *behaviour on representative page formats*, one assertion per
format fact a reader is supposed to find.  When a parser fix lands it
adds its page here first (red), then fixes the reader (green).  Pages are
referenced in the corpus, not copied -- the corpus is the fixture.
"""
import os
import sys
import unittest

_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(_ROOT, "tools"))

from kbgen import extract  # noqa: E402

_INDEX = None


def _fact(path_suffix):
    global _INDEX
    if _INDEX is None:
        extract.init_worker(extract.load_catalogs(
            os.path.join(_ROOT, "data", "catalogs")))
        _INDEX = {row[2]: row for row in extract.read_index(
            os.path.join(_ROOT, "data", "index", "INDEX.tsv"), None)}
    for path, row in _INDEX.items():
        if path.endswith(path_suffix):
            return extract.parse_page(row)
    raise AssertionError(f"page not indexed: {path_suffix}")


def _syntax(fact):
    return [d for d in fact["declarations"] if d["role"] == "syntax"]


class NameRowAttributionTests(unittest.TestCase):
    """windows-data-types.md lists ~176 typedefs row by row; each row's
    declaration declares its own row name (they must never be attributed
    to a page-level 'first subject')."""

    @classmethod
    def setUpClass(cls):
        cls.fact = _fact("windows-data-types.md")

    def test_every_listed_decl_declares_its_row_name(self):
        decls = self.fact["declarations"]
        self.assertGreater(len(decls), 100)
        for d in decls:
            self.assertTrue(d.get("declares"), d["text"][:60])
            # (textual containment is *not* asserted: the page itself
            # prints e.g. `typedef HANDLE WINSTA;` in the HWINSTA row --
            # quoted verbatim, associated by the row.)

    def test_bool_and_byte(self):
        by_name = {d["declares"]: d["text"] for d in self.fact["declarations"]}
        self.assertEqual(by_name["BOOL"], "typedef int BOOL;")
        self.assertEqual(by_name["BYTE"], "typedef unsigned char BYTE;")


class MvbTablePrototypeTests(unittest.TestCase):
    """CE 1.0 Books Online (mvb/windows-ce-1.0/PEGSDK) prints the prototype
    as a two-column table (code line | // comment); the first row's
    comment is the header file."""

    def test_function_page(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AB104C.html")  # CommandBar_GetMenu
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1)
        self.assertIn("HMENU CommandBar_GetMenu(", syntax[0]["text"])
        self.assertIn("HWND hwndCB,", syntax[0]["text"])
        self.assertTrue(syntax[0]["text"].rstrip().endswith(");"))
        headers = [r for r in fact["requirements"] if r["field"] == "header"]
        self.assertTrue(any("commctrl.h" in r["value"] for r in headers),
                        headers)

    def test_prototype_without_header_comment(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AA20N.html")  # TransportCount
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1)
        self.assertIn("BOOL TransportCount(", syntax[0]["text"])
        self.assertNotIn("The TransportCount routine", syntax[0]["text"])

    def test_typedef_struct_split_lines(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AA57L.html")  # PFF_CONVERTINFO
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1, [d["text"][:60] for d in syntax])
        self.assertIn("typedef struct tagPFF_CONVERTINFO", syntax[0]["text"])
        self.assertIn("HWND hwndParent;", syntax[0]["text"])
        self.assertTrue(syntax[0]["text"].rstrip().endswith("PFF_CONVERTINFO;"))
        self.assertIn("hwndParent", " ".join(syntax[0]["members"]))

    def test_corresponding_macro(self):
        fact = _fact("mvb/windows-ce-1.0/PEGSDK/AD73Q.html")  # TVM_SETIMAGELIST
        named = [d for d in fact["declarations"]
                 if d.get("declares") == "TreeView_SetImageList"]
        self.assertEqual(len(named), 1, fact["declarations"])
        self.assertIn("HIMAGELIST TreeView_SetImageList(", named[0]["text"])


class MarkdownMessagePageTests(unittest.TestCase):
    """sdk-api message pages: 'WM_GETICON message (Winuser.h)' must name
    WM_GETICON as the subject or its header requirement floats free."""

    def test_wm_geticon(self):
        fact = _fact("win32/common/wm-geticon.md")
        self.assertEqual(fact.get("primary_name"), "WM_GETICON")
        headers = [r for r in fact["requirements"] if r["field"] == "header"]
        self.assertTrue(any("Winuser.h" in r["value"] for r in headers),
                        headers)
        defines = [d for d in fact["declarations"]
                   if d["text"].startswith("#define WM_GETICON")]
        self.assertEqual(len(defines), 1)


if __name__ == "__main__":
    unittest.main()


class KindOfDeclarationTests(unittest.TestCase):
    """A declaration's kind comes from what it declares, not from type
    words its parameters happen to mention."""

    def check(self, text, kind):
        import page_parse
        self.assertEqual(page_parse._kind_of(text), kind, text[:60])

    def test_prototypes_mentioning_types_are_functions(self):
        self.check("SOCKET accept(SOCKET s, struct sockaddr *addr,"
                   " int *addrlen);", "function")
        self.check("HRESULT GetStatus(enum ExchangeClientRequestStatus"
                   "* pStatus);", "function")
        self.check("DWORD GetIfEntry(PMIB_IFROW pIfRow "
                   "// pointer to interface entry );", "function")

    def test_functions_returning_tagged_types_are_functions(self):
        self.check("struct hostent *gethostbyaddr(const char *addr,"
                   " int len, int type);", "function")
        self.check("enum StreamControlState CheckStreamState("
                   " IMediaSample *pSample);", "function")
        self.check("struct berval** ldap_get_values_len("
                   " LDAP* ExternalHandle, LDAPMessage* Message,"
                   " UNICODE PTCHAR attr );", "function")
        # ...while a body or a bare forward declaration still is not:
        self.check("struct _STATSTG { DWORD type; };", "struct")
        self.check("struct _OPAQUE;", "struct")

    def test_bodies_and_typedefs(self):
        self.check("typedef struct tagPOINT { LONG x; LONG y; } POINT;",
                   "struct")
        self.check("typedef struct FARSTRUCT tagDISPPARAMS { int cArgs; }"
                   " DISPPARAMS;", "struct")
        self.check("typedef enum _A { A1, A2 } A;", "enum")
        self.check("enum { TL_KEEPALIVE = 0x1 };", "enum")
        self.check("typedef struct _REPLOBJ FAR *HREPLOBJ;", "typedef")
        self.check("#define RASPPPIPV6 struct tagRASPPPIPV6 { DWORD d; }",
                   "struct")
        self.check("typedef int (*CB)(struct _X *p);", "callback")


class CallingConventionTests(unittest.TestCase):
    """Every printed spelling is recorded; silence stays silence."""

    def check(self, text, convention):
        import page_parse
        self.assertEqual(page_parse._calling_convention(text), convention,
                         text[:60])

    def test_spelling_families(self):
        self.check("BOOL WINAPI Foo(void);", "winapi")
        self.check("INT WSAAPI WSAEnum(void);", "winapi")
        self.check("SNMPAPI SnmpUtilAsnAnyCpy(AsnAny *a, AsnAny *b);",
                   "winapi")
        self.check("unsigned cdecl _CountLeadingZeros(long x);", "cdecl")
        self.check("virtual HRESULT STDMETHODCALLTYPE Execute(void *p);",
                   "stdcall")
        self.check("STDMETHOD(Close) (THIS);", "stdcall")
        self.check("STDMETHODIMP C::Run(void);", "stdcall")
        self.check("STDAPI_(int) ReadInt(IStream *p, HRESULT &hr);",
                   "stdcall")
        self.check("void PlainSymbol(int x);", None)


class PrintedTypoSyntaxTests(unittest.TestCase):
    """A Syntax block the archive printed with a typo'd terminator is
    still the page's declaration: quoted verbatim, never repaired."""

    def test_get_sip_message(self):
        fact = _fact("ee500689(v=winembedded.60).html")
        syntax = _syntax(fact)
        self.assertEqual(len(syntax), 1)
        self.assertIn("HRESULT GetSIPMessage(", syntax[0]["text"])
        self.assertTrue(syntax[0]["text"].rstrip().endswith("}"))


class ManagedSubjectTests(unittest.TestCase):
    """A Learn managed page's subject is Namespace.Type(.Member), and
    its Assembly line is a requirement on that subject."""

    @classmethod
    def setUpClass(cls):
        cls.fact = _fact("dotnet-compact-framework/0waatex7(v=vs.102).html")

    def test_managed_subject(self):
        self.assertEqual(self.fact["layer"], "dotnet")
        subs = self.fact["subjects"]
        self.assertEqual(len(subs), 1)
        self.assertEqual(subs[0]["name"], "System.Uri.Equality")
        self.assertEqual(subs[0]["kind"], "operator")
        self.assertEqual(self.fact["primary_name"], "System.Uri.Equality")

    def test_assembly_requirement(self):
        asm = [r for r in self.fact["requirements"]
               if r["field"] == "assembly"]
        self.assertTrue(asm)
        self.assertIn("System.Http.dll", asm[0]["value"])


class RequiredHeaderTableTests(unittest.TestCase):
    """The CE CRT reference files each routine under its header with a
    ``Routine | Required Header`` (3rd ed.: ``+ Architecture``) table;
    no reader claimed that shape before 2026-10-21, so those pages'
    own statements produced no header evidence at all."""

    def _listed_headers(self, suffix):
        fact = _fact(suffix)
        return {x["name"]: x["value"] for x in fact["listed_requirements"]
                if x["field"] == "header"}

    def test_function_required_header(self):
        self.assertEqual(
            self._listed_headers("jan-2002/wcecrt/htm/crt3_47.html"),
            {"_wfreopen": "<stdio.h>"})

    def test_routine_required_header_with_architecture(self):
        self.assertEqual(
            self._listed_headers(
                "02f39be5-6640-48ca-859a-86288b66f941.html"),
            {"_prefetch": "<cmnintrin.h>"})
