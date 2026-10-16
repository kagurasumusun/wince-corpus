/* float.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FLOAT_
#define _FLOAT_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* _chgsign  [function; ce-only; CE 5.0..599; coredll.dll] */
double _chgsign( doublex);

/* _copysign  [function; ce-only; CE 5.0..599; coredll.dll] */
double _copysign( doublex,doubley);

/* _statusfp  [function; ce-only; CE 5.0..599; coredll.dll] */
unsigned int _statusfp( void );
#endif /* _WIN32_WCE */

#endif /* _FLOAT_ */
