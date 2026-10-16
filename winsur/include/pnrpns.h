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
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PNRPCLOUDINFO { DWORD dwSize; PNRP_CLOUD_ID Cloud; PNRP_CLOUD_STATE enCloudState; PNRP_CLOUD_FLAGS enCloudFlags;} PNRPCLOUDINFO, *PPNRPCLOUDINFO;
typedef struct _PNRPINFO { DWORD dwSize; LPWSTR lpwszIdentity; DWORD nMaxResolve; DWORD dwTimeout; DWORD dwLifetime; PNRP_RESOLVE_CRITERIA enResolveCriteria; DWORD dwFlags; SOCKET_ADDRESS saHint; PNRP_REGISTERED_ID_STATE enNameState;} PNRPINFO, *PPNRPINFO;

#endif /* _PNRPNS_ */
