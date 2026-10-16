/* CcConnection.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 20 extra decls
 */
#ifndef _CCCONNECTION_
#define _CCCONNECTION_


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
