/* Pcommctrl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 3 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PCOMMCTRL_
#define _PCOMMCTRL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* ListView_GetNumberOfWorkAreas  [macro, function; shared] */

/* ListView_GetWorkAreas  [macro, function; shared] */

/* ListView_SetWorkAreas  [macro, function; shared] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DPA  [struct; ce-only] */
#ifndef __WINCE_DEFINED__DPA
#define __WINCE_DEFINED__DPA
#ifndef __WINCE_DEFINED_DPA
#define __WINCE_DEFINED_DPA
typedef struct _DPA {
 int cp;
 void FAR* FAR* pp;
 HANDLE hheap;
 int cpAlloc;
 int cpGrow;
} DPA;
#endif /* __WINCE_DEFINED_DPA */
#endif /* __WINCE_DEFINED__DPA */
#ifndef __WINCE_DEFINED_PDPA
#define __WINCE_DEFINED_PDPA
typedef DPA *PDPA, *LPDPA;
#endif /* __WINCE_DEFINED_PDPA */

#endif /* _PCOMMCTRL_ */
