/* ddraw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 162 declarations, 0 outlines, 0 base types, 0 extra macros, 75 extra decls
 */
#ifndef _DDRAW_
#define _DDRAW_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 600)) /* CE 3.0..599 */

/* DDSCAPS2  [struct; shared; CE 3.0..599] */
typedef struct _DDSCAPS2 { 
 DWORD dwCaps; 
 DWORD dwCaps2; 
 DWORD dwCaps3; 
 DWORD dwCaps4; 
} DDSCAPS2, FAR* LPDDSCAPS2;

/* DDSCAPSEX  [struct; ce-only; CE 3.0..599] */
typedef struct _DDSCAPSEX { 
 DWORD dwCaps2; 
 DWORD dwCaps3; 
 DWORD dwCaps4; 
} DDSCAPSEX, FAR* LPDDSCAPSEX;

/* DDSURFACEDESC2  [struct; shared; CE 3.0..599] */
typedef struct _DDSURFACEDESC2 { 
 DWORD dwSize; 
 DWORD dwFlags; 
 DWORD dwHeight; 
 DWORD dwWidth; 
 union 
 { 
 LONG lPitch; 
 DWORD dwLinearSize; 
 } DUMMYUNIONNAMEN(1); 
 DWORD dwBackBufferCount; 
 union 
 { 
 DWORD dwMipMapCount; 
 DWORD dwRefreshRate; 
 } DUMMYUNIONNAMEN(2); 
 DWORD dwAlphaBitDepth; 
 DWORD dwReserved; 
 LPVOID lpSurface; 
 DDCOLORKEY ddckCKDestOverlay; 
 DDCOLORKEY ddckCKDestBlt; 
 DDCOLORKEY ddckCKSrcOverlay; 
 DDCOLORKEY ddckCKSrcBlt; 
 DDPIXELFORMAT ddpfPixelFormat; 
 DDSCAPS2 ddsCaps; 
 DWORD dwTextureStage; 
} DDSURFACEDESC2, FAR* LPDDSURFACEDESC2;

/* IDirectDraw4  [struct; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDirectDraw FAR *LPDIRECTDRAW; 
typedef struct IDirectDraw2 FAR *LPDIRECTDRAW2; 
typedef struct IDirectDraw4 FAR *LPDIRECTDRAW4;

/* IDirectDrawClipper  [struct, interface; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDirectDrawClipper FAR *LPDIRECTDRAWCLIPPER;

/* IDirectDrawColorControl  [struct, interface; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDirectDrawColorControl FAR *LPDIRECTDRAWCOLORCONTROL;

/* IDirectDrawPalette  [struct, interface; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDirectDrawPalette FAR *LPDIRECTDRAWPALETTE;

/* IDirectDrawSurface5  [struct; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDirectDrawSurface FAR *LPDIRECTDRAWSURFACE; 
typedef struct IDirectDrawSurface2 FAR *LPDIRECTDRAWSURFACE2; 
typedef struct IDirectDrawSurface3 FAR *LPDIRECTDRAWSURFACE3; 
typedef struct IDirectDrawSurface4 FAR *LPDIRECTDRAWSURFACE4; 
typedef struct IDirectDrawSurface5 FAR *LPDIRECTDRAWSURFACE5;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* DDALPHABLTFX  [typedef; ce-only; CE 3.0..699] */
typedef union _DDALPHABLTFX {
 DWORD dwSize;
 DDARGB ddargbScaleFactors;
 DWORD dwFillValue;
} DDALPHABLTFX, FAR * LPDDALPHABLTFX;

/* DDBLTFX  [struct; shared; CE 3.0..699] */
typedef struct _DDBLTFX{ 
 DWORD dwSize; 
 DWORD dwROP; 
 DWORD dwFillColor; 
 DDCOLORKEY ddckDestColorkey; 
 DDCOLORKEY ddckSrcColorkey; 
} DDBLTFX,FAR* LPDDBLTFX;

/* DDCAPS  [struct; ce-only; CE 3.0..699] */
typedef struct _DDCAPS { 
 DWORD dwSize;
 DWORD dwCKeyCaps;
 DWORD dwPalCaps;
 DWORD dwBltCaps;
 DWORD dwAlphaCaps;
 DWORD dwOverlayCaps;
 DWORD dwVidMemTotal;
 DWORD dwVidMemFree;
 DWORD dwVidMemStride;
 DWORD dwMaxVisibleOverlays;
 DWORD dwCurrVisibleOverlays;
 DWORD dwNumFourCCCodes;
 DWORD dwAlignBoundarySrc;
 DWORD dwAlignSizeSrc;
 DWORD dwAlignBoundaryDest;
 DWORD dwAlignSizeDest;
 DWORD dwRops[DD_ROP_SPACE];
 DWORD dwMinOverlayStretch;
 DWORD dwMaxOverlayStretch;
 DWORD dwMiscCaps;
} DDCAPS,FAR *LPDDCAPS;

/* DDCOLORCONTROL  [struct; shared; CE 3.0..699] */
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

/* DDCOLORKEY  [struct; shared; CE 3.0..699] */
typedef struct _DDCOLORKEY{ 
 DWORD dwColorSpaceLowValue; 
 DWORD dwColorSpaceHighValue; 
} DDCOLORKEY,FAR *LPDDCOLORKEY;

/* DDOVERLAYFX  [struct; shared; CE 3.0..699] */
typedef struct _DDOVERLAYFX{ 
 DWORD dwSize; 
 DWORD dwAlphaConstBitDepth; 
 DWORD dwAlphaConst; 
 DDCOLORKEY dckDestColorkey; 
 DDCOLORKEY dckSrcColorkey; 
} DDOVERLAYFX,FAR *LPDDOVERLAYFX;

/* DDPIXELFORMAT  [struct; shared; CE 3.0..699] */
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

/* DDSCAPS  [struct; shared; CE 3.0..699] */
typedef struct _DDSCAPS{ 
 DWORD dwCaps; 
} DDSCAPS, FAR* LPDDSCAPS;

/* DDSURFACEDESC  [struct; shared; CE 3.0..699] */
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
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* DDARGB  [struct; ce-only; CE 6.0..699] */
typedef struct _DDARGB{
 BYTE blue;
 BYTE green;
 BYTE red;
 BYTE alpha;
} DDARGB, *LPDDARGB;

/* DDDEVICEIDENTIFIER  [struct; ce-only; CE 6.0..699] */
typedef struct _DDDEVICEIDENTIFIER {
 wchar_t szDriver[MAX_DDDEVICEID_STRING];
 wchar_t szDescription[MAX_DDDEVICEID_STRING];
 LARGE_INTEGER liDriverVersion;
 DWORD dwVendorId;
 DWORD dwDeviceId;
 DWORD dwSubSysId;
 DWORD dwRevision;
 GUID guidDeviceIdentifier;
} DDDEVICEIDENTIFIER, *LPDDDEVICEIDENTIFIER;

/* DDGAMMARAMP  [struct; shared; CE 6.0..699] */
typedef struct _DDGAMMARAMP
{
 WORD red[256];
 WORD green[256];
 WORD blue[256];
}DDGAMMARAMP, *LPDDGAMMARAMP;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* IDirectDraw4::GetDeviceIdentifier  [function; ce-only; CE 3.0..399; ddraw.lib] */
HRESULT GetDeviceIdentifier( 
LPDDDEVICEIDENTIFIER lpdddi, 
DWORD dwFlags);

/* IDirectDraw4::Initialize  [function; ce-only; CE 3.0..399; ddraw.lib] */
HRESULT Initialize( 
GUID FAR *lpGUID);

/* IDirectDrawClipper::Initialize  [function; shared; CE 3.0..399; ddraw.lib] */
HRESULT Initialize( 
LPDIRECTDRAW lpDD, 
DWORD dwFlags);

/* IDirectDrawPalette::Initialize  [function; shared; CE 3.0..399; ddraw.lib] */
HRESULT Initialize( 
LPDIRECTDRAW lpDD, 
DWORD dwFlags, 
LPPALETTEENTRY lpDDColorTable);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* HALInit  [function; ce-only; CE 3.0..399, 5.0..699] */
EXTERN_C BOOL WINAPI HALInit(
 LPDDHALINFO lpddhi,
 BOOL reset,
 DWORD modeIndex
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 600)) /* CE 3.0..599 */

/* DDEnumCallback  [function; ce-only; CE 3.0..599] */
BOOL WINAPI DDEnumCallback( 
 GUID FAR* lpGUID, 
 LPSTR lpDriverDescription, 
 LPSTR lpDriverName, 
 LPVOID lpContext 
);

/* DirectDrawEnumerate  [function; shared; CE 3.0..599; Ddraw.lib, ddraw.lib; A/W DirectDrawEnumerateA,DirectDrawEnumerateW (CE is W-side)] */
HRESULT WINAPI DirectDrawEnumerate( 
 LPDDENUMCALLBACK lpCallback, 
 LPVOID lpContext 
);

/* EnumModesCallback2  [function; ce-only; CE 3.0..599] */
HRESULT WINAPI EnumModesCallback( 
 LPDDSURFACEDESC2 lpDDSurfaceDesc, 
 LPVOID lpContext 
);

/* EnumSurfacesCallback2  [function; ce-only; CE 3.0..599] */
HRESULT WINAPI EnumSurfacesCallback2( 
 LPDIRECTDRAWSURFACE4 lpDDSurface, 
 LPDDSURFACEDESC2 lpDDSurfaceDesc, 
 LPVOID lpContext 
);

/* EnumVideoCallback  [function; ce-only; CE 3.0..599] */
HRESULT WINAPI EnumVideoCallback( 
 LPDDVIDEOPORTCAPS lpDDVideoPortCaps, 
 LPVOID lpContext 
);

/* IDirectDraw4::Compact  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Compact();

/* IDirectDraw4::CreateClipper  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT CreateClipper( 
 DWORD dwFlags, 
 LPDIRECTDRAWCLIPPER FAR* lplpDDClipper, 
 IUnknown FAR* pUnkOuter 
);

/* IDirectDraw4::CreatePalette  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT CreatePalette( 
 DWORD dwFlags, 
 LPPALETTEENTRY lpDDColorArray, 
 LPDIRECTDRAWPALETTE FAR* lplpDDPalette, 
 IUnknown FAR* pUnkOuter 
);

/* IDirectDraw4::CreateSurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT CreateSurface( 
 LPDDSURFACEDESC2 lpDDSurfaceDesc2, 
 LPDIRECTDRAWSURFACE4 FAR* lplpDDSurface, 
 IUnknown FAR* pUnkOuter 
);

/* IDirectDraw4::DuplicateSurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT DuplicateSurface( 
 LPDIRECTDRAWSURFACE4 lpDDSurface, 
 LPLPDIRECTDRAWSURFACE4 FAR* lplpDupDDSurface 
);

/* IDirectDraw4::EnumDisplayModes  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT EnumDisplayModes( 
 DWORD dwFlags, 
 LPDDSURFACEDESC2 lpDDSurfaceDesc2, 
 LPVOID lpContext, 
 LPDDENUMMODESCALLBACK2 lpEnumModesCallback 
);

/* IDirectDraw4::EnumSurfaces  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT EnumSurfaces( 
 DWORD dwFlags, 
 LPDDSURFACEDESC2 lpDDSD2, 
 LPVOID lpContext, 
 LPDDENUMSURFACESCALLBACK2 lpEnumSurfacesCallback 
);

/* IDirectDraw4::FlipToGDISurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT FlipToGDISurface();

/* IDirectDraw4::GetAvailableVidMem  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetAvailableVidMem( 
 LPDDSCAPS2 lpDDSCaps2, 
 LPDWORD lpdwTotal, 
 LPDWORD lpdwFree 
);

/* IDirectDraw4::GetCaps  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetCaps( 
 LPDDCAPS lpDDDriverCaps, 
 LPDDCAPS lpDDHELCaps 
);

/* IDirectDraw4::GetDisplayMode  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetDisplayMode( 
 LPDDSURFACEDESC2 lpDDSurfaceDesc2 
);

/* IDirectDraw4::GetFourCCCodes  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetFourCCCodes( 
 LPDWORD lpNumCodes, 
 LPDWORD lpCodes 
);

/* IDirectDraw4::GetGDISurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetGDISurface( 
 LPDIRECTDRAWSURFACE4 FAR* lplpGDIDDSSurface4 
);

/* IDirectDraw4::GetMonitorFrequency  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetMonitorFrequency( 
 LPDWORD lpdwFrequency 
);

/* IDirectDraw4::GetScanLine  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetScanLine( 
 LPDWORD lpdwScanLine 
);

/* IDirectDraw4::GetSurfaceFromDC  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetSurfaceFromDC( 
 HDC hdc, 
 LPDIRECTDRAWSURFACE4* lpDDS4 
);

/* IDirectDraw4::GetVerticalBlankStatus  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetVerticalBlankStatus( 
 LPBOOL lpbIsInVB 
);

/* IDirectDraw4::RestoreAllSurfaces  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT RestoreAllSurfaces();

/* IDirectDraw4::RestoreDisplayMode  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT RestoreDisplayMode();

/* IDirectDraw4::SetCooperativeLevel  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetCooperativeLevel( 
 HWND hWnd, 
 DWORD dwFlags 
);

/* IDirectDraw4::SetDisplayMode  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetDisplayMode( 
 DWORD dwWidth, 
 DWORD dwHeight, 
 DWORD dwBPP, 
 DWORD dwRefreshRate, 
 DWORD dwFlags 
);

/* IDirectDraw4::TestCooperativeLevel  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT TestCooperativeLevel(void);

/* IDirectDraw4::WaitForVerticalBlank  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT WaitForVerticalBlank( 
 DWORD dwFlags, 
 HANDLE hEvent 
);

/* IDirectDrawPalette::GetCaps  [function; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetCaps( 
 LPDWORD lpdwCaps 
);

/* IDirectDrawPalette::GetEntries  [function; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetEntries( 
 DWORD dwFlags, 
 DWORD dwBase, 
 DWORD dwNumEntries, 
 LPPALETTEENTRY lpEntries 
);

/* IDirectDrawPalette::SetEntries  [function; shared; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetEntries( 
 DWORD dwFlags, 
 DWORD dwStartingEntry, 
 DWORD dwCount, 
 LPPALETTEENTRY lpEntries 
);

/* IDirectDrawSurface5::AddAttachedSurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT AddAttachedSurface( 
 LPDIRECTDRAWSURFACE4 lpDDSAttachedSurface 
);

/* IDirectDrawSurface5::AddOverlayDirtyRect  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT AddOverlayDirtyRect( 
 LPRECT lpRect 
);

/* IDirectDrawSurface5::AlphaBlt  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT AlphaBlt( 
 LPRECT lpDestRect, 
 LPDIRECTDRAWSURFACE4 lpDDSrcSurface, 
 LPRECT lpSrcRect, 
 DWORD dwFlags, 
 LPDDALPHABLTFX lpDDAlphaBltFX 
);

/* IDirectDrawSurface5::Blt  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Blt( 
 LPRECT lpDestRect, 
 LPDIRECTDRAWSURFACE4 lpDDSrcSurface, 
 LPRECT lpSrcRect, 
 DWORD dwFlags, 
 LPDDBLTFX lpDDBltFx 
);

/* IDirectDrawSurface5::BltFast  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT BltFast( 
 DWORD dwX, 
 DWORD dwY, 
 LPDIRECTDRAWSURFACE4 lpDDSrcSurface, 
 LPRECT lpSrcRect, 
 DWORD dwTrans 
);

/* IDirectDrawSurface5::ChangeUniquenessValue  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT ChangeUniquenessValue();

/* IDirectDrawSurface5::DeleteAttachedSurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT DeleteAttachedSurface( 
 DWORD dwFlags, 
 LPDIRECTDRAWSURFACE4 lpDDSAttachedSurface 
);

/* IDirectDrawSurface5::EnumAttachedSurfaces  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT EnumAttachedSurfaces( 
 LPVOID lpContext, 
 LPDDENUMSURFACESCALLBACK2 lpEnumSurfacesCallback 
);

/* IDirectDrawSurface5::EnumOverlayZOrders  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT EnumOverlayZOrders( 
 DWORD dwFlags, 
 LPVOID lpContext, 
 LPDDENUMSURFACESCALLBACK2 lpfnCallback 
);

/* IDirectDrawSurface5::Flip  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Flip( 
 LPDIRECTDRAWSURFACE5 lpDDSurfaceTargetOverride, 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::FreePrivateData  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT FreePrivateData( 
 REFGUID guidTag 
);

/* IDirectDrawSurface5::GetAttachedSurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetAttachedSurface( 
 LPDDSCAPS2 lpDDSCaps, 
 LPDIRECTDRAWSURFACE4 FAR* lplpDDAttachedSurface 
);

/* IDirectDrawSurface5::GetBltStatus  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetBltStatus( 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::GetCaps  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetCaps( 
 LPDDSCAPS2 lpDDSCaps 
);

/* IDirectDrawSurface5::GetClipper  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetClipper( 
 LPDIRECTDRAWCLIPPER FAR* lplpDDClipper 
);

/* IDirectDrawSurface5::GetColorKey  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetColorKey( 
 DWORD dwFlags, 
 LPDDCOLORKEY lpDDColorKey 
);

/* IDirectDrawSurface5::GetDC  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetDC( 
 HDC FAR* lphDC 
);

/* IDirectDrawSurface5::GetDDInterface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetDDInterface( 
 LPVOID FAR* lplpDD 
);

/* IDirectDrawSurface5::GetFlipStatus  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetFlipStatus( 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::GetOverlayPosition  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetOverlayPosition( 
 LPLONG lplX, 
 LPLONG lplY 
);

/* IDirectDrawSurface5::GetPalette  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetPalette( 
 LPDIRECTDRAWPALETTE FAR* lplpDDPalette 
);

/* IDirectDrawSurface5::GetPixelFormat  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetPixelFormat( 
 LPDDPIXELFORMAT lpDDPixelFormat 
);

/* IDirectDrawSurface5::GetPrivateData  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetPrivateData( 
 REFGUID guidTag, 
 LPVOID lpBuffer, 
 LPDWORD lpcbBufferSize 
);

/* IDirectDrawSurface5::GetSurfaceDesc  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetSurfaceDesc( 
 LPDDSURFACEDESC2 lpDDSurfaceDesc 
);

/* IDirectDrawSurface5::GetUniquenessValue  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetUniquenessValue( 
 LPDWORD lpValue 
);

/* IDirectDrawSurface5::Initialize  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Initialize( 
 LPDIRECTDRAW lpDD, 
 LPDDSURFACEDESC2 lpDDSurfaceDesc 
);

/* IDirectDrawSurface5::IsLost  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT IsLost();

/* IDirectDrawSurface5::Lock  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Lock( 
 LPRECT lpDestRect, 
 LPDDSURFACEDESC2 lpDDSurfaceDesc, 
 DWORD dwFlags, 
 HANDLE hEvent 
);

/* IDirectDrawSurface5::PageLock  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT PageLock( 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::PageUnlock  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT PageUnlock( 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::ReleaseDC  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT ReleaseDC( 
 HDC hDC 
);

/* IDirectDrawSurface5::Restore  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Restore();

/* IDirectDrawSurface5::SetClipper  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetClipper( 
 LPDIRECTDRAWCLIPPER lpDDClipper 
);

/* IDirectDrawSurface5::SetColorKey  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetColorKey( 
 DWORD dwFlags, 
 LPDDCOLORKEY lpDDColorKey 
);

/* IDirectDrawSurface5::SetOverlayPosition  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetOverlayPosition( 
 LONG lX, 
 LONG lY 
);

/* IDirectDrawSurface5::SetPalette  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetPalette( 
 LPDIRECTDRAWPALETTE lpDDPalette 
);

/* IDirectDrawSurface5::SetPrivateData  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetPrivateData( 
 REFGUID guidTag, 
 LPVOID lpData, 
 DWORD cbSize, 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::SetSurfaceDesc  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetSurfaceDesc( 
 LPDDSURFACEDESC2 lpddsd2, 
 DWORD dwFlags 
);

/* IDirectDrawSurface5::Unlock  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Unlock( 
 LPRECT lpRect 
);

/* IDirectDrawSurface5::UpdateOverlay  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT UpdateOverlay( 
 LPRECT lpSrcRect, 
 LPDIRECTDRAWSURFACE4 lpDDDestSurface, 
 LPRECT lpDestRect, 
 DWORD dwFlags, 
 LPDDOVERLAYFX lpDDOverlayFx 
);

/* IDirectDrawSurface5::UpdateOverlayZOrder  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT UpdateOverlayZOrder( 
 DWORD dwFlags, 
 LPDIRECTDRAWSURFACE4 lpDDSReference 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* buildDDHALInfo  [function; ce-only; CE 3.0..699] */
EXTERN_C BOOL buildDDHALInfo(
 LPDDHALINFO lpddhi,
 DWORD modeIndex 
);

/* DDEnumCallbackEx  [function; ce-only; CE 3.0..699] */
BOOL WINAPI DDEnumCallbackEx(
 GUID FAR* lpGUID, 
 LPWSTR lpDriverDescription, 
 LPWSTR lpDriverName, 
 LPVOID lpContext, 
 HMONITOR hm
);

/* DirectDrawCreate  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT WINAPI DirectDrawCreate(
 GUID FAR* lpGUID, 
 LPDIRECTDRAW FAR* lplpDD, 
 IUnknown FAR* pUnkOuter
);

/* DirectDrawCreateClipper  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT WINAPI DirectDrawCreateClipper(
 DWORD dwFlags, 
 LPDIRECTDRAWCLIPPER FAR* lplpDDClipper, 
 IUnknown FAR* pUnkOuter
);

/* DirectDrawEnumerateEx  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib; A/W DirectDrawEnumerateExA,DirectDrawEnumerateExW (CE is W-side)] */
HRESULT WINAPI DirectDrawEnumerateEx(
 LPDDENUMCALLBACKEX lpCallback, 
 LPVOID lpContext, 
 DWORD dwFlags
);

/* EnumModesCallback  [function; ce-only; CE 3.0..699] */
HRESULT WINAPI EnumModesCallback(
 LPDDSURFACEDESC lpDDSurfaceDesc, 
 LPVOID lpContext
);

/* EnumSurfacesCallback  [function; ce-only; CE 3.0..699] */
HRESULT WINAPI EnumSurfacesCallback( 
 LPDIRECTDRAWSURFACE lpDDSurface, 
 LPDDSURFACEDESC lpDDSurfaceDesc, 
 LPVOID lpContext
);

/* IDirectDrawClipper::GetClipList  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT GetClipList(
 LPRECT lpRect, 
 LPRGNDATA lpClipList, 
 LPDWORD lpdwSize
);

/* IDirectDrawClipper::GetHWnd  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT GetHWnd(
 HWND FAR* lphWnd
);

/* IDirectDrawClipper::IsClipListChanged  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT IsClipListChanged(
 BOOL FAR* lpbChanged
);

/* IDirectDrawClipper::SetClipList  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT SetClipList(
 LPRGNDATA lpClipList, 
 DWORD dwFlags
);

/* IDirectDrawClipper::SetHWnd  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT SetHWnd(
 DWORD dwFlags, 
 HWND hWnd
);

/* IDirectDrawColorControl::GetColorControls  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT GetColorControls(
 LPDDCOLORCONTROL lpColorControl
);

/* IDirectDrawColorControl::SetColorControls  [function; shared; CE 3.0..699; Ddraw.lib, ddraw.lib] */
HRESULT SetColorControls(
 LPDDCOLORCONTROL lpColorControl
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IDirectDraw::CreateClipper  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT CreateClipper( 
 DWORD dwFlags, 
 LPDIRECTDRAWCLIPPER FAR* lplpDDClipper, 
 IUnknown FAR* pUnkOuter 
);

/* IDirectDraw::CreateSurface  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT CreateSurface(
 LPDDSURFACEDESC lpDDSurfaceDesc, 
 LPDIRECTDRAWSURFACE FAR* lplpDDSurface, 
 IUnknown FAR* pUnkOuter 
);

/* IDirectDraw::EnumDisplayModes  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT EnumDisplayModes( 
 DWORD dwFlags, 
 LPDDSURFACEDESC lpDDSurfaceDesc, 
 LPVOID lpContext, 
 LPDDENUMMODESCALLBACK lpEnumModesCallback
);

/* IDirectDraw::EnumSurfaces  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT EnumSurfaces( 
 DWORD dwFlags, 
 LPDDSURFACEDESC lpDDSD, 
 LPVOID lpContext, 
 LPDDENUMSURFACESCALLBACK lpEnumSurfacesCallback
);

/* IDirectDraw::FlipToGDISurface  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT FlipToGDISurface();

/* IDirectDraw::GetAvailableVidMem  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetAvailableVidMem( 
 LPDDSCAPS lpDDSCaps, 
 LPDWORD lpdwTotal, 
 LPDWORD lpdwFree
);

/* IDirectDraw::GetCaps  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetCaps( 
 LPDDCAPS lpDDDriverCaps, 
 LPDDCAPS lpDDEmulCaps
);

/* IDirectDraw::GetDeviceIdentifier  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetDeviceIdentifier( 
 LPDDDEVICEIDENTIFIER lpDDDeviceIdentifier
);

/* IDirectDraw::GetDisplayMode  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetDisplayMode( 
 LPDDSURFACEDESC lpDDSurfaceDesc
);

/* IDirectDraw::GetFourCCCodes  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetFourCCCodes(
 LPDWORD lpNumCodes, 
 LPDWORD lpCodes
);

/* IDirectDraw::GetGDISurface  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetGDISurface(
 LPDIRECTDRAWSURFACE FAR* lplpGDIDDSSurface
);

/* IDirectDraw::GetMonitorFrequency  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetMonitorFrequency(
 LPDWORD lpdwFrequency
);

/* IDirectDraw::GetScanLine  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetScanLine(
 LPDWORD lpdwScanLine
);

/* IDirectDraw::GetSurfaceFromDC  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetSurfaceFromDC(
 HDC hdc,
 LPDIRECTDRAWSURFACE* lpDDS
);

/* IDirectDraw::GetVerticalBlankStatus  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetVerticalBlankStatus(
 LPBOOL lpbIsInVB
);

/* IDirectDraw::RestoreAllSurfaces  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT RestoreAllSurfaces();

/* IDirectDraw::RestoreDisplayMode  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT RestoreDisplayMode();

/* IDirectDraw::SetCooperativeLevel  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT SetCooperativeLevel(
 HWND hWnd, 
 DWORD dwFlags
);

/* IDirectDraw::SetDisplayMode  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT SetDisplayMode(
 DWORD dwWidth, 
 DWORD dwHeight, 
 DWORD dwBPP, 
 DWORD dwRefreshRate, 
 DWORD dwFlags
);

/* IDirectDraw::TestCooperativeLevel  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT TestCooperativeLevel(void);

/* IDirectDraw::WaitForVerticalBlank  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT WaitForVerticalBlank(
 DWORD dwFlags, 
 HANDLE hEvent
);

/* IDirectDrawGammaControl::GetGammaRamp  [function; shared; CE 6.0..699; ddraw.lib] */
HRESULT GetGammaRamp(
 LPDDGAMMARAMP lpGammaRamp
);

/* IDirectDrawGammaControl::SetGammaRamp  [function; shared; CE 6.0..699; ddraw.lib] */
HRESULT SetGammaRamp(
 LPDDGAMMARAMP lpGammaRamp
);

/* IDirectDrawSurface::AddOverlayDirtyRect  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT AddOverlayDirtyRect(
 LPRECT lpRect
);

/* IDirectDrawSurface::AlphaBlt  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT AlphaBlt( 
 LPRECT lpDestRect, 
 LPDIRECTDRAWSURFACE lpDDSrcSurface, 
 LPRECT lpSrcRect, 
 DWORD dwFlags, 
 LPDDALPHABLTFX lpDDAlphaBltFX
);

/* IDirectDrawSurface::Blt  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT Blt(
 LPRECT lpDestRect, 
 LPDIRECTDRAWSURFACE lpDDSrcSurface, 
 LPRECT lpSrcRect, 
 DWORD dwFlags, 
 LPDDBLTFX lpDDBltFx
);

/* IDirectDrawSurface::EnumAttachedSurfaces  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT EnumAttachedSurfaces(
 LPVOID lpContext, 
 LPDDENUMSURFACESCALLBACK lpEnumSurfacesCallback
);

/* IDirectDrawSurface::EnumOverlayZOrders  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT EnumOverlayZOrders(
 DWORD dwFlags, 
 LPVOID lpContext, 
 LPDDENUMSURFACESCALLBACK lpfnCallback
);

/* IDirectDrawSurface::Flip  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT Flip(
 LPDIRECTDRAWSURFACE lpDDSurfaceTargetOverride, 
 DWORD dwFlags
);

/* IDirectDrawSurface::GetBltStatus  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetBltStatus(
 DWORD dwFlags
);

/* IDirectDrawSurface::GetCaps  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetCaps(
 LPDDSCAPS lpDDSCaps
);

/* IDirectDrawSurface::GetClipper  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetClipper(
 LPDIRECTDRAWCLIPPER FAR* lplpDDClipper
);

/* IDirectDrawSurface::GetColorKey  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetColorKey(
 DWORD dwFlags, 
 LPDDCOLORKEY lpDDColorKey
);

/* IDirectDrawSurface::GetDC  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetDC(
 HDC FAR* lphDC
);

/* IDirectDrawSurface::GetDDInterface  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetDDInterface(
 LPDIRECTDRAW FAR* lplpDD
);

/* IDirectDrawSurface::GetFlipStatus  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetFlipStatus(
 DWORD dwFlags
);

/* IDirectDrawSurface::GetOverlayPosition  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetOverlayPosition(
 LPLONG lplX, 
 LPLONG lplY
);

/* IDirectDrawSurface::GetPalette  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetPalette(
 LPDIRECTDRAWPALETTE FAR* lplpDDPalette
);

/* IDirectDrawSurface::GetPixelFormat  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetPixelFormat(
 LPDDPIXELFORMAT lpDDPixelFormat
);

/* IDirectDrawSurface::GetSurfaceDesc  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT GetSurfaceDesc(
 LPDDSURFACEDESC lpDDSurfaceDesc
);

/* IDirectDrawSurface::IsLost  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT IsLost();

/* IDirectDrawSurface::Lock  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT Lock(
 LPRECT lpDestRect, 
 LPDDSURFACEDESC lpDDSurfaceDesc, 
 DWORD dwFlags, 
 HANDLE hEvent
);

/* IDirectDrawSurface::ReleaseDC  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT ReleaseDC(
 HDC hDC
);

/* IDirectDrawSurface::Restore  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT Restore();

/* IDirectDrawSurface::SetClipper  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT SetClipper(
 LPDIRECTDRAWCLIPPER lpDDClipper
);

/* IDirectDrawSurface::SetColorKey  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT SetColorKey(
 DWORD dwFlags, 
 LPDDCOLORKEY lpDDColorKey
);

/* IDirectDrawSurface::SetOverlayPosition  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT SetOverlayPosition(
 LONG lX, 
 LONG lY
);

/* IDirectDrawSurface::SetPalette  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT SetPalette(
 LPDIRECTDRAWPALETTE lpDDPalette
);

/* IDirectDrawSurface::Unlock  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT Unlock(
 LPRECT lpRect
);

/* IDirectDrawSurface::UpdateOverlay  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT UpdateOverlay(
 LPRECT lpSrcRect, 
 LPDIRECTDRAWSURFACE lpDDDestSurface, 
 LPRECT lpDestRect, 
 DWORD dwFlags, 
 LPDDOVERLAYFX lpDDOverlayFx
);

/* IDirectDrawSurface::UpdateOverlayZOrder  [function; ce-only; CE 6.0..699; ddraw.lib] */
HRESULT UpdateOverlayZOrder(
 DWORD dwFlags, 
 LPDIRECTDRAWSURFACE lpDDSReference
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef union _DDALPHABLTFX { DDARGB ddargbScaleFactors; DWORD dwFillValue;} DDALPHABLTFX, FAR * LPDDALPHABLTFX;
typedef union _DDALPHABLTFX { DDARGB ddargbScaleFactors;

/* struct */
typedef struct _DDARGB{
  BYTE blue;
  BYTE green;
  BYTE red;
  BYTE alpha;
} DDARGB, *LPDDARGB;
typedef struct _DDBLTFX{ DWORD dwSize; DWORD dwDDFX; DWORD dwROP; DWORD dwDDROP; DWORD dwRotationAngle; DWORD dwZBufferOpCode; DWORD dwZBufferLow; DWORD dwZBufferHigh; DWORD dwZBufferBaseDest; DWORD dwZDestConstBitDepth; union { DWORD dwZDestConst; LPDIRECTDRAWSURFACE lpDDSZBufferDest; } DUMMYUNIONNAMEN(1); DWORD dwZSrcConstBitDepth; union { DWORD dwZSrcConst; LPDIRECTDRAWSURFACE lpDDSZBufferSrc; } DUMMYUNIONNAMEN(2); DWORD dwAlphaEdgeBlendBitDepth; DWORD dwAlphaEdgeBlend; DWORD dwReserved; DWORD dwAlphaDestConstBitDepth; union { DWORD dwAlphaDestConst; LPDIRECTDRAWSURFACE lpDDSAlphaDest; } DUMMYUNIONNAMEN(3); DWORD dwAlphaSrcConstBitDepth; union { DWORD dwAlphaSrcConst; LPDIRECTDRAWSURFACE lpDDSAlphaSrc; } DUMMYUNIONNAMEN(4); union { DWORD dwFillColor; DWORD dwFillDepth; DWORD dwFillPixel; LPDIRECTDRAWSURFACE lpDDSPattern; } DUMMYUNIONNAMEN(5); DDCOLORKEY ddckDestColorkey; DDCOLORKEY ddckSrcColorkey; } DDBLTFX,FAR* LPDDBLTFX;
typedef struct _DDCAPS { DWORD dwSize; DWORD dwCaps; DWORD dwCaps2; DWORD dwCKeyCaps; DWORD dwFXCaps; DWORD dwFXAlphaCaps; DWORD dwPalCaps; DWORD dwSVCaps; DWORD dwAlphaBltConstBitDepths; DWORD dwAlphaBltPixelBitDepths; DWORD dwAlphaBltSurfaceBitDepths; DWORD dwAlphaOverlayConstBitDepths; DWORD dwAlphaOverlayPixelBitDepths; DWORD dwAlphaOverlaySurfaceBitDepths; DWORD dwZBufferBitDepths; DWORD dwVidMemTotal; DWORD dwVidMemFree; DWORD dwMaxVisibleOverlays; DWORD dwCurrVisibleOverlays; DWORD dwNumFourCCCodes; DWORD dwAlignBoundarySrc; DWORD dwAlignSizeSrc; DWORD dwAlignBoundaryDest; DWORD dwAlignSizeDest; DWORD dwAlignStrideAlign; DWORD dwRops[DD_ROP_SPACE]; DWORD dwReservedCaps; DWORD dwMinOverlayStretch; DWORD dwMaxOverlayStretch; DWORD dwMinLiveVideoStretch; DWORD dwMaxLiveVideoStretch; DWORD dwMinHwCodecStretch; DWORD dwMaxHwCodecStretch; DWORD dwReserved1; DWORD dwReserved2; DWORD dwReserved3; DWORD dwSVBCaps; DWORD dwSVBCKeyCaps; DWORD dwSVBFXCaps; DWORD dwSVBRops[DD_ROP_SPACE]; DWORD dwVSBCaps; DWORD dwVSBCKeyCaps; DWORD dwVSBFXCaps; DWORD dwVSBRops[DD_ROP_SPACE]; DWORD dwSSBCaps; DWORD dwSSBCKeyCaps; DWORD dwSSBCFXCaps; DWORD dwSSBRops[DD_ROP_SPACE]; DWORD dwMaxVideoPorts; DWORD dwCurrVideoPorts; DWORD dwSVBCaps2; DWORD dwNLVBCaps; DWORD dwNLVBCaps2; DWORD dwNLVBCKeyCaps; DWORD dwNLVBFXCaps; DWORD dwNLVBRops[DD_ROP_SPACE]; DDSCAPS2 ddsCaps;} DDCAPS,FAR *LPDDCAPS;
typedef struct _DDCOLORCONTROL { DWORD dwSize; DWORD dwFlags; LONG lBrightness; LONG lContrast; LONG lHue; LONG lSaturation; LONG lSharpness; LONG lGamma; LONG lColorEnable; DWORD dwReserved1;} DDCOLORCONTROL, FAR* LPDDCOLORCONTROL;
typedef struct _DDCOLORKEY{ DWORD dwColorSpaceLowValue; DWORD dwColorSpaceHighValue; } DDCOLORKEY,FAR *LPDDCOLORKEY;
typedef struct _DDDEVICEIDENTIFIER {
  wchar_t szDriver[MAX_DDDEVICEID_STRING];
  wchar_t szDescription[MAX_DDDEVICEID_STRING];
  LARGE_INTEGER liDriverVersion;
  DWORD dwVendorId;
  DWORD dwDeviceId;
  DWORD dwSubSysId;
  DWORD dwRevision;
  GUID guidDeviceIdentifier;
} DDDEVICEIDENTIFIER, *LPDDDEVICEIDENTIFIER;
typedef struct _DDGAMMARAMP
{
  WORD red[256];
  WORD green[256];
  WORD blue[256];
}DDGAMMARAMP, *LPDDGAMMARAMP;
typedef struct _DDOVERLAYFX{ DWORD dwSize; DWORD dwAlphaEdgeBlendBitDepth; DWORD dwAlphaEdgeBlend; DWORD dwReserved; DWORD dwAlphaDestConstBitDepth; union { DWORD dwAlphaDestConst; LPDIRECTDRAWSURFACE lpDDSAlphaDest; } DUMMYUNIONNAMEN(1); DWORD dwAlphaSrcConstBitDepth; union { DWORD dwAlphaSrcConst; LPDIRECTDRAWSURFACE lpDDSAlphaSrc; } DUMMYUNIONNAMEN(2); DDCOLORKEY dckDestColorkey; DDCOLORKEY dckSrcColorkey; DWORD dwDDFX; DWORD dwFlags; } DDOVERLAYFX,FAR *LPDDOVERLAYFX;
typedef struct _DDPIXELFORMAT {DWORDdwSize;DWORDdwFlags;DWORDdwFourCC;union{DWORDdwRGBBitCount;DWORDdwYUVBitCount;DWORDdwZBufferBitDepth;DWORDdwAlphaBitDepth;DWORDdwLuminanceBitCount;DWORDdwBumpBitCount;DWORDdwPrivateFormatBitCount;};union{DWORDdwRBitMask;DWORDdwYBitMask;DWORDdwStencilBitDepth;DWORDdwLuminanceBitMask;DWORDdwBumpDuBitMask;DWORDdwOperations;};union{DWORDdwGBitMask;DWORDdwUBitMask;DWORDdwZBitMask;DWORDdwBumpDvBitMask;struct{WORDwFlipMSTypes;WORDwBltMSTypes;}MultiSampleCaps;};union{DWORDdwBBitMask;DWORDdwVBitMask;DWORDdwStencilBitMask;DWORDdwBumpLuminanceBitMask;};union{DWORDdwRGBAlphaBitMask;DWORDdwYUVAlphaBitMask;DWORDdwLuminanceAlphaBitMask;DWORDdwRGBZBitMask;DWORDdwYUVZBitMask;};} DDPIXELFORMAT, FAR* LPDDPIXELFORMAT;
typedef struct _DDSCAPS{ DWORD dwCaps; } DDSCAPS, FAR* LPDDSCAPS;
typedef struct _DDSCAPS2 {DWORD dwCaps; DWORD dwCaps2;DWORD dwCaps3;DWORD dwCaps4;} DDSCAPS2, FAR* LPDDSCAPS2;
typedef struct _DDSCAPSEX { DWORD dwCaps2; DWORD dwCaps3; DWORD dwCaps4;} DDSCAPSEX, FAR* LPDDSCAPSEX;
typedef struct _DDSURFACEDESC { DWORD dwSize; DWORD dwFlags; DWORD dwHeight; DWORD dwWidth; union { LONG lPitch; DWORD dwLinearSize; }; DWORD dwBackBufferCount; union { DWORD dwMipMapCount; DWORD dwZBufferBitDepth; DWORD dwRefreshRate; }; DWORD dwAlphaBitDepth; DWORD dwReserved; LPVOID lpSurface; DDCOLORKEY ddckCKDestOverlay; DDCOLORKEY ddckCKDestBlt; DDCOLORKEY ddckCKSrcOverlay; DDCOLORKEY ddckCKSrcBlt; DDPIXELFORMAT ddpfPixelFormat; DDSCAPS ddsCaps;} DDSURFACEDESC, FAR *LPDDSURFACEDESC;
typedef struct _DDSURFACEDESC2 { DWORD dwSize; DWORD dwFlags; DWORD dwHeight; DWORD dwWidth; union { LONG lPitch; DWORD dwLinearSize; } DUMMYUNIONNAMEN(1); DWORD dwBackBufferCount; union { DWORD dwMipMapCount; DWORD dwRefreshRate; } DUMMYUNIONNAMEN(2); DWORD dwAlphaBitDepth; DWORD dwReserved; LPVOID lpSurface; DDCOLORKEY ddckCKDestOverlay; DDCOLORKEY ddckCKDestBlt; DDCOLORKEY ddckCKSrcOverlay; DDCOLORKEY ddckCKSrcBlt; DDPIXELFORMAT ddpfPixelFormat; DDSCAPS2 ddsCaps; DWORD dwTextureStage;} DDSURFACEDESC2, FAR* LPDDSURFACEDESC2;
typedef struct IDirectDraw FAR *LPDIRECTDRAW; typedef struct IDirectDraw2 FAR *LPDIRECTDRAW2; typedef struct IDirectDraw4 FAR *LPDIRECTDRAW4;
typedef struct IDirectDrawClipper FAR *LPDIRECTDRAWCLIPPER;
typedef struct IDirectDrawColorControl FAR *LPDIRECTDRAWCOLORCONTROL;
typedef struct IDirectDrawPalette FAR *LPDIRECTDRAWPALETTE;
typedef struct IDirectDrawSurface FAR *LPDIRECTDRAWSURFACE; typedef struct IDirectDrawSurface2 FAR *LPDIRECTDRAWSURFACE2; typedef struct IDirectDrawSurface3 FAR *LPDIRECTDRAWSURFACE3; typedef struct IDirectDrawSurface4 FAR *LPDIRECTDRAWSURFACE4; typedef struct IDirectDrawSurface5 FAR *LPDIRECTDRAWSURFACE5;
typedef struct _DDPIXELFORMAT { DWORD dwSize; DWORD dwFlags; DWORD dwFourCC; union { DWORD dwRGBBitCount; DWORD dwYUVBitCount; DWORD dwZBufferBitDepth; DWORD dwAlphaBitDepth; DWORD dwLuminanceBitCount; DWORD dwBumpBitCount; DWORD dwPrivateFormatBitCount; };
typedef struct _DDSURFACEDESC { DWORD dwSize; DWORD dwFlags; DWORD dwHeight; DWORD dwWidth; union { LONG lPitch; DWORD dwLinearSize; };

/* function */
HRESULT AddOverlayDirtyRect( LPRECT lpRect);
HRESULT AlphaBlt( LPRECT lpDestRect, LPDIRECTDRAWSURFACE4 lpDDSrcSurface, LPRECT lpSrcRect, DWORD dwFlags, LPDDALPHABLTFX lpDDAlphaBltFX);
HRESULT BltFast( DWORD dwX, DWORD dwY, LPDIRECTDRAWSURFACE4 lpDDSrcSurface, LPRECT lpSrcRect, DWORD dwTrans);
HRESULT ChangeUniquenessValue();
HRESULT Compact();
HRESULT CreateClipper( DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter );
HRESULT DeleteAttachedSurface( DWORD dwFlags, LPDIRECTDRAWSURFACE4 lpDDSAttachedSurface);
HRESULT DuplicateSurface( LPDIRECTDRAWSURFACE4 lpDDSurface, LPLPDIRECTDRAWSURFACE4 FAR *lplpDupDDSurface);
HRESULT EnumAttachedSurfaces( LPVOID lpContext, LPDDENUMSURFACESCALLBACK2 lpEnumSurfacesCallback);
HRESULT EnumDisplayModes( DWORD dwFlags, LPDDSURFACEDESC2 lpDDSurfaceDesc2, LPVOID lpContext, LPDDENUMMODESCALLBACK2 lpEnumModesCallback);
HRESULT EnumOverlayZOrders( DWORD dwFlags, LPVOID lpContext, LPDDENUMSURFACESCALLBACK2 lpfnCallback);
HRESULT EnumSurfaces( DWORD dwFlags, LPDDSURFACEDESC2 lpDDSD2, LPVOID lpContext, LPDDENUMSURFACESCALLBACK2 lpEnumSurfacesCallback);
HRESULT FlipToGDISurface();
HRESULT FreePrivateData( REFGUID guidTag,);
HRESULT GetAttachedSurface( LPDDSCAPS2 lpDDSCaps, LPDIRECTDRAWSURFACE4 FAR *lplpDDAttachedSurface);
HRESULT GetAvailableVidMem( LPDDSCAPS2 lpDDSCaps2, LPDWORD lpdwTotal, LPDWORD lpdwFree);
HRESULT GetClipList( LPRECT lpRect, LPRGNDATA lpClipList, LPDWORD lpdwSize);
HRESULT GetClipper( LPDIRECTDRAWCLIPPER FAR *lplpDDClipper);
HRESULT GetColorControls( LPDDCOLORCONTROL lpColorControl);
HRESULT GetColorKey( DWORD dwFlags, LPDDCOLORKEY lpDDColorKey);
HRESULT GetDDInterface( LPVOID FAR *lplpDD);
HRESULT GetDeviceIdentifier( LPDDDEVICEIDENTIFIER lpdddi, DWORD dwFlags);
HRESULT GetDisplayMode( LPDDSURFACEDESC2 lpDDSurfaceDesc2);
HRESULT GetEntries( DWORD dwFlags, DWORD dwBase, DWORD dwNumEntries, LPPALETTEENTRY lpEntries);
HRESULT GetFourCCCodes( LPDWORD lpNumCodes, LPDWORD lpCodes);
HRESULT GetGDISurface( LPDIRECTDRAWSURFACE4 FAR *lplpGDIDDSSurface4);
HRESULT GetHWnd( HWND FAR *lphWnd);
HRESULT GetMonitorFrequency( LPDWORD lpdwFrequency);
HRESULT GetOverlayPosition( LPLONG lplX, LPLONG lplY);
HRESULT GetPalette( LPDIRECTDRAWPALETTE FAR *lplpDDPalette);
HRESULT GetPrivateData( REFGUID guidTag, LPVOID lpBuffer, LPDWORD lpcbBufferSize);
HRESULT GetScanLine( LPDWORD lpdwScanLine);
HRESULT GetSurfaceDesc( LPDDSURFACEDESC2 lpDDSurfaceDesc);
HRESULT GetSurfaceFromDC( HDC hdc, LPDIRECTDRAWSURFACE4 *lpDDS4);
HRESULT GetUniquenessValue( LPDWORD lpValue,);
HRESULT GetVerticalBlankStatus( LPBOOL lpbIsInVB);
HRESULT IsClipListChanged( BOOL FAR *lpbChanged);
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
HRESULT SetPrivateData( REFGUID guidTag, LPVOID lpData, DWORD cbSize, DWORD dwFlags);
HRESULT SetSurfaceDesc( LPDDSURFACEDESC2 lpddsd2, DWORD dwFlags);
HRESULT TestCooperativeLevel(void);
HRESULT UpdateOverlayZOrder( DWORD dwFlags, LPDIRECTDRAWSURFACE4 lpDDSReference);

#endif /* _DDRAW_ */
