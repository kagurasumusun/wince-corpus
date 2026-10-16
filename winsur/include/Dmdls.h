/* Dmdls.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _DMDLS_
#define _DMDLS_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMUS_OFFSETTABLE  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DMUS_WAVEDATA  [struct; ce-only] */
typedef struct {
 ULONG cbSize;
 BYTE byData[ ];
} DMUS_WAVEDATA;

/* LPDMUS_NOTERANGE  [extra struct] */
typedef struct _DMUS_NOTERANGE { DWORD dwLowNote; DWORD dwHighNote; } DMUS_NOTERANGE, *LPDMUS_NOTERANGE;

#endif /* _DMDLS_ */
