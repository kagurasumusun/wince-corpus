/* Urlmon.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 39 constants, 60 declarations, 3 outlines, 0 base types, 0 extra macros, 51 extra decls
 */
#ifndef _URLMON_
#define _URLMON_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MKSYS_ANTIMONIKER 3
#define MKSYS_CLASSMONIKER 7
#define MKSYS_FILEMONIKER 2
#define MKSYS_GENERICCOMPOSITE 1
#define MKSYS_ITEMMONIKER 4
#define MKSYS_NONE 0
#define MKSYS_OBJREFMONIKER 8
#define MKSYS_POINTERMONIKER 5
#define MKSYS_SESSIONMONIKER 9
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

/* LPHIT_LOGGING_INFO  [extra struct] */
typedef struct _HIT_LOGGING_INFO {DWORDdwStructSize;LPSTRlpszLoggedUrlName;SYSTEMTIMEStartTime;SYSTEMTIMEEndTime;LPSTRlpszExtendedInfo;} HIT_LOGGING_INFO, *LPHIT_LOGGING_INFO;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

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

/* CreateURLMoniker  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateURLMoniker(
 IMoniker* pmkContext,
 LPWSTR szURL,
 IMoniker** ppmk
);

/* IsAsyncMoniker  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT IsAsyncMoniker(
 IMoniker* pmk
);

/* IsLoggingEnabled  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
BOOL IsLoggingEnabled(
 LPCTSTR pszUrl
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

/* RevokeBindStatusCallback  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RevokeBindStatusCallback(
 IBindCtx* pbc,
 IBindStatusCallback* pbsc
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

/* WriteHitLogging  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
BOOL WriteHitLogging (
 LPHIT_LOGGING_INFO lpLogginginfo
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

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

/* function */
HRESULT Authenticate( HWND* phwnd, LPWSTR* pszUsername, LPWSTR* pszPassword );
HRESULT BeginningTransaction( LPCWSTR szURL, DWORD dwReserved, LPCWSTR szHeaders, LPWSTR* pszAdditionalHeaders );
HRESULT CombineUrl( LPCWSTR pwzBaseUrl, LPCWSTR pwzRelativeUrl, DWORD dwCombineFlags, LPWSTR pwzResult, DWORD cchResult, DWORD* pcchResult, DWORD dwReserved );
HRESULT CommitSwitch(VOID);
HRESULT CompareUrl( LPCWSTR pwzUrl1, LPCWSTR pwzUrl2, DWORD dwCompareFlags );
HRESULT Continue( PROTOCOLDATA* pProtocolData );
HRESULT CreateZoneEnumerator( DWORD* pdwEnum, DWORD* pdwCount, DWORD dwFlags );
HRESULT DestroyZoneEnumerator( DWORD dwEnum );
HRESULT GetBindInfo( DWORD* grfBINDF, BINDINFO* pbindinfo );
HRESULT GetCurMoniker( IMoniker** ppimkName );
HRESULT GetSecurityId( BYTE* pbSecurityId, DWORD* pcbSecurityId, DWORD_PTR dwReserved );
HRESULT GetSecuritySite( IInternetSecurityMgrSite** ppSite );
HRESULT GetZoneActionPolicy( DWORD dwZone, DWORD dwAction, BYTE* pPolicy, DWORD cbPolicy, URLZONEREG urlZoneReg );
HRESULT GetZoneAt( DWORD dwEnum, DWORD dwIndex, DWORD* pdwZone );
HRESULT GetZoneAttributes( DWORD dwZone, ZONEATTRIBUTES* pZoneAttributes );
HRESULT GetZoneMappings( DWORD dwZone, IEnumString** ppenumString, DWORD dwFlags );
HRESULT MapUrlToZone( LPCWSTR pwszUrl, DWORD* pdwZone, DWORD dwFlags );
HRESULT OnResponse( DWORD dwResponseCode, LPCWSTR szResponseHeaders, LPCWSTR szRequestHeaders, LPWSTR* pszAdditionalRequestHeaders );
HRESULT OnSecurityProblem( DWORD dwProblem );
HRESULT OnStartBinding( DWORD dwReserved, IBinding* pib );
HRESULT OnStopBinding( HRESULT hresult, LPCWSTR szError );
HRESULT ParseUrl( LPCWSTR pwzUrl, PARSEACTION ParseAction, DWORD dwParseFlags, LPWSTR pwzResult, DWORD cchResult, DWORD* pcchResult, DWORD dwReserved );
HRESULT ProcessUrlAction( DWORD dwAction, BYTE* pPolicy, DWORD cbPolicy, BYTE* pContext, DWORD cbContext, DWORD dwFlags, DWORD dwReserved );
HRESULT PutProperty( MONIKERPROPERTY mkp, LPCWSTR val );
HRESULT QueryInfo( LPCWSTR pwzUrl, QUERYOPTION OueryOption, DWORD dwQueryFlags, LPVOID pBuffer, DWORD cbBuffer, DWORD* pcbBuf, DWORD dwReserved );
HRESULT QueryOption( DWORD dwOption, LPVOID pBuffer, DWORD* pcbBuf );
HRESULT ReportData( DWORD grfBSCF, ULONG ulProgress, ULONG ulProgressMax );
HRESULT ReportProgress( ULONG ulStatusCode, LPCWSTR szStatusText );
HRESULT ReportResult( HRESULT hrResult, DWORD dwError, LPCWSTR szResult );
HRESULT RollbackSwitch(VOID);
HRESULT SetSecuritySite( IInternetSecurityMgrSite* pSite );
HRESULT SetZoneActionPolicy( DWORD dwZone, DWORD dwAction, BYTE* pPolicy, DWORD cbPolicy, URLZONEREG urlZoneReg );
HRESULT SetZoneAttributes( DWORD dwZone, ZONEATTRIBUTES* pZoneAttributes );
HRESULT SetZoneMapping( DWORD dwZone, LPCWSTR lpszPattern, DWORD dwFlags );
HRESULT Switch( PROTOCOLDATA* pProtocolData );
HRESULT SwitchSink( IInternetProtocolSink* pOIProtSink );
HRESULT UnlockRequest(VOID);
HRESULT UnregisterMimeFilter( IClassFactory* pCF, LPCWSTR pwzType );
HRESULT UnregisterNameSpace( IClassFactory* pCF, LPCWSTR pszProtocol );

#endif /* _URLMON_ */
