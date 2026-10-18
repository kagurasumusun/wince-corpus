/* Upnpdevapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _UPNPDEVAPI_
#define _UPNPDEVAPI_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* UPNPCB_ID  [enum; ce-only] */
#ifndef __WINCE_DEFINED_UPNPCB_ID
#define __WINCE_DEFINED_UPNPCB_ID
typedef enum {
 UPNPCB_INIT,
 UPNPCB_SUBSCRIBING,
 UPNPCB_UNSUBSCRIBING,
 UPNPCB_CONTROL,
 UPNPCB_IDLE,
 UPNPCB_WAKEUP,
 UPNPCB_SHUTDOWN
} UPNPCB_ID;
#endif /* __WINCE_DEFINED_UPNPCB_ID */
#ifndef __WINCE_DEFINED_PUPNPCB_ID
#define __WINCE_DEFINED_PUPNPCB_ID
typedef UPNPCB_ID *PUPNPCB_ID, *LPUPNPCB_ID;
#endif /* __WINCE_DEFINED_PUPNPCB_ID */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* PUPNPCALLBACK  [callback; ce-only; CE 4.0..699; Upnpcapi.lib] */
#ifndef __WINCE_DEFINED_PUPNPCALLBACK
#define __WINCE_DEFINED_PUPNPCALLBACK
typedef DWORD (*PUPNPCALLBACK) (UPNPCB_ID callbackId,
 PVOID pvUserContext,
 PVOID pvSvcParam);
#endif /* __WINCE_DEFINED_PUPNPCALLBACK */
#endif /* _WIN32_WCE */

#endif /* _UPNPDEVAPI_ */
