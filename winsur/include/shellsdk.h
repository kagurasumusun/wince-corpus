/* shellsdk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SHELLSDK_
#define _SHELLSDK_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SHFullScreen  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHFullScreen(
 HWND hwndRequester,
 DWORD dwState
);

/* SHInitDialog  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHInitDialog(
 PSHINITDLGINFO pshidi
);
#endif /* _WIN32_WCE */

#endif /* _SHELLSDK_ */
