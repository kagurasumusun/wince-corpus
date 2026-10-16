/* Shtypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SHTYPES_
#define _SHTYPES_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SHITEMID  [struct; shared; CE 5.0..699] */
typedef struct _SHITEMID { 
 USHORT cb; 
 BYTE abID[1]; 
 } SHITEMID;

/* STRRET  [struct; shared; CE 5.0..699] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   uType */
/*   DUMMYUNIONNAME */
#endif /* _WIN32_WCE */

#endif /* _SHTYPES_ */
