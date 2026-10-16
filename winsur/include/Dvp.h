/* Dvp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 26 declarations, 0 outlines, 0 base types, 0 extra macros, 19 extra decls
 */
#ifndef _DVP_
#define _DVP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 600)) /* CE 3.0..599 */

/* DDVIDEOPORTBANDWIDTH  [struct; shared; CE 3.0..599] */
typedef struct _DDVIDEOPORTBANDWIDTH { 
 DWORD dwSize; 
 DWORD dwCaps; 
 DWORD dwOverlay; 
 DWORD dwColorkey; 
 DWORD dwYInterpolate; 
 DWORD dwYInterpAndColorkey; 
 DWORD dwReserved1; 
 DWORD dwReserved2; 
} DDVIDEOPORTBANDWIDTH, *LPDDVIDEOPORTBANDWIDTH;

/* DDVIDEOPORTCAPS  [struct; shared; CE 3.0..599] */
typedef struct _DDVIDEOPORTCAPS { 
 DWORD dwSize; 
 DWORD dwFlags; 
 DWORD dwMaxWidth; 
 DWORD dwMaxVBIWidth; 
 DWORD dwMaxHeight; 
 DWORD dwVideoPortID; 
 DWORD dwCaps; 
 DWORD dwFX; 
 DWORD dwNumAutoFlipSurfaces; 
 DWORD dwAlignVideoPortBoundary; 
 DWORD dwAlignVideoPortPrescaleWidth; 
 DWORD dwAlignVideoPortCropBoundary; 
 DWORD dwAlignVideoPortCropWidth; 
 DWORD dwPreshrinkXStep; 
 DWORD dwPreshrinkYStep; 
 DWORD dwNumVBIAutoFlipSurfaces; 
 DWORD dwNumPreferredAutoflip; 
 WORD wNumFilterTapsX; 
 WORD wNumFilterTapsY; 
} DDVIDEOPORTCAPS, *LPDDVIDEOPORTCAPS;

/* DDVIDEOPORTCONNECT  [struct; ce-only; CE 3.0..599] */
typedef struct _DDVIDEOPORTCONNECT{ 
 DWORD dwSize; 
 DWORD dwPortWidth; 
 GUID guidTypeID; 
 DWORD dwFlags; 
 ULONG_PTR dwReserved1; 
} DDVIDEOPORTCONNECT, *LPDDVIDEOPORTCONNECT;

/* DDVIDEOPORTDESC  [struct; shared; CE 3.0..599] */
typedef struct _DDVIDEOPORTDESC { 
 DWORD dwSize; 
 DWORD dwFieldWidth; 
 DWORD dwVBIWidth; 
 DWORD dwFieldHeight; 
 DWORD dwMicrosecondsPerField; 
 DWORD dwMaxPixelsPerSecond; 
 DWORD dwVideoPortID; 
 DWORD dwReserved1; 
 DDVIDEOPORTCONNECT VideoPortType; 
 ULONG_PTR dwReserved2; 
 ULONG_PTR dwReserved3; 
 } DDVIDEOPORTDESC, *LPDDVIDEOPORTDESC;

/* DDVIDEOPORTINFO  [struct; shared; CE 3.0..599] */
typedef struct _DDVIDEOPORTINFO{ 
 DWORD dwSize; 
 DWORD dwOriginX; 
 DWORD dwOriginY; 
 DWORD dwVPFlags; 
 RECT rCrop; 
 DWORD dwPrescaleWidth; 
 DWORD dwPrescaleHeight; 
 LPDDPIXELFORMAT lpddpfInputFormat; 
 LPDDPIXELFORMAT lpddpfVBIInputFormat; 
 LPDDPIXELFORMAT lpddpfVBIOutputFormat; 
 DWORD dwVBIHeight; 
 ULONG_PTR dwReserved1; 
 ULONG_PTR dwReserved2; 
} DDVIDEOPORTINFO, *LPDDVIDEOPORTINFO;

/* DDVIDEOPORTSTATUS  [struct; ce-only; CE 3.0..599] */
typedef struct _DDVIDEOPORTSTATUS { 
 DWORD dwSize; 
 BOOL bInUse; 
 DWORD dwFlags; 
 DWORD dwReserved1; 
 DDVIDEOPORTCONNECT VideoPortType; 
 ULONG_PTR dwReserved2; 
 ULONG_PTR dwReserved3; 
} DDVIDEOPORTSTATUS, *LPDDVIDEOPORTSTATUS;

/* IDDVideoPortContainer  [struct; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDDVideoPortContainer FAR *LPDDVIDEOPORTCONTAINER;

/* IDirectDrawVideoPort  [struct; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
typedef struct IDirectDrawVideoPort FAR *LPDIRECTDRAWVIDEOPORT;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 600)) /* CE 3.0..599 */

/* IDDVideoPortContainer::CreateVideoPort  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT CreateVideoPort( 
 DWORD dwFlags, 
 LPDDVIDEOPORTDESC lpDDVideoPortDesc, 
 LPDIRECTDRAWVIDEOPORT FAR* lplpDDVideoPort, 
 IUnknown FAR* pUnkOuter 
);

/* IDDVideoPortContainer::EnumVideoPorts  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT EnumVideoPorts( 
 DWORD dwFlags, 
 LPDDVIDEOPORTCAPS lpDDVideoPortCaps, 
 LPVOID lpContext, 
 LPDDENUMVIDEOCALLBACK lpEnumVideoCallback 
);

/* IDDVideoPortContainer::GetVideoPortConnectInfo  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetVideoPortConnectInfo( 
 DWORD dwPortId, 
 LPDWORD lpNumEntries, 
 LPDDVIDEOPORTCONNECT lpConnectInfo 
);

/* IDDVideoPortContainer::QueryVideoPortStatus  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT QueryVideoPortStatus( 
 DWORD dwPortId, 
 LPDDVIDEOPORTSTATUS lpVPStatus 
);

/* IDirectDrawVideoPort::Flip  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT Flip( 
 LPDIRECTDRAWSURFACE lpDDSurface, 
 DWORD dwFlags 
);

/* IDirectDrawVideoPort::GetBandwidthInfo  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetBandwidthInfo( 
 LPDDPIXELFORMAT lpddpfFormat, 
 DWORD dwWidth, 
 DWORD dwHeight, 
 DWORD dwFlags, 
 LPDDVIDEOPORTBANDWIDTH lpBandwidth 
);

/* IDirectDrawVideoPort::GetColorControls  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetColorControls( 
 LPDDCOLORCONTROL lpColorControl 
);

/* IDirectDrawVideoPort::GetFieldPolarity  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetFieldPolarity( 
 LPBOOL lpbFieldPolarity 
);

/* IDirectDrawVideoPort::GetInputFormats  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetInputFormats( 
 LPDWORD lpNumFormats, 
 LPDDPIXELFORMAT lpFormats, 
 DWORD dwFlags 
);

/* IDirectDrawVideoPort::GetOutputFormats  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetOutputFormats( 
 LPDDPIXELFORMAT lpInputFormat, 
 LPDWORD lpNumFormats, 
 LPDDPIXELFORMAT lpFormats, 
 DWORD dwFlags 
);

/* IDirectDrawVideoPort::GetVideoLine  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetVideoLine( 
 LPDWORD lpdwLine 
);

/* IDirectDrawVideoPort::GetVideoSignalStatus  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT GetVideoSignalStatus( 
 LPDWORD lpdwStatus 
);

/* IDirectDrawVideoPort::SetColorControls  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetColorControls( 
 LPDDCOLORCONTROL lpColorControl 
);

/* IDirectDrawVideoPort::SetTargetSurface  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT SetTargetSurface( 
 LPDIRECTDRAWSURFACE lpDDSurface, 
 DWORD dwFlags 
);

/* IDirectDrawVideoPort::StartVideo  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT StartVideo( 
 LPDDVIDEOPORTINFO lpVideoInfo 
);

/* IDirectDrawVideoPort::StopVideo  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT StopVideo();

/* IDirectDrawVideoPort::UpdateVideo  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT UpdateVideo( 
 LPDDVIDEOPORTINFO lpVideoInfo 
);

/* IDirectDrawVideoPort::WaitForSync  [function; ce-only; CE 3.0..599; Ddraw.lib, ddraw.lib] */
HRESULT WaitForSync( 
 DWORD dwFlags, 
 DWORD dwLine, 
 DWORD dwTimeout 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DDVIDEOPORTBANDWIDTH { DWORD dwSize; DWORD dwCaps; DWORD dwOverlay; DWORD dwColorkey; DWORD dwYInterpolate; DWORD dwYInterpAndColorkey; DWORD dwReserved1; DWORD dwReserved2;} DDVIDEOPORTBANDWIDTH, *LPDDVIDEOPORTBANDWIDTH;
typedef struct _DDVIDEOPORTCAPS { DWORD dwSize; DWORD dwFlags; DWORD dwMaxWidth; DWORD dwMaxVBIWidth; DWORD dwMaxHeight; DWORD dwVideoPortID; DWORD dwCaps; DWORD dwFX; DWORD dwNumAutoFlipSurfaces; DWORD dwAlignVideoPortBoundary; DWORD dwAlignVideoPortPrescaleWidth; DWORD dwAlignVideoPortCropBoundary; DWORD dwAlignVideoPortCropWidth; DWORD dwPreshrinkXStep; DWORD dwPreshrinkYStep; DWORD dwNumVBIAutoFlipSurfaces; DWORD dwNumPreferredAutoflip; WORD wNumFilterTapsX; WORD wNumFilterTapsY;} DDVIDEOPORTCAPS, *LPDDVIDEOPORTCAPS;
typedef struct _DDVIDEOPORTCONNECT{ DWORD dwSize; DWORD dwPortWidth; GUID guidTypeID; DWORD dwFlags; ULONG_PTR dwReserved1; } DDVIDEOPORTCONNECT, *LPDDVIDEOPORTCONNECT;
typedef struct IDDVideoPortContainer FAR *LPDDVIDEOPORTCONTAINER;
typedef struct _DDVIDEOPORTDESC { DWORD dwSize; DWORD dwFieldWidth; DWORD dwVBIWidth; DWORD dwFieldHeight; DWORD dwMicrosecondsPerField; DWORD dwMaxPixelsPerSecond; DWORD dwVideoPortID; DWORD dwReserved1; DDVIDEOPORTCONNECT VideoPortType; ULONG_PTR dwReserved2; ULONG_PTR dwReserved3; } DDVIDEOPORTDESC, *LPDDVIDEOPORTDESC;
typedef struct _DDVIDEOPORTINFO{ DWORD dwSize; DWORD dwOriginX; DWORD dwOriginY; DWORD dwVPFlags; RECT rCrop; DWORD dwPrescaleWidth; DWORD dwPrescaleHeight; LPDDPIXELFORMAT lpddpfInputFormat; LPDDPIXELFORMAT lpddpfVBIInputFormat; LPDDPIXELFORMAT lpddpfVBIOutputFormat; DWORD dwVBIHeight; ULONG_PTR dwReserved1; ULONG_PTR dwReserved2;} DDVIDEOPORTINFO, *LPDDVIDEOPORTINFO;
typedef struct _DDVIDEOPORTSTATUS { DWORD dwSize; BOOL bInUse; DWORD dwFlags; DWORD dwReserved1; DDVIDEOPORTCONNECT VideoPortType; ULONG_PTR dwReserved2; ULONG_PTR dwReserved3; } DDVIDEOPORTSTATUS, *LPDDVIDEOPORTSTATUS;
typedef struct IDirectDrawVideoPort FAR *LPDIRECTDRAWVIDEOPORT;

/* function */
HRESULT EnumVideoPorts( DWORD dwFlags, LPDDVIDEOPORTCAPS lpDDVideoPortCaps, LPVOID lpContext, LPDDENUMVIDEOCALLBACK lpEnumVideoCallback);
HRESULT GetBandwidthInfo( LPDDPIXELFORMAT lpddpfFormat, DWORD dwWidth, DWORD dwHeight, DWORD dwFlags, LPDDVIDEOPORTBANDWIDTH lpBandwidth);
HRESULT GetFieldPolarity( LPBOOL lpbFieldPolarity);
HRESULT GetInputFormats( LPDWORD lpNumFormats, LPDDPIXELFORMAT lpFormats, DWORD dwFlags);
HRESULT GetOutputFormats( LPDDPIXELFORMAT lpInputFormat, LPDWORD lpNumFormats, LPDDPIXELFORMAT lpFormats, DWORD dwFlags);
HRESULT GetVideoLine( LPDWORD lpdwLine);
HRESULT QueryVideoPortStatus( DWORD dwPortId, LPDDVIDEOPORTSTATUS lpVPStatus);
HRESULT SetTargetSurface( LPDIRECTDRAWSURFACE lpDDSurface, DWORD dwFlags);
HRESULT StartVideo( LPDDVIDEOPORTINFO lpVideoInfo);
HRESULT StopVideo();
HRESULT UpdateVideo( LPDDVIDEOPORTINFO lpVideoInfo);

#endif /* _DVP_ */
