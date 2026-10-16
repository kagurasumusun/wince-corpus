/* Urlmon.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 121 constants, 60 declarations, 3 outlines, 0 base types, 0 extra macros, 53 extra decls
 */
#ifndef _URLMON_
#define _URLMON_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BINDF_ASYNCHRONOUS 0x00000001
#define BINDF_ASYNCSTORAGE 0x00000002
#define BINDF_DIRECT_READ 0x00020000
#define BINDF_FORMS_SUBMIT 0x00040000
#define BINDF_FREE_THREADED 0x00010000
#define BINDF_FROMURLMON 0x00100000
#define BINDF_FWD_BACK 0x00200000
#define BINDF_GETCLASSOBJECT 0x00004000
#define BINDF_GETFROMCACHE_IF_NET_FAIL 0x00080000
#define BINDF_GETNEWESTVERSION 0x00000010
#define BINDF_HYPERLINK 0x00000400
#define BINDF_IGNORESECURITYPROBLEM 0x00000100
#define BINDF_NEEDFILE 0x00000040
#define BINDF_NO_UI 0x00000800
#define BINDF_NOPROGRESSIVERENDERING 0x00000004
#define BINDF_NOWRITECACHE 0x00000020
#define BINDF_OFFLINEOPERATION 0x00000008
#define BINDF_PRAGMA_NO_CACHE 0x00002000
#define BINDF_PREFERDEFAULTHANDLER 0x00400000
#define BINDF_PULLDATA 0x00000080
#define BINDF_RESERVED_1 0x00008000
#define BINDF_RESERVED_3 0x00800000
#define BINDF_RESYNCHRONIZE 0x00000200
#define BINDF_SILENTOPERATION 0x00001000
#define BINDINFO_OPTIONS_BINDTOOBJECT 0x00100000
#define BINDINFO_OPTIONS_DISABLE_UTF8 0x00040000
#define BINDINFO_OPTIONS_ENABLE_UTF8 0x00020000
#define BINDINFO_OPTIONS_USE_IE_ENCODING 0x00080000
#define BINDINFO_OPTIONS_WININETFLAG 0x00010000
#define BINDSTRING_HEADERS 1
#define MIMETYPEPROP 0x00000000
#define MKSYS_ANTIMONIKER 3
#define MKSYS_CLASSMONIKER 7
#define MKSYS_FILEMONIKER 2
#define MKSYS_GENERICCOMPOSITE 1
#define MKSYS_ITEMMONIKER 4
#define MKSYS_NONE 0
#define MKSYS_OBJREFMONIKER 8
#define MKSYS_POINTERMONIKER 5
#define MKSYS_SESSIONMONIKER 9
#define PARSE_CANONICALIZE 1
#define PI_APARTMENTTHREADED 0x00000100
#define PI_CLASSINSTALL 0x00000200
#define PI_CLSIDLOOKUP 0x00000020
#define PI_DATAPROGRESS 0x00000040
#define PI_FILTER_MODE 0x00000002
#define PI_FORCE_ASYNC 0x00000004
#define PI_LOADAPPDIRECT 0x00004000
#define PI_MIMEVERIFICATION 0x00000010
#define PI_NOMIMEHANDLER 0x00008000
#define PI_PARSE_URL 0x00000001
#define PI_PASSONBINDCTX 0x00002000
#define PI_SYNCHRONOUS 0x00000080
#define PI_USE_WORKERTHREAD 0x00000008
#define PSU_DEFAULT 1
#define PUAF_ACCEPT_WILDCARD_SCHEME 0x00000080
#define PUAF_CHECK_TIFS 0x00000010
#define PUAF_DEFAULT 0x0000000
#define PUAF_DONTCHECKBOXINDIALOG 0x00000020
#define PUAF_FORCEUI_FOREGROUND 0x00000008
#define PUAF_ISFILE 0x00000002
#define PUAF_NOUI 0x00000001
#define PUAF_TRUSTED 0x00000040
#define PUAF_WARN_IF_DENIED 0x00000004
#define QUERY_EXPIRATION_DATE 1
#define SZM_CREATE 0x00000000
#define SZM_DELETE 0x00000001
#define URL_ENCODING_DISABLE_UTF8 0x20000000
#define URL_ENCODING_ENABLE_UTF8 0x10000000
#define URL_ENCODING_NONE 0x00000000
#define URLACTION_ACTIVEX_CONFIRM_NOOBJECTSAFETY 0x00001204
#define URLACTION_ACTIVEX_OVERRIDE_DATA_SAFETY 0x00001202
#define URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY 0x00001201
#define URLACTION_ACTIVEX_OVERRIDE_SCRIPT_SAFETY 0x00001203
#define URLACTION_ACTIVEX_RUN 0x00001200
#define URLACTION_AUTHENTICATE_CLIENT 0x00001A01
#define URLACTION_CLIENT_CERT_PROMPT 0x00001A04
#define URLACTION_COOKIES 0x00001A02
#define URLACTION_COOKIES_SESSION 0x00001A03
#define URLACTION_COOKIES_SESSION_THIRD_PARTY 0x00001A06
#define URLACTION_COOKIES_THIRD_PARTY 0x00001A05
#define URLACTION_CREDENTIALS_USE 0x00001A00
#define URLACTION_CROSS_DOMAIN_DATA 0x00001406
#define URLACTION_DOWNLOAD_SIGNED_ACTIVEX 0x00001001
#define URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX 0x00001004
#define URLACTION_HTML_FONT_DOWNLOAD 0x00001604
#define URLACTION_HTML_JAVA_RUN 0x00001605
#define URLACTION_HTML_SUBFRAME_NAVIGATE 0x00001607
#define URLACTION_HTML_SUBMIT_FORMS 0x00001601
#define URLACTION_HTML_SUBMIT_FORMS_FROM 0x00001602
#define URLACTION_SCRIPT_JAVA_USE 0x00001402
#define URLACTION_SCRIPT_OVERRIDE_SAFETY 0x00001401
#define URLACTION_SCRIPT_PASTE 0x00001407
#define URLACTION_SCRIPT_RUN 0x00001400
#define URLACTION_SCRIPT_SAFE_ACTIVEX 0x00001405
#define URLACTION_SHELL_FILE_DOWNLOAD 0x00001803
#define URLACTION_SHELL_INSTALL_DTITEMS 0x00001800
#define URLACTION_SHELL_MOVE_OR_COPY 0x00001802
#define URLACTION_SHELL_VERB 0x00001804
#define URLACTION_SHELL_WEBVIEW_VERB 0x00001805
#define URLTEMPLATE_CUSTOM 0x00000
#define URLTEMPLATE_HIGH 0x12000
#define URLTEMPLATE_LOW 0x10000
#define URLTEMPLATE_MEDIUM 0x11000
#define URLTEMPLATE_MEDLOW 0x10500
#define URLTEMPLATE_PREDEFINED_MAX 0x20000
#define URLTEMPLATE_PREDEFINED_MIN 0x10000
#define URLZONE_LOCAL_MACHINE 0
#define URLZONE_PREDEFINED_MAX 999
#define URLZONE_PREDEFINED_MIN 0
#define URLZONE_USER_MAX 10000
#define URLZONE_USER_MIN 1000
#define URLZONEREG_DEFAULT 0
#define ZAFLAGS_ADD_SITES 0x00000002
#define ZAFLAGS_CUSTOM_EDIT 0x00000001
#define ZAFLAGS_INCLUDE_INTRANET_SITES 0x00000010
#define ZAFLAGS_INCLUDE_PROXY_OVERRIDE 0x00000008
#define ZAFLAGS_NO_UI 0x00000020
#define ZAFLAGS_REQUIRE_VERIFICATION 0x00000004
#define ZAFLAGS_SUPPORTS_VERIFICATION 0x00000040
#define ZAFLAGS_UNC_AS_INTRANET 0x00000080

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* BINDINFO  [struct; ce-only; urlmon.lib] */

/* PROTOCOLFILTERDATA  [struct; ce-only] */

/* ZONEATTRIBUTES  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* PROTOCOLDATA  [struct; ce-only] */
typedef struct _tagPROTOCOLDATA {
 DWORD grfFlags;
 DWORD dwState;
 LPVOID pData;
 ULONG cbData;
} PROTOCOLDATA;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CoGetClassObjectFromURL  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CoGetClassObjectFromURL(
 REFCLSID rclsid,
 LPCWSTR szCodeURL,
 DWORD dwFileVersionMS,
 DWORD dwFileVersionLS,
 LPCWSTR szContentType,
 LPBINDCTX pBindCtx,
 DWORD dwClsContext,
 LPVOID pvReserved,
 REFIID riid,
 VOID** ppv
);

/* CoInternetCombineUrl  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CoInternetCombineUrl(
 LPCWSTR pwzBaseUrl,
 LPCWSTR pwzRelativeUrl,
 DWORD dwCombineFlags,
 LPWSTR pwzResult,
 DWORD cchResult,
 DWORD* pcchResult,
 DWORD dwReserved
);

/* CoInternetGetProtocolFlags  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
STDAPI CoInternetGetProtocolFlags(
 LPCWSTR pwzUrl,
 DWORD* pdwFlags,
 DWORD dwReserved
);

/* CoInternetGetSecurityUrl  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CoInternetGetSecurityURL(
 LPCWSTR pwzUrl,
 LPWSTR* ppwzSecUrl,
 PSUACTION psuAction,
 DWORD dwReserved
);

/* CoInternetGetSession  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
STDAPI CoInternetGetSession(
 DWORD dwSessionMode,
 IInternetSession** ppIInternetSession,
 DWORD dwReserved
);

/* CoInternetParseUrl  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
STDAPI CoInternetParseUrl(
 LPCWSTR pwzUrl,
 PARSEACTION ParseAction,
 DWORD dwFlags,
 LPWSTR pszResult,
 DWORD cchResult,
 DWORD* pcchResult,
 DWORD dwReserved
);

/* CoInternetQueryInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CoInternetQueryInfo(
 LPCWSTR pwzUrl,
 QUERYOPTION QueryOption,
 DWORD dwQueryFlags,
 LPVOID pvBuffer,
 DWORD cbBuffer,
 DWORD* pcbBuffer,
 DWORD dwReserved
);

/* CopyBindInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CopyBindInfo(
 const BINDINFO* pcbiSrc,
 BINDINFO* pcbiDest
);

/* CopyStgMedium  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CopyStgMedium(
 const STGMEDIUM* pcstgmedSrc,
 STGMEDIUM* pstgmedDest
);

/* CreateAsyncBindCtx  [function; shared; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateAsyncBindCtx(
 DWORD dwReserved,
 IBindStatusCallback* pbsc,
 IEnumFORMATETC* penumfmtetc,
 IBindCtx** ppbc
);

/* CreateAsyncBindCtxEx  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateAsyncBindCtxEx(
 IBindCtx* pbc,
 DWORD dwOptions,
 IBindStatusCallback* pBSCb,
 IEnumFORMATETC* pEnum,
 IBindCtx** ppBC,
 DWORD reserved
);

/* CreateFormatEnumerator  [function; shared; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateFormatEnumerator(
 UINT cfmtetc,
 FORMATETC* rgfmtetc,
 IEnumFORMATETC** ppenumfmtetc
);

/* CreateURLMoniker  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateURLMoniker(
 IMoniker* pmkContext,
 LPWSTR szURL,
 IMoniker** ppmk
);

/* CreateURLMonikerEx  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateURLMonikerEx(
 LPMONIKER pMkCtx,
 LPCWSTR szURL,
 LPMONIKER* ppmk,
 DWORD dwFlags
);

/* FindMediaType  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT FindMediaType(
 LPCSTR rgszTypes,
 CLIPFORMAT* rgcfTypes
);

/* FindMediaTypeClass  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT FindMediaTypeClass(
 LPBC pbc,
 LPCSTR szType,
 CLSID* pclsID,
 DWORD dwReserved
);

/* FindMimeFromData  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT FindMimeFromData(
 LPBC pBC,
 LPCWSTR pwzUrl,
 LPVOID pBuffer,
 DWORD cbSize,
 LPCWSTR pwzMimeProposed,
 DWORD dwMimeFlags,
 LPWSTR* ppwzMimeOut,
 DWORD dwReserved
);

/* GetClassFileOrMime  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetClassFileOrMime(
 LPBC pBC,
 LPCWSTR szFilename,
 LPVOID pBuffer,
 DWORD cbSize,
 LPCWSTR szMime,
 DWORD dwReserved,
 CLSID* pclsid
);

/* IsAsyncMoniker  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT IsAsyncMoniker(
 IMoniker* pmk
);

/* IsLoggingEnabled  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
BOOL IsLoggingEnabled(
 LPCTSTR pszUrl
);

/* IsValidURL  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT IsValidURL(
 LPBC pBC,
 LPCWSTR szURL,
 DWORD dwReserved
);

/* MkParseDisplayNameEx  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT MkParseDisplayNameEx(
 IBindCtx* pbc,
 LPWSTR szDisplayName,
 ULONG* pcchEaten,
 IMoniker** ppmk
);

/* ObtainUserAgentString  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ObtainUserAgentString(
 DWORD dwOption,
 LPCSTR pcszUAOut,
 DWORD* cbSize
);

/* RegisterBindStatusCallback  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RegisterBindStatusCallback(
 IBindCtx* pbc,
 IBindStatusCallback* pbsc,
 IBindStatusCallback** ppbscPrevious,
 DWORD dwReserved
);

/* RegisterFormatEnumerator  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RegisterFormatEnumerator(
 LPBC pBC,
 IEnumFORMATETC* pEFetc,
 DWORD reserved
);

/* RegisterMediaTypeClass  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RegisterMediaTypeClass(
 LPBC pbc,
 UINT ctypes,
 LPCSTR* rgszTypes,
 CLSID* rgclsID,
 DWORD dwReserved
);

/* RegisterMediaTypes  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RegisterMediaTypes(
 UINT ctypes,
 LPCSTR* rgszTypes,
 CLIPFORMAT* rgcfTypes
);

/* ReleaseBindInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
void ReleaseBindInfo(
 BINDINFO* pbindinfo
);

/* RevokeBindStatusCallback  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RevokeBindStatusCallback(
 IBindCtx* pbc,
 IBindStatusCallback* pbsc
);

/* RevokeFormatEnumerator  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RevokeFormatEnumerator(
 LPBC pbc,
 IEnumFORMATETC* pEFetc
);

/* URLDownloadToCacheFile  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT URLDownloadToCacheFile(
 LPUNKNOWN lpUnkcaller,
 LPCSTR szURL,
 LPTSTR szFileName,
 DWORD dwBufLength,
 DWORD dwReserved,
 IBindStatusCallback* pBSC
);

/* URLDownloadToFile  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT URLDownloadToFile(
 LPUNKNOWN pCaller,
 LPCTSTR szURL,
 LPCTSTR szFileName,
 DWORD dwReserved,
 LPBINDSTATUSCALLBACK lpfnCB
);

/* UrlMkGetSessionOption  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT UrlMkGetSessionOption(
 DWORD dwOption,
 LPVOID pBuffer,
 DWORD dwBufferLength,
 DWORD* pdwBufferLength,
 DWORD dwReserved
);

/* UrlMkSetSessionOption  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT UrlMkSetSessionOption(
 DWORD dwOption,
 LPVOID pBuffer,
 DWORD dwBufferLength,
 DWORD dwReserved
);

/* URLOpenPullStream  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT URLOpenPullStream(
 LPUNKNOWN pCaller,
 LPCSTR szURL,
 DWORD dwReserved,
 LPBINDSTATUSCALLBACK lpfnCB
);

/* URLOpenStream  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT URLOpenStream(
 LPUNKNOWN pCaller,
 LPCSTR szURL,
 DWORD dwReserved,
 LPBINDSTATUSCALLBACK lpfnCB
);

/* WriteHitLogging  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
BOOL WriteHitLogging (
 LPHIT_LOGGING_INFO lpLogginginfo
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CoInternetCreateSecurityManager  [function; ce-only; CE 6.0..699; urlmon.lib] */
HRESULT CoInternetCreateSecurityManager(
 IServiceProvider* pSP,
 IInternetSecurityManager** ppSM,
 DWORD dwReserved
);

/* CoInternetCreateZoneManager  [function; ce-only; CE 6.0..699; urlmon.lib] */
HRESULT CoInternetCreateSecurityManager(
 IServiceProvider *pSP,
 IInternetZoneManager **ppSM,
 DWORD dwReserved
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _HIT_LOGGING_INFO {DWORDdwStructSize;LPSTRlpszLoggedUrlName;SYSTEMTIMEStartTime;SYSTEMTIMEEndTime;LPSTRlpszExtendedInfo;} HIT_LOGGING_INFO, *LPHIT_LOGGING_INFO;
typedef struct _ZONEATTRIBUTES {ULONGcbSize;WCHARszDisplayName[MAX_PATH];WCHARszDescription[MAX_ZONE_DESCRIPTION];WCHARszIconPath[MAX_PATH];DWORDdwTemplateMinLevel;DWORDdwTemplateRecommended;DWORDdwTemplateCurrentLevel;DWORDdwFlags;} ZONEATTRIBUTES, *LPZONEATTRIBUTES;

/* function */
HRESULT Authenticate( HWND* phwnd, LPWSTR* pszUsername, LPWSTR* pszPassword );
HRESULT BeginningTransaction( LPCWSTR szURL, DWORD dwReserved, LPCWSTR szHeaders, LPWSTR* pszAdditionalHeaders );
HRESULT CombineUrl( LPCWSTR pwzBaseUrl, LPCWSTR pwzRelativeUrl, DWORD dwCombineFlags, LPWSTR pwzResult, DWORD cchResult, DWORD* pcchResult, DWORD dwReserved );
HRESULT CommitSwitch(VOID);
HRESULT CompareUrl( LPCWSTR pwzUrl1, LPCWSTR pwzUrl2, DWORD dwCompareFlags );
HRESULT Continue( PROTOCOLDATA* pProtocolData );
HRESULT CreateMoniker( LPOLESTR szName, IBindCtx* pBC, IMoniker** ppmk, DWORD dwReserved );
HRESULT CreateZoneEnumerator( DWORD* pdwEnum, DWORD* pdwCount, DWORD dwFlags );
HRESULT DestroyZoneEnumerator( DWORD dwEnum );
HRESULT GetBindInfo( DWORD* grfBINDF, BINDINFO* pbindinfo );
HRESULT GetBindResult( CLSID* pclsidProtocol, DWORD* pdwResult, LPOLESTR* pszResult, DWORD* pdwReserved );
HRESULT GetBindString( ULONG ulStringType, LPOLESTR* ppwzStr, ULONG cEl, ULONG* pcElFetched );
HRESULT GetCurMoniker( IMoniker** ppimkName );
HRESULT GetSecurityId( BYTE* pbSecurityId, DWORD* pcbSecurityId, DWORD_PTR dwReserved );
HRESULT GetSecuritySite( IInternetSecurityMgrSite** ppSite );
HRESULT GetZoneActionPolicy( DWORD dwZone, DWORD dwAction, BYTE* pPolicy, DWORD cbPolicy, URLZONEREG urlZoneReg );
HRESULT GetZoneAt( DWORD dwEnum, DWORD dwIndex, DWORD* pdwZone );
HRESULT GetZoneAttributes( DWORD dwZone, ZONEATTRIBUTES* pZoneAttributes );
HRESULT GetZoneCustomPolicy( DWORD dwZone, REFGUID guidKey, BYTE** ppPolicy, DWORD* pcbPolicy, URLZONEREG urlZoneReg );
HRESULT GetZoneMappings( DWORD dwZone, IEnumString** ppenumString, DWORD dwFlags );
HRESULT MapUrlToZone( LPCWSTR pwszUrl, DWORD* pdwZone, DWORD dwFlags );
HRESULT MonikerBindToObject( IMoniker* pMk, IBindCtx* pBC, IBindStatusCallback* pBSC, REFIID riid, void** ppvObj );
HRESULT MonikerBindToStorage( IMoniker* pMk, IBindCtx* pBC, IBindStatusCallback* pBSC, REFIID riid, void** ppvObj );
HRESULT OnDataAvailable( DWORD grfBSCF, DWORD dwSize, FORMATETC* pformatetc, STGMEDIUM* pstgmed );
HRESULT OnObjectAvailable( REFIID riid, IUnknown* punk );
HRESULT OnResponse( DWORD dwResponseCode, LPCWSTR szResponseHeaders, LPCWSTR szRequestHeaders, LPWSTR* pszAdditionalRequestHeaders );
HRESULT OnSecurityProblem( DWORD dwProblem );
HRESULT OnStartBinding( DWORD dwReserved, IBinding* pib );
HRESULT OnStopBinding( HRESULT hresult, LPCWSTR szError );
HRESULT ParseUrl( LPCWSTR pwzUrl, PARSEACTION ParseAction, DWORD dwParseFlags, LPWSTR pwzResult, DWORD cchResult, DWORD* pcchResult, DWORD dwReserved );
HRESULT ProcessUrlAction( DWORD dwAction, BYTE* pPolicy, DWORD cbPolicy, BYTE* pContext, DWORD cbContext, DWORD dwFlags, DWORD dwReserved );
HRESULT PutProperty( MONIKERPROPERTY mkp, LPCWSTR val );
HRESULT QueryCustomPolicy( REFGUID guidKey, BYTE** ppPolicy, DWORD* pcbPolicy, BYTE* pContext, DWORD cbContext, DWORD dwReserved );
HRESULT QueryInfo( LPCWSTR pwzUrl, QUERYOPTION OueryOption, DWORD dwQueryFlags, LPVOID pBuffer, DWORD cbBuffer, DWORD* pcbBuf, DWORD dwReserved );
HRESULT QueryOption( DWORD dwOption, LPVOID pBuffer, DWORD* pcbBuf );
HRESULT RegisterMimeFilter( IClassFactory* pCF, REFCLSID rclsid, LPCWSTR pwzType );
HRESULT RegisterNameSpace( IClassFactory* pCF, REFCLSID rclsid, LPCWSTR pwzProtocol, ULONG cPatterns, const LPCWSTR* ppwzPatterns, DWORD dwReserved );
HRESULT ReportData( DWORD grfBSCF, ULONG ulProgress, ULONG ulProgressMax );
HRESULT ReportProgress( ULONG ulStatusCode, LPCWSTR szStatusText );
HRESULT ReportResult( HRESULT hrResult, DWORD dwError, LPCWSTR szResult );
HRESULT RollbackSwitch(VOID);
HRESULT SetSecuritySite( IInternetSecurityMgrSite* pSite );
HRESULT SetZoneActionPolicy( DWORD dwZone, DWORD dwAction, BYTE* pPolicy, DWORD cbPolicy, URLZONEREG urlZoneReg );
HRESULT SetZoneAttributes( DWORD dwZone, ZONEATTRIBUTES* pZoneAttributes );
HRESULT SetZoneCustomPolicy( DWORD dwZone, REFGUID guidKey, BYTE* pPolicy, DWORD cbPolicy, URLZONEREG urlZoneReg );
HRESULT SetZoneMapping( DWORD dwZone, LPCWSTR lpszPattern, DWORD dwFlags );
HRESULT Switch( PROTOCOLDATA* pProtocolData );
HRESULT SwitchSink( IInternetProtocolSink* pOIProtSink );
HRESULT UnlockRequest(VOID);
HRESULT UnregisterMimeFilter( IClassFactory* pCF, LPCWSTR pwzType );
HRESULT UnregisterNameSpace( IClassFactory* pCF, LPCWSTR pszProtocol );

#endif /* _URLMON_ */
