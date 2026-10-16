/* connmgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CONNMGR_
#define _CONNMGR_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define ConRefType_NAP 0
#define INITGUID must
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CONNMGR_CONNECTIONINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwFlags;
 DWORD dwPriority;
 BOOL bExclusive;
 BOOL bDisabled;
 GUID guidDestNet;
 HWND hWnd;
 UINT uMsg;
 LPARAM lParam;
 ULONG ulMaxCost;
 ULONG ulMinRcvBw;
 ULONG ulMaxConnLatency
} CONNMGR_CONNECTIONINFO;

/* CONNMGR_DESTINATION_INFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 GUID guid;
 TCHAR szDescription[CONNMGR_MAX_DESC];
 BOOL fSecure;
} CONNMGR_DESTINATION_INFO;

/* ConnMgrConRefTypeEnum  [enum; ce-only; CE 6.0..699] */
typedef enum _ConnMgrConRefTypeEnum{
 ConRefType_NAP = 0,
 ConRefType_PROXY
} ConnMgrConRefTypeEnum;

/* SCHEDULEDCONNECTIONINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 GUID guidDest;
 UINT64 uiStartTime;
 UINT64 uiEndTime;
 UINT64 uiPeriod;
 TCHAR szAppName[MAX_PATH];
 TCHAR szCmdLine[MAX_PATH];
 TCHAR szToken[32];
 BOOL bPiggyback;
} SCHEDULEDCONNECTIONINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ConnMgrApiReadyEvent  [function; ce-only; CE 6.0..699; cellcore.lib] */
HANDLE WINAPI ConnMgrApiReadyEvent (
 void
);

/* ConnMgrConnectionStatus  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrConnectionStatus(
 HANDLE hConnection,
 DWORD *pdwStatus
);

/* ConnMgrEnumDestinations  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrEnumDestinations(
 int Index,
 CONNMGR_DESTINATION_INFO *pDestInfo
);

/* ConnMgrEstablishConnection  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrEstablishConnection(
 CONNMGR_CONNECTIONINFO *pConnInfo,
 HANDLE *phConnection
);

/* ConnMgrEstablishConnectionSync  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrEstablishConnectionSync(
 CONNMGR_CONNECTIONINFO *pConnInfo,
 HANDLE *phConnection,
 DWORD dwTimeout,
 DWORD *pdwStatus
);

/* ConnMgrMapConRef  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrMapConRef(
 ConnMgrConRefTypeEnum e,
 LPCTSTR szConRef, 
 GUID *pGUID
);

/* ConnMgrMapURL  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrMapURL(
 LPTSTR pwszURL,
 GUID *pguid,
 DWORD *pdwIndex
);

/* ConnMgrProviderMessage  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrProviderMessage(
 HANDLE hConnection,
 const GUID *pguidProvider,
 DWORD *pdwIndex,
 DWORD dwMsg1,
 DWORD dwMsg2,
 PBYTE pParams,
 ULONG cbParamSize
);

/* ConnMgrRegisterScheduledConnection  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrRegisterScheduledConnection(
 SCHEDULEDCONNECTIONINFO *pSCI
);

/* ConnMgrReleaseConnection  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrReleaseConnection(
 HANDLE hConnection,
 LONG lCache 
);

/* ConnMgrSetConnectionPriority  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrSetConnectionPriority(
 HANDLE hConnection,
 DWORD dwPriority
);

/* ConnMgrUnregisterScheduledConnection  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrUnregisterScheduledConnection(
 LPCWSTR pwszToken
);
#endif /* _WIN32_WCE */

#endif /* _CONNMGR_ */
