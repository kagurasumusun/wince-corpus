/* Pwingdi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _PWINGDI_
#define _PWINGDI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* VIDEO_POWER_MANAGEMENT  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ContrastCmdInputParm  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CONTRASTCMDINPUTPARM
#define __WINCE_DEFINED_CONTRASTCMDINPUTPARM
struct ContrastCmdInputParm {
 int command;
 int parm;
};
#endif /* __WINCE_DEFINED_CONTRASTCMDINPUTPARM */

/* parm  [extra struct] */
#ifndef __WINCE_DEFINED_CONTRASTCMDINPUTPARM
#define __WINCE_DEFINED_CONTRASTCMDINPUTPARM
struct ContrastCmdInputParm { int command; int parm; };
#endif /* __WINCE_DEFINED_CONTRASTCMDINPUTPARM */

#endif /* _PWINGDI_ */
