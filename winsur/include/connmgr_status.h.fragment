/* connmgr_status.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CONNMGR_STATUS_
#define _CONNMGR_STATUS_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CONNMGR_CONNECTION_DETAILED_STATUS  [struct; ce-only; CE 6.0..699] */
typedef struct _CONNMGR_CONNECTION_DETAILED_STATUS{
 struct _CONNMGR_CONNECTION_DETAILED_STATUS* pNext;
 DWORD dwVer; 
 DWORD dwParams;
 DWORD dwType; 
 DWORD dwSubtype;
 DWORD dwFlags; 
 DWORD dwSecure;
 GUID guidDestNet;
 GUID guidSourceNet; 
 TCHAR* szDescription;
 TCHAR* szAdapterName;
 DWORD dwConnectionStatus; 
 SYSTEMTIME LastConnectTime;
 DWORD dwSignalQuality; 
 CONNMGR_CONNECTION_IPADDR* pIPAddr;
} CONNMGR_CONNECTION_DETAILED_STATUS;

/* CONNMGR_CONNECTION_IPADDR  [struct; ce-only; CE 6.0..699] */
typedef struct _CONNMGR_CONNECTION_IPADDR{
 DWORD cIPAddr;
 SOCKADDR_STORAGE IPAddr[1]
} CONNMGR_CONNECTION_IPADDR;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ConnMgrQueryDetailedStatus  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrQueryDetailedStatus(
 CONNMGR_CONNECTION_DETAILED_STATUS *pStatusBuffer,
 DWORD *pcbBufferSize 
);

/* ConnMgrRegisterForStatusChangeNotification  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT WINAPI ConnMgrRegisterForStatusChangeNotification(
 BOOL fEnable,
 HWND hWnd
);
#endif /* _WIN32_WCE */

#endif /* _CONNMGR_STATUS_ */
