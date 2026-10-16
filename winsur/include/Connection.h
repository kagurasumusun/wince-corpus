/* Connection.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CONNECTION_
#define _CONNECTION_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

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
#endif /* _WIN32_WCE */

#endif /* _CONNECTION_ */
