/* malloc.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MALLOC_
#define _MALLOC_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* _alloca  [function; ce-only; CE 5.0..599; coredll.dll] */
void *_alloca( size_tsize);

/* _strdup  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_strdup( const char *strSource );wchar_t *_wcsdup( const wchar_t *strSource);

/* _wcsdup  [function; ce-only; CE 5.0..599; entity-headers] */
char *_strdup( const char *strSource );wchar_t *_wcsdup( const wchar_t *strSource);

/* calloc  [function; ce-only; CE 5.0..599; coredll.dll] */
void *calloc( size_t num, size_t size);
#endif /* _WIN32_WCE */

#endif /* _MALLOC_ */
