/* Pcommctr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PCOMMCTR_
#define _PCOMMCTR_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DPA_FastGetPtr  [macro, function; shared; CE 4.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DPA_GetPtr  [function; shared; CE 4.0..699; ComCtl32.dll, Comctl32.lib; lib:win32-reference] */
WINCOMMCTRLAPI LPVOID WINAPI DPA_GetPtr(
 HDPA hdpa,
 int i
);
#endif /* _WIN32_WCE */

#endif /* _PCOMMCTR_ */
