/* CcConnection.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 25 declarations, 0 outlines, 0 base types, 0 extra macros, 20 extra decls
 */
#ifndef _CCCONNECTION_
#define _CCCONNECTION_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcConnection::CloseProcessHandle  [function; ce-only; CE 5.0..699] */
HRESULT CloseProcessHandle (
 DWORD in_ProcessHandle
);

/* ICcConnection::CreateStream  [function; ce-only; CE 5.0..699] */
HRESULT CreateStream(
 BSTR bstrStreamId,
 DWORD dwTimeout,
 ICcServiceCB* piCallback,
 DWORD* pdwCookieId,
 ICcTransportStream** piStream
);

/* ICcConnection::DeleteDirectory  [function; ce-only; CE 5.0..699] */
HRESULT DeleteDirectory(
 LPCOLESTR in_szDeviceDirectory,
 VARIANT_BOOL bRemoveAll
);

/* ICcConnection::DeviceId  [function; ce-only; CE 5.0..699] */
HRESULT DeviceId (
 BSTR* pbstrDeviceId 
);

/* ICcConnection::DisconnectDevice  [function; ce-only; CE 5.0..699] */
HRESULT DisconnectDevice ();

/* ICcConnection::DownloadPackage  [function; ce-only; CE 5.0..699] */
HRESULT DownloadPackage(
 LPCOLESTR pwszPackageId
);

/* ICcConnection::EnumerateProcess  [function; ce-only; CE 5.0..699] */
HRESULT EnumerateProcesses(
 SAFEARRAY(BSTR)* out_Processes,
 SAFEARRAY(DWORD)* out_ProcessesId
);

/* ICcConnection::GetFileInfo  [function; ce-only; CE 5.0..699] */
HRESULT GetFileInfo(
 LPCOLESTR in_szDeviceFile,
 FileInfo* out_pFileInfo
);

/* ICcConnection::GetProcessExitCode  [function; ce-only; CE 5.0..699] */
HRESULT GetProcessExitCode(
 DWORD in_ProcessHandle,
 VARIANT_BOOL* out_pbProcessExited,
 DWORD* out_pdwProcessExited
);

/* ICcConnection::GetSystemInfo  [function; ce-only; CE 5.0..699] */
HRESULT GetSystemInfo(
 SystemInfo* out_pSystemInfo
);

/* ICcConnection::IsConnected  [function; ce-only; CE 5.0..699] */
HRESULT IsConnected(
 VARIANT_BOOL*pbConnected
);

/* ICcConnection::LaunchProcess  [function; ce-only; CE 5.0..699] */
HRESULT LaunchProcess(
 LPCOLESTR in_szExecutable,
 LPCOLESTR in_szArgument,
 DWORD in_CreationFlags, 
 DWORD* out_pProcessID,
 DWORD* out_pProcessHandle
);

/* ICcConnection::MakeDirectory  [function; ce-only; CE 5.0..699] */
HRESULT MakeDirectory(
 LPCOLESTR in_szDeviceDirectory
);

/* ICcConnection::ReceiveFile  [function; ce-only; CE 5.0..699] */
HRESULT ReceiveFile(
 LPCOLESTR in_szDeviceFile,
 LPCOLESTR in_szDesktopFile,
 FileActionDWORD dwCreationDispositionin_FileAction
);

/* ICcConnection::RegistryCreateKey  [function; ce-only; CE 5.0..699] */
HRESULT RegistryCreateKey(
 LONG hKey,
 LPCOLESTR lpSubKey
);

/* ICcConnection::RegistyDeleteKey  [function; ce-only; CE 5.0..699] */
HRESULT RegistryDeleteKey(
 LONG hKey,
 LPCOLESTR lpSubKey
);

/* ICcConnection::RegistyDeleteValue  [function; ce-only; CE 5.0..699] */
HRESULT RegistryDeleteValue(
 LONG hKey,
 LPCOLESTR lpSubKey,
 LPCOLESTR lpValueName
);

/* ICcConnection::RegistyQueryValue  [function; ce-only; CE 5.0..699] */
HRESULT RegistryQueryValue(
 LONG hKey,
 LPCOLESTR lpSubKey,
 LPCOLESTR lpValueName,
 DWORD dwType,
 WCHAR[]lpValue,
 LONG* pcbValue
);

/* ICcConnection::RegistySetValue  [function; ce-only; CE 5.0..699] */
HRESULT RegistrySetValue(
 LONG hKey,
 LPCOLESTR lpSubKey,
 LPCOLESTR lpValueName,
 DWORD dwType,
 LPCOLESTR lpData,
 DWORD cbData
);

/* ICcConnection::RemoveFile  [function; ce-only; CE 5.0..699] */
HRESULT RemoveFile(
 LPCOLESTR in_szDeviceFile
);

/* ICcConnection::SearchFileSystem  [function; ce-only; CE 5.0..699] */
HRESULT SearchFileSystem(
 LPCOLESTR in_Criteria,
 LPCOLESTR in_StartingDirectory,
 SAFEARRAY( BSTR )* out_FileSystems
);

/* ICcConnection::SendFile  [function; ce-only; CE 5.0..699] */
HRESULT SendFile(
 LPCOLESTR in_szDesktopFile,
 LPCOLESTR in_szDeviceFile,
 FileAction in_FileAction,
 DWORD dwCreationDisposition,
 LPCOLESTR in_FileCustomAction
);

/* ICcConnection::SetFileInfo  [function; ce-only; CE 5.0..699] */
HRESULT SetFileInfo(
 LPCOLESTR in_szDeviceFile,
 FileInfo* out_pFileInfo
);

/* ICcConnection::TerminateProcess  [function; ce-only; CE 5.0..699] */
HRESULT TerminateProcess(
 DWORD in_ProcessID
);

/* ICcConnection::VerifyFilesInstalled  [function; ce-only; CE 5.0..699] */
HRESULT VerifyFilesInstalled(
 DWORD in_ArraySize,
 [in, size_is(in_ArraySize), length_is(in_ArraySize)]
 FileVerifyReference in_InfoArray[],
 [out, size_is(in_ArraySize), length_is(in_ArraySize)] 
 FileVerifyResult out_ExistenceArray[]
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CloseProcessHandle ( DWORDin_ProcessHandle);
HRESULT DeleteDirectory( LPCOLESTR in_szDeviceDirectory,VARIANT_BOOL bRemoveAll);
HRESULT DeviceId ( BSTR*pbstrDeviceId );
HRESULT DisconnectDevice ();
HRESULT DownloadPackage( LPCOLESTR pwszPackageId);
HRESULT EnumerateProcesses( SAFEARRAY(BSTR)*out_Processes, SAFEARRAY(DWORD)*out_ProcessesId);
HRESULT GetFileInfo( LPCOLESTRin_szDeviceFile,FileInfo*out_pFileInfo);
HRESULT GetProcessExitCode( DWORDin_ProcessID,VARIANT_BOOL* out_pbProcessExited,DWORD*out_pdwProcessExited);
HRESULT LaunchProcess( LPCOLESTRin_szExecutable,LPCOLESTR in_szArgument,DWORDin_CreationFlags, DWORD*out_pProcessID,DWORD* out_pProcessHandle);
HRESULT MakeDirectory( LPCOLESTRin_szDeviceDirectory);
HRESULT ReceiveFile( LPCOLESTR in_szDeviceFile, LPCOLESTRin_szDesktopFile,FileActionDWORD dwCreationDispositionin_FileAction);
HRESULT RegistryCreateKey( LONG hKey, LPCOLESTR lpSubKey);
HRESULT RegistryDeleteKey( LONG hKey, LPCOLESTR lpSubKey);
HRESULT RegistryQueryValue( LONG hKey, LPCOLESTR lpSubKey, LPCOLESTR lpValueName, DWORD dwType, WCHAR[] lpValue, LONG* pcbValue);
HRESULT RegistrySetValue( LONG hKey, LPCOLESTR lpSubKey, LPCOLESTR lpValueName, DWORD dwType, LPCOLESTR lpData, DWORD cbData);
HRESULT RemoveFile( LPCOLESTRin_szDeviceFile);
HRESULT SearchFileSystem( LPCOLESTRin_Criteria,LPCOLESTRin_StartingDirectory, SAFEARRAY( BSTR )*out_FileSystems);
HRESULT SendFile( LPCOLESTR in_szDesktopFile, LPCOLESTR in_szDeviceFile, FileAction in_FileAction, DWORD dwCreationDisposition, LPCOLESTRin_FileCustomAction);
HRESULT SetFileInfo( LPCOLESTR in_szDeviceFile, FileInfo* out_pFileInfo);
HRESULT VerifyFilesInstalled( DWORD in_ArraySize, [in, size_is(in_ArraySize), length_is(in_ArraySize)] FileVerifyReferencein_InfoArray[], [out, size_is(in_ArraySize), length_is(in_ArraySize)] FileVerifyResultout_ExistenceArray[]);

#endif /* _CCCONNECTION_ */
