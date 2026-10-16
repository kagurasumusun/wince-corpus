/* Fwapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 1 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _FWAPI_
#define _FWAPI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FW_LOG_ENTRY  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* FirewallEnable  [function; ce-only; CE 4.0..699; Fwapi.lib, fwapi.lib] */
DWORD FirewallEnable(
 USHORT Family,
 BOOL bEnable, 
 BOOL bPersist
);

/* FirewallLogInit  [function; ce-only; CE 4.0..699] */
void FirewallLogInit();

/* FirewallLogUninit  [function; ce-only; CE 4.0..699] */
void FirewallLogUninit();

/* FirewallRefresh  [function; ce-only; CE 4.0..699] */
VOID FirewallRefresh();

/* FirewallSetInterface  [function; ce-only; CE 4.0..699] */
DWORD FirewallSetInterface(
 LPCWSTR pszInterfaceName, 
 BOOL bFirewalled, 
 BOOL bPersist
);

/* IsFirewallEnabled  [function; ce-only; CE 4.0..699] */
BOOL IsFirewallEnabled(
 USHORT Family
);

/* IsInterfaceFirewalled  [function; ce-only; CE 4.0..699] */
BOOL IsInterfaceFirewalled(
 LPCWSTR pszInterfaceName
);
#endif /* _WIN32_WCE */

#endif /* _FWAPI_ */
