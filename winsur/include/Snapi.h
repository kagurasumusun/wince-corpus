/* Snapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 4 extra macros, 0 extra decls
 */
#ifndef _SNAPI_
#define _SNAPI_


/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define SN_ACTIVEAPPLICATION_PATH TEXT("System\\State\\Shell")
#define SN_ACTIVEAPPLICATION_VALUE TEXT("Active Application")
#define SN_PHONENOSIM_PATH TEXT("System\\State\\Phone")
#define SN_PHONENOSIM_VALUE TEXT("Status")

#endif /* _SNAPI_ */
