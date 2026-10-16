/* Btagnetwork.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _BTAGNETWORK_
#define _BTAGNETWORK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* NetworkCallFailedInfo  [struct; ce-only] */
typedef struct _NetworkCallFailedInfo {
 USHORT usCallType;
 DWORD dwStatus;
} NetworkCallFailedInfo;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BthAGOnNetworkEvent  [function; ce-only; CE 5.0..699; Btagsvc.lib] */
void BthAGOnNetworkEvent(
 DWORD dwEvent, 
 LPSTR pszParam
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum _NETWORK_CALL_TYPE { CALL_TYPE_ANSWER = 0x01, CALL_TYPE_DROP = 0x02, CALL_TYPE_DIAL = 0x03, CALL_TYPE_HOLD = 0x04, CALL_TYPE_SWAP = 0x05, CALL_TYPE_UNHOLD = 0x06, } NETWORK_CALL_TYPE;

#endif /* _BTAGNETWORK_ */
