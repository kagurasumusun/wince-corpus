/* wtypesbase.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WTYPESBASE_
#define _WTYPESBASE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200)) /* CE 1.0..199 */

/* SECURITY_ATTRIBUTES  [struct; shared; CE 1.0..199; entity-headers] */
typedef struct _SECURITY_ATTRIBUTES {- // sa
#endif /* _WIN32_WCE */

#endif /* _WTYPESBASE_ */
