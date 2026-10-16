/* simtkit.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 22 declarations, 2 outlines, 0 base types, 0 extra macros, 22 extra decls
 */
#ifndef _SIMTKIT_
#define _SIMTKIT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SIMLANGUAGE  [struct; ce-only] */

/* SIMLOCALINFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SIMTKITRSPITEM  [struct; ce-only] */
typedef struct simtkitrspitem_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwId;
} SIMTKITRSPITEM, *LPSIMTKITRSPITEM;

#endif /* _SIMTKIT_ */
