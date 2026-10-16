/* Keybdpdd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _KEYBDPDD_
#define _KEYBDPDD_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PFN_KEYBD_PDD_POWER_HANDLER  [callback; ce-only; CE 5.0..699] */
typedef void (*PFN_KEYBD_PDD_POWER_HANDLER)(
 UINT uiPddId,
 BOOL fTurnOff
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagKEYBD_PDD { WORD wPddMask; LPCTSTR pszName; PFN_KEYBD_PDD_POWER_HANDLER pfnPowerHandler; PFN_KEYBD_PDD_TOGGLE_LIGHTS pfnToggleLights;} KEYBD_PDD, *PKEYBD_PDD;

#endif /* _KEYBDPDD_ */
