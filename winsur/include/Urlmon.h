/* Urlmon.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 121 constants, 140 declarations, 0 outlines, 0 base types, 0 extra macros, 53 extra decls
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
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BINDF  [enum; ce-only; CE 4.0..699; urlmon.lib] */
typedef enum {
 BINDF_ASYNCHRONOUS = 0x00000001,
 BINDF_ASYNCSTORAGE = 0x00000002,
 BINDF_NOPROGRESSIVERENDERING = 0x00000004,
 BINDF_OFFLINEOPERATION = 0x00000008,
 BINDF_GETNEWESTVERSION = 0x00000010,
 BINDF_NOWRITECACHE = 0x00000020,
 BINDF_NEEDFILE = 0x00000040,
 BINDF_PULLDATA = 0x00000080,
 BINDF_IGNORESECURITYPROBLEM = 0x00000100,
 BINDF_RESYNCHRONIZE = 0x00000200,
 BINDF_HYPERLINK = 0x00000400,
 BINDF_NO_UI = 0x00000800,
 BINDF_SILENTOPERATION = 0x00001000,
 BINDF_PRAGMA_NO_CACHE = 0x00002000,
 BINDF_GETCLASSOBJECT = 0x00004000,
 BINDF_RESERVED_1 = 0x00008000,
 BINDF_FREE_THREADED = 0x00010000,
 BINDF_DIRECT_READ = 0x00020000,
 BINDF_FORMS_SUBMIT = 0x00040000,
 BINDF_GETFROMCACHE_IF_NET_FAIL = 0x00080000,
 BINDF_FROMURLMON = 0x00100000,
 BINDF_FWD_BACK = 0x00200000,
 BINDF_PREFERDEFAULTHANDLER = 0x00400000,
 BINDF_RESERVED_3 = 0x00800000
} BINDF;

/* BINDINFO  [struct; ce-only; CE 4.0..699; urlmon.lib] */
typedef struct _tagBINDINFO {
 ULONG cbSize;
 LPWSTR szExtraInfo;
 STGMEDIUM stgmedData;
 DWORD grfBindInfoF;
 DWORD dwBindVerb;
 LPWSTR szCustomVerb;
 DWORD cbStgmedData ;
 DWORD dwOptions;
 DWORD dwOptionsFlags;
 DWORD dwCodePage;
 SECURITY_ATTRIBUTES securityAttributes;
 IID iid;
 IUnknown* pUnk;
 DWORD dwReserved;
} BINDINFO;

/* BINDINFO_OPTIONS  [enum; ce-only; CE 4.0..699] */
typedef enum {
 BINDINFO_OPTIONS_WININETFLAG = 0x00010000,
 BINDINFO_OPTIONS_ENABLE_UTF8 = 0x00020000,
 BINDINFO_OPTIONS_DISABLE_UTF8 = 0x00040000,
 BINDINFO_OPTIONS_USE_IE_ENCODING = 0x00080000,
 BINDINFO_OPTIONS_BINDTOOBJECT = 0x00100000
} BINDINFO_OPTIONS;

/* BINDINFOF  [enum; ce-only; CE 4.0..699; urlmon.lib] */
typedef enum tagBINDINFOF {
 BINDINFOF_URLENCODESTGMEDDATA,
 BINDINFOF_URLENCODEDEXTRAINFO
} BINDINFOF;

/* BINDSTATUS  [enum; ce-only; CE 4.0..699; urlmon.lib] */
typedef enum tagBINDSTATUS {
 BINDSTATUS_FINDINGRESOURCE,
 BINDSTATUS_CONNECTING,
 BINDSTATUS_REDIRECTING,
 BINDSTATUS_BEGINDOWNLOADDATA,
 BINDSTATUS_DOWNLOADINGDATA,
 BINDSTATUS_ENDDOWNLOADDATA,
 BINDSTATUS_BEGINDOWNLOADCOMPONENTS,
 BINDSTATUS_INSTALLINGCOMPONENTS,
 BINDSTATUS_ENDDOWNLOADCOMPONENTS,
 BINDSTATUS_USINGCACHEDCOPY,
 BINDSTATUS_SENDINGREQUEST,
 BINDSTATUS_CLASSIDAVAILABLE,
 BINDSTATUS_MIMETYPEAVAILABLE,
 BINDSTATUS_CACHEFILENAMEAVAILABLE,
 BINDSTATUS_BEGINSYNCOPERATION,
 BINDSTATUS_ENDSYNCOPERATION,
 BINDSTATUS_BEGINUPLOADDATA,
 BINDSTATUS_UPLOADINGDATA,
 BINDSTATUS_ENDUPLOADINGDATA,
 BINDSTATUS_PROTOCOLCLASSID,
 BINDSTATUS_ENCODING,
 BINDSTATUS_VERFIEDMIMETYPEAVAILABLE,
 BINDSTATUS_CLASSINSTALLLOCATION,
 BINDSTATUS_DECODING,
 BINDSTATUS_LOADINGMIMEHANDLER,
 BINDSTATUS_CONTENTDISPOSITIONATTACH,
 BINDSTATUS_FILTERREPORTMIMETYPE,
 BINDSTATUS_CLSIDCANINSTANTIATE,
 BINDSTATUS_IUNKNOWNAVAILABLE,
 BINDSTATUS_DIRECTBIND,
 BINDSTATUS_RAWMIMETYPE,
 BINDSTATUS_PROXYDETECTING,
 BINDSTATUS_ACCEPTRANGES,
 BINDSTATUS_COOKIE_SENT,
 BINDSTATUS_COMPACT_POLICY_RECEIVED,
 BINDSTATUS_COOKIE_SUPPRESSED,
 BINDSTATUS_COOKIE_STATE_UNKNOWN,
 BINDSTATUS_COOKIE_STATE_ACCEPT,
 BINDSTATUS_COOKIE_STATE_REJECT,
 BINDSTATUS_COOKIE_STATE_PROMPT,
 BINDSTATUS_COOKIE_STATE_LEASH,
 BINDSTATUS_COOKIE_STATE_PROMPT,
 BINDSTATUS_COOKIE_STATE_DOWNGRADE,
 BINDSTATUS_POLICY_HREF,
 BINDSTATUS_P3P_HEADER,
 BINDSTATUS_PERSISTENT_COOKIE_RECEIVED,
 BINDSTATUS_SESSION_COOKIE_RECEIVED,
 BINDSTATUS_SESSION_COOKIES_ALLOWED,
 BINDSTATUS_CACHECONTROL,
 BINDSTATUS_SIZEAVAILABLE,
} BINDSTATUS;

/* BINDSTRING  [enum; ce-only; CE 4.0..699] */
typedef enum tagBINDSTRING {
 BINDSTRING_HEADERS = 1,
 BINDSTRING_ACCEPT_MIMES,
 BINDSTRING_EXTRA_URL,
 BINDSTRING_LANGUAGE,
 BINDSTRING_USERNAME,
 BINDSTRING_PASSWORD,
 BINDSTRING_UA_PIXELS,
 BINDSTRING_UA_COLOR,
 BINDSTRING_OS,
 BINDSTRING_USERAGENT,
 BINDSTRING_ACCEPT_ENCODINGS,
 BINDSTRING_POST_COOKIE,
 BINDSTRING_POST_DATA_MIME,
 BINDSTRING_URL,
 BINDSTRING_IID,
 BINDSTRING_FLAG_BIND_TO_OBJECT,
 BINDSTRING_PTR_BIND_CONTEXT
} BINDSTRING;

/* BINDVERB  [enum; ce-only; CE 4.0..699; urlmon.lib] */
typedef enum {
 BINDVERB_GET,
 BINDVERB_POST,
 BINDVERB_PUT,
 BINDVERB_CUSTOM
} BINDVERB;

/* BSCF  [enum; ce-only; CE 4.0..699; urlmon.lib] */
typedef enum {
 BSCF_FIRSTDATANOTIFICATION,
 BSCF_INTERMEDIATEDATANOTIFICATION,
 BSCF_LASTDATANOTIFICATION,
 BSCF_DATAFULLYAVAILABLE,
 BSCF_AVAILABLEDATASIZEUNKNOWN
 } BSCF;

/* HIT_LOGGING_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _HIT_LOGGING_INFO {
 DWORD dwStructSize;
 LPSTR lpszLoggedUrlName;
 SYSTEMTIME StartTime;
 SYSTEMTIME EndTime;
 LPSTR lpszExtendedInfo;
} HIT_LOGGING_INFO, *LPHIT_LOGGING_INFO;

/* MONIKERPROPERTY  [enum; ce-only; CE 4.0..699] */
typedef enum {
 MIMETYPEPROP = 0x00000000
} MONIKERPROPERTY;

/* PARSEACTION  [enum; ce-only; CE 4.0..699] */
typedef enum _tagPARSEACTION {
 PARSE_CANONICALIZE = 1,
 PARSE_FRIENDLY,
 PARSE_SECURITY_URL,
 PARSE_ROOTDOCUMENT,
 PARSE_DOCUMENT,
 PARSE_ANCHOR,
 PARSE_ENCODE,
 PARSE_DECODE,
 PARSE_PATH_FROM_URL,
 PARSE_URL_FROM_PATH,
 PARSE_MIME,
 PARSE_SERVER,
 PARSE_SCHEMA,
 PARSE_SITE,
 PARSE_DOMAIN,
 PARSE_LOCATION,
 PARSE_SECURITY_DOMAIN,
 PARSE_ESCAPE,
 PARSE_UNESCAPE
} PARSEACTION;

/* PI_FLAGS  [enum; ce-only; CE 4.0..699] */
typedef enum _tagPI_FLAGS {
 PI_PARSE_URL = 0x00000001,
 PI_FILTER_MODE = 0x00000002,
 PI_FORCE_ASYNC = 0x00000004,
 PI_USE_WORKERTHREAD = 0x00000008,
 PI_MIMEVERIFICATION = 0x00000010,
 PI_CLSIDLOOKUP = 0x00000020,
 PI_DATAPROGRESS = 0x00000040,
 PI_SYNCHRONOUS = 0x00000080,
 PI_APARTMENTTHREADED = 0x00000100,
 PI_CLASSINSTALL = 0x00000200,
 PI_PASSONBINDCTX = 0x00002000,
 PI_NOMIMEHANDLER = 0x00008000,
 PI_LOADAPPDIRECT = 0x00004000,
 PD_FORCE_SWITCH = 0x00010000
} PI_FLAGS;

/* PROTOCOLDATA  [struct; ce-only; CE 4.0..699] */
typedef struct _tagPROTOCOLDATA {
 DWORD grfFlags;
 DWORD dwState;
 LPVOID pData;
 ULONG cbData;
} PROTOCOLDATA;

/* PROTOCOLFILTERDATA  [struct; ce-only; CE 4.0..699] */
typedef struct _tagPROTOCOLFILTERDATA {
 DWORD cbSize;
 IInternetProtocolSink* pProtocolSink;
 IInternetProtocol* pProtocol;
 IUnknown* pUnk;
 DWORD dwFilterFlags;
} PROTOCOLFILTERDATA;

/* PSUACTION  [enum; ce-only; CE 4.0..699] */
typedef enum _tagPSUACTION {
 PSU_DEFAULT = 1,
 PSU_SECURITY_URL_ONLY
} PSUACTION;

/* PUAF  [enum; ce-only; CE 4.0..699] */
typedef enum {
 PUAF_DEFAULT = 0x0000000,
 PUAF_NOUI = 0x00000001,
 PUAF_ISFILE = 0x00000002,
 PUAF_WARN_IF_DENIED = 0x00000004,
 PUAF_FORCEUI_FOREGROUND = 0x00000008,
 PUAF_CHECK_TIFS = 0x00000010,
 PUAF_DONTCHECKBOXINDIALOG = 0x00000020,
 PUAF_TRUSTED = 0x00000040,
 PUAF_ACCEPT_WILDCARD_SCHEME = 0x00000080
} PUAF;

/* QUERYOPTION  [enum; ce-only; CE 4.0..699] */
typedef enum _tagQUERYOPTION {
 QUERY_EXPIRATION_DATE = 1,
 QUERY_TIME_OF_LAST_CHANGE,
 QUERY_CONTENT_ENCODING,
 QUERY_CONTENT_TYPE,
 QUERY_REFRESH,
 QUERY_RECOMBINE,
 QUERY_CAN_NAVIGATE,
 QUERY_USES_NETWORK,
 QUERY_IS_CACHED,
 QUERY_IS_INSTALLEDENTRY,
 QUERY_IS_CACHED_OR_MAPPED,
 QUERY_USES_CACHE,
 QUERY_IS_SECURE,
 QUERY_IS_SAFE
} QUERYOPTION;

/* SZM_FLAGS  [enum; ce-only; CE 4.0..699] */
typedef enum {
 SZM_CREATE = 0x00000000,
 SZM_DELETE = 0x00000001
} SZM_FLAGS;

/* URL_ENCODING  [enum; ce-only; CE 4.0..699] */
typedef enum {
 URL_ENCODING_NONE = 0x00000000,
 URL_ENCODING_ENABLE_UTF8 = 0x10000000,
 URL_ENCODING_DISABLE_UTF8 = 0x20000000
} URL_ENCODING;

/* URLTEMPLATE  [enum; ce-only; CE 4.0..699] */
typedef enum tagURLTEMPLATE {
 URLTEMPLATE_CUSTOM = 0x00000,
 URLTEMPLATE_PREDEFINED_MIN = 0x10000,
 URLTEMPLATE_LOW = 0x10000,
 URLTEMPLATE_MEDLOW = 0x10500,
 URLTEMPLATE_MEDIUM = 0x11000,
 URLTEMPLATE_HIGH = 0x12000,
 URLTEMPLATE_PREDEFINED_MAX = 0x20000
} URLTEMPLATE;

/* URLZONE  [enum; ce-only; CE 4.0..699] */
typedef enum tagURLZONE {
 URLZONE_PREDEFINED_MIN = 0,
 URLZONE_LOCAL_MACHINE = 0,
 URLZONE_INTRANET,
 URLZONE_TRUSTED,
 URLZONE_INTERNET,
 URLZONE_UNTRUSTED,
 URLZONE_PREDEFINED_MAX = 999,
 URLZONE_USER_MIN = 1000,
 URLZONE_USER_MAX = 10000
} URLZONE;

/* URLZONEREG  [enum; ce-only; CE 4.0..699] */
typedef enum _URLZONEREG {
 URLZONEREG_DEFAULT = 0,
 URLZONEREG_HKLM,
 URLZONEREG_HKCU
} URLZONEREG;

/* ZAFLAGS  [enum; ce-only; CE 4.0..699] */
typedef enum {
 ZAFLAGS_CUSTOM_EDIT = 0x00000001,
 ZAFLAGS_ADD_SITES = 0x00000002,
 ZAFLAGS_REQUIRE_VERIFICATION = 0x00000004,
 ZAFLAGS_INCLUDE_PROXY_OVERRIDE = 0x00000008,
 ZAFLAGS_INCLUDE_INTRANET_SITES = 0x00000010,
 ZAFLAGS_NO_UI = 0x00000020,
 ZAFLAGS_SUPPORTS_VERIFICATION = 0x00000040,
 ZAFLAGS_UNC_AS_INTRANET = 0x00000080
} ZAFLAGS;

/* ZONEATTRIBUTES  [struct; ce-only; CE 4.0..699] */
typedef struct _ZONEATTRIBUTES {
 ULONG cbSize;
 WCHAR szDisplayName [MAX_PATH];
 WCHAR szDescription [MAX_ZONE_DESCRIPTION];
 WCHAR szIconPath [MAX_PATH];
 DWORD dwTemplateMinLevel;
 DWORD dwTemplateRecommended;
 DWORD dwTemplateCurrentLevel;
 DWORD dwFlags;
} ZONEATTRIBUTES, *LPZONEATTRIBUTES;
#endif /* _WIN32_WCE */

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

/* IAuthenticate::Authenticate  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Authenticate(
 HWND* phwnd,
 LPWSTR* pszUsername,
 LPWSTR* pszPassword
);

/* IBindHost::CreateMoniker  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateMoniker(
 LPOLESTR szName,
 IBindCtx* pBC,
 IMoniker** ppmk,
 DWORD dwReserved
);

/* IBindHost::MonikerBindToObject  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT MonikerBindToObject(
 IMoniker* pMk,
 IBindCtx* pBC,
 IBindStatusCallback* pBSC,
 REFIID riid,
 void** ppvObj
);

/* IBindHost::MonikerBindToStorage  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT MonikerBindToStorage(
 IMoniker* pMk,
 IBindCtx* pBC,
 IBindStatusCallback* pBSC,
 REFIID riid,
 void** ppvObj
);

/* IBinding::Abort  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Abort(VOID);

/* IBinding::GetBindResult  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetBindResult(
 CLSID* pclsidProtocol,
 DWORD* pdwResult,
 LPOLESTR* pszResult,
 DWORD* pdwReserved
);

/* IBinding::GetPriority  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetPriority(
 LONG* pnPriority
);

/* IBinding::Resume  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Resume(VOID);

/* IBindStatusCallback::GetBindInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetBindInfo(
 DWORD* grfBINDF,
 BINDINFO* pbindinfo
);

/* IBindStatusCallback::GetPriority  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetPriority(
 LONG* pnPriority
);

/* IBindStatusCallback::OnDataAvailable  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnDataAvailable(
 DWORD grfBSCF,
 DWORD dwSize,
 FORMATETC* pformatetc,
 STGMEDIUM* pstgmed
);

/* IBindStatusCallback::OnObjectAvailable  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnObjectAvailable(
 REFIID riid,
 IUnknown* punk
);

/* IBindStatusCallback::OnProgress  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnProgress(
 ULONG ulProgress,
 ULONG ulProgressMax,
 ULONG ulStatusCode,
 LPCWSTR szStatusText
);

/* IBindStatusCallback::OnStartBinding  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnStartBinding(
 DWORD dwReserved,
 IBinding* pib
);

/* IBindStatusCallback::OnStopBinding  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnStopBinding(
 HRESULT hresult,
 LPCWSTR szError
);

/* IHttpNegotiate::BeginningTransaction  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT BeginningTransaction(
 LPCWSTR szURL,
 DWORD dwReserved,
 LPCWSTR szHeaders,
 LPWSTR* pszAdditionalHeaders
);

/* IHttpNegotiate::OnResponse  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnResponse(
 DWORD dwResponseCode,
 LPCWSTR szResponseHeaders,
 LPCWSTR szRequestHeaders,
 LPWSTR* pszAdditionalRequestHeaders
);

/* IHttpSecurity::OnSecurityProblem  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT OnSecurityProblem(
 DWORD dwProblem
);

/* IInternetBindInfo::GetBindInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetBindInfo(
 DWORD* grfBINDF,
 BINDINFO* pbindinfo
);

/* IInternetBindInfo::GetBindString  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetBindString(
 ULONG ulStringType,
 LPOLESTR* ppwzStr,
 ULONG cEl,
 ULONG* pcElFetched
);

/* IInternetHostSecurityManager::GetSecurityId  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetSecurityId(
 BYTE* pbSecurityId,
 DWORD* pcbSecurityId,
 DWORD_PTR dwReserved
);

/* IInternetHostSecurityManager::ProcessUrlAction  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ProcessUrlAction(
 DWORD dwAction,
 BYTE* pPolicy,
 DWORD cbPolicy,
 BYTE* pContext,
 DWORD cbContext,
 DWORD dwFlags,
 DWORD dwReserved
);

/* IInternetHostSecurityManager::QueryCustomPolicy  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT QueryCustomPolicy(
 REFGUID guidKey,
 BYTE** ppPolicy,
 DWORD* pcbPolicy,
 BYTE* pContext,
 DWORD cbContext,
 DWORD dwReserved
);

/* IInternetPriority::GetPriority  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetPriority(
 LONG* pnPriority
);

/* IInternetPriority::SetPriority  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SetPriority(
 LONG nPriority
);

/* IInternetProtocol::LockRequest  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ockRequest(
 DWORD dwOptions
);

/* IInternetProtocol::Read  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Read(
 void* pv,
 ULONG cb,
 ULONG* pcbRead
);

/* IInternetProtocol::Seek  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Seek(
 LARGE_INTEGER dlibMove,
 DWORD dwOrigin, 
 ULARGE_INTEGER* plibNewPosition
);

/* IInternetProtocol::UnlockRequest  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT UnlockRequest(VOID);

/* IInternetProtocolInfo::CombineUrl  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CombineUrl(
 LPCWSTR pwzBaseUrl,
 LPCWSTR pwzRelativeUrl,
 DWORD dwCombineFlags,
 LPWSTR pwzResult,
 DWORD cchResult,
 DWORD* pcchResult,
 DWORD dwReserved
);

/* IInternetProtocolInfo::CompareUrl  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CompareUrl( 
 LPCWSTR pwzUrl1,
 LPCWSTR pwzUrl2,
 DWORD dwCompareFlags
);

/* IInternetProtocolInfo::ParseUrl  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ParseUrl(
 LPCWSTR pwzUrl,
 PARSEACTION ParseAction,
 DWORD dwParseFlags,
 LPWSTR pwzResult,
 DWORD cchResult,
 DWORD* pcchResult, 
 DWORD dwReserved
);

/* IInternetProtocolInfo::QueryInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT QueryInfo( 
 LPCWSTR pwzUrl,
 QUERYOPTION OueryOption,
 DWORD dwQueryFlags,
 LPVOID pBuffer,
 DWORD cbBuffer,
 DWORD* pcbBuf,
 DWORD dwReserved
);

/* IInternetProtocolRoot::Abort  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Abort(
 HRESULT hrReason,
 DWORD dwOptions
);

/* IInternetProtocolRoot::Continue  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Continue(
 PROTOCOLDATA* pProtocolData
);

/* IInternetProtocolRoot::Start  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Start(
 LPCWSTR szUrl,
 IInternetProtocolSink* pOIProtSink,
 IInternetBindInfo* pOIBindInfo,
 DWORD grfPI,
 HANDLE_PTR dwReserved
);

/* IInternetProtocolRoot::Terminate  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Terminate(
 DWORD dwOptions
);

/* IInternetProtocolSink::ReportData  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ReportData(
 DWORD grfBSCF,
 ULONG ulProgress,
 ULONG ulProgressMax
);

/* IInternetProtocolSink::ReportProgress  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ReportProgress(
 ULONG ulStatusCode,
 LPCWSTR szStatusText
);

/* IInternetProtocolSink::ReportResult  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ReportResult(
 HRESULT hrResult,
 DWORD dwError,
 LPCWSTR szResult
);

/* IInternetProtocolSink::Switch  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Switch(
 PROTOCOLDATA* pProtocolData
);

/* IInternetProtocolSinkStackable::CommitSwitch  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CommitSwitch(VOID);

/* IInternetProtocolSinkStackable::RollbackSwitch  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RollbackSwitch(VOID);

/* IInternetProtocolSinkStackable::SwitchSink  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SwitchSink(
 IInternetProtocolSink* pOIProtSink
);

/* IInternetSecurityManager::GetSecurityId  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetSecurityId(
 LPCWSTR pwszUrl,
 BYTE* pbSecurityId,
 DWORD* pcbSecurityId,
 DWORD_PTR dwReserved
);

/* IInternetSecurityManager::GetSecuritySite  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetSecuritySite(
 IInternetSecurityMgrSite** ppSite
);

/* IInternetSecurityManager::GetZoneMappings  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetZoneMappings(
 DWORD dwZone,
 IEnumString** ppenumString,
 DWORD dwFlags
);

/* IInternetSecurityManager::MapUrlToZone  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT MapUrlToZone(
 LPCWSTR pwszUrl,
 DWORD* pdwZone,
 DWORD dwFlags
);

/* IInternetSecurityManager::ProcessUrlAction  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT ProcessUrlAction(
 LPCWSTR pwszUrl,
 DWORD dwAction,
 BYTE* pPolicy,
 DWORD cbPolicy,
 BYTE* pContext,
 DWORD cbContext,
 DWORD dwFlags,
 DWORD dwReserved
);

/* IInternetSecurityManager::QueryCustomPolicy  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT QueryCustomPolicy(
 LPCWSTR pwszUrl,
 REFGUID guidKey,
 BYTE** ppPolicy,
 DWORD* pcbPolicy,
 BYTE* pContext,
 DWORD cbContext,
 DWORD dwReserved
);

/* IInternetSecurityManager::SetSecuritySite  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SetSecuritySite(
 IInternetSecurityMgrSite* pSite
);

/* IInternetSecurityManager::SetZoneMapping  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SetZoneMapping(
 DWORD dwZone,
 LPCWSTR lpszPattern,
 DWORD dwFlags
);

/* IInternetSecurityMgrSite::EnableModeless  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT EnableModeless(
 BOOL fEnable
);

/* IInternetSecurityMgrSite::GetWindow  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetWindow(
 HWND* phwnd
);

/* IInternetSession::RegisterMimeFilter  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RegisterMimeFilter(
 IClassFactory* pCF,
 REFCLSID rclsid,
 LPCWSTR pwzType
);

/* IInternetSession::RegisterNameSpace  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT RegisterNameSpace(
 IClassFactory* pCF,
 REFCLSID rclsid,
 LPCWSTR pwzProtocol,
 ULONG cPatterns,
 const LPCWSTR* ppwzPatterns,
 DWORD dwReserved
);

/* IInternetSession::UnregisterMimeFilter  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT UnregisterMimeFilter(
 IClassFactory* pCF,
 LPCWSTR pwzType
);

/* IInternetSession::UnregisterNameSpace  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT UnregisterNameSpace(
 IClassFactory* pCF,
 LPCWSTR pszProtocol
);

/* IInternetZoneManager::CreateZoneEnumerator  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT CreateZoneEnumerator(
 DWORD* pdwEnum,
 DWORD* pdwCount,
 DWORD dwFlags
);

/* IInternetZoneManager::DestroyZoneEnumerator  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT DestroyZoneEnumerator(
 DWORD dwEnum
);

/* IInternetZoneManager::GetZoneActionPolicy  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetZoneActionPolicy( 
 DWORD dwZone,
 DWORD dwAction,
 BYTE* pPolicy,
 DWORD cbPolicy,
 URLZONEREG urlZoneReg
);

/* IInternetZoneManager::GetZoneAt  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetZoneAt(
 DWORD dwEnum,
 DWORD dwIndex,
 DWORD* pdwZone
);

/* IInternetZoneManager::GetZoneAttributes  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetZoneAttributes(
 DWORD dwZone,
 ZONEATTRIBUTES* pZoneAttributes
);

/* IInternetZoneManager::GetZoneCustomPolicy  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetZoneCustomPolicy(
 DWORD dwZone,
 REFGUID guidKey,
 BYTE** ppPolicy,
 DWORD* pcbPolicy,
 URLZONEREG urlZoneReg
);

/* IInternetZoneManager::SetZoneActionPolicy  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SetZoneActionPolicy(
 DWORD dwZone,
 DWORD dwAction,
 BYTE* pPolicy,
 DWORD cbPolicy,
 URLZONEREG urlZoneReg
);

/* IInternetZoneManager::SetZoneAttributes  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SetZoneAttributes(
 DWORD dwZone,
 ZONEATTRIBUTES* pZoneAttributes
);

/* IInternetZoneManager::SetZoneCustomPolicy  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SetZoneCustomPolicy(
 DWORD dwZone,
 REFGUID guidKey,
 BYTE* pPolicy,
 DWORD cbPolicy,
 URLZONEREG urlZoneReg
);

/* IMonikerProp::PutProperty  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT PutProperty(
 MONIKERPROPERTY mkp,
 LPCWSTR val
);

/* IPersistMoniker::GetClassID  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetClassID(
 CLSID* pClassID
);

/* IPersistMoniker::GetCurMoniker  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetCurMoniker(
 IMoniker** ppimkName
);

/* IPersistMoniker::IsDirty  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT IsDirty(VOID);

/* IPersistMoniker::Load  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Load(
 BOOL fFullyAvailable,
 IMoniker* pimkName,
 LPBC pibc,
 DWORD grfMode
);

/* IPersistMoniker::Save  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT Save(
 IMoniker* pimkName,
 LPBC pbc,
 BOOL fRemember
);

/* IPersistMoniker::SaveCompleted  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT SaveCompleted(
 IMoniker* pimkName,
 LPBC pibc
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

/* IWindowForBindingUI::GetWindow  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT GetWindow(
 REFGUID rguidReason,
 HWND* phwnd
);

/* IWinInetHttpInfo::QueryInfo  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT QueryInfo(
 DWORD dwOption,
 LPVOID pBuffer,
 DWORD* pcbBuf,
 DWORD* pdwFlags,
 DWORD* pdwReserved
);

/* IWinInetInfo::QueryOption  [function; ce-only; CE 4.0..699; Urlmon.lib, urlmon.lib] */
HRESULT QueryOption(
 DWORD dwOption,
 LPVOID pBuffer,
 DWORD* pcbBuf
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
