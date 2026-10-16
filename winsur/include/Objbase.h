/* Objbase.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 42 constants, 73 declarations, 0 outlines, 0 base types, 0 extra macros, 24 extra decls
 */
#ifndef _OBJBASE_
#define _OBJBASE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ASYNC_MODE_COMPATIBILITY 1
#define ASYNC_MODE_DEFAULT 0
#define CLSCTX_ALL (CLSCTX_INPROC_SERVER|CLSCTX_INPROC_HANDLER|CLSCTX_LOCAL_SERVER)
#define CLSCTX_INPROC (CLSCTX_INPROC_SERVER|CLSCTX_INPROC_HANDLER)
#define CLSCTX_INPROC_HANDLER 0x2
#define CLSCTX_INPROC_SERVER 0x1
#define CLSCTX_LOCAL_SERVER 0x4
#define CLSCTX_REMOTE_SERVER 0x10
#define CLSCTX_SERVER (CLSCTX_INPROC_SERVER|CLSCTX_LOCAL_SERVER|CLSCTX_REMOTE_SERVER)
#define COM_RIGHTS_EXECUTE 1
#define COM_RIGHTS_SAFE_FOR_SCRIPTING 2
#define CWCSTORAGENAME 32
#define EOAC_NONE 0x0
#define MARSHALINTERFACE_MIN 500
#define STG_LAYOUT_INTERLEAVED 1
#define STG_LAYOUT_SEQUENTIAL 0
#define STG_TOEND 0xFFFFFFFF
#define STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE 4
#define STGC_DEFAULT 0
#define STGC_ONLYIFCURRENT 2
#define STGC_OVERWRITE 1
#define STGM_CONVERT 0x00020000L
#define STGM_CREATE 0x00001000L
#define STGM_DELETEONRELEASE 0x04000000L
#define STGM_DIRECT 0x00000000L
#define STGM_DIRECT_SWMR 0x00400000L
#define STGM_FAILIFTHERE 0x00000000L
#define STGM_NOSCRATCH 0x00100000L
#define STGM_NOSNAPSHOT 0x00200000L
#define STGM_PRIORITY 0x00040000L
#define STGM_READ 0x00000000L
#define STGM_READWRITE 0x00000002L
#define STGM_SHARE_DENY_NONE 0x00000040L
#define STGM_SHARE_DENY_READ 0x00000030L
#define STGM_SHARE_DENY_WRITE 0x00000020L
#define STGM_SHARE_EXCLUSIVE 0x00000010L
#define STGM_SIMPLE 0x08000000L
#define STGM_TRANSACTED 0x00010000L
#define STGM_WRITE 0x00000001L
#define STGOPTIONS_VERSION 2
#define STGTY_REPEAT 256
#define WINOLEAPI STDAPI

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CoInitialize  [macro, function; shared; Ole232.lib, Ole32.lib] */
HRESULT CoInitialize(
 LPVOID pvReserved 
);

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* AUTH_IDENTITY  [struct; ce-only] */
typedef struct _AUTH_IDENTITY {
 [size_is(UserLength+1)] USHORT *User;
 ULONG UserLength;
 [size_is(DomainLength+1)] USHORT * Domain;
 ULONG DomainLength;
 [size_is(DomainLength+1)] USHORT *Password;
 ULONG Flags;
} AUTH_IDENTITY;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.12..399, 5.0..699 */

/* Exp  [function; ce-only; CE 2.0..209, 2.12..399, 5.0..699; coredll.dll, ole232.lib] */
double exp( doublex);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* CLSIDFromProgID  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
HRESULT CLSIDFromProgID(
 LPCOLESTR lpszProgID, 
 LPCLSID pclsid
);

/* CLSIDFromString  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
HRESULT CLSIDFromString(
 LPOLESTR lpsz, 
 LPCLSID pclsid
);

/* CoCreateInstance  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
STDAPI CoCreateInstance(
 REFCLSID rclsid, 
 LPUNKNOWN pUnkOuter, 
 DWORD dwClsContext, 
 REFIID riid, 
 LPVOID* ppv
);

/* CoFreeLibrary  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
void CoFreeLibrary(
 HINSTANCE hInst
);

/* CoFreeUnusedLibraries  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
void CoFreeUnusedLibraries();

/* CoGetClassObject  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
STDAPI CoGetClassObject(
 REFCLSID rclsid, 
 WORD dwClsContext, 
 COSERVERINFO* pServerInfo, 
 REFIID riid, 
 LPVOID* ppv
);

/* CoInitializeEx  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
HRESULT CoInitializeEx(
 LPVOID pvReserved, 
 DWORD dwCoInit
);

/* CoLoadLibrary  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
HINSTANCE CoLoadLibrary(
 LPOLESTR lpszLibName, 
 BOOL bAutoFree
);

/* CoTaskMemAlloc  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
LPVOID CoTaskMemAlloc(
 ULONG cb
);

/* CoTaskMemFree  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
void CoTaskMemFree(
 LPVOID pv
);

/* CoTaskMemRealloc  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
LPVOID CoTaskMemRealloc(
 LPVOID pv, 
 ULONG cb
);

/* CoUninitialize  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
void CoUninitialize();

/* CreateBindCtx  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
WINOLEAPI CreateBindCtx( 
 DWORD reserved, 
 LPBC FAR* ppbc 
);

/* GetClassFile  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
WINOLEAPI GetClassFile( 
 LPCWSTR szFileName, 
 CLSID* pclsid
);

/* StgCreateDocfile  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI StgCreateDocfile(
 const WCHAR* pwcsName,
 DWORD grfMode,
 DWORD reserved,
 IStorage** ppstgOpen 
);

/* StgCreateDocfileOnILockBytes  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI StgCreateDocfileOnILockBytes( 
 ILockBytes* plkbyt, 
 DWORD grfMode, 
 DWORD reserved, 
 IStorage** ppstgOpen 
);

/* StgOpenStorage  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, Ole32.lib, ole32.lib, stg.lib] */
WINOLEAPI StgOpenStorage( 
 const WCHAR* pwcsName, 
 IStorage* pstgPriority, 
 DWORD grfMode, 
 SNB snbExclude, 
 DWORD reserved, 
 IStorage** ppstgOpen 
);

/* StgOpenStorageOnILockBytes  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI StgOpenStorageOnILockBytes( 
 ILockBytes* plkbyt, 
 IStorage* pStgPriority, 
 DWORD grfMode, 
 SNB snbExclude, 
 DWORD reserved, 
 IStorage** ppstgOpen 
);

/* StringFromCLSID  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
WINOLEAPI StringFromCLSID(
 REFCLSID rclsid, 
 LPOLESTR* ppsz
);

/* StringFromGUID2  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
StringFromGUID2(
 REFGUID rguid, 
 LPOLESTR lpsz, 
 int cbMax
);

/* StringFromIID  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib] */
WINOLEAPI StringFromIID(
 REFIID rclsid, 
 LPOLESTR* lplpsz
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IsEqualGUID  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib] */
BOOL IsEqualGUID(
 REFGUID rguid1,
 REFGUID rguid2
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* BindMoniker  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT BindMoniker(
 LPMONIKER pmk,
 DWORD grfOpt,
 REFIID iidResult,
 LPVOID FAR* ppvResult
);

/* CoAddRefServerProcess  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
ULONG CoAddRefServerProcess(void);

/* CoCreateFreeThreadedMarshaler  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoCreateFreeThreadedMarshaler(
 LPUNKNOWN punkOuter,
 LPUNKNOWN* ppunkMarshaler
);

/* CoCreateGuid  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoCreateGuid(
 GUID* pguid
);

/* CoFileTimeNow  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoFileTimeNow(
 FILETIME* lpFileTime
);

/* CoFreeAllLibraries  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
void CoFreeAllLibraries( );

/* CoGetCallContext  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoGetCallContext(
 REFIID riid,
 void** ppInterface
);

/* CoGetCurrentProcess  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
DWORD CoGetCurrentProcess(void);

/* CoGetMalloc  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoGetMalloc(
 DWORD dwMemContext,
 LPMALLOC* ppMalloc
);

/* CoGetObject  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CoGetObject(
 LPCWSTR pszName,
 BIND_OPTS* pBindOptions,
 REFIID riid,
 void** ppv
);

/* CoGetPSClsid  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CoGetPSClsid(
 REFIID riid,
 CLSID* pclsid
);

/* CoGetTreatAsClass  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoGetTreatAsClass(
 REFCLSID clsidOld,
 LPCLSID pclsidNew
);

/* CoImpersonateClient  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoImpersonateClient( )

/* CoInitializeSecurity  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoInitializeSecurity(
 PSECURITY_DESCRIPTOR pVoid,
 LONG cAuthSvc,
 SOLE_AUTHENTICATION_SERVICE* asAuthSvc, 
 void* pReserved1,
 DWORD dwAuthnLevel,
 DWORD dwImpLevel,
 SOLE_AUTHENTICATION_LIST* pAuthList,
 DWORD dwCapabilities,
 void* pReserved3
);

/* CoIsHandlerConnected  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
BOOL CoIsHandlerConnected(
 LPUNKNOWN pUnk
);

/* CoIsOle1Class  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
BOOL CoIsOle1Class(
 REFCLSID rclsid
);

/* CoMarshalHresult  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
STDAPI CoMarshalHresult(
 IStream* pStm,
 HRESULT hresult
);

/* CoQueryAuthenticationServices  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoQueryAuthenticationServices(
 DWORD* pcAuthSvc,
 SOLE_AUTHENTICATION_SERVICE** asAuthSvc
);

/* CoQueryClientBlanket  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoQueryClientBlanket(
 DWORD* pAuthnSvc,
 DWORD* pAuthzSvc,
 OLECHAR** pServerPrincName,
 DWORD* pAuthnLevel,
 DWORD* pImpLevel,
 RPC_AUTHZ_HANDLE* pPrivs,
 DWORD** pCapabilities
);

/* CoRegisterMallocSpy  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoRegisterMallocSpy(
 LPMALLOCSPY pMallocSpy
);

/* CoRegisterMessageFilter  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoRegisterMessageFilter(
 LPMESSAGEFILTER lpMessageFilter,
 LPMESSAGEFILTER* lplpMessageFilter
);

/* CoRegisterPSClsid  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CoRegisterPSCLsid(
 REFIID riid,
 REFCLSID rclsid
);

/* CoRegisterSurrogate  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoRegisterSurrogate(
 ISurrogate* pSurrogate
);

/* CoReleaseMarshalData  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
STDAPI CoReleaseMarshalData(
 IStream* pStm
);

/* CoReleaseServerProcess  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
ULONG CoReleaseServerProcess(void);

/* CoResumeClassObjects  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CoResumeClassObjects(void);

/* CoRevertToSelf  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoRevertToSelf( )

/* CoRevokeClassObject  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoRevokeClassObject(
 DWORD dwRegister
);

/* CoRevokeMallocSpy  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
HRESULT CoRevokeMallocSpy( );

/* CoSuspendClassObjects  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CoSuspendClassObjects(void);

/* CoTreatAsClass  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
STDAPI CoTreatAsClass(
 REFCLSID clsidOld,
 REFCLSID clsidNew
);

/* CoUnmarshalInterface  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
STDAPI CoUnmarshalInterface(
 IStream* pStm,
 REFIID riid,
 void** ppv
);

/* CreateAntiMoniker  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreateAntiMoniker(
 LPMONIKER FAR* ppmk
);

/* CreateClassMoniker  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreateClassMoniker(
 REFCLSID rclsid,
 IMoniker** ppmk
);

/* CreateFileMoniker  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreateFileMoniker(
 LPCOLESTR lpszPathName,
 LPMONIKER FAR* ppmk
);

/* CreateGenericComposite  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreateGenericComposite(
 LPMONIKER pmkFirst,
 LPMONIKER pmkRest,
 LPMONIKER FAR* ppmkComposite
);

/* CreateItemMoniker  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreateItemMoniker(
 LPCOLESTR lpszDelim,
 LPCOLESTR lpszItem,
 LPMONIKER FAR* ppmk
);

/* CreatePointerMoniker  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreatePointerMoniker(
 LPUNKNOWN punk,
 LPMONIKER FAR* ppmk
);

/* DllCanUnloadNow  [function; shared; CE 3.0..699; Oleaut32.lib, oleaut32.lib] */
STDAPI DllCanUnloadNow(void);

/* DllGetClassObject  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
STDAPI DllGetClassObject(
 REFCLSID rclsid,
 REFIID riid,
 LPVOID* ppv
);

/* GetRunningObjectTable  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI GetRunningObjectTable(
 DWORD reserved,
 LPRUNNINGOBJECTTABLE* pprot
);

/* IIDFromString  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI IIDFromString(
 LPOLESTR lpsz,
 LPIID lpiid
);

/* MkParseDisplayName  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI MkParseDisplayName(
 LPBC pbc,
 LPCOLESTR szUserName,
 ULONG FAR* pchEaten,
 LPMONIKER FAR* ppmk
);

/* MonikerCommonPrefixWith  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI MonikerCommonPrefixWith(
 LPMONIKER pmkThis,
 LPMONIKER pmkOther,
 LPMONIKER FAR* ppmkCommon
);

/* MonikerRelativePathTo  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI MonikerRelativePathTo(
 LPMONIKER pmkSrc,
 LPMONIKER pmkDest, 
 LPMONIKER FAR* ppmkRelPath, 
 BOOL dwReserved
);

/* ProgIDFromCLSID  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI ProgIDFromCLSID(
 REFCLSID clsid,
 LPOLESTR* lplpszProgID 
);

/* UpdateDCOMSettings  [function; ce-only; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
void UpdateDCOMSettings(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CoFreeUnusedLibrariesEx  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib] */
void CoFreeUnusedLibrariesEx(
 DWORD dwUnloadDelay,
 DWORD dwReserved
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CoCopyProxy( IUnknown *pProxy, IUnknown **ppCopy );
HRESULT CoCreateInstanceEx( REFCLSID rclsid, IUnknown *punkOuter, DWORD dwClsCtx, COSERVERINFO *pServerInfo, ULONG cmq, MULTI_QI *pResults );
VOID STDAPI CoDisconnectObject( IUnknown *pUnk, DWORD dwReserved );
HRESULT CoGetInstanceFromFile( COSERVERINFO *pServerInfo, CLSID *pclsid, IUnknown *punkOuter, DWORD dwClsCtx, DWORD grfMode, OLECHAR *szName, ULONG cmq, MULTI_QI *rgmqResults );
HRESULT CoGetInstanceFromIStorage( COSERVERINFO *pServerInfo, CLSID *pclsid, IUnknown *punkOuter, DWORD dwClsCtx, IStorage *pstg, ULONG cmq, MULTI_QI *rgmqResults );
VOID STDAPI CoGetMarshalSizeMax( ULONG *pulSize, REFIID riid, IUnknown *pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags );
VOID STDAPI CoGetStandardMarshal( REFIID riid, IUnknown *pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags, LPMARSHAL *ppMarshal );
HRESULT CoInternetGetSecurityURL( LPCWSTR pwzUrl, LPWSTR* ppwzSecUrl, PSUACTION psuAction, DWORD dwReserved );
VOID STDAPI CoLockObjectExternal( IUnknown *pUnk, BOOL fLock, BOOL fLastUnlockReleases );
VOID STDAPI CoMarshalInterface( IStream *pStm, REFIID riid, IUnknown *pUnk, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags );
HRESULT CoQueryProxyBlanket( IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE *ppAuthInfo, DWORD *pCapabilities );
VOID STDAPI CoRegisterClassObject( REFCLSID rclsid, IUnknown *pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister );
WINOLEAPI CoRegisterPSCLsid(REFIID riid,REFCLSID rclsid);
HRESULT CoSetProxyBlanket( IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, WCHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities );
HRESULT CoSwitchCallContext( IUnknown *pNewObject, IUnknown **ppOldObject );
HRESULT CreateInstance( IUnknown *pUnkOuter, REFIID riid, void **ppvObject);
HRESULT Flush( void );
HRESULT LockRegion( ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType );
HRESUTL LockServer(  BOOL fLock);
HRESULT ReadAt( ULARGE_INTEGER ulOffset, void *pv, ULONG cb, ULONG *pcbRead );
HRESULT SetSize( ULARGE_INTEGER cb );
HRESULT Stat( STATSTG *pstatstg, DWORD grfStatFlag );
HRESULT UnlockRegion( ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType );
HRESULT WriteAt( ULARGE_INTEGER ulOffset, void const *pv, ULONG cb, ULONG * pcbWritten );

#endif /* _OBJBASE_ */
