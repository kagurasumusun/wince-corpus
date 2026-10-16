/* mkfuncs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MKFUNCS_
#define _MKFUNCS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* RegisterDirectMethods  [function; ce-only; CE 6.0..699] */
BOOL RegisterDirectMethods (
 HANDLE hApiSet,
 const PFNVOID *ppfnDirectMethod
);

/* VirtualSetAttributesEx  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL VirtualSetAttributes (
 LPVOID lpvAddress,
 DWORD cbSize,
 DWORD dwNewFlags,
 DWORD dwMask,
 LPDWORD lpdwOldFlags
);
#endif /* _WIN32_WCE */

#endif /* _MKFUNCS_ */
