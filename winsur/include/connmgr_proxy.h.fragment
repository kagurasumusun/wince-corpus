/* connmgr_proxy.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CONNMGR_PROXY_
#define _CONNMGR_PROXY_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PROXY_CONFIG  [struct; ce-only; CE 6.0..699] */
typedef struct _PROXY_CONFIG {
 DWORD dwType;
 DWORD dwEnable;
 TCHAR szProxyServer[CMPROXY_PROXYSERVER_MAXSIZE];
 TCHAR szUsername[CMPROXY_USERNAME_MAXSIZE];
 TCHAR szPassword[CMPROXY_PASSWORD_MAXSIZE];
 TCHAR szProxyOverride[CMPROXY_PROXYOVERRIDE_MAXSIZE];
 TCHAR szExtraInfo[CMPROXY_EXTRAINFO_MAXSIZE];
} PROXY_CONFIG;
#endif /* _WIN32_WCE */

#endif /* _CONNMGR_PROXY_ */
