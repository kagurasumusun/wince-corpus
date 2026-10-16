/* Platform.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 33 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PLATFORM_
#define _PLATFORM_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213)) /* CE 1.0..199, 2.11..2.12 */

/* Load_PegGetPlatformName  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL Load_PegGetPlatformName(LPTSTR pszPlatformName);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMPlatform::AddCPU  [function; ce-only; CE 4.2..599] */
HRESULT AddCPU(BSTR bstrCPUIdOrName,IPMCPU** ppiCPU);

/* IPMPlatform::AddDevice  [function; ce-only; CE 4.2..599] */
HRESULT AddDevice( 
 BSTR bstrDeviceName, 
 BSTR bstrDeviceId, 
 IPMRemoteDevice** ppiDevice 
);

/* IPMPlatform::AddOS  [function; ce-only; CE 4.2..599] */
HRESULT AddOS(BSTR bstrOSIdOrName,IPMOS** ppiOS);

/* IPMPlatform::AddPackage  [function; ce-only; CE 4.2..599] */
HRESULT AddPackage( 
 BSTR bstrPackageName, 
 BSTR bstrPackageId, 
 IPMPackage** ppiPackage 
);

/* IPMPlatform::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMPlatform::AddStartupServer  [function; ce-only; CE 4.2..599] */
HRESULT AddStartupServer( 
 BSTR bstrStartupServerId, 
 VARIANT_BOOL bDefault, 
 IPMStartupServerInfo** ppiStartupServer 
);

/* IPMPlatform::AddTransport  [function; ce-only; CE 4.2..599] */
HRESULT AddTransport( 
 BSTR bstrTransportId, 
 VARIANT_BOOL bDefault, 
 IPMTransportInfo** ppiTransport 
);

/* IPMPlatform::DeleteCPU  [function; ce-only; CE 4.2..599] */
HRESULT DeleteCPU(BSTR bstrCPUIdOrName);

/* IPMPlatform::DeleteDevice  [function; ce-only; CE 4.2..599] */
HRESULT DeleteDevice( 
 BSTR bstrDeviceIdOrName 
);

/* IPMPlatform::DeleteOS  [function; ce-only; CE 4.2..599] */
HRESULT DeleteOS(BSTR bstrOSIdOrName);

/* IPMPlatform::DeletePackage  [function; ce-only; CE 4.2..599] */
HRESULT DeletePackage(BSTR bstrPackageIdOrName);

/* IPMPlatform::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMPlatform::DeleteStartupServer  [function; ce-only; CE 4.2..599] */
HRESULT DeleteStartupServer(BSTR bstrStartupServerIdOrName);

/* IPMPlatform::DeleteTransport  [function; ce-only; CE 4.2..599] */
HRESULT DeleteTransport(BSTR bstrTransportIdOrName);

/* IPMPlatform::EnumCPUs  [function; ce-only; CE 4.2..599] */
HRESULT EnumCPUs(IEnumVariant** ppiEnumCPU );

/* IPMPlatform::EnumDevices  [function; ce-only; CE 4.2..599] */
HRESULT EnumDevices(IEnumVariant** ppiEnumDevice);

/* IPMPlatform::EnumPackages  [function; ce-only; CE 4.2..599] */
HRESULT EnumPackages(IEnumVariant** ppiEnumPackage);

/* IPMPlatform::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMPlatform::EnumStartupServers  [function; ce-only; CE 4.2..599] */
HRESULT EnumStartupServers(IEnumVariant** ppiEnumStartupServer);

/* IPMPlatform::EnumTransports  [function; ce-only; CE 4.2..599] */
HRESULT EnumTransports(IEnumVariant** ppiEnumTransport);

/* IPMPlatform::GetCPU  [function; ce-only; CE 4.2..599] */
HRESULT GetCPU( 
 BSTR bstrCPUIdOrName, 
 IPMCPU** ppiCPU 
);

/* IPMPlatform::GetDevice  [function; ce-only; CE 4.2..599] */
HRESULT GetDevice(BSTR bstrDeviceIdOrName,IPMRemoteDevice** ppiRemoteDevice);

/* IPMPlatform::GetOS  [function; ce-only; CE 4.2..599] */
HRESULT GetOS(IPMOS** ppiOS);

/* IPMPlatform::GetOSInfo  [function; ce-only; CE 4.2..599] */
HRESULT GetOSInfo(VARIANT* pwMajorVersion,VARIANT* pwMinorVersion);

/* IPMPlatform::GetPackage  [function; ce-only; CE 4.2..599] */
HRESULT GetPackage(BSTR bstrPackageIdOrName,IPMPackage** ppiPackage);

/* IPMPlatform::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMPlatform::GetStartupServer  [function; ce-only; CE 4.2..599] */
HRESULT GetStartupServer(BSTR bstrStartupServerIdOrName,IPMStartupServerInfo** ppiStartupServer);

/* IPMPlatform::GetTransport  [function; ce-only; CE 4.2..599] */
HRESULT GetTransport(BSTR bstrTransportIdOrName,IPMTransportInfo** ppiTransport);

/* IPMPlatform::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrPlatformId);

/* IPMPlatform::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrPlatformName);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IPMPlatform::RemoteDbgDirectory  [function; ce-only; CE 5.0..599] */
HRESULT RemoteDbgDirectory(BSTR* pbstrRemoteDbgDirectory );

/* IPMPlatform::UniversalSDK  [function; ce-only; CE 5.0..599] */
HRESULT UniversalSDK(BSTR bstrUniversalSDKGuid);
#endif /* _WIN32_WCE */

#endif /* _PLATFORM_ */
