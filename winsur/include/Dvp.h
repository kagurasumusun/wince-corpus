/* Dvp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _DVP_
#define _DVP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DDVIDEOPORTBANDWIDTH  [struct; shared] */
#ifndef __WINCE_DEFINED__DDVIDEOPORTBANDWIDTH
#define __WINCE_DEFINED__DDVIDEOPORTBANDWIDTH
#ifndef __WINCE_DEFINED_DDVIDEOPORTBANDWIDTH
#define __WINCE_DEFINED_DDVIDEOPORTBANDWIDTH
#ifndef __WINCE_DEFINED_LPDDVIDEOPORTBANDWIDTH
#define __WINCE_DEFINED_LPDDVIDEOPORTBANDWIDTH
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
#endif /* __WINCE_DEFINED_LPDDVIDEOPORTBANDWIDTH */
#endif /* __WINCE_DEFINED_DDVIDEOPORTBANDWIDTH */
#endif /* __WINCE_DEFINED__DDVIDEOPORTBANDWIDTH */

/* DDVIDEOPORTCAPS  [struct; shared] */
#ifndef __WINCE_DEFINED__DDVIDEOPORTCAPS
#define __WINCE_DEFINED__DDVIDEOPORTCAPS
#ifndef __WINCE_DEFINED_DDVIDEOPORTCAPS
#define __WINCE_DEFINED_DDVIDEOPORTCAPS
#ifndef __WINCE_DEFINED_LPDDVIDEOPORTCAPS
#define __WINCE_DEFINED_LPDDVIDEOPORTCAPS
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
#endif /* __WINCE_DEFINED_LPDDVIDEOPORTCAPS */
#endif /* __WINCE_DEFINED_DDVIDEOPORTCAPS */
#endif /* __WINCE_DEFINED__DDVIDEOPORTCAPS */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetFieldPolarity(LPBOOL lpbFieldPolarity);
HRESULT GetVideoLine(LPDWORD lpdwLine);
HRESULT QueryVideoPortStatus(DWORD dwPortId, LPDDVIDEOPORTSTATUS lpVPStatus);
HRESULT StartVideo(LPDDVIDEOPORTINFO lpVideoInfo);
HRESULT StopVideo();
HRESULT UpdateVideo(LPDDVIDEOPORTINFO lpVideoInfo);

#endif /* _DVP_ */
