/* vpconfig.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _VPCONFIG_
#define _VPCONFIG_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IVPBaseConfig::GetConnectInfo  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetConnectInfo(
 LPDWORD pdwNumConnectInfo,
 LPDDVIDEOPORTCONNECT pddVPConnectInfo
);

/* IVPBaseConfig::GetMaxPixelRate  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetMaxPixelRate(
 LPAMVPSIZE pamvpSize,
 LPDWORD pdwMaxPixelsPerSecond
);

/* IVPBaseConfig::GetOverlaySurface  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetOverlaySurface(
 LPDIRECTDRAWSURFACE* ppddOverlaySurface
);

/* IVPBaseConfig::GetVideoFormats  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetVideoFormats(
 LPDWORD pdwNumFormats,
 LPDDPIXELFORMAT pddPixelFormats
);

/* IVPBaseConfig::GetVPDataInfo  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetVPDataInfo(
 LPAMVPDATAINFO pamvpDataInfo
);

/* IVPBaseConfig::InformVPInputFormats  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT InformVPInputFormats(
 DWORD dwNumFormats,
 LPDDPIXELFORMAT pDDPixelFormats
);

/* IVPBaseConfig::SetConnectInfo  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetConnectInfo(
 DWORD dwChosenEntry
);

/* IVPBaseConfig::SetDirectDrawKernelHandle  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetDirectDrawKernelHandle(
 DWORD dwDDKernelHandle
);

/* IVPBaseConfig::SetInvertPolarity  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetInvertPolarity(void);

/* IVPBaseConfig::SetSurfaceParameters  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetSurfaceParameters(
 DWORD dwPitch,
 DWORD dwXOrigin,
 DWORD dwYOrigin
) PURE;

/* IVPBaseConfig::SetVideoFormat  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetVideoFormat(
 DWORD dwChosenEntry
);

/* IVPBaseConfig::SetVideoPortID  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetVideoPortID(
 DWORD dwVideoPortID
);

/* IVPConfig::IsVPDecimationAllowed  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsVPDecimationAllowed(
 LPBOOL pbIsDecimationAllowed
);

/* IVPConfig::SetScalingFactors  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetScalingFactors(
 LPAMVPSIZE pamvpSize
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IVPBaseConfig::SetDDSurfaceKernelHandles  [function; shared; CE 5.0..699; entity-headers] */
HRESULT SetDDSurfaceKernelHandles(
 DWORD cHandles,
 DWORD* rgDDKernelHandles
);
#endif /* _WIN32_WCE */

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
