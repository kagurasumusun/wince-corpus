/* Cemgr.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 1 outlines, 0 base types, 0 extra macros, 37 extra decls
 */
#ifndef _CEMGR_IDL_
#define _CEMGR_IDL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* PACKAGE_FILE_INFO  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CleanRegistry();
HRESULT CloseAllStreams();
HRESULT CopyQueuedFiles( long* pdwTotalSize );
HRESULT CpuNum( long* pdwNum );
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
HRESULT Flags( long* pdwFlags );
HRESULT GetQueueCount( long *pdwCount );
HRESULT InitService( IPMBootableDevice* piBootableDevice, IPMServiceInfo* piServiceInfo );
HRESULT Level( long* pdwLevel );
HRESULT Locale( long* pdwLocale );
HRESULT LocaleId( long *pdwLocaleId );
HRESULT MajorVersion( int* pwMajor );
HRESULT MinorVersion( int* pwMinor );
HRESULT PageSize( long *pdwPageSize );
HRESULT Platform(IPMPlatform** ppiPlatform);
HRESULT ResetQueue();
HRESULT Type( long* pdwType );

#endif /* _CEMGR_IDL_ */
