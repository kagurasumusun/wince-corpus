/* Oaidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 118 constants, 151 declarations, 15 outlines, 0 base types, 0 extra macros, 130 extra decls
 */
#ifndef _OAIDL_
#define _OAIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DISPID_COLLECT (-8)
#define DISPID_CONSTRUCTOR (-6)
#define DISPID_DESTRUCTOR (-7)
#define DISPID_EVALUATE (-5)
#define DISPID_NEWENUM (-4)
#define DISPID_PROPERTYPUT (-3)
#define DISPID_UNKNOWN (-1)
#define DISPID_VALUE (0)
#define FADF_CREATEVECTOR (0x2000)
#define FADF_DATADELETED (0x1000)
#define FADF_HAVEIID 0x0040
#define FADF_HAVEVARTYPE 0x0080
#define FADF_RECORD 0x0020
#define IDLFLAG_FIN PARAMFLAG_FIN
#define IDLFLAG_FLCID PARAMFLAG_FLCID
#define IDLFLAG_FOUT PARAMFLAG_FOUT
#define IDLFLAG_FRETVAL PARAMFLAG_FRETVAL
#define IDLFLAG_NONE PARAMFLAG_NONE
#define PARAMFLAG_FHASDEFAULT (32)
#define PARAMFLAG_FIN (1)
#define PARAMFLAG_FLCID (4)
#define PARAMFLAG_FOPT (16)
#define PARAMFLAG_FOUT (2)
#define PARAMFLAG_FRETVAL (8)
#define PARAMFLAG_NONE (0)
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define CC_CDECL 1
#define CC_MACPASCAL 3
#define CC_MAX 9
#define CC_MPWCDECL 7
#define CC_MPWPASCAL 8
#define CC_MSCPASCAL 2
#define CC_RESERVED 5
#define CC_STDCALL 4
#define CC_SYSCALL 6
#define FADF_AUTO 0x0001
#define FADF_BSTR 0x0100
#define FADF_DISPATCH 0x0400
#define FADF_EMBEDDED 0x0004
#define FADF_FIXEDSIZE 0x0010
#define FADF_RESERVED 0xF0E8
#define FADF_STATIC 0x0002
#define FADF_UNKNOWN 0x0200
#define FADF_VARIANT 0x0800
#define TKIND_ENUM 0
#define VT_BOOL 11
#define VT_BSTR 8
#define VT_CY 6
#define VT_DATE 7
#define VT_DISPATCH 9
#define VT_EMPTY 0
#define VT_ERROR 10
#define VT_I2 2
#define VT_I4 3
#define VT_NULL 1
#define VT_R4 4
#define VT_R8 5
#define VT_UI1 17
#define VT_UNKNOWN 13
#define VT_VARIANT 12
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define FUNCFLAG_FBINDABLE 0x4
#define FUNCFLAG_FDEFAULTBIND 0x20
#define FUNCFLAG_FDEFAULTCOLLELEM 0x100
#define FUNCFLAG_FDISPLAYBIND 0x10
#define FUNCFLAG_FHIDDEN 0x40
#define FUNCFLAG_FIMMEDIATEBIND 0x1000
#define FUNCFLAG_FNONBROWSABLE 0x400
#define FUNCFLAG_FREPLACEABLE 0x800
#define FUNCFLAG_FREQUESTEDIT 0x8
#define FUNCFLAG_FRESTRICTED 0x1
#define FUNCFLAG_FSOURCE 0x2
#define FUNCFLAG_FUIDEFAULT 0x200
#define FUNCFLAG_FUSESGETLASTERROR 0x80
#define IMPLTYPEFLAG_FDEFAULT 0x1
#define IMPLTYPEFLAG_FDEFAULTVTABLE 0x8
#define IMPLTYPEFLAG_FRESTRICTED 0x4
#define IMPLTYPEFLAG_FSOURCE 0x2
#define SYS_WIN16 0
#define TYPEFLAG_FAGGREGATABLE 0x400
#define TYPEFLAG_FAPPOBJECT 0x01
#define TYPEFLAG_FCANCREATE 0x02
#define TYPEFLAG_FCONTROL 0x20
#define TYPEFLAG_FDISPATCHABLE 0x1000
#define TYPEFLAG_FDUAL 0x40
#define TYPEFLAG_FHIDDEN 0x10
#define TYPEFLAG_FLICENSED 0x04
#define TYPEFLAG_FNONEXTENSIBLE 0x80
#define TYPEFLAG_FOLEAUTOMATION 0x100
#define TYPEFLAG_FPREDECLID 0x08
#define TYPEFLAG_FREPLACEABLE 0x800
#define TYPEFLAG_FRESTRICTED 0x200
#define TYPEFLAG_FREVERSEBIND 0x2000
#define VAR_PERINSTANCE 0
#define VT_ARRAY 0x2000
#define VT_BLOB 65
#define VT_BLOBOBJECT 70
#define VT_BSTR_BLOB 0xfff
#define VT_BYREF 0x4000
#define VT_CF 71
#define VT_CLSID 72
#define VT_DECIMAL 14
#define VT_FILETIME 64
#define VT_I1 16
#define VT_I8 20
#define VT_INT 22
#define VT_LPSTR 30
#define VT_LPWSTR 31
#define VT_STORAGE 67
#define VT_STORED_OBJECT 69
#define VT_STREAM 66
#define VT_STREAMED_OBJECT 68
#define VT_TYPEMASK 0xFFF
#define VT_UI2 18
#define VT_UI4 19
#define VT_UI8 21
#define VT_UINT 23
#define VT_VECTOR 0x1000
#define VT_VERSIONED_STREAM 73
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define VT_RESERVED 0x8000
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* module  [typedef; ce-only; entity-headers] */

/* union  [typedef; ce-only; entity-headers] */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* SAFEARRAY  [struct, macro; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagSAFEARRAY {
 unsigned short cDims;
 unsigned short fFeatures;
 unsigned short cbElements;
 unsigned short cLocks;
 unsigned long handle;
 void HUGEP* pvData;
 SAFEARRAYBOUND rgsabound[1];
} SAFEARRAY;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* ICreateErrorInfo  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ICreateTypeInfo  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ICreateTypeLib  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IDispatch  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IErrorInfo  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ISupportErrorInfo  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ITypeComp  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ITypeInfo  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ITypeInfo2  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ITypeLib  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* ICreateTypeInfo2  [interface; shared; CE 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ICreateTypeLib2  [interface; shared; CE 5.0..599; Oleaut32.lib, Uuid.lib] */

/* ITypeLib2  [interface; shared; CE 5.0..599; Oleaut32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..699 */

/* VARTYPE  [enum, function; ce-only; CE 2.0..209, 2.11..699] */
typedef unsigned short VARTYPE;
enum VARENUM {
 VT_EMPTY = 0, 
 VT_NULL = 1, 
 VT_I2 = 2, 
 VT_I4 = 3, 
 VT_R4 = 4, 
 VT_R8 = 5, 
 VT_CY = 6, 
 VT_DATE = 7, 
 VT_BSTR = 8, 
 VT_DISPATCH = 9, 
 VT_ERROR = 10, 
 VT_BOOL = 11, 
 VT_VARIANT = 12, 
 VT_UNKNOWN = 13, 
 VT_UI1 = 17, 
};
VT_RESERVED = 0x8000
VT_BYREF = 0x4000
VT_ARRAY = 0x2000
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213)) /* CE 2.11..2.12 */

/* SAFEARRAYBOUDN  [struct; ce-only; CE 2.11..2.12] */
typedef struct tagSAFEARRAYBOUND {
 unsiggned long cElements;
 long lLbound;
} SAFEARRAYBOUND;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* ARRAYDESC  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct _tagARRAYDESC {
 TYPEDESC tdescElem;
 unsigned short cDims;
 SAFEARRAYBOUND rgbounds[1];
} ARRAYDESC;

/* BINDPTR  [typedef, struct; shared; CE 2.11..2.12, 3.0..699] */
typedef union tagBINDPTR {
 FUNCDESC FAR* lpfuncdesc;
 VARDESC FAR* lpvardesc;
 ITypeComp FAR* lptcomp;
} BINDPTR;

/* CALLCONV  [enum; shared; CE 2.11..2.12, 3.0..699] */
typedef enum tagCALLCONV {
 CC_CDECL = 1,
 CC_MSCPASCAL = 2,
 CC_PASCAL = CC_MSCPASCAL,
 CC_MACPASCAL = 3,
 CC_STDCALL = 4,
 CC_RESERVED = 5,
 CC_SYSCALL = 6,
 CC_MPWCDECL = 7,
 CC_MPWPASCAL = 8,
 CC_MAX = 9
} CALLCONV;

/* CUSTDATA  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagCUSTDATA {
 DWORD cCustData;
 LPCUSTDATAITEM prgCustData;
} CUSTDATA, *LPCUSTDATA;

/* CUSTDATAITEM  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagCUSTDATAITEM {
 GUID guid;
 VARIANTARG varValue;
} CUSTDATAITEM, *LPCUSTDATAITEM;

/* DESCKIND  [enum; shared; CE 2.11..2.12, 3.0..699] */
typedef enum tagDESCKIND {
 DESCKIND_NONE,
 DESCKIND_FUNCDESC,
 DESCKIND_VARDESC,
 DESCKIND_TYPECOMP,
 DESCKIND_IMPLICITAPPOBJ
} DESCKIND;

/* ELEMDESC  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagELEMDESC {
 TYPEDESC tdesc;
 union {
 IDLDESC idldesc;
 PARAMDESC paramdesc;
 };
} ELEMDES, *LPELEMDESC;

/* EXCEPINFO  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagEXCEPINFO {
 unsigned short wCode;
 unsigned short wReserved;
 BSTR bstrSource;
 BSTR bstrDescription;
 BSTR bstrHelpFile;
 unsigned long dwHelpContext;
 void FAR *pvReserved;
 HRESULT (STDAPICALLTYPE FAR* pfnDeferredFillIn) 
 (struct tagEXCEPINFO FAR *);
 SCODE scode;
} EXCEPINFO;

/* FUNCDESC  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagFUNCDESC {
 MEMBERID memid;
/* [size_is(cScodes)] */ SCODE RPC_FAR* lprgscode;
/* [size_is(cParams)] */ ELEMDESC __RPC_FAR* lprgelemdescParam;
 FUNCKIND funckind;
 INVOKEKIND invkind;
 CALLCONV callconv;
 short cParams;
 short cParamsOpt;
 short oVft;
 short cScodes;
 ELEMDESC elemdescFunc;
 WORD wFuncFlags;
} FUNCDESC;

/* FUNCKIND  [enum; shared; CE 2.11..2.12, 3.0..699] */
typedef enum tagFUNCKIND {
 FUNC_VIRTUAL,
 FUNC_PUREVIRTUAL,
 FUNC_NONVIRTUAL,
 FUNC_STATIC,
 FUNC_DISPATCH,
} FUNCKIND;

/* IDLDESC  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagIDLDESC { 
ULONG dwReserved; 
USHORT wIDLFlags; 
}; 
} IDLDESC, *LPIDLDESC;

/* INVOKEKIND  [enum; shared; CE 2.11..2.12, 3.0..699] */
typedef enum tagINVOKEKIND {
 INVOKE_FUNC = DISPATCH_METHOD,
 INVOKE_PROPERTYGET = DISPATCH_PROPERTYGET,
 INVOKE_PROPERTYPUT = DISPATCH_PROPERTYPUT,
 INVOKE_PROPERTYPUTREF = DISPATCH_PROPERTYPUTREF
} INVOKEKIND;

/* PARAMDESC  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagPARAMDESC {
 LPPARAMDESCEX pparamdescex;
 USHORT wParamFlags;
} PARAMDESC;

/* TYPEATTR  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagTYPEATTR {
 GUID guid;
 LCID lcid;
 unsigned long dwReserved;
 MEMBERID memidConstructor;
 MEMBERID memidDestructor;
 OLECHAR FAR* lpstrSchema;
 unsigned long cbSizeInstance;
 TYPEKIND typekind;
 unsigned short cFuncs;
 unsigned short cVars;
 unsigned short cImplTypes;
 unsigned short cbAlignment;
 unsigned short wTypeFlags;
 unsigned short wMajorVerNum;
 unsigned short wMinorVerNum;
 TYPEDESC tdescAlias;
 IDLDESC idldescType;
} TYPEATTR, FAR *LPTYPEATTR;

/* TYPEDESC  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagTYPEDESC {
 union {
 ESC FAR* lptdesc;
 struct FARSTRUCT tagTYPEDSC* lptdesc;
 struct FARSTRUCT tagARAYDESC FAR* lpadesc;
 HREFTYPE hreftype;
 } UNION_NAME(u);
 VARTYPE vt;
} TYPEDESC;

/* TYPEKIND  [enum; shared; CE 2.11..2.12, 3.0..699] */
typedef enum tagTYPEKIND {
 TKIND_ENUM = 0,
 TKIND_RECORD,
 TKIND_MODULE,
 TKIND_INTERFACE,
 TKIND_DISPATCH,
 TKIND_COCLASS,
 TKIND_ALIAS,
 TKIND_UNION,
 TKIND_MAX
} TYPEKIND;

/* VARDESC  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagVARDESC {
 MEMBERID memid; 
 OLECHAR FAR* lpstrSchema;
 union {
 unsigned long oInst;
 VARIANT FAR* lpvarValue;
 } UNION_NAME(u);
 ELEMDESC elemdescVar;
 unsigned short wVarFlags;
 VARKIND varkind;
} VARDESC
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 4.0..699 */

/* HREFTYPE  [typedef; ce-only; CE 2.11..2.12, 4.0..699] */
typedef unsigned long HREFTYPE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 3.0..399, 4.2..599 */

/* IEnumVARIANT  [interface; shared; CE 3.0..399, 4.2..599; Oleaut32.lib, Uuid.lib] */
interface IEnumVARIANT : IUnknown { 
 virtual HRESULT Next(unsigned long celt, 
 VARIANT FAR* rgvar, 
 unsigned long FAR* pceltFetched) = 0; 
 virtual HRESULT Skip(unsigned long celt) = 0; 
 virtual HRESULT Reset() = 0; 
 virtual HRESULT Clone(IEnumVARIANT FAR* FAR* ppenum) = 0; 
 };
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* CURRENCY  [typedef; ce-only; CE 3.0..699] */
typedef CY CURRENCY;

/* SAFEARRAYBOUND  [struct; shared; CE 3.0..699] */
typedef struct tagSAFEARRAYBOUND {
 unsigned long cElements;
 long lLbound;
} SAFEARRAYBOUND;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* FUNCFLAGS  [enum; shared; CE 4.0..699] */
typedef enum tagFUNCFLAGS {
 FUNCFLAG_FRESTRICTED = 0x1,
 FUNCFLAG_FSOURCE = 0x2,
 FUNCFLAG_FBINDABLE = 0x4,
 FUNCFLAG_FREQUESTEDIT = 0x8,
 FUNCFLAG_FDISPLAYBIND = 0x10,
 FUNCFLAG_FDEFAULTBIND = 0x20,
 FUNCFLAG_FHIDDEN = 0x40,
 FUNCFLAG_FUSESGETLASTERROR = 0x80,
 FUNCFLAG_FDEFAULTCOLLELEM = 0x100,
 FUNCFLAG_FUIDEFAULT = 0x200,
 FUNCFLAG_FNONBROWSABLE = 0x400,
 FUNCFLAG_FREPLACEABLE = 0x800,
 FUNCFLAG_FIMMEDIATEBIND = 0x1000
} FUNCFLAGS;

/* SYSKIND  [enum; shared; CE 4.0..699] */
typedef enum tagSYSKIND {
 SYS_WIN16 = 0, 
 SYS_WIN32 = SYS_WIN16 +1, 
 SYS_MAC = SYS_WIN32 +1
} SYSKIND;

/* TLIBATTR  [struct; shared; CE 4.0..699] */
typedef struct FARSTRUCT tagTLIBATTR {
 GUID guid; 
 LCID lcid; 
 SYSKIND syskind; 
 unsigned short wMajorVerNum; 
 unsigned short wMinorVerNum; 
 unsigned short wLibFlags; 
} TLIBATTR, FAR* LPTLIBATTR;

/* TYPEFLAGS  [enum; shared; CE 4.0..699] */
typedef enum tagTYPEFLAGS {
 TYPEFLAG_FAPPOBJECT = 0x01, 
 TYPEFLAG_FCANCREATE = 0x02, 
 TYPEFLAG_FLICENSED = 0x04, 
 TYPEFLAG_FPREDECLID = 0x08,
 TYPEFLAG_FHIDDEN = 0x10, 
 TYPEFLAG_FCONTROL = 0x20, 
 TYPEFLAG_FDUAL = 0x40, 
 TYPEFLAG_FNONEXTENSIBLE = 0x80, 
 TYPEFLAG_FOLEAUTOMATION = 0x100, 
 TYPEFLAG_FRESTRICTED = 0x200, 
 TYPEFLAG_FAGGREGATABLE = 0x400, 
 TYPEFLAG_FREPLACEABLE = 0x800, 
 TYPEFLAG_FDISPATCHABLE = 0x1000, 
 TYPEFLAG_FREVERSEBIND = 0x2000, 
} TYPEFLAGS;

/* VARKIND  [enum; shared; CE 4.0..699] */
typedef enum tagVARKIND { 
 VAR_PERINSTANCE = 0, 
 VAR_STATIC = VAR_PERINSTANCE +1, 
 VAR_CONST = VAR_STATIC +1, 
 VAR_DISPATCH = VAR_CONST +1 
} VARKIND;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PROPVARIANT  [struct; shared; CE 5.0..699] */
typedef struct PROPVARIANT {
 VARTYPE vt;
 WORD wReserved1;
 WORD wReserved2;
 WORD wReserved3;
 union {
 CHAR cVal;
 UCHAR bVal;
 SHORT iVal; 
 USHORT uiVal;
 LONG lVal; 
 ULONG ulVal;
 INT intVal;
 UINT uintVal;
 LARGE_INTEGER hVal;
 ULARGE_INTEGER uhVal;
 FLOAT fltVal;
 DOUBLE dblVal;
 VARIANT_BOOL boolVal;
 SCODE scode; 
 CY cyVal;
 DATE date;
 FILETIME filetime;
 CLSID* puuid;
 CLIPDATA* pclipdata;
 BSTR bstrVal;
 BSTRBLOB bstrblobVal;
 BLOB blob;
 LPSTR pszVal;
 LPWSTR pwszVal;
 IUnknown* punkVal;
 IDispatch* pdispVal;
 IStream* pStream; 
 IStorage* pStorage;
 LPVERSIONEDSTREAM pVersionedStream;
 LPSAFEARRAY parray;
 CAC cac;
 CAUB caub;
 CAI cai;
 CAUI caui;
 CAL cal;
 CAUL caul;
 CAH cah;
 CAUH cauh;
 CAFLT caflt;
 CADBL cadbl; 
 CABOOL cabool; 
 CASCODE cascode;
 CACY cacy;
 CADATE cadate;
 CAFILETIME cafiletime;
 CACLSID cauuid;
 CACLIPDATA caclipdata;
 CABSTR cabstr;
 CABSTRBLOB cabstrblob;
 CALPSTR calpstr;
 CALPWSTR calpwstr;
 CAPROPVARIANT capropvar;
 CHAR* pcVal;
 UCHAR* pbVal;
 SHORT* piVal;
 USHORT* puiVal;
 LONG* plVal;
 ULONG* pulVal;
 INT* pintVal;
 UINT* puintVal;
 FLOAT* pfltVal;
 DOUBLE* pdblVal;
 VARIANT_BOOL* pboolVal;
 DECIMAL* pdecVal;
 SCODE* pscode;
 CY* pcyVal;
 DATE* pdate;
 BSTR* pbstrVal;
 IUnknown** ppunkVal;
 IDispatch** ppdispVal;
 LPSAFEARRAY* pparray;
 PROPVARIANT* pvarVal;
 };
} PROPVARIANT;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 2.11..2.12, 3.0..399 */

/* ICreateTypeLib2::SetName  [function; ce-only; CE 2.11..2.12, 3.0..399] */
HRESULT SetName( 
OLECHAR FAR *szName);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* ISupportErrorInfo::InterfaceSupportsErrorInfo  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT InterfaceSupportsErrorInfo(
 REFIID riid
);

/* ITypeComp::Bind  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Bind(
 OLECHAR FAR* szName, 
 unsigned long lHashVal, 
 unsigned short wFlags, 
 ITypeInfo FAR* FAR* ppTInfo, 
 DESCKIND FAR* pDescKind, 
 BINDPTR FAR* pBindPtr 
);

/* ITypeComp::BindType  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT BindType( 
 OLECHAR FAR* szName, 
 unsigned long lHashVal, 
 ITypeInfo FAR* FAR* ppTInfo, 
 ITypeComp FAR* FAR* ppTComp 
);

/* ITypeInfo2::GetAllCustData  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAllCustData( 
 CUSTDATA* pCustData 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* ICreateErrorInfo::SetDescription  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetDescription( 
 LPCOLESTR* szDescription
);

/* ICreateErrorInfo::SetGUID  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetGUID( 
 REFGUID rguid
);

/* ICreateErrorInfo::SetHelpContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpContext( 
 DWORD dwHelpContext
);

/* ICreateErrorInfo::SetHelpFile  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpFile( 
 LPCOLESTR szHelpFile
);

/* ICreateErrorInfo::SetSource  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetSource( 
 LPCOLESTR szSource
);

/* ICreateTypeInfo2::DeleteFuncDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DeleteFuncDesc( 
 unsigned int index
);

/* ICreateTypeInfo2::DeleteFuncDescByMemId  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DeleteFuncDescByMemId( 
 MEMBERID memid, 
 INVOKEKIND invKind
);

/* ICreateTypeInfo2::DeleteImplType  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DeleteImplType( 
 unsigned int index
);

/* ICreateTypeInfo2::DeleteVarDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DeleteVarDesc( 
 unsigned int index
);

/* ICreateTypeInfo2::DeleteVarDescByMemId  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DeleteVarDescByMemId(
 MEMBERID memid
);

/* ICreateTypeInfo2::SetCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetCustData( 
 REFGUID guid, 
 VARIANT* pVarVal
);

/* ICreateTypeInfo2::SetFuncCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetFuncCustData( 
 unsigned int index, 
 REFGUID guid, 
 VARIANT* pVarVal
);

/* ICreateTypeInfo2::SetFuncHelpStringContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetFuncHelpStringContext( 
 unsigned int index, 
 DWORD dwHelpStringContext
);

/* ICreateTypeInfo2::SetHelpStringContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpStringContext( 
 DWORD* dwHelpStringContext
);

/* ICreateTypeInfo2::SetImplTypeCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetImplTypeCustData( 
 unsigned int index, 
 REFGUID guid, 
 VARIANT* pVarVal
);

/* ICreateTypeInfo2::SetName  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetName( 
 OLECHAR FAR* szName
);

/* ICreateTypeInfo2::SetParamCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetParamCustData( 
 unsigned int indexFunc, 
 unsigned int indexParam, 
 REFGUID guid, 
 VARIANT* pVarVal
);

/* ICreateTypeInfo2::SetVarCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVarCustData( 
 unsigned int index, 
 REFGUID guid, 
 VARIANT* pVarVal
);

/* ICreateTypeInfo2::SetVarHelpStringContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVarHelpStringContext( 
 unsigned int index, 
 DWORD dwHelpStringContext
);

/* ICreateTypeInfo::AddFuncDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT AddFuncDesc( 
 unsigned int index, 
 FUNCDESC FAR* pFuncDesc
);

/* ICreateTypeInfo::AddImplType  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT AddImplType( 
 unsigned int index, 
 HREFTYPE hRefType
);

/* ICreateTypeInfo::AddRefTypeInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT AddRefTypeInfo( 
 ITypeInfo FAR* pTInfo, 
 HREFTYPE FAR* phRefType
);

/* ICreateTypeInfo::AddVarDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT AddVarDesc( 
 unsigned int index, 
 VARDESC FAR* pVarDesc
);

/* ICreateTypeInfo::DefineFuncAsDllEntry  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DefineFuncAsDllEntry( 
 unsigned int index, 
 OLECHAR FAR* szDllName, 
 OLECHAR FAR* szProcName
);

/* ICreateTypeInfo::LayOut  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT LayOut();

/* ICreateTypeInfo::SetAlignment  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetAlignment( 
 unsigned short cbAlignment
);

/* ICreateTypeInfo::SetDocString  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetDocString( 
 OLECHAR FAR* pStrDoc
);

/* ICreateTypeInfo::SetFuncAndParamNames  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetFuncAndParamNames( 
 unsigned int index, 
 OLECHAR FAR* FAR* rgszNames, 
 unsigned int cNames
);

/* ICreateTypeInfo::SetFuncDocString  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetFuncDocString(
 unsigned int index, 
 OLECHAR FAR* szDocString
);

/* ICreateTypeInfo::SetFuncHelpContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetFuncHelpContext( 
 unsigned int index, 
 unsigned long dwHelpContext
);

/* ICreateTypeInfo::SetGuid  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetGuid( 
 REFGUID guid
);

/* ICreateTypeInfo::SetHelpContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpContext( 
 unsigned long dwHelpContext
);

/* ICreateTypeInfo::SetImplTypeFlags  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetImplTypeFlags( 
 unsigned int index, 
 int implTypeFlags
);

/* ICreateTypeInfo::SetMops  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetMops( 
 unsigned int index, 
 BSTR bstrMops
);

/* ICreateTypeInfo::SetTypeDescAlias  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetTypeDescAlias( 
 TYPEDESC FAR* pTDescAlias
);

/* ICreateTypeInfo::SetTypeFlags  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetTypeFlags( 
 unsigned int uTypeFlags
);

/* ICreateTypeInfo::SetVarDocString  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVarDocString( 
 unsigned int index, 
 OLECHAR FAR* szDocString
);

/* ICreateTypeInfo::SetVarHelpContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVarHelpContext( 
 unsigned int index, 
 unsigned long dwHelpContext
);

/* ICreateTypeInfo::SetVarName  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVarName( 
 unsigned int index, 
 OLECHAR FAR* szName
);

/* ICreateTypeInfo::SetVersion  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVersion( 
 unsigned short wMajorVerNum, 
 unsigned short wMinorVerNum
);

/* ICreateTypeLib2::DeleteTypeInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DeleteTypeInfo( 
 OLECHAR FAR* szName
);

/* ICreateTypeLib2::SetCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetCustData( 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ICreateTypeLib2::SetHelpStringContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpStringContext( 
 DWORD* dwHelpStringContext 
);

/* ICreateTypeLib2::SetHelpStringDll  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpStringDll( 
 LPOLESTR szFileName 
);

/* ICreateTypeLib::CreateTypeInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT CreateTypeInfo( 
 OLECHAR FAR* szName, 
 TYPEKIND tkind, 
 ICreateTypeInfo FAR* FAR* ppCTInfo
);

/* ICreateTypeLib::SetGuid  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetGuid( 
 REFGUID guid
);

/* ICreateTypeLib::SetHelpContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpContext( 
 unsigned long dwHelpContext
);

/* ICreateTypeLib::SetHelpFileName  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHelpFileName( 
 OLECHAR FAR* szHelpFileName
);

/* ICreateTypeLib::SetLcid  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetLcid( 
 LCID lcid
);

/* ICreateTypeLib::SetLibFlags  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetLibFlags( 
 unsigned int uLibFlags
);

/* ICreateTypeLib::SetName  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetName( 
 OLECHAR FAR* szName
);

/* ICreateTypeLib::SetVersion  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetVersion( 
 unsigned short wMajorVerNum, 
 unsigned short wMinorVerNum
);

/* IDispatch::GetIDsOfNames  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetIDsOfNames( 
 REFIID riid, 
 OLECHAR FAR* FAR* rgszNames, 
 unsigned int cNames, 
 LCID lcid, 
 DISPID FAR* rgDispId 
);

/* IDispatch::GetTypeInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeInfo( 
 unsigned int iTInfo, 
 LCID lcid, 
 ITypeInfo FAR* FAR* ppTInfo 
);

/* IDispatch::GetTypeInfoCount  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeInfoCount( 
 unsigned int FAR* pctinfo 
);

/* IDispatch::Invoke  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Invoke( 
 DISPID dispIdMember, 
 REFIID riid, 
 LCID lcid, 
 WORD wFlags, 
 DISPPARAMS FAR* pDispParams, 
 VARIANT FAR* pVarResult, 
 EXCEPINFO FAR* pExcepInfo, 
 unsigned int FAR* puArgErr 
);

/* IEnumVARIANT::Clone  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone( 
 IEnumVARIANT FAR* FAR* ppEnum 
);

/* IEnumVARIANT::Next  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Next( 
 unsigned long celt, 
 VARIANT FAR* rgVar, 
 unsigned long FAR* pCeltFetched 
);

/* IEnumVARIANT::Reset  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset()

/* IEnumVARIANT::Skip  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip( 
 unsigned long celt 
);

/* IErrorInfo::GetDescription  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDescription( 
 BSTR* pBstrDescription 
);

/* IErrorInfo::GetGUID  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetGUID( 
 GUID* pGUID 
);

/* IErrorInfo::GetHelpContext  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetHelpContext( 
 DWORD* pdwHelpContext 
);

/* IErrorInfo::GetHelpFile  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetHelpFile( 
 BSTR* pBstrHelpFile 
);

/* IErrorInfo::GetSource  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetSource( 
 BSTR* pBstrSource 
);

/* ITypeInfo2::GetAllFuncCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAllFuncCustData( 
 unsigned int index, 
 CUSTDATA* pCustData 
);

/* ITypeInfo2::GetAllImplTypeCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAllImplTypeCustData( 
 unsigned int index, 
 CUSTDATA* pCustData 
);

/* ITypeInfo2::GetAllParamCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAllParamCustData( 
 unsigned int indexFunc, 
 unsigned int indexParam, 
 CUSTDATA* pCustData 
);

/* ITypeInfo2::GetAllVarCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAllVarCustData( 
 unsigned int index, 
 CUSTDATA* pCustData 
);

/* ITypeInfo2::GetCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetCustData( 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ITypeInfo2::GetDocumentation2  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDocumentation2( 
 MEMID memid, 
 LCID lcid, 
 BSTR FAR* pbstrHelpString, 
 unsigned long FAR* pdwHelpStringContext, 
 BSTR FAR* pbstrHelpStringDll 
);

/* ITypeInfo2::GetFuncCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetFuncCustData( 
 unsigned int index, 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ITypeInfo2::GetFuncIndexOfMemId  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetFuncIndexOfMemId(
 MEMBERID memid, 
 INVOKEKIND invKind, 
 unsigned int* pFuncIndex 
);

/* ITypeInfo2::GetImplTypeCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetImplTypeCustData( 
 unsigned int index, 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ITypeInfo2::GetParamCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetParamCustData( 
 unsigned int indexFunc, 
 unsigned int indexParam, 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ITypeInfo2::GetTypeFlags  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeFlags( 
 unsigned long* pTypeFlags 
);

/* ITypeInfo2::GetTypeKind  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeKind( 
 TYPEKIND* pTypeKind 
);

/* ITypeInfo2::GetVarCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetVarCustData( 
 unsigned int index, 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ITypeInfo2::GetVarIndexOfMemId  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetVarIndexOfMemId( 
 MEMBERID memid, 
 unsigned int* pVarIndex 
);

/* ITypeInfo::AddressOfMember  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT AddressOfMember( 
 MEMBERID memid, 
 INVOKEKIND invKind, 
 VOID FAR* FAR* ppv 
);

/* ITypeInfo::CreateInstance  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT CreateInstance( 
 IUnknown FAR* pUnkOuter, 
 REFIID riid, 
 VOID FAR* FAR* ppvObj 
);

/* ITypeInfo::GetContainingTypeLib  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetContainingTypeLib( 
 ITypeLib FAR* FAR* ppTLib, 
 unsigned int FAR* pIndex 
);

/* ITypeInfo::GetDllEntry  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDllEntry( 
 MEMBERID memid, 
 INVOKEKIND invKind, 
 BSTR FAR* pBstrDllName, 
 BSTR FAR* pBstrName, 
 unsigned short FAR* pwOrdinal 
);

/* ITypeInfo::GetDocumentation  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDocumentation( 
 MEMBERID memid, 
 BSTR FAR* pBstrName, 
 BSTR FAR* pBstrDocString, 
 unsigned long FAR* pdwHelpContext, 
 BSTR FAR* pBstrHelpFile 
);

/* ITypeInfo::GetFuncDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetFuncDesc( 
 unsigned int index, 
 FUNCDESC FAR* FAR* ppFuncDesc 
);

/* ITypeInfo::GetIDsOfNames  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetIDsOfNames( 
 OLECHAR FAR* FAR* rgszNames, 
 unsigned int cNames, 
 MEMBERID FAR* pMemId 
);

/* ITypeInfo::GetImplTypeFlags  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetImplTypeFlags( 
 unsigned int index, 
 int* pImplTypeFlags 
);

/* ITypeInfo::GetMops  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetMops( 
 MEMBERID memid, 
 BSTR FAR* pBstrMops 
);

/* ITypeInfo::GetNames  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetNames( 
 MEMBERID memid, 
 BSTR FAR* rgBstrNames, 
 unsigned int cMaxNames, 
 unsigned int FAR* pcNames 
);

/* ITypeInfo::GetRefTypeInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetRefTypeInfo( 
 HREFTYPE hRefType, 
 ITypeInfo FAR* FAR* ppTInfo 
);

/* ITypeInfo::GetRefTypeOfImplType  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetRefTypeOfImplType(
 unsigned int index, 
 HREFTYPE FAR* pRefType 
);

/* ITypeInfo::GetTypeAttr  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeAttr( 
 TYPEATTR FAR* FAR* ppTypeAttr 
);

/* ITypeInfo::GetTypeComp  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeComp( 
 ITypeComp FAR* FAR* ppTComp 
);

/* ITypeInfo::GetVarDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetVarDesc( 
 unsigned int index, 
 VARDESC FAR* FAR* ppVarDesc 
);

/* ITypeInfo::Invoke  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Invoke( 
 VOID FAR* pvInstance, 
 MEMBERID memid, 
 unsigned short wFlags, 
 DISPPARAMS FAR* pDispParams, 
 VARIANT FAR* pVarResult, 
 EXCEPINFO FAR* pExcepInfo, 
 unsigned int FAR* puArgErr 
);

/* ITypeInfo::ReleaseFuncDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void ReleaseFuncDesc(
 FUNCDESC FAR* pFuncDesc 
);

/* ITypeInfo::ReleaseTypeAttr  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void ReleaseTypeAttr(
 TYPEATTR FAR* pTypeAttr 
);

/* ITypeInfo::ReleaseVarDesc  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT ReleaseVarDesc(
 VARDESC FAR* pVarDesc 
);

/* ITypeLib2::GetAllCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAllCustData( 
 CUSTDATA* pCustData 
);

/* ITypeLib2::GetCustData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetCustData( 
 REFGUID guid, 
 VARIANT* pVarVal 
);

/* ITypeLib2::GetDocumentation2  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDocumentation2( 
 in] int index, 
 LCID lcid, 
 BSTR FAR* pbstrHelpString, 
 unsigned long FAR* pdwHelpStringContext, 
 BSTR FAR* pbstrHelpStringDll 
);

/* ITypeLib2::GetLibStatistics  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetLibStatistics( 
 unsigned long* pcUniqueNames, 
 unsigned long* pcchUniqueNames 
);

/* ITypeLib::FindName  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT FindName( 
 OLECHAR FAR* szNameBuf, 
 unsigned long lHashVal, 
 ITypeInfo FAR* FAR* ppTInfo, 
 MEMBERID FAR* rgMemId, 
 unsigned int FAR* pcFound 
);

/* ITypeLib::GetDocumentation  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDocumentation( 
 int index, 
 BSTR FAR* pBstrName, 
 BSTR FAR* pBstrDocString, 
 unsigned long FAR* pdwHelpContext, 
 BSTR FAR* pBstrHelpFile 
);

/* ITypeLib::GetLibAttr  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetLibAttr( 
 TLIBATTR FAR* FAR* ppTLibAttrr 
);

/* ITypeLib::GetTypeComp  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetLibAttr( 
 ITypeComp FAR* FAR* ppTComp 
);

/* ITypeLib::GetTypeInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeInfo( 
 unsigned int index, 
 ITypeInfo FAR* FAR* ppTInfo 
);

/* ITypeLib::GetTypeInfoCount  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeInfoCount()

/* ITypeLib::GetTypeInfoOfGuid  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeInfoOfGuid( 
 REFGUID guid, 
 ITypeInfo FAR* FAR* ppTinfo 
);

/* ITypeLib::GetTypeInfoType  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTypeInfoType( 
 unsigned int index, 
 TYPEKIND FAR* pTKind 
);

/* ITypeLib::IsName  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT IsName( 
 OLECHAR FAR* szNameBuf, 
 unsigned long lHashVal, 
 BOOL pfName 
);

/* ITypeLib::ReleaseTLibAttr  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT ReleaseTLibAttr( 
 TLIBATTR FAR* pTLibAttr 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IErrorlog::AddError  [function; shared; CE 4.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT AddError(
 LPCOLESTR pszPropName,
 EXCEPINFO* pExcepInfo
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FreePropVariantArray  [function; shared; CE 5.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAPI FreePropVariantArray(
 ULONG cVariants,
 PROPVARIANT* rgvars
);

/* PropVariantClear  [function; shared; CE 5.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAPI PropVariantClear(
 PROPVARIANT* pvar
);

/* PropVariantCopy  [function; shared; CE 5.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAPI PropVariantCopy(
 PROPVARIANT* pvarDest,
 const PROPVARIANT* pvarSrc
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef short VARIANT_BOOL;
typedef union tagBINDPTR { FUNCDESC FAR *lpfuncdesc;

/* enum */
typedef unsigned short VARTYPE;
enum VARENUM {
  VT_EMPTY = 0,
  VT_NULL = 1,
  VT_I2 = 2,
  VT_I4 = 3,
  VT_R4 = 4,
  VT_R8 = 5,
  VT_CY = 6,
  VT_DATE = 7,
  VT_BSTR = 8,
  VT_DISPATCH = 9,
  VT_ERROR = 10,
  VT_BOOL = 11,
  VT_VARIANT = 12,
  VT_UNKNOWN = 13,
  VT_UI1 = 17,
};
VT_RESERVED = 0x8000
VT_BYREF = 0x4000
VT_ARRAY = 0x2000;

/* struct */
typedef struct tagCLIPDATA { // cbSize is the size of the buffer pointed to // by pClipData, plus sizeof(ulClipFmt) ULONG cbSize; long ulClipFmt; BYTE* pClipData; } CLIPDATA;
typedef struct tagCY { unsigned long Lo; long Hi; } CY;
typedef struct tagCUSTDATA {DWORD cCustData;LPCUSTDATAITEM prgCustData;} CUSTDATA, *LPCUSTDATA;
typedef struct tagCUSTDATAITEM {GUID guid;VARIANTARG varValue;} CUSTDATAITEM, *LPCUSTDATAITEM;
typedef struct tagELEMDESC {TYPEDESC tdesc;union {IDLDESC idldesc;PARAMDESC paramdesc; };} ELEMDES, *LPELEMDESC;
typedef struct tagIDLDESC {ULONG dwReserved;USHORT wIDLFlags;};IDLDESC, *LPIDLDESC;
typedef struct FARSTRUCT tagTLIBATTR {GUIDguid;LCIDlcid;SYSKINDsyskind;unsignedshort wMajorVerNum;unsignedshort wMinorVerNum;unsignedshort wLibFlags;} TLIBATTR, FAR* LPTLIBATTR;
typedef struct FARSTRUCT tagTYPEATTR {GUID guid;LCID lcid;unsigned long dwReserved;MEMBERID memidConstructor;MEMBERID memidDestructor;OLECHAR FAR* lpstrSchema;unsigned long cbSizeInstance;TYPEKIND typekind;unsigned short cFuncs;unsigned short cVars;unsigned short cImplTypes;unsigned short cbAlignment;unsigned short wTypeFlags;unsigned short wMajorVerNum;unsigned short wMinorVerNum;TYPEDESC tdescAlias;IDLDESC idldescType;} TYPEATTR, FAR *LPTYPEATTR;
typedef struct tagELEMDESC { TYPEDESC tdesc; union { IDLDESC idldesc; PARAMDESC paramdesc;};
typedef struct tagIDLDESC { ULONG dwReserved; USHORT wIDLFlags; };
typedef struct FARSTRUCT tagPARAMDESC { unsigned long lpVarValue; unsigned short wParamFlags; };

/* function */
HRESULT AddError( LPCOLESTR pszPropName, EXCEPINFO* pExcepInfo );
HRESULT AddFuncDesc( unsigned int index, FUNCDESC FAR *pFuncDesc);
HRESULT AddImplType( unsigned int index, HREFTYPE hRefType);
HRESULT AddRefTypeInfo( ITypeInfo FAR *pTInfo, HREFTYPE FAR *phRefType);
HRESULT AddVarDesc( unsigned int index, VARDESC FAR *pVarDesc);
HRESULT AddressOfMember( MEMBERID memid, INVOKEKIND invKind, VOID FAR* FAR *ppv );
HRESULT Bind( OLECHAR FAR *szName, unsigned long lHashVal, unsigned short wFlags, ITypeInfo FAR*FAR *ppTInfo, DESCKIND FAR *pDescKind, BINDPTR FAR *pBindPtr);
HRESULT BindToObject( IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riidResult, void **ppvResult);
HRESULT BindToStorage( IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riid, void **ppvObj);
HRESULT BindType( OLECHAR FAR *szName, unsigned long lHashVal, ITypeInfo FAR* FAR *ppTInfo, ITypeComp FAR* FAR *ppTComp );
HRESULT CommonPrefixWith( IMoniker *pmkOther, IMoniker **ppmkPrefix);
HRESULT ComposeWith( IMoniker *pmkRight, BOOL fOnlyIfNotGeneric, IMoniker **ppmkComposite);
HRESULT CreateTypeInfo( OLECHAR FAR *szName, TYPEKIND tkind, ICreateTypeInfo FAR *FAR *ppCTInfo);
HRESULT DefineFuncAsDllEntry( unsigned int index, OLECHAR FAR *szDllName, OLECHAR FAR *szProcName);
HRESULT DeleteFuncDesc( unsigned int index);
HRESULT DeleteFuncDescByMemId( MEMBERID memid, INVOKEKIND invKind);
HRESULT DeleteImplType( unsigned int index);
HRESULT DeleteTypeInfo( OLECHAR FAR *szName);
HRESULT DeleteVarDesc( unsigned int index);
HRESULT DeleteVarDescByMemId( MEMBERID memid);
HRESULT Enum( IEnumMoniker **ppenumMoniker);
HRESULT FindName( OLECHAR FAR *szNameBuf, unsigned long lHashVal, ITypeInfo FAR *FAR *ppTInfo, MEMBERID FAR *rgMemId, unsigned int FAR *pcFound);
HRESULT GetAllCustData( CUSTDATA *pCustData );
HRESULT GetAllFuncCustData( unsigned int index, CUSTDATA *pCustData );
HRESULT GetAllImplTypeCustData( unsigned int index, CUSTDATA *pCustData );
HRESULT GetAllParamCustData( unsigned int indexFunc, unsigned int indexParam, CUSTDATA *pCustData);
HRESULT GetAllVarCustData( unsigned int index, CUSTDATA *pCustData);
HRESULT GetContainingTypeLib( ITypeLib FAR *FAR *ppTLib, unsigned int FAR *pIndex );
HRESULT GetCustData( REFGUID guid, VARIANT *pVarVal );
HRESULT GetDescription( BSTR *pBstrDescription);
HRESULT GetDisplayName( IBindCtx *pbc, IMoniker *pmkToLeft, LPOlESTR * ppszDisplayName);
HRESULT GetDllEntry( MEMBERID memid, INVOKEKIND invKind, BSTR FAR *pBstrDllName, BSTR FAR *pBstrName, unsigned short FAR *pwOrdinal );
HRESULT GetDocumentation( MEMBERID memid, BSTR FAR *pBstrName, BSTR FAR *pBstrDocString, unsigned long FAR *pdwHelpContext, BSTR FAR *pBstrHelpFile );
HRESULT GetDocumentation2( [in] MEMID memid, [in] LCID lcid, [out] BSTR FAR *pbstrHelpString, [out] unsigned long FAR *pdwHelpStringContext, BSTR FAR *pbstrHelpStringDll);
HRESULT GetFuncCustData( unsigned int index, REFGUID guid, VARIANT *pVarVal);
HRESULT GetFuncDesc( unsigned int index, FUNCDESC FAR *FAR *ppFuncDesc );
HRESULT GetFuncIndexOfMemId( MEMBERID memid, INVOKEKIND invKind, unsigned int *pFuncIndex );
HRESULT GetGUID( GUID *pGUID );
HRESULT GetHelpContext( DWORD *pdwHelpContext );
HRESULT GetHelpFile( BSTR *pBstrHelpFile);
HRESULT GetIDsOfNames( REFIID riid, OLECHAR FAR *FAR *rgszNames, unsigned int cNames, LCID lcid, DISPID FAR *rgDispId);
HRESULT GetImplTypeCustData( unsigned int index, REFGUID guid, VARIANT *pVarVal);
HRESULT GetImplTypeFlags( unsigned int index, int *pImplTypeFlags );
HRESULT GetLibAttr( TLIBATTR FAR *FAR *ppTLibAttrr );
HRESULT GetLibStatistics( unsigned long *pcUniqueNames, unsigned long *pcchUniqueNames );
HRESULT GetMops( MEMBERID memid, BSTR FAR *pBstrMops );
HRESULT GetNames( MEMBERID memid, BSTR FAR *rgBstrNames, unsigned int cMaxNames, unsigned int FAR *pcNames );
HRESULT GetParamCustData( unsigned int indexFunc, unsigned int indexParam, REFGUID guid, VARIANT *pVarVal);
HRESULT GetRefTypeInfo( HREFTYPE hRefType, ITypeInfo FAR *FAR *ppTInfo );
HRESULT GetRefTypeOfImplType( unsigned int index, HREFTYPE FAR *pRefType );
HRESULT GetSource( BSTR *pBstrSource);
HRESULT GetTimeOfLastChange( IBindCtx *pbc, IMoniker *pmkToLeft, FILETIME *pFileTime);
HRESULT GetTypeAttr( TYPEATTR FAR *FAR *ppTypeAttr );
HRESULT GetTypeComp( ITypeComp FAR *FAR *ppTComp );
HRESULT GetTypeFlags( unsigned long *pTypeFlags);
HRESULT GetTypeInfo( unsigned int iTInfo, LCID lcid, ITypeInfo FAR *FAR *ppTInfo);
HRESULT GetTypeInfoCount( unsigned int FAR *pctinfo);
HRESULT GetTypeInfoOfGuid( REFGUID guid, ITypeInfo FAR *FAR *ppTinfo );
HRESULT GetTypeInfoType( unsigned int index, TYPEKIND FAR *pTKind );
HRESULT GetTypeKind( TYPEKIND *pTypeKind);
HRESULT GetVarCustData( unsigned int index, REFGUID guid, VARIANT *pVarVal);
HRESULT GetVarDesc( unsigned int index, VARDESC FAR *FAR *ppVarDesc );
HRESULT GetVarIndexOfMemId( MEMBERID memid, unsigned int *pVarIndex);
HRESULT Hash( DWORD *pdwHash);
HRESULT InterfaceSupportsErrorInfo( REFIID riid);
HRESULT Inverse( IMoniker **ppmk);
HRESULT Invoke( DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR *pDispParams, VARIANT FAR *pVarResult, EXCEPINFO FAR *pExcepInfo, unsigned int FAR *puArgErr);
HRESULT IsEqual( IMoniker *pmkOtherMoniker);
HRESULT IsName( OLECHAR FAR *szNameBuf, unsigned long lHashVal, BOOL pfName );
HRESULT IsRunning( IBindCtx *pbc, IMoniker *pmkToLeft, IMoniker *pmkNewlyRunning);
HRESULT IsSystemMoniker( DWORD *pdwMksys);
HRESULT LayOut();
void OnClose();
void OnDataChange( FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
void OnRename( IMoniker *pmk);
void OnSave();
void OnViewChange( DWORD dwAspect, LONG lindex);
HRESULT ParseDisplayName( IBindCtx *pbc, IMoniker *pmkToLeft, LPOLESTR *pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
HRESULT Reduce( IBindCtx *pbc, DWORD dwReduceHowFar, IMoniker **ppmkReduced);
HRESULT RelativePathTo( IMoniker *pmkOther, IMoniker **ppmkRelPath);
HRESULT ReleaseFuncDesc( FUNCDESC FAR *pFuncDesc );
HRESULT ReleaseTLibAttr( TLIBATTR FAR *pTLibAttr );
HRESULT ReleaseTypeAttr( TYPEATTR FAR *pTypeAttr );
HRESULT ReleaseVarDesc( VARDESC FAR *pVarDesc );
HRESULT SetAlignment( unsigned short cbAlignment);
HRESULT SetCustData( REFGUID guid, VARIANT *pVarVal);
HRESULT SetDescription( LPCOLESTR *szDescription);
HRESULT SetDocString( OLECHAR FAR *pStrDoc);
HRESULT SetFuncAndParamNames( unsigned int index, OLECHAR FAR *FAR *rgszNames, unsigned int cNames);
HRESULT SetFuncCustData( unsigned int index, REFGUID guid, VARIANT *pVarVal);
HRESULT SetFuncDocString( unsigned int index, OLECHAR FAR *szDocString);
HRESULT SetFuncHelpContext( unsigned int index, unsigned long dwHelpContext);
HRESULT SetFuncHelpStringContext( unsigned int index, DWORD dwHelpStringContext);
HRESULT SetGUID( REFGUID rguid);
HRESULT SetGuid( REFGUID guid);
HRESULT SetHelpContext( DWORD dwHelpContext);
HRESULT SetHelpFile( LPCOLESTR szHelpFile);
HRESULT SetHelpFileName( OLECHAR FAR *szHelpFileName);
HRESULT SetHelpStringContext( DWORD *dwHelpStringContext);
HRESULT SetHelpStringDll( LPOLESTR szFileName);
HRESULT SetImplTypeCustData( unsigned int index, REFGUID guid, VARIANT *pVarVal);
HRESULT SetImplTypeFlags( unsigned int index, int implTypeFlags);
HRESULT SetLcid( LCID lcid);
HRESULT SetLibFlags( unsigned int uLibFlags);
HRESULT SetMops( unsigned int index, BSTR bstrMops);
HRESULT SetName( OLECHAR FAR *szName);
HRESULT SetParamCustData( unsigned int indexFunc, unsigned int indexParam, REFGUID guid, VARIANT *pVarVal);
HRESULT SetSource( LPCOLESTR szSource);
HRESULT SetTypeDescAlias( TYPEDESC FAR *pTDescAlias);
HRESULT SetTypeFlags( unsigned int uTypeFlags);
HRESULT SetVarCustData( unsigned int index, REFGUID guid, VARIANT *pVarVal);
HRESULT SetVarDocString( unsigned int index, OLECHAR FAR *szDocString);
HRESULT SetVarHelpContext( unsigned int index, unsigned long dwHelpContext);
HRESULT SetVarHelpStringContext( unsigned int index, DWORD dwHelpStringContext);
HRESULT SetVarName( unsigned int index, OLECHAR FAR *szName);
HRESULT SetVersion( unsigned short wMajorVerNum, unsigned short wMinorVerNum);

#endif /* _OAIDL_ */
