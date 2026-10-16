/* Ddraw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 29 declarations, 2 outlines, 0 base types, 0 extra macros, 68 extra decls
 */
#ifndef _DDRAW_
#define _DDRAW_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDCAPS  [struct; ce-only] */

/* DDDEVICEIDENTIFIER  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DDARGB  [struct; ce-only] */
typedef struct _DDARGB{
 BYTE blue;
 BYTE green;
 BYTE red;
 BYTE alpha;
} DDARGB, *LPDDARGB;

/* DDGAMMARAMP  [struct; shared] */
typedef struct _DDGAMMARAMP
{
 WORD red[256];
 WORD green[256];
 WORD blue[256];
}DDGAMMARAMP, *LPDDGAMMARAMP;

/* LPDIRECTDRAW4  [extra struct] */
typedef struct IDirectDraw FAR *LPDIRECTDRAW; typedef struct IDirectDraw2 FAR *LPDIRECTDRAW2; typedef struct IDirectDraw4 FAR *LPDIRECTDRAW4;

/* LPDIRECTDRAWCLIPPER  [extra struct] */
typedef struct IDirectDrawClipper FAR *LPDIRECTDRAWCLIPPER;

/* LPDIRECTDRAWCOLORCONTROL  [extra struct] */
typedef struct IDirectDrawColorControl FAR *LPDIRECTDRAWCOLORCONTROL;

/* LPDIRECTDRAWPALETTE  [extra struct] */
typedef struct IDirectDrawPalette FAR *LPDIRECTDRAWPALETTE;

/* LPDIRECTDRAWSURFACE5  [extra struct] */
typedef struct IDirectDrawSurface FAR *LPDIRECTDRAWSURFACE; typedef struct IDirectDrawSurface2 FAR *LPDIRECTDRAWSURFACE2; typedef struct IDirectDrawSurface3 FAR *LPDIRECTDRAWSURFACE3; typedef struct IDirectDrawSurface4 FAR *LPDIRECTDRAWSURFACE4; typedef struct IDirectDrawSurface5 FAR *LPDIRECTDRAWSURFACE5;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddOverlayDirtyRect( LPRECT lpRect);
HRESULT ChangeUniquenessValue();
HRESULT Compact();
HRESULT FlipToGDISurface();
HRESULT GetAvailableVidMem( LPDDSCAPS2 lpDDSCaps2, LPDWORD lpdwTotal, LPDWORD lpdwFree);
HRESULT GetColorControls( LPDDCOLORCONTROL lpColorControl);
HRESULT GetColorKey( DWORD dwFlags, LPDDCOLORKEY lpDDColorKey);
HRESULT GetDeviceIdentifier( LPDDDEVICEIDENTIFIER lpdddi, DWORD dwFlags);
HRESULT GetDisplayMode( LPDDSURFACEDESC2 lpDDSurfaceDesc2);
HRESULT GetFourCCCodes( LPDWORD lpNumCodes, LPDWORD lpCodes);
HRESULT GetMonitorFrequency( LPDWORD lpdwFrequency);
HRESULT GetOverlayPosition( LPLONG lplX, LPLONG lplY);
HRESULT GetScanLine( LPDWORD lpdwScanLine);
HRESULT GetSurfaceDesc( LPDDSURFACEDESC2 lpDDSurfaceDesc);
HRESULT GetUniquenessValue( LPDWORD lpValue,);
HRESULT GetVerticalBlankStatus( LPBOOL lpbIsInVB);
HRESULT IsLost();
HRESULT PageLock( DWORD dwFlags);
HRESULT PageUnlock( DWORD dwFlags);
HRESULT Restore();
HRESULT RestoreAllSurfaces();
HRESULT RestoreDisplayMode();
HRESULT SetClipper( LPDIRECTDRAWCLIPPER lpDDClipper);
HRESULT SetColorControls( LPDDCOLORCONTROL lpColorControl);
HRESULT SetCooperativeLevel( HWND hWnd, DWORD dwFlags);
HRESULT SetDisplayMode( DWORD dwWidth, DWORD dwHeight, DWORD dwBPP, DWORD dwRefreshRate, DWORD dwFlags);
HRESULT SetHWnd( DWORD dwFlags, HWND hWnd);
HRESULT SetSurfaceDesc( LPDDSURFACEDESC2 lpddsd2, DWORD dwFlags);
HRESULT TestCooperativeLevel(void);

#endif /* _DDRAW_ */
