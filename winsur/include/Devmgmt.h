/* Devmgmt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 3 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _DEVMGMT_
#define _DEVMGMT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMSDLINFO  [struct, typedef; ce-only] */

/* DMSINVPKGID  [struct, typedef; ce-only] */

/* DMSINVRECORD  [struct, typedef; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* CeStartDevMgmtService  [function; ce-only; CE 4.0..699] */
HANDLE CeStartDevMgmtService(
 int nAction,
 HWND hCallbackWnd
);
#endif /* _WIN32_WCE */

#endif /* _DEVMGMT_ */
