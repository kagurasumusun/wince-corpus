/* D3dtypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 3 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _D3DTYPES_
#define _D3DTYPES_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* D3DLVERTEX  [typedef; ce-only; CE 4.0..499] */

/* D3DTLVERTEX  [typedef; ce-only; CE 4.0..499] */

/* D3DVERTEX  [typedef; ce-only; CE 4.0..499] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _D3DLVERTEX { union { D3DVALUE x; D3DVALUE dvX; };
typedef struct _D3DTLVERTEX { union { D3DVALUE sx; D3DVALUE dvSX; };
typedef struct _D3DVERTEX { union { D3DVALUE x; D3DVALUE dvX; };

#endif /* _D3DTYPES_ */
