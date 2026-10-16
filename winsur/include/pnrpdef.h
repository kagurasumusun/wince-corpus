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
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PNRP_CLOUD_ID { INT AddressFamily; PNRP_SCOPE Scope; ULONG ScopeID;} PNRP_CLOUD_ID, *PPNRP_CLOUD_ID;

#endif /* _PNRPDEF_ */
