/* Ddraw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 29 declarations, 2 outlines, 0 base types, 0 extra macros, 69 extra decls
 */
#ifndef _DDRAW_
#define _DDRAW_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDCAPS  [struct; ce-only] */

/* DDDEVICEIDENTIFIER  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddOverlayDirtyRect( LPRECT lpRect);
HRESULT ChangeUniquenessValue();
HRESULT Compact();
HRESULT FlipToGDISurface();
HRESULT GetFourCCCodes( LPDWORD lpNumCodes, LPDWORD lpCodes);
HRESULT GetMonitorFrequency( LPDWORD lpdwFrequency);
HRESULT GetOverlayPosition( LPLONG lplX, LPLONG lplY);
HRESULT GetScanLine( LPDWORD lpdwScanLine);
HRESULT GetUniquenessValue( LPDWORD lpValue,);
HRESULT GetVerticalBlankStatus( LPBOOL lpbIsInVB);
HRESULT IsLost();
HRESULT PageLock( DWORD dwFlags);
HRESULT PageUnlock( DWORD dwFlags);
HRESULT Restore();
HRESULT RestoreAllSurfaces();
HRESULT RestoreDisplayMode();
HRESULT SetCooperativeLevel( HWND hWnd, DWORD dwFlags);
HRESULT SetDisplayMode( DWORD dwWidth, DWORD dwHeight, DWORD dwBPP, DWORD dwRefreshRate, DWORD dwFlags);
HRESULT SetHWnd( DWORD dwFlags, HWND hWnd);
HRESULT TestCooperativeLevel(void);

#endif /* _DDRAW_ */
