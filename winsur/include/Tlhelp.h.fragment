/* Tlhelp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _TLHELP_
#define _TLHELP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* Heap32First  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Heap32First(
 HANDLE hSnapshot,
 LPHEAPENTRY32 lphe,
 DWORD th32ProcessID,
 DWORD th32HeapID
);

/* Heap32ListFirst  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Heap32ListFirst(
 HANDLE hSnapshot,
 LPHEAPLIST32 lphl
);
#endif /* _WIN32_WCE */

#endif /* _TLHELP_ */
