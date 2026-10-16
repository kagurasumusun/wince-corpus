/* Ddraw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 29 declarations, 2 outlines, 0 base types, 0 extra macros, 77 extra decls
 */
#ifndef _DDRAW_
#define _DDRAW_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDCAPS  [struct; ce-only] */

/* DDDEVICEIDENTIFIER  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

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
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef union _DDALPHABLTFX { DDARGB ddargbScaleFactors; DWORD dwFillValue;} DDALPHABLTFX, FAR * LPDDALPHABLTFX;

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

/* function */
HRESULT AddOverlayDirtyRect( LPRECT lpRect);
HRESULT AlphaBlt( LPRECT lpDestRect, LPDIRECTDRAWSURFACE4 lpDDSrcSurface, LPRECT lpSrcRect, DWORD dwFlags, LPDDALPHABLTFX lpDDAlphaBltFX);
HRESULT BltFast( DWORD dwX, DWORD dwY, LPDIRECTDRAWSURFACE4 lpDDSrcSurface, LPRECT lpSrcRect, DWORD dwTrans);
HRESULT ChangeUniquenessValue();
HRESULT Compact();
HRESULT CreateClipper( DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter );
HRESULT DeleteAttachedSurface( DWORD dwFlags, LPDIRECTDRAWSURFACE4 lpDDSAttachedSurface);
VOID WINAPI DirectDrawCreate( GUID FAR *lpGUID, LPDIRECTDRAW FAR *lplpDD, IUnknown FAR *pUnkOuter);
VOID WINAPI DirectDrawCreateClipper( DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter);
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
