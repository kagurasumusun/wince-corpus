/* lockmgrtypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _LOCKMGRTYPES_
#define _LOCKMGRTYPES_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PACQUIREFILELOCKSTATE  [callback; ce-only; CE 5.0..699; Fsdmgr.lib] */
typedef VOID (*PACQUIREFILELOCKSTATE)(
 DWORD dwFile,
 PFILELOCKSTATE* ppFileLockState
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PRELEASEFILELOCKSTATE  [callback; ce-only; CE 6.0..699; Fsdmgr.lib] */
typedef
BOOL
(*PRELEASEFILELOCKSTATE)(
 DWORD dwFile,
 PFILELOCKSTATE *ppFileLockState
 );
#endif /* _WIN32_WCE */

#endif /* _LOCKMGRTYPES_ */
