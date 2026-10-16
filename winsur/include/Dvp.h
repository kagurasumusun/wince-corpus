/* Dvp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 19 extra decls
 */
#ifndef _DVP_
#define _DVP_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetFieldPolarity( LPBOOL lpbFieldPolarity);
HRESULT GetVideoLine( LPDWORD lpdwLine);
HRESULT StopVideo();

#endif /* _DVP_ */
