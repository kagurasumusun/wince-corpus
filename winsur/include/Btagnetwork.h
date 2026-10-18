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
#ifndef __WINCE_DEFINED__NETWORKCALLFAILEDINFO
#define __WINCE_DEFINED__NETWORKCALLFAILEDINFO
#ifndef __WINCE_DEFINED_NETWORKCALLFAILEDINFO
#define __WINCE_DEFINED_NETWORKCALLFAILEDINFO
typedef struct _NetworkCallFailedInfo {
 USHORT usCallType;
 DWORD dwStatus;
} NetworkCallFailedInfo;
#endif /* __WINCE_DEFINED_NETWORKCALLFAILEDINFO */
#endif /* __WINCE_DEFINED__NETWORKCALLFAILEDINFO */
#ifndef __WINCE_DEFINED_PNETWORKCALLFAILEDINFO
#define __WINCE_DEFINED_PNETWORKCALLFAILEDINFO
typedef NetworkCallFailedInfo *PNetworkCallFailedInfo, *LPNetworkCallFailedInfo;
#endif /* __WINCE_DEFINED_PNETWORKCALLFAILEDINFO */

/* NETWORK_CALL_TYPE  [extra enum] */
#ifndef __WINCE_DEFINED__NETWORK_CALL_TYPE
#define __WINCE_DEFINED__NETWORK_CALL_TYPE
#ifndef __WINCE_DEFINED_NETWORK_CALL_TYPE
#define __WINCE_DEFINED_NETWORK_CALL_TYPE
typedef enum _NETWORK_CALL_TYPE { CALL_TYPE_ANSWER = 0x01, CALL_TYPE_DROP = 0x02, CALL_TYPE_DIAL = 0x03, CALL_TYPE_HOLD = 0x04, CALL_TYPE_SWAP = 0x05, CALL_TYPE_UNHOLD = 0x06, } NETWORK_CALL_TYPE;
#endif /* __WINCE_DEFINED_NETWORK_CALL_TYPE */
#endif /* __WINCE_DEFINED__NETWORK_CALL_TYPE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* BthAGOnNetworkEvent  [function; ce-only; CE 5.0..699; Btagsvc.lib] */
void BthAGOnNetworkEvent(DWORD dwEvent,
 LPSTR pszParam);
#endif /* _WIN32_WCE */

#endif /* _BTAGNETWORK_ */
