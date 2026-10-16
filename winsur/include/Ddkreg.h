/* Ddkreg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 3 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _DDKREG_
#define _DDKREG_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDKISRINFO  [struct; ce-only] */

/* DDKPCIINFO  [struct; ce-only] */

/* DDKWINDOWINFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DEVICEWINDOW  [struct; ce-only] */
typedef struct _DEVICEWINDOW_tag {
 DWORD dwBase; 
 DWORD dwLen;
} DEVICEWINDOW, *PDEVICEWINDOW;

#endif /* _DDKREG_ */
