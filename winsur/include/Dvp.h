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
