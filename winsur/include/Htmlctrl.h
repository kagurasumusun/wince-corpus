/* Htmlctrl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _HTMLCTRL_
#define _HTMLCTRL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 0x200) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 1.0..199, 3.0..399 */

/* InitHTMLControl  [function; ce-only; CE 1.0..199, 3.0..399] */
BOOL InitHTMLControl( 
HINSTANCE hinst );
#endif /* _WIN32_WCE */

#endif /* _HTMLCTRL_ */
