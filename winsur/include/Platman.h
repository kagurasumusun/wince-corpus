/* Platman.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 35 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PLATMAN_
#define _PLATMAN_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMPlatformManager::AddBootableDevice  [function; ce-only; CE 4.2..599] */
HRESULT AddBootableDevice( 
 BSTR bstrBootableDeviceName, 
 BSTR bstrBootableDeviceId, 
 IPMBootableDevice** ppiBootableDevice 
);

/* IPMPlatformManager::AddCPU  [function; ce-only; CE 4.2..599] */
HRESULT AddCPU( 
 BSTR bstrCPUName, 
 long dwCpuNum, 
 int wArchitecture, 
 long dwCPUType, 
 BSTR bstrCPUId, 
 VARIANT vtPageSize, 
 VARIANT vtLevel, 
 BSTR bstrDefaultValue, 
 IPMCPU** ppiCPU 
);

/* IPMPlatformManager::AddOS  [function; ce-only; CE 4.2..599] */
HRESULT AddOS( 
 BSTR bstrOSName, 
 int wMajorVersion, 
 int wMinorVersion, 
 BSTR bstrOSTypeId, 
 BSTR bstrOSId, 
 IPMOS** ppiOS 
);

/* IPMPlatformManager::AddPackage  [function; ce-only; CE 4.2..599] */
HRESULT AddPackage( 
 BSTR bstrPackageName, 
 BSTR bstrPackageId, 
 IPMPackage** ppiPackage 
);

/* IPMPlatformManager::AddPlatform  [function; ce-only; CE 4.2..599] */
HRESULT AddPlatform( 
 BSTR bstrPlatformName, 
 BSTR bstrPlatformId, 
 IPMPlatform** ppiPlatform 
);

/* IPMPlatformManager::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMPlatformManager::AddServiceCategory  [function; ce-only; CE 4.2..599] */
HRESULT AddServiceCategoryName( 
 BSTR bstrServiceCategoryName, 
 BSTR bstrServiceCategoryId, 
 IPMServiceCategory** ppiServiceCategory 
);

/* IPMPlatformManager::AddToolkit  [function; ce-only; CE 4.2..599] */
HRESULT AddToolkit(BSTR bstrToolkitName,BSTR bstrToolkitId);

/* IPMPlatformManager::CreateGUID  [function; ce-only; CE 4.2..599] */
HRESULT CreateGUID(BSTR* pbstrNewGuid);

/* IPMPlatformManager::DeleteBootableDevice  [function; ce-only; CE 4.2..599] */
HRESULT DeleteBootableDevice( 
 BSTR bstrBootableDeviceIdOrName 
);

/* IPMPlatformManager::DeleteCPU  [function; ce-only; CE 4.2..599] */
HRESULT DeleteCPU(BSTR bstrCPUIdOrName);

/* IPMPlatformManager::DeleteOS  [function; ce-only; CE 4.2..599] */
HRESULT DeleteOS(BSTR bstrOSIdOrName);

/* IPMPlatformManager::DeletePackage  [function; ce-only; CE 4.2..599] */
HRESULT DeletePackage(BSTR bstrPackageIdOrName);

/* IPMPlatformManager::DeletePlatform  [function; ce-only; CE 4.2..599] */
HRESULT DeletePlatform(BSTR bstrPlatformIdOrName);

/* IPMPlatformManager::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMPlatformManager::DeleteServiceCategory  [function; ce-only; CE 4.2..599] */
HRESULT DeleteServiceCategory( 
 BSTR bstrServiceCategoryIdOrName 
);

/* IPMPlatformManager::DeleteToolkit  [function; ce-only; CE 4.2..599] */
HRESULT DeleteToolkit( 
 BSTR bstrToolkitIdOrName 
);

/* IPMPlatformManager::EnumBootableDevices  [function; ce-only; CE 4.2..599] */
HRESULT EnumBootableDevices(IEnumVariant** ppiEnumBootableDevice);

/* IPMPlatformManager::EnumCPUs  [function; ce-only; CE 4.2..599] */
HRESULT EnumCPUs(IEnumVariant** ppiEnumCPU );

/* IPMPlatformManager::EnumOSs  [function; ce-only; CE 4.2..599] */
HRESULT EnumOSs(IEnumVariant** ppiEnumOS);

/* IPMPlatformManager::EnumPackages  [function; ce-only; CE 4.2..599] */
HRESULT EnumPackages(IEnumVariant** ppiEnumPackage);

/* IPMPlatformManager::EnumPlatforms  [function; ce-only; CE 4.2..599] */
HRESULT EnumPlatforms(IEnumVariant** ppiEnumPlatform);

/* IPMPlatformManager::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMPlatformManager::EnumServiceCategories  [function; ce-only; CE 4.2..599] */
HRESULT EnumServiceCategories(IEnumVariant** ppiEnumServiceCategory);

/* IPMPlatformManager::GetBootableDevice  [function; ce-only; CE 4.2..599] */
HRESULT GetBootableDevice(BSTR bstrBootableDeviceIdOrName,IPMBootableDevice** ppiBootableDevice);

/* IPMPlatformManager::GetConnection  [function; ce-only; CE 4.2..599] */
HRESULT GetConnection(BSTR bstrConnectId,IPMConnection** ppiConnection);

/* IPMPlatformManager::GetCPU  [function; ce-only; CE 4.2..599] */
HRESULT GetCPU( 
 BSTR bstrCPUIdOrName, 
 IPMCPU** ppiCPU 
);

/* IPMPlatformManager::GetOS  [function; ce-only; CE 4.2..599] */
HRESULT GetOS(BSTR bstrOSIdOrName,IPMOS** ppiOS);

/* IPMPlatformManager::GetPackage  [function; ce-only; CE 4.2..599] */
HRESULT GetPackage(BSTR bstrPackageIdOrName,IPMPackage** ppiPackage);

/* IPMPlatformManager::GetPlatform  [function; ce-only; CE 4.2..599] */
HRESULT GetPlatform( 
 BSTR bstrPlatformIdOrName, 
 IPMPlatform** ppiPlatform 
);

/* IPMPlatformManager::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMPlatformManager::GetServiceCategory  [function; ce-only; CE 4.2..599] */
HRESULT GetServiceCategory( 
 BSTR bstrServiceCategoryIdOrName, 
 IPMServiceCategory** ppiServiceCategory 
);

/* IPMPlatformManager::GetVersion  [function; ce-only; CE 4.2..599] */
HRESULT GetVersion( 
 VARIANT* pwMajorVersion, 
 VARIANT* pwMinorVersion, 
 VARIANT* pdwBuildNumber 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IPMPlatformManager::CleanRegistry  [function; ce-only; CE 5.0..599] */
HRESULT CleanRegistry();

/* IPMPlatformManager::EnumUniversalPlatforms  [function; ce-only; CE 5.0..599] */
HRESULT EnumUniversalPlatforms(IEnumVariant** ppiEnumUniversalPlatform);
#endif /* _WIN32_WCE */

#endif /* _PLATMAN_ */
