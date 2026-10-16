/* pnrpdef.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _PNRPDEF_
#define _PNRPDEF_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* PNRP_CLOUD_FLAGS  [enum; shared; CE 5.0..599; p2p.lib] */
typedef enum 
{ 
 PNRP_CLOUD_NO_FLAGS, 
 PNRP_CLOUD_NAME_LOCAL 
} PNRP_CLOUD_FLAGS;

/* PNRP_CLOUD_STATE  [enum; shared; CE 5.0..599; p2p.lib] */
typedef enum 
{ 
 PNRP_CLOUD_STATE_VIRTUAL, 
 PNRP_CLOUD_STATE_SYNCHRONISING, 
 PNRP_CLOUD_STATE_ACTIVE, 
 PNRP_CLOUD_STATE_DEAD, 
 PNRP_CLOUD_STATE_DISABLED, 
 PNRP_CLOUD_STATE_NO_NET, 
 PNRP_CLOUD_STATE_ALONE 
} PNRP_CLOUD_STATE;

/* PNRP_RESOLVE_CRITERIA  [enum; shared; CE 5.0..599; p2p.lib] */
typedef enum 
{ 
 PNRP_RESOLVE_CRITERIA_DEFAULT, 
 PNRP_RESOLVE_CRITERIA_ANY_PEER_NAME, 
 PNRP_RESOLVE_CRITERIA_NEAREST_NON_CURRENT_PROCESS_PEER_NAME, 
 PNRP_RESOLVE_CRITERIA_NEAREST_PEER_NAME, 
 PNRP_RESOLVE_CRITERIA_NEAREST_REMOTE_PEER_NAME, 
 PNRP_RESOLVE_CRITERIA_NON_CURRENT_PROCESS_PEER_NAME, 
 PNRP_RESOLVE_CRITERIA_REMOTE_PEER_NAME 
} PNRP_RESOLVE_CRITERIA;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PNRP_CLOUD_ID { INT AddressFamily; PNRP_SCOPE Scope; ULONG ScopeID;} PNRP_CLOUD_ID, *PPNRP_CLOUD_ID;

#endif /* _PNRPDEF_ */
