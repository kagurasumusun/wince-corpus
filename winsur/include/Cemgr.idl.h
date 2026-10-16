/* Cemgr.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 174 declarations, 0 outlines, 0 base types, 0 extra macros, 93 extra decls
 */
#ifndef _CEMGR_IDL_
#define _CEMGR_IDL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* PACKAGE_FILE_INFO  [struct; ce-only; CE 4.2..599] */
typedef struct PACKAGE_FILE_INFO{DEVICE_TYPE dt;WORDwArchitecture;DWORDdwCPUType;WORDwProcessorLevel;DWORDdwPageSize;WORDwMajorVersion;WORDwMinorVersion;DWORDdwLocaleId;DWORDdwFlags;} PACKAGE_FILE_INFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IEnumVariant::Count  [function; ce-only; CE 4.2..599] */
HRESULT Count(long* pVal);

/* IEnumVariant::Item  [function; ce-only; CE 4.2..599] */
HRESULT Item(long Index,VARIANT* pVariant)

/* IPMConnection::CloseAllStreams  [function; ce-only; CE 4.2..599] */
HRESULT CloseAllStreams();

/* IPMConnection::CopyPackage  [function; ce-only; CE 4.2..599] */
HRESULT CopyPackage( 
 BSTR bstrPackageId, 
 BSTR bstrDestPath, 
 VARIANT_BOOL bOverWrite, 
 long* pdwTotalSize 
);

/* IPMConnection::CopyQueuedFiles  [function; ce-only; CE 4.2..599] */
HRESULT CopyQueuedFiles(long* pdwTotalSize);

/* IPMConnection::CreateStream  [function; ce-only; CE 4.2..599] */
HRESULT CreateStream( 
 BSTR bstrHostId, 
 long dwPortId, 
 IPMConnectionStream** ppiConnectionStream 
);

/* IPMConnection::FileCopy  [function; ce-only; CE 4.2..599] */
HRESULT FileCopy( 
 BSTR bstrSource, 
 BSTR bstrDest, 
 VARIANT_BOOL bOverWrite, 
 long* pdwTotalSize 
);

/* IPMConnection::FileDelete  [function; ce-only; CE 4.2..599] */
HRESULT FileDelete(BSTR bstrFullPath);

/* IPMConnection::FileGetInfo  [function; ce-only; CE 4.2..599] */
HRESULT FileGetInfo( 
 BSTR bstrRemotePath, 
 long* pdwFileAttributes, 
 long* pdwFileSize, 
 VARIANT* pvtCreationTime 
);

/* IPMConnection::GetFile  [function; ce-only; CE 4.2..599] */
HRESULT GetFile( 
 BSTR bstrRemotePath, 
 BSTR bstrDest, 
 long* pdwTotalSize 
);

/* IPMConnection::GetQueueCount  [function; ce-only; CE 4.2..599] */
HRESULT GetQueueCount(long* pdwCount);

/* IPMConnection::GetSystemInfo  [function; ce-only; CE 4.2..599] */
HRESULT GetSystemInfo(IPMCPU** piCpu,IPMOS** piOs);

/* IPMConnection::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrConnectId);

/* IPMConnection::Launch  [function; ce-only; CE 4.2..599] */
HRESULT Launch(BSTR bstrRemotePath,BSTR bstrCmdLine);

/* IPMConnection::LocaleId  [function; ce-only; CE 4.2..599] */
HRESULT LocaleId(long* pdwLocaleId);

/* IPMConnection::PlatformId  [function; ce-only; CE 4.2..599] */
HRESULT PlatformId(BSTR* pbstrPlatformId);

/* IPMConnection::QueueFile  [function; ce-only; CE 4.2..599] */
HRESULT QueueFile( 
 BSTR bstrSource, 
 BSTR bstrDest, 
 VARIANT_BOOL bOverWrite 
);

/* IPMConnection::QueuePackage  [function; ce-only; CE 4.2..599] */
HRESULT QueuePackage( 
 BSTR bstrPackageId, 
 BSTR bstrDestPath, 
 VARIANT_BOOL bOverWrite 
);

/* IPMConnection::ResetQueue  [function; ce-only; CE 4.2..599] */
HRESULT ResetQueue();

/* IPMConnection::SystemGetInfo  [function; ce-only; CE 4.2..599] */
HRESULT SystemGetInfo( 
 VARIANT* pwArchitecture, 
 VARIANT* pdwCPUType, 
 VARIANT* pdwPageSize, 
 VARIANT* pwMajorVersion, 
 VARIANT* pwMinorVersion, 
 VARIANT* bstrOSTypeId 
);

/* IPMConnectionStream::Close  [function; ce-only; CE 4.2..599] */
HRESULT Close();

/* IPMConnectionStream::ReadBytes  [function; ce-only; CE 4.2..599] */
HRESULT ReadBytes( 
 long dwSize, 
 VARIANT* pvtArray, 
 long* pdwSizeRecv 
);

/* IPMConnectionStream::Receive  [function; ce-only; CE 4.2..599] */
HRESULT Receive(long* pdwBytesReceived);

/* IPMConnectionStream::Send  [function; ce-only; CE 4.2..599] */
HRESULT Send( 
 long dwSize, 
 VARIANT vtArray, 
 long* pdwSizeSent 
);

/* IPMCPU::Architecture  [function; ce-only; CE 4.2..599] */
HRESULT Architecture(int* pwArchitecture);

/* IPMCPU::CpuNum  [function; ce-only; CE 4.2..599] */
HRESULT CpuNum(long* pdwNum);

/* IPMCPU::DefaultValue  [function; ce-only; CE 4.2..599] */
HRESULT DefaultValue(BSTR* pbstrName);

/* IPMCPU::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrGuid);

/* IPMCPU::Level  [function; ce-only; CE 4.2..599] */
HRESULT Level(long dwLevel);

/* IPMCPU::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrName);

/* IPMCPU::PageSize  [function; ce-only; CE 4.2..599] */
HRESULT PageSize(long dwPageSize);

/* IPMCPU::Type  [function; ce-only; CE 4.2..599] */
HRESULT Type(long* pdwType);

/* IPMOS::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrGuid);

/* IPMOS::MajorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MajorVersion(int* pwMajor);

/* IPMOS::MinorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MinorVersion(int* pwMinor);

/* IPMOS::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrName);

/* IPMOS::TypeId  [function; ce-only; CE 4.2..599] */
HRESULT TypeId(BSTR* pbstrTypeId);

/* IPMPackage::AddCPUFiles  [function; ce-only; CE 4.2..599] */
HRESULT AddCPUFiles( 
 BSTR bstrFullPath, 
 BSTR bstrKeyName, 
 BSTR bsOSIdOrName, 
 VARIANT vtLocaleId, 
 VARIANT vtFlags 
);

/* IPMPackage::AddFile  [function; ce-only; CE 4.2..599] */
HRESULT AddFile( 
 BSTR bstrFullPath, 
 BSTR bstrKeyName, 
 IPMCPU* piPMCPU, 
 IPMOS* piPMOS, 
 long dwLocaleId, 
 long dwFlags, 
 IPMPackageFile** ppiPMPackageFile 
);

/* IPMPackage::DeleteFile  [function; ce-only; CE 4.2..599] */
HRESULT DeleteFile(BSTR bstrFullPath,BSTR bstrKeyName);

/* IPMPackage::EnumFiles  [function; ce-only; CE 4.2..599] */
HRESULT EnumFiles(IEnumVariant** ppiEnumFiles);

/* IPMPackage::GetFile  [function; ce-only; CE 4.2..599] */
HRESULT GetFile( 
 BSTR bstrFullPath, 
 BSTR bstrKeyName, 
 IPMPackageFile** ppiPMPackageFile 
);

/* IPMPackage::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrPackageId);

/* IPMPackage::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrPackageName);

/* IPMPackageFile::Architecture  [function; ce-only; CE 4.2..599] */
HRESULT Architecture(int* pwArchitecture);

/* IPMPackageFile::CpuNum  [function; ce-only; CE 4.2..599] */
HRESULT CpuNum(long* pdwCpuNum);

/* IPMPackageFile::Flags  [function; ce-only; CE 4.2..599] */
HRESULT Flags(long* pdwFlags);

/* IPMPackageFile::KeyName  [function; ce-only; CE 4.2..599] */
HRESULT KeyName(BSTR* pbstrName);

/* IPMPackageFile::Level  [function; ce-only; CE 4.2..599] */
HRESULT Level(long* pdwLevel);

/* IPMPackageFile::Locale  [function; ce-only; CE 4.2..599] */
HRESULT Locale(long* pdwLocale);

/* IPMPackageFile::MajorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MajorVersion(int* pwMajor);

/* IPMPackageFile::MinorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MinorVersion(int* pwMinor);

/* IPMPackageFile::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrFileName);

/* IPMPackageFile::PageSize  [function; ce-only; CE 4.2..599] */
HRESULT PageSize(long* pdwPageSize);

/* IPMPackageFile::Type  [function; ce-only; CE 4.2..599] */
HRESULT Type(long* pdwType);

/* IPMPackageFile::TypeId  [function; ce-only; CE 4.2..599] */
HRESULT TypeId(BSTR* pbstrTypeId);

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

/* IPMProperty::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMProperty::AddPropInfo  [function; ce-only; CE 4.2..599] */
HRESULT AddPropInfo( 
 BSTR bstrPropInfoName, 
 long dwPropInfoType, 
 BSTR bstrPropInfoValue, 
 IPMPropInfo** ppiPropInfo 
);

/* IPMProperty::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMProperty::DeletePropInfo  [function; ce-only; CE 4.2..599] */
HRESULT DeletePropInfo( 
 BSTR bstrPropInfoName 
);

/* IPMProperty::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMProperty::EnumPropInfos  [function; ce-only; CE 4.2..599] */
HRESULT EnumPropInfos(IEnumVariant** ppiEnumPropInfo);

/* IPMProperty::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMProperty::GetPropInfo  [function; ce-only; CE 4.2..599] */
HRESULT GetPropInfo(BSTR bstrPropName,IPMPropInfo** ppiPropInfo);

/* IPMProperty::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrPropId);

/* IPMPropInfo::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrName);

/* IPMPropInfo::Type  [function; ce-only; CE 4.2..599] */
HRESULT Type(long dwType);

/* IPMPropInfo::Value  [function; ce-only; CE 4.2..599] */
HRESULT Value(VARIANT dwValue);

/* IPMRemoteDevice::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMRemoteDevice::Attach  [function; ce-only; CE 4.2..599] */
HRESULT Attach( 
 BSTR bstrProcessName, 
 long dwTimeOut, 
 VARIANT vtProcessId, 
 IPMConnection** ppiConnection 
);

/* IPMRemoteDevice::ConfigureStartupServer  [function; ce-only; CE 4.2..599] */
HRESULT ConfigureStartupServer(VARIANT hWnd);

/* IPMRemoteDevice::ConfigureTransport  [function; ce-only; CE 4.2..599] */
HRESULT ConfigureTransport(VARIANT hWnd);

/* IPMRemoteDevice::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMRemoteDevice::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMRemoteDevice::GetConnection  [function; ce-only; CE 4.2..599] */
HRESULT GetConnection(BSTR bstrConnectId,IPMConnection** ppiConnection);

/* IPMRemoteDevice::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMRemoteDevice::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrDeviceId);

/* IPMRemoteDevice::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrDeviceName);

/* IPMRemoteDevice::StartupServer  [function; ce-only; CE 4.2..599] */
HRESULT StartupServer(BSTR* pbstrStartupServerId);

/* IPMRemoteDevice::Transport  [function; ce-only; CE 4.2..599] */
HRESULT Transport(BSTR* pbstrTransportId);

/* IPMService::ConfigureServiceUI  [function; ce-only; CE 4.2..599] */
HRESULT ConfigureServiceUI( 
 IPMBootableDevice* piBootableDevice, 
 IPMServiceInfo* piServiceInfo, 
 VARIANT hWnd 
);

/* IPMService::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrServiceCLSID);

/* IPMService::InitService  [function; ce-only; CE 4.2..599] */
HRESULT InitService(IPMBootableDevice* piBootableDevice,IPMServiceInfo* piServiceInfo);

/* IPMService::IsServiceReleaseable  [function; ce-only; CE 4.2..599] */
HRESULT IsServiceReleaseable(VARIANT_BOOL* pBool);

/* IPMService::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrServiceName);

/* IPMServiceCategory::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMServiceCategory::AddServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT AddServiceInfo( 
 BSTR bstrServiceCLSID, 
 BSTR bstrServiceName, 
 IPMServiceInfo** ppiServiceInfo 
);

/* IPMServiceCategory::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMServiceCategory::DeleteServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT DeleteServiceInfo( 
 BSTR bstrServiceIdOrName 
);

/* IPMServiceCategory::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMServiceCategory::EnumServiceInfos  [function; ce-only; CE 4.2..599] */
HRESULT EnumServiceInfos(IEnumVariant** ppiEnumServiceInfo);

/* IPMServiceCategory::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMServiceCategory::GetServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT GetServiceInfo(BSTR bstrServiceIdOrName,IPMServiceInfo** ppiServiceInfo);

/* IPMServiceCategory::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrServiceCategoryId);

/* IPMServiceCategory::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrServiceCategoryName);

/* IPMServiceInfo::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMServiceInfo::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMServiceInfo::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMServiceInfo::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMServiceInfo::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrServiceCLSID);

/* IPMServiceInfo::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrServiceInfoName);

/* IPMStartupServerInfo::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrGuid);

/* IPMStartupServerInfo::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrValue);

/* IPMTransportInfo::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrGuid);

/* IPMTransportInfo::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrValue);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IPMPlatform::RemoteDbgDirectory  [function; ce-only; CE 5.0..599] */
HRESULT RemoteDbgDirectory(BSTR* pbstrRemoteDbgDirectory );

/* IPMPlatform::UniversalSDK  [function; ce-only; CE 5.0..599] */
HRESULT UniversalSDK(BSTR bstrUniversalSDKGuid);

/* IPMPlatformManager::CleanRegistry  [function; ce-only; CE 5.0..599] */
HRESULT CleanRegistry();

/* IPMPlatformManager::EnumUniversalPlatforms  [function; ce-only; CE 5.0..599] */
HRESULT EnumUniversalPlatforms(IEnumVariant** ppiEnumUniversalPlatform);

/* IPMRemoteDevice::Platform  [function; ce-only; CE 5.0..599] */
HRESULT Platform(IPMPlatform** ppiPlatform);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddBootableDevice( BSTR bstrBootableDeviceName, BSTR bstrBootableDeviceId, IPMBootableDevice** ppiBootableDevice );
HRESULT AddCPU( BSTR bstrCPUName, long dwCpuNum, int wArchitecture, long dwCPUType, BSTR bstrCPUId, VARIANT vtPageSize, VARIANT vtLevel, BSTR bstrDefaultValue, IPMCPU** ppiCPU );
HRESULT AddCPUFiles( BSTR bstrFullPath, BSTR bstrKeyName, BSTR bsOSIdOrName, VARIANT vtLocaleId, VARIANT vtFlags );
HRESULT AddDevice( BSTR bstrDeviceName, BSTR bstrDeviceId, IPMRemoteDevice** ppiDevice );
HRESULT AddFile( BSTR bstrFullPath, BSTR bstrKeyName, IPMCPU* piPMCPU, IPMOS* piPMOS, long dwLocaleId, long dwFlags, IPMPackageFile** ppiPMPackageFile );
HRESULT AddOS( BSTR bstrOSName, int wMajorVersion, int wMinorVersion, BSTR bstrOSTypeId, BSTR bstrOSId, IPMOS** ppiOS );
HRESULT AddPackage( BSTR bstrPackageName, BSTR bstrPackageId, IPMPackage** ppiPackage );
HRESULT AddPlatform( BSTR bstrPlatformName, BSTR bstrPlatformId, IPMPlatform** ppiPlatform );
HRESULT AddPropInfo( BSTR bstrPropInfoName, long dwPropInfoType, BSTR bstrPropInfoValue, IPMPropInfo** ppiPropInfo );
HRESULT AddServiceCategoryName( BSTR bstrServiceCategoryName, BSTR bstrServiceCategoryId, IPMServiceCategory** ppiServiceCategory );
HRESULT AddStartupServer( BSTR bstrStartupServerId, VARIANT_BOOL bDefault, IPMStartupServerInfo** ppiStartupServer );
HRESULT AddToolkit( BSTR bstrToolkitName, BSTR bstrToolkitId );
HRESULT AddTransport( BSTR bstrTransportId, VARIANT_BOOL bDefault, IPMTransportInfo** ppiTransport );
HRESULT Attach( BSTR bstrProcessName, long dwTimeOut, VARIANT vtProcessId, IPMConnection** ppiConnection );
HRESULT CategoryId( BSTR* pbstrServiceCategoryId );
HRESULT CleanRegistry();
HRESULT CloseAllStreams();
HRESULT ConfigureServiceUI( IPMBootableDevice* piBootableDevice, IPMServiceInfo* piServiceInfo, VARIANT hWnd );
HRESULT ConfigureStartupServer( VARIANT hWnd );
HRESULT ConfigureTransport( VARIANT hWnd );
HRESULT CopyPackage( BSTR bstrPackageId, BSTR bstrDestPath, VARIANT_BOOL bOverWrite, long* pdwTotalSize );
HRESULT CopyQueuedFiles( long* pdwTotalSize );
HRESULT CpuNum( long* pdwNum );
HRESULT CreateGUID( BSTR* pbstrNewGuid );
HRESULT DefaultValue( BSTR* pbstrName );
HRESULT DeleteBootableDevice( BSTR bstrBootableDeviceIdOrName );
HRESULT DeleteCPU( BSTR bstrCPUIdOrName );
HRESULT DeleteDevice( BSTR bstrDeviceIdOrName );
HRESULT DeleteOS( BSTR bstrOSIdOrName );
HRESULT DeletePackage( BSTR bstrPackageIdOrName );
HRESULT DeletePlatform( BSTR bstrPlatformIdOrName );
HRESULT DeletePropInfo( BSTR bstrPropInfoName );
HRESULT DeleteServiceCategory( BSTR bstrServiceCategoryIdOrName );
HRESULT DeleteServiceInfo( BSTR bstrServiceIdOrName );
HRESULT DeleteStartupServer( BSTR bstrStartupServerIdOrName );
HRESULT DeleteToolkit( BSTR bstrToolkitIdOrName );
HRESULT DeleteTransport( BSTR bstrTransportIdOrName );
HRESULT EnumBootableDevices( IEnumVariant** ppiEnumBootableDevice );
HRESULT EnumCPUs( IEnumVariant** ppiEnumCPU );
HRESULT EnumFiles( IEnumVariant** ppiEnumFiles );
HRESULT EnumOSs( IEnumVariant** ppiEnumOS );
HRESULT EnumPackages( IEnumVariant** ppiEnumPackage );
HRESULT EnumPlatforms( IEnumVariant** ppiEnumPlatform );
HRESULT EnumPropInfos( IEnumVariant** ppiEnumPropInfo );
HRESULT EnumServiceCategories( IEnumVariant** ppiEnumServiceCategory );
HRESULT EnumServiceInfos( IEnumVariant** ppiEnumServiceInfo );
HRESULT EnumStartupServers( IEnumVariant** ppiEnumStartupServer );
HRESULT EnumTransports( IEnumVariant** ppiEnumTransport );
HRESULT EnumUniversalPlatforms(IEnumVariant** ppiEnumUniversalPlatform);
HRESULT FileCopy( BSTR bstrSource, BSTR bstrDest, VARIANT_BOOL bOverWrite, long* pdwTotalSize );
HRESULT FileDelete( BSTR bstrFullPath );
HRESULT FileGetInfo( BSTR bstrRemotePath, long* pdwFileAttributes, long* pdwFileSize, VARIANT* pvtCreationTime );
HRESULT Flags( long* pdwFlags );
HRESULT GetBootableDevice( BSTR bstrBootableDeviceIdOrName, IPMBootableDevice** ppiBootableDevice );
HRESULT GetCPU( BSTR bstrCPUIdOrName, IPMCPU** ppiCPU );
HRESULT GetConnection( BSTR bstrConnectId, IPMConnection** ppiConnection );
HRESULT GetDevice( BSTR bstrDeviceIdOrName, IPMRemoteDevice** ppiRemoteDevice );
HRESULT GetFile( BSTR bstrRemotePath, BSTR bstrDest, long* pdwTotalSize );
HRESULT GetOS( BSTR bstrOSIdOrName, IPMOS** ppiOS );
HRESULT GetOSInfo( VARIANT* pwMajorVersion, VARIANT* pwMinorVersion );
HRESULT GetPackage( BSTR bstrPackageIdOrName, IPMPackage** ppiPackage );
HRESULT GetPlatform( BSTR bstrPlatformIdOrName, IPMPlatform** ppiPlatform );
HRESULT GetPropInfo( BSTR bstrPropName, IPMPropInfo** ppiPropInfo );
HRESULT GetQueueCount( long *pdwCount );
HRESULT GetServiceCategory( BSTR bstrServiceCategoryIdOrName, IPMServiceCategory** ppiServiceCategory );
HRESULT GetServiceInfo( BSTR bstrServiceIdOrName, IPMServiceInfo** ppiServiceInfo );
HRESULT GetStartupServer( BSTR bstrStartupServerIdOrName, IPMStartupServerInfo** ppiStartupServer );
HRESULT GetTransport( BSTR bstrTransportIdOrName, IPMTransportInfo** ppiTransport );
HRESULT GetVersion( VARIANT* pwMajorVersion, VARIANT* pwMinorVersion, VARIANT* pdwBuildNumber );
HRESULT InitService( IPMBootableDevice* piBootableDevice, IPMServiceInfo* piServiceInfo );
HRESULT IsServiceReleaseable( VARIANT_BOOL* pBool );
HRESULT KeyName( BSTR* pbstrName );
HRESULT Launch( BSTR bstrRemotePath, BSTR bstrCmdLine );
HRESULT Level( long* pdwLevel );
HRESULT Locale( long* pdwLocale );
HRESULT LocaleId( long *pdwLocaleId );
HRESULT MajorVersion( int* pwMajor );
HRESULT MinorVersion( int* pwMinor );
HRESULT PageSize( long *pdwPageSize );
HRESULT Platform(IPMPlatform** ppiPlatform);
HRESULT PlatformId( BSTR* pbstrPlatformId );
HRESULT QueueFile( BSTR bstrSource, BSTR bstrDest, VARIANT_BOOL bOverWrite );
HRESULT QueuePackage( BSTR bstrPackageId, BSTR bstrDestPath, VARIANT_BOOL bOverWrite );
HRESULT ReadBytes( long dwSize, VARIANT* pvtArray, long* pdwSizeRecv );
HRESULT RemoteDbgDirectory(BSTR* pbstrRemoteDbgDirectory );
HRESULT ResetQueue();
HRESULT StartupServer( BSTR* pbstrStartupServerId );
HRESULT SystemGetInfo( VARIANT* pwArchitecture, VARIANT* pdwCPUType, VARIANT* pdwPageSize, VARIANT* pwMajorVersion, VARIANT* pwMinorVersion, VARIANT* bstrOSTypeId );
HRESULT Transport( BSTR* pbstrTransportId );
HRESULT Type( long* pdwType );
HRESULT TypeId( BSTR* pbstrTypeId );
HRESULT UniversalSDK(BSTR* pbstrUniversalSDKGuid);
HRESULT Value( VARIANT* pdwValue );

#endif /* _CEMGR_IDL_ */
