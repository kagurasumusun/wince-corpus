/* pnrpns.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _PNRPNS_
#define _PNRPNS_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* PNRP_CLOUD_ID  [struct; shared; CE 5.0..599; p2p.lib] */
typedef struct _PNRP_CLOUD_ID { 
 INT AddressFamily; 
 PNRP_SCOPE Scope; 
 ULONG ScopeID; 
} PNRP_CLOUD_ID, *PPNRP_CLOUD_ID;

/* PNRPCLOUDINFO  [struct; shared; CE 5.0..599; p2p.lib] */
typedef struct _PNRPCLOUDINFO { 
 DWORD dwSize; 
 PNRP_CLOUD_ID Cloud; 
 PNRP_CLOUD_STATE enCloudState; 
 PNRP_CLOUD_FLAGS enCloudFlags; 
} PNRPCLOUDINFO, *PPNRPCLOUDINFO;

/* PNRPINFO  [struct; ce-only; CE 5.0..599; p2p.lib] */
typedef struct _PNRPINFO { 
 DWORD dwSize; 
 LPWSTR lpwszIdentity; 
 DWORD nMaxResolve; 
 DWORD dwTimeout; 
 DWORD dwLifetime; 
 PNRP_RESOLVE_CRITERIA enResolveCriteria; 
 DWORD dwFlags; 
 SOCKET_ADDRESS saHint; 
 PNRP_REGISTERED_ID_STATE enNameState; 
} PNRPINFO, *PPNRPINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PNRPCLOUDINFO { DWORD dwSize; PNRP_CLOUD_ID Cloud; PNRP_CLOUD_STATE enCloudState; PNRP_CLOUD_FLAGS enCloudFlags;} PNRPCLOUDINFO, *PPNRPCLOUDINFO;
typedef struct _PNRPINFO { DWORD dwSize; LPWSTR lpwszIdentity; DWORD nMaxResolve; DWORD dwTimeout; DWORD dwLifetime; PNRP_RESOLVE_CRITERIA enResolveCriteria; DWORD dwFlags; SOCKET_ADDRESS saHint; PNRP_REGISTERED_ID_STATE enNameState;} PNRPINFO, *PPNRPINFO;

#endif /* _PNRPNS_ */
