/* vpconfig.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _VPCONFIG_
#define _VPCONFIG_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetConnectInfo( LPDWORD pdwNumConnectInfo, LPDDVIDEOPORTCONNECT pddVPConnectInfo);
HRESULT GetMaxPixelRate( LPAMVPSIZE pamvpSize, LPDWORD pdwMaxPixelsPerSecond);
HRESULT GetOverlaySurface( LPDIRECTDRAWSURFACE *ppddOverlaySurface);
HRESULT GetVPDataInfo( LPAMVPDATAINFO pamvpDataInfo);
HRESULT GetVideoFormats( LPDWORD pdwNumFormats, LPDDPIXELFORMAT pddPixelFormats);
HRESULT InformVPInputFormats( DWORD dwNumFormats, LPDDPIXELFORMAT pDDPixelFormats);
HRESULT IsVPDecimationAllowed( AMVP_CONTEXT amvpContext, LPBOOL pbIsDecimationAllowed);
HRESULT SetConnectInfo( DWORD dwChosenEntry);
HRESULT SetDDSurfaceKernelHandles(DWORDcHandles, DWORD*rgDDKernelHandles);
HRESULT SetDirectDrawKernelHandle( DWORD dwDDKernelHandle);
HRESULT SetInvertPolarity(void);
HRESULT SetScalingFactors( LPAMVPSIZE pamvpSize);
HRESULT SetSurfaceParameters(  DWORD dwPitch,  DWORD dwXOrigin,  DWORD dwYOrigin) PURE;
HRESULT SetVideoFormat( DWORD dwChosenEntry);
HRESULT SetVideoPortID ( DWORD dwVideoPortID);

#endif /* _VPCONFIG_ */
