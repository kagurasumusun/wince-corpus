/* tsp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 7 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _TSP_
#define _TSP_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CELLBEARERINFO  [struct; ce-only] */

/* CELLDATACOMPINFO  [struct; ce-only] */

/* CELLDEVCONFIG  [struct; ce-only] */

/* CELLGPRSCONNECTIONINFO  [struct; ce-only] */

/* CELLGPRSQOSSETTINGS  [struct; ce-only] */

/* CELLRADIOLINKINFO  [struct; ce-only] */

/* LINECALLPARAMSDEVSPECIFIC  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CALLER_ID_OPTIONS  [enum; ce-only] */
#ifndef __WINCE_DEFINED_CALLER_ID_OPTIONS
#define __WINCE_DEFINED_CALLER_ID_OPTIONS
enum CALLER_ID_OPTIONS {
 CALLER_ID_DEFAULT,
 CALLER_ID_BLOCK,
 CALLER_ID_PRESENT,
};
#endif /* __WINCE_DEFINED_CALLER_ID_OPTIONS */

/* CALLER_ID_PRESENT  [extra enum] */
#ifndef __WINCE_DEFINED_CALLER_ID_OPTIONS
#define __WINCE_DEFINED_CALLER_ID_OPTIONS
#ifndef __WINCE_DEFINED_CALLER_ID_PRESENT
#define __WINCE_DEFINED_CALLER_ID_PRESENT
enum CALLER_ID_OPTIONS {
 CALLER_ID_DEFAULT,
 CALLER_ID_BLOCK,
 CALLER_ID_PRESENT,
};
#endif /* __WINCE_DEFINED_CALLER_ID_PRESENT */
#endif /* __WINCE_DEFINED_CALLER_ID_OPTIONS */

#endif /* _TSP_ */
