/* Fatui.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FATUI_
#define _FATUI_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* UIPARAM  [struct; ce-only] */
struct _UIPARAM { 
DWORD dwType, 
DWORD dwValue };

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* FATUIEvent  [function; ce-only; CE 3.0..399; fat.lib] */
int FATUIEvent ( 
HANDLE hModule, 
PCWSTR pszVol, 
PFATUIDATA pfui );
#endif /* _WIN32_WCE */

#endif /* _FATUI_ */
