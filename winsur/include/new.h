/* new.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _NEW_
#define _NEW_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* _set_new_handler  [function; ce-only; CE 5.0..599; coredll.dll] */
_PNH _set_new_handler(
 _PNH pNewHandler);

/* _set_new_mode  [function; ce-only; CE 5.0..599; coredll.dll] */
int _set_new_mode(intnewhandlermode);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
int handle_program_memory_depletion( size_t );

#endif /* _NEW_ */
