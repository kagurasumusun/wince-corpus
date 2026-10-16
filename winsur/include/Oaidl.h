/* Oaidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 118 constants, 29 declarations, 19 outlines, 0 base types, 0 extra macros, 130 extra decls
 */
#ifndef _OAIDL_
#define _OAIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CC_CDECL 1
#define CC_MACPASCAL 3
#define CC_MAX 9
#define CC_MPWCDECL 7
#define CC_MPWPASCAL 8
#define CC_MSCPASCAL 2
#define CC_RESERVED 5
#define CC_STDCALL 4
#define CC_SYSCALL 6
#define DISPID_COLLECT (-8)
#define DISPID_CONSTRUCTOR (-6)
#define DISPID_DESTRUCTOR (-7)
#define DISPID_EVALUATE (-5)
#define DISPID_NEWENUM (-4)
#define DISPID_PROPERTYPUT (-3)
#define DISPID_UNKNOWN (-1)
#define DISPID_VALUE (0)
#define FADF_AUTO 0x0001
#define FADF_BSTR 0x0100
#define FADF_CREATEVECTOR (0x2000)
#define FADF_DATADELETED (0x1000)
#define FADF_DISPATCH 0x0400
#define FADF_EMBEDDED 0x0004
#define FADF_FIXEDSIZE 0x0010
#define FADF_HAVEIID 0x0040
#define FADF_HAVEVARTYPE 0x0080
#define FADF_RECORD 0x0020
#define FADF_RESERVED 0xF0E8
#define FADF_STATIC 0x0002
#define FADF_UNKNOWN 0x0200
#define FADF_VARIANT 0x0800
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
#define IDLFLAG_FIN PARAMFLAG_FIN
#define IDLFLAG_FLCID PARAMFLAG_FLCID
#define IDLFLAG_FOUT PARAMFLAG_FOUT
#define IDLFLAG_FRETVAL PARAMFLAG_FRETVAL
#define IDLFLAG_NONE PARAMFLAG_NONE
#define IMPLTYPEFLAG_FDEFAULT 0x1
#define IMPLTYPEFLAG_FDEFAULTVTABLE 0x8
#define IMPLTYPEFLAG_FRESTRICTED 0x4
#define IMPLTYPEFLAG_FSOURCE 0x2
#define PARAMFLAG_FHASDEFAULT (32)
#define PARAMFLAG_FIN (1)
#define PARAMFLAG_FLCID (4)
#define PARAMFLAG_FOPT (16)
#define PARAMFLAG_FOUT (2)
#define PARAMFLAG_FRETVAL (8)
#define PARAMFLAG_NONE (0)
#define SYS_WIN16 0
#define TKIND_ENUM 0
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
#define VT_BOOL 11
#define VT_BSTR 8
#define VT_BSTR_BLOB 0xfff
#define VT_BYREF 0x4000
#define VT_CF 71
#define VT_CLSID 72
#define VT_CY 6
#define VT_DATE 7
#define VT_DECIMAL 14
#define VT_DISPATCH 9
#define VT_EMPTY 0
#define VT_ERROR 10
#define VT_FILETIME 64
#define VT_I1 16
#define VT_I2 2
#define VT_I4 3
#define VT_I8 20
#define VT_INT 22
#define VT_LPSTR 30
#define VT_LPWSTR 31
#define VT_NULL 1
#define VT_R4 4
#define VT_R8 5
#define VT_RESERVED 0x8000
#define VT_STORAGE 67
#define VT_STORED_OBJECT 69
#define VT_STREAM 66
#define VT_STREAMED_OBJECT 68
#define VT_TYPEMASK 0xFFF
#define VT_UI1 17
#define VT_UI2 18
#define VT_UI4 19
#define VT_UI8 21
#define VT_UINT 23
#define VT_UNKNOWN 13
#define VT_VARIANT 12
#define VT_VECTOR 0x1000
#define VT_VERSIONED_STREAM 73

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* IDLDESC  [struct; ce-only] */

/* module  [typedef; ce-only; entity-headers] */

/* SAFEARRAY  [struct, macro; shared] */
typedef struct FARSTRUCT tagSAFEARRAY {
 unsigned short cDims;
 unsigned short fFeatures;
 unsigned short cbElements;
 unsigned short cLocks;
 unsigned long handle;
 void HUGEP* pvData;
 SAFEARRAYBOUND rgsabound[1];
} SAFEARRAY;

/* union  [typedef; ce-only; entity-headers] */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 3.0..399, 4.2..599 */

/* IEnumVARIANT  [interface; shared; CE 3.0..399, 4.2..599; Oleaut32.lib, Uuid.lib] */
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

/* CURRENCY  [typedef; ce-only] */
typedef CY CURRENCY;

/* HREFTYPE  [typedef; ce-only] */
typedef unsigned long HREFTYPE;

/* SAFEARRAYBOUND  [struct; shared] */
typedef struct tagSAFEARRAYBOUND {
 unsigned long cElements;
 long lLbound;
} SAFEARRAYBOUND;

/* SAFEARRAYBOUDN  [struct; ce-only] */
typedef struct tagSAFEARRAYBOUND {
 unsiggned long cElements;
 long lLbound;
} SAFEARRAYBOUND;

/* EXCEPINFO  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   wCode */
/*   wReserved */
/*   bstrSource */
/*   bstrDescription */
/*   bstrHelpFile */
/*   dwHelpContext */
/*   pvReserved */
/*   pfnDeferredFillIn */
/*   scode */

/* PROPVARIANT  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   tag_inner_PROPVARIANT */
/*   decVal */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

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
