/* Dsound.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 22 extra decls
 */
#ifndef _DSOUND_
#define _DSOUND_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetFrequency( LPDWORD lpdwFrequency );
HRESULT GetPan( LPLONG lplPan );
HRESULT GetVolume( LPLONG lplVolume );
HRESULT SetCurrentPosition( DWORD dwNewPosition );
HRESULT SetPan( LONG lPan );
HRESULT SetVolume( LONG lVolume );

#endif /* _DSOUND_ */
