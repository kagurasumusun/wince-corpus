/* Cemgr.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 93 extra decls
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
