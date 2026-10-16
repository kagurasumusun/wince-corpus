/* vptype.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _VPTYPE_
#define _VPTYPE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MPEG2Level  [enum, typedef; ce-only; heuristic-prefix] */
enum MPEG2Level {
 MPEG2Level_Low = 1,
 MPEG2Level_Main,
 MPEG2Level_High1440,
 MPEG2Level_High
};

/* MPEG2Profile  [enum, typedef; ce-only; heuristic-prefix] */
enum MPEG2Profile {
 MPEG2Profile_Simple = 1,
 MPEG2Profile_Main,
 MPEG2Profile_SNRScalable,
 MPEG2Profile_SpatiallyScalable,
 MPEG2Profile_High
};

#endif /* _VPTYPE_ */
