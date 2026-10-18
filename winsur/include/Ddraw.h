/* Ddraw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 22 declarations, 4 outlines, 0 base types, 0 extra macros, 51 extra decls
 */
#ifndef _DDRAW_
#define _DDRAW_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x600)) /* CE 3.0..599 */

/* IDirectDrawClipper  [interface; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */

/* IDirectDrawColorControl  [interface; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */

/* IDirectDrawPalette  [interface; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DDARGB  [struct; ce-only] */
#ifndef __WINCE_DEFINED__DDARGB
#define __WINCE_DEFINED__DDARGB
#ifndef __WINCE_DEFINED_DDARGB
#define __WINCE_DEFINED_DDARGB
#ifndef __WINCE_DEFINED_LPDDARGB
#define __WINCE_DEFINED_LPDDARGB
typedef struct _DDARGB{
 BYTE blue;
 BYTE green;
 BYTE red;
 BYTE alpha;
} DDARGB, *LPDDARGB;
#endif /* __WINCE_DEFINED_LPDDARGB */
#endif /* __WINCE_DEFINED_DDARGB */
#endif /* __WINCE_DEFINED__DDARGB */

/* DDCOLORCONTROL  [struct; shared] */
#ifndef __WINCE_DEFINED__DDCOLORCONTROL
#define __WINCE_DEFINED__DDCOLORCONTROL
#ifndef __WINCE_DEFINED_DDCOLORCONTROL
#define __WINCE_DEFINED_DDCOLORCONTROL
typedef struct _DDCOLORCONTROL {
 DWORD dwSize;
 DWORD dwFlags;
 LONG lBrightness;
 LONG lContrast;
 LONG lHue;
 LONG lSaturation;
 LONG lSharpness;
 LONG lGamma;
 LONG lColorEnable;
} DDCOLORCONTROL, FAR* LPDDCOLORCONTROL;
#endif /* __WINCE_DEFINED_DDCOLORCONTROL */
#endif /* __WINCE_DEFINED__DDCOLORCONTROL */

/* DDCOLORKEY  [struct; shared] */
#ifndef __WINCE_DEFINED__DDCOLORKEY
#define __WINCE_DEFINED__DDCOLORKEY
#ifndef __WINCE_DEFINED_DDCOLORKEY
#define __WINCE_DEFINED_DDCOLORKEY
typedef struct _DDCOLORKEY{
 DWORD dwColorSpaceLowValue;
 DWORD dwColorSpaceHighValue;
} DDCOLORKEY,FAR *LPDDCOLORKEY;
#endif /* __WINCE_DEFINED_DDCOLORKEY */
#endif /* __WINCE_DEFINED__DDCOLORKEY */

/* DDGAMMARAMP  [struct; shared] */
#ifndef __WINCE_DEFINED__DDGAMMARAMP
#define __WINCE_DEFINED__DDGAMMARAMP
#ifndef __WINCE_DEFINED_DDGAMMARAMP
#define __WINCE_DEFINED_DDGAMMARAMP
#ifndef __WINCE_DEFINED_LPDDGAMMARAMP
#define __WINCE_DEFINED_LPDDGAMMARAMP
typedef struct _DDGAMMARAMP
{
 WORD red[256];
 WORD green[256];
 WORD blue[256];
}DDGAMMARAMP, *LPDDGAMMARAMP;
#endif /* __WINCE_DEFINED_LPDDGAMMARAMP */
#endif /* __WINCE_DEFINED_DDGAMMARAMP */
#endif /* __WINCE_DEFINED__DDGAMMARAMP */

/* DDOVERLAYFX  [struct; shared] */
#ifndef __WINCE_DEFINED__DDOVERLAYFX
#define __WINCE_DEFINED__DDOVERLAYFX
#ifndef __WINCE_DEFINED_DDOVERLAYFX
#define __WINCE_DEFINED_DDOVERLAYFX
typedef struct _DDOVERLAYFX{
 DWORD dwSize;
 DWORD dwAlphaConstBitDepth;
 DWORD dwAlphaConst;
 DDCOLORKEY dckDestColorkey;
 DDCOLORKEY dckSrcColorkey;
} DDOVERLAYFX,FAR *LPDDOVERLAYFX;
#endif /* __WINCE_DEFINED_DDOVERLAYFX */
#endif /* __WINCE_DEFINED__DDOVERLAYFX */

/* DDPIXELFORMAT  [struct; shared] */
#ifndef __WINCE_DEFINED__DDPIXELFORMAT
#define __WINCE_DEFINED__DDPIXELFORMAT
#ifndef __WINCE_DEFINED_DDPIXELFORMAT
#define __WINCE_DEFINED_DDPIXELFORMAT
typedef struct _DDPIXELFORMAT {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwFourCC;
 union
 {
 DWORD dwRGBBitCount;
 DWORD dwYUVBitCount;
 DWORD dwAlphaBitDepth;
 };
 union
 {
 DWORD dwRBitMask;
 DWORD dwYBitMask;
 };
 union
 {
 DWORD dwGBitMask;
 DWORD dwUBitMask;
 };
 union
 {
 DWORD dwBBitMask;
 DWORD dwVBitMask;
 };
 union
 {
 DWORD dwRGBAlphaBitMask;
 };
} DDPIXELFORMAT, FAR* LPDDPIXELFORMAT;
#endif /* __WINCE_DEFINED_DDPIXELFORMAT */
#endif /* __WINCE_DEFINED__DDPIXELFORMAT */

/* DDSCAPS  [struct; shared] */
#ifndef __WINCE_DEFINED__DDSCAPS
#define __WINCE_DEFINED__DDSCAPS
#ifndef __WINCE_DEFINED_DDSCAPS
#define __WINCE_DEFINED_DDSCAPS
typedef struct _DDSCAPS{
 DWORD dwCaps;
} DDSCAPS, FAR* LPDDSCAPS;
#endif /* __WINCE_DEFINED_DDSCAPS */
#endif /* __WINCE_DEFINED__DDSCAPS */

/* DDSCAPS2  [struct; shared] */
#ifndef __WINCE_DEFINED__DDSCAPS2
#define __WINCE_DEFINED__DDSCAPS2
#ifndef __WINCE_DEFINED_DDSCAPS2
#define __WINCE_DEFINED_DDSCAPS2
typedef struct _DDSCAPS2 {
 DWORD dwCaps;
 DWORD dwCaps2;
 DWORD dwCaps3;
 DWORD dwCaps4;
} DDSCAPS2, FAR* LPDDSCAPS2;
#endif /* __WINCE_DEFINED_DDSCAPS2 */
#endif /* __WINCE_DEFINED__DDSCAPS2 */

/* DDSCAPSEX  [struct; ce-only] */
#ifndef __WINCE_DEFINED__DDSCAPSEX
#define __WINCE_DEFINED__DDSCAPSEX
#ifndef __WINCE_DEFINED_DDSCAPSEX
#define __WINCE_DEFINED_DDSCAPSEX
typedef struct _DDSCAPSEX {
 DWORD dwCaps2;
 DWORD dwCaps3;
 DWORD dwCaps4;
} DDSCAPSEX, FAR* LPDDSCAPSEX;
#endif /* __WINCE_DEFINED_DDSCAPSEX */
#endif /* __WINCE_DEFINED__DDSCAPSEX */

/* DDSURFACEDESC  [struct; shared] */
#ifndef __WINCE_DEFINED__DDSURFACEDESC
#define __WINCE_DEFINED__DDSURFACEDESC
#ifndef __WINCE_DEFINED_DDSURFACEDESC
#define __WINCE_DEFINED_DDSURFACEDESC
typedef struct _DDSURFACEDESC {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwHeight;
 DWORD dwWidth;
 LONG lPitch;
 LONG lXPitch;
 DWORD dwBackBufferCount;
 DWORD dwRefreshRate;
 LPVOID lpSurface;
 DDCOLORKEY ddckCKDestOverlay;
 DDCOLORKEY ddckCKDestBlt;
 DDCOLORKEY ddckCKSrcOverlay;
 DDCOLORKEY ddckCKSrcBlt;
 DDPIXELFORMAT ddpfPixelFormat;
 DDSCAPS ddsCaps;
 DWORD dwSurfaceSize;
} DDSURFACEDESC, FAR* LPDDSURFACEDESC;
#endif /* __WINCE_DEFINED_DDSURFACEDESC */
#endif /* __WINCE_DEFINED__DDSURFACEDESC */

/* DDALPHABLTFX  [typedef; ce-only] */
#ifndef __WINCE_DEFINED__DDALPHABLTFX
#define __WINCE_DEFINED__DDALPHABLTFX
#ifndef __WINCE_DEFINED_DDALPHABLTFX
#define __WINCE_DEFINED_DDALPHABLTFX
typedef union _DDALPHABLTFX {
 DWORD dwSize;
 DDARGB ddargbScaleFactors;
 DWORD dwFillValue;
} DDALPHABLTFX, FAR * LPDDALPHABLTFX;
#endif /* __WINCE_DEFINED_DDALPHABLTFX */
#endif /* __WINCE_DEFINED__DDALPHABLTFX */

/* DDBLTFX  [struct; shared] */
#ifndef __WINCE_DEFINED__DDBLTFX
#define __WINCE_DEFINED__DDBLTFX
#ifndef __WINCE_DEFINED_DDBLTFX
#define __WINCE_DEFINED_DDBLTFX
typedef struct _DDBLTFX{
 DWORD dwSize;
 DWORD dwROP;
 DWORD dwFillColor;
 DDCOLORKEY ddckDestColorkey;
 DDCOLORKEY ddckSrcColorkey;
} DDBLTFX,FAR* LPDDBLTFX;
#endif /* __WINCE_DEFINED_DDBLTFX */
#endif /* __WINCE_DEFINED__DDBLTFX */

/* DDSURFACEDESC2  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwSize */
/*   dwFlags */
/*   dwHeight */
/*   dwWidth */
/*   DUMMYUNIONNAMEN */
/*   dwAlphaBitDepth */
/*   dwReserved */
/*   lpSurface */
/*   ddckCKDestBlt */
/*   ddckCKSrcOverlay */
/*   ddckCKSrcBlt */
/*   ddsCaps */
/*   dwTextureStage */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x600)) /* CE 3.0..599 */

/* EnumModesCallback2  [function; ce-only; CE 3.0..599] */
HRESULT WINAPI EnumModesCallback(LPDDSURFACEDESC2 lpDDSurfaceDesc,
 LPVOID lpContext);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 3.0..699 */

/* EnumModesCallback  [function; ce-only; CE 3.0..699] */
HRESULT WINAPI EnumModesCallback(LPDDSURFACEDESC lpDDSurfaceDesc,
 LPVOID lpContext);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddOverlayDirtyRect(LPRECT lpRect);
HRESULT ChangeUniquenessValue();
HRESULT Compact();
HRESULT FlipToGDISurface();
HRESULT GetAvailableVidMem(LPDDSCAPS2 lpDDSCaps2, LPDWORD lpdwTotal, LPDWORD lpdwFree);
HRESULT GetColorControls(LPDDCOLORCONTROL lpColorControl);
HRESULT GetColorKey(DWORD dwFlags, LPDDCOLORKEY lpDDColorKey);
HRESULT GetDDInterface(LPVOID FAR *lplpDD);
HRESULT GetDeviceIdentifier(LPDDDEVICEIDENTIFIER lpdddi, DWORD dwFlags);
HRESULT GetDisplayMode(LPDDSURFACEDESC2 lpDDSurfaceDesc2);
HRESULT GetEntries(DWORD dwFlags, DWORD dwBase, DWORD dwNumEntries, LPPALETTEENTRY lpEntries);
HRESULT GetFourCCCodes(LPDWORD lpNumCodes, LPDWORD lpCodes);
HRESULT GetHWnd(HWND FAR *lphWnd);
HRESULT GetMonitorFrequency(LPDWORD lpdwFrequency);
HRESULT GetOverlayPosition(LPLONG lplX, LPLONG lplY);
HRESULT GetScanLine(LPDWORD lpdwScanLine);
HRESULT GetSurfaceDesc(LPDDSURFACEDESC2 lpDDSurfaceDesc);
HRESULT GetUniquenessValue(LPDWORD lpValue);
HRESULT GetVerticalBlankStatus(LPBOOL lpbIsInVB);
HRESULT IsClipListChanged(BOOL FAR *lpbChanged);
HRESULT IsLost();
HRESULT PageLock(DWORD dwFlags);
HRESULT PageUnlock(DWORD dwFlags);
HRESULT Restore();
HRESULT RestoreAllSurfaces();
HRESULT RestoreDisplayMode();
HRESULT SetColorControls(LPDDCOLORCONTROL lpColorControl);
HRESULT SetCooperativeLevel(HWND hWnd, DWORD dwFlags);
HRESULT SetDisplayMode(DWORD dwWidth, DWORD dwHeight, DWORD dwBPP, DWORD dwRefreshRate, DWORD dwFlags);
HRESULT SetHWnd(DWORD dwFlags, HWND hWnd);
HRESULT SetSurfaceDesc(LPDDSURFACEDESC2 lpddsd2, DWORD dwFlags);
HRESULT TestCooperativeLevel(void);

#endif /* _DDRAW_ */
