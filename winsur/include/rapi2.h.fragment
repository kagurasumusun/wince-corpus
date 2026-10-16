/* rapi2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 96 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _RAPI2_
#define _RAPI2_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IRAPIDesktop::Advise  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT Advise(
 IRAPISink* pISink,
 DWORD* pdwContext
);

/* IRAPIDesktop::EnumDevices  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT EnumDevices(
 IRAPIEnumDevices** ppIEnum
);

/* IRAPIDesktop::FindDevice  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT FindDevices(
 RAPIDEVICEID *pDeviceID,
 RAPI_GETDEVICEOPCODE opFlags,..IRAPIDevice** ppIDevice
);

/* IRAPIDesktop::UnAdvise  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT UnAdvise(
 DWORD dwContext
);

/* IRAPIDevice::CreateSession  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CreateSession(
 IRAPISession** ppISession
);

/* IRAPIDevice::GetConnectionInfo  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT GetConnectionInfo(
 RAPI_CONNECTIONINFO* pConnInfo
);

/* IRAPIDevice::GetConnectStat  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT GetConnectStat(
 RAPI_DEVICESTATUS* pStat
);

/* IRAPIDevice::GetDeviceInfo  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT GetDeviceInfo(
 RAPI_DEVICEINFO* pDevInfo
);

/* IRAPIEnumDevices::Clone  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT Clone(
 IRAPIEnumDevices** ppIEnum
);

/* IRAPIEnumDevices::GetCount  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT GetCount(
 ULONG* pcElt
);

/* IRAPIEnumDevices::Next  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT Next(
 IRAPIDevice** ppIDevice
);

/* IRAPIEnumDevices::Reset  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT Reset();

/* IRAPIEnumDevices::Skip  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT Skip(
 ULONG cElt
);

/* IRAPISession::CeCheckPassword  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeCheckPassword( 
 LPWSTR lpszPassword 
);

/* IRAPISession::CeCloseHandle  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeCloseHandle( 
 HANDLE hObject 
);

/* IRAPISession::CeCopyFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeCopyFile(
 LPCWSTR lpExistingFileName, 
 LPCWSTR lpNewFileName, 
 BOOL bFailIfExists 
);

/* IRAPISession::CeCreateDatabase  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeCreateDatabase(
 LPWSTR lpszName,
 DWORD dwDbaseType,
 WORD wNumSortOrder,
 SORTORDERSPEC * rgSortSpecs
);

/* IRAPISession::CeCreateDatabaseEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeCreateDatabaseEx( 
 PCEGUID pceguid, 
 CEDBASEINFO * lpCEDBInfo 
);

/* IRAPISession::CeCreateDirectory  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeCreateDirectory(
 LPCWSTR lpPathName,
 LPSECURITY_ATTRIBUTES lpSecurityAttributes
);

/* IRAPISession::CeCreateFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HANDLE CeCreateFile (
 LPCWSTR lpFileName, 
 DWORD dwDesiredAccess, 
 DWORD dwShareMode, 
 LPSECURITY_ATTRIBUTES lpSecurityAttributes, 
 DWORD dwCreationDisposition, 
 DWORD dwFlagsAndAttributes, 
 HANDLE hTemplateFile 
);

/* IRAPISession::CeCreateProcess  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeCreateProcess(
 LPCWSTR lpApplicationName, 
 LPCWSTR lpCommandLine, 
 LPSECURITY_ATTRIBUTES lpProcessAttributes, 
 LPSECURITY_ATTRIBUTES lpThreadAttributes, 
 BOOL bInheritHandles, 
 DWORD dwCreationFlags, 
 LPVOID lpEnvironment, 
 LPWSTR lpCurrentDirectory, 
 LPSTARTUPINFO lpStartupInfo, 
 LPPROCESS_INFORMATION lpProcessInformation 
);

/* IRAPISession::CeDeleteDatabase  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeDeleteDatabase(
 CEOID oidDbase 
);

/* IRAPISession::CeDeleteDatabaseEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeDeleteDatabaseEx( 
 PCEGUID pguid, 
 CEOID oid 
);

/* IRAPISession::CeDeleteFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeDeleteFile(
 LPCWSTR lpFileName 
);

/* IRAPISession::CeDeleteRecord  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeDeleteRecord(
 HANDLE hDatabase, 
 CEOID oidRecord 
);

/* IRAPISession::CeEnumDBVolumes  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeEnumDBVolumes (
 PCEGUID pceguid, 
 LPWSTR lpBuf,
 DWORD dwNumChars 
);

/* IRAPISession::CeFindAllDatabases  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeFindAllDatabases(
 DWORD dwDbaseType, 
 WORD wFlags, 
 LPWORD cFindData, 
 LPLPCEDB_FIND_DATA ppFindData 
);

/* IRAPISession::CeFindAllFiles  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeFindAllFiles(
 LPCWSTR szPath, 
 DWORD dwFlags, 
 LPDWORD lpdwFoundCount, 
 LPLPCE_FIND_DATA ppFindDataArray 
);

/* IRAPISession::CeFindClose  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeFindClose( 
 HANDLE hFindFile 
);

/* IRAPISession::CeFindFirstDatabase  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HANDLE CeFindFirstDatabase(
 DWORD dwDbaseType 
);

/* IRAPISession::CeFindFirstDatabaseEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HANDLE CeFindFirstDatabaseEx(
 PCEGUID pceguid, 
 DWORD dwDbaseType 
);

/* IRAPISession::CeFindFirstFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HANDLE CeFindFirstFile(
 LPCWSTR lpFileName, 
 LPCE_FIND_DATA lpFindFileData 
);

/* IRAPISession::CeFindNextDatabase  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeFindNextDatabase(
 HANDLE hEnum 
);

/* IRAPISession::CeFindNextDatabaseEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeFindNextDatabaseEx( 
 HANDLE hEnum,
 PCEGUID pceguid 
);

/* IRAPISession::CeFindNextFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeFindNextFile( 
 HANDLE hFindFile, 
 LPCE_FIND_DATA lpFindFileData 
);

/* IRAPISession::CeFlushDBVol  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeFlushDBVol(
 PCEGUID pceguid 
);

/* IRAPISession::CeGetClassName  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
int CeGetClassName( 
 HWND hWnd, 
 LPWSTR lpClassName, 
 Int nMaxCount 
);

/* IRAPISession::CeGetDesktopDeviceCaps  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
int CeGetDesktopDeviceCaps(
 int nIndex 
);

/* IRAPISession::CeGetDiskFreeSpaceEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
int CeGetDiskFreeSpaceEx( 
 LPCTSTR _lpDirectoryName,, 
 PULARGE_INTEGER lpFreeBytesAvailable,, 
 PULARGE_INTEGER lpTotalNumberOfBytes,, 
 PULARGE_INTEGER lpTotalNumberOfFreeBytes
);

/* IRAPISession::CeGetFileAttributes  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
DWORD CeGetFileAttributes(
 LPCWSTR lpFileName 
);

/* IRAPISession::CeGetFileSize  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
DWORD CeGetFileSize( 
 HANDLE hFile, 
 LPDWORD lpFileSizeHigh 
);

/* IRAPISession::CeGetFileTime  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeGetFileTime( 
 HANDLE hFile, 
 LPFILETIME lpCreationTime, 
 LPFILETIME lpLastAccessTime, 
 LPFILETIME lpLastWriteTime 
);

/* IRAPISession::CeGetLastError  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
DWORD CeGetLastError( void );

/* IRAPISession::CeGetSpecialFolderPath  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
DWORD CeGetSpecialFolderPath( 
 Int nFolder, 
 DWORD nBufferLength, 
 LPWSTR lpBuffer 
);

/* IRAPISession::CeGetStoreInformation  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeGetStoreInformation( 
 LPSTORE_INFORMATION lpsi 
);

/* IRAPISession::CeGetSystemInfo  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
VOID CeGetSystemInfo (
 LPSYSTEM_INFO lpSystemInfo 
);

/* IRAPISession::CeGetSystemMetrics  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
INT CeGetSystemMetrics(
 INT nIndex
);

/* IRAPISession::CeGetSystemPowerStatusEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeGetSystemPowerStatusEx(
 PSYSTEM_POWER_STATUS_EX pstatus, 
 BOOL fUpdate 
);

/* IRAPISession::CeGetTempPath  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
DWORD CeGetTempPath(
 DWORD nBufferLength,
 LPWSTR lpBuffer 
);

/* IRAPISession::CeGetVersionEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeGetVersionEx(
 LPCEOSVERSIONINFO lpVersionInformation 
);

/* IRAPISession::CeGetWindow  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HWND CeGetWindow( 
 HWND hWnd, 
 UINT uCmd 
);

/* IRAPISession::CeGetWindowLong  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeGetWindowLong(
 HWND hWnd, 
 Int nIndex 
);

/* IRAPISession::CeGetWindowText  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
int CeGetWindowText (
 HWND hWnd, 
 LPWSTR lpString, 
 int nMaxCount 
);

/* IRAPISession::CeGlobalMemoryStatus  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
void CeGlobalMemoryStatus(
 LPMEMORYSTATUS lpmst
);

/* IRAPISession::CeMountDBVol  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeMountDBVol( 
 PCEGUID pceguid, 
 LPWSTR lpszDBVol,
 DWORD dwFlags 
);

/* IRAPISession::CeMoveFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeMoveFile(
 LPCWSTR lpExistingFileName, 
 LPCWSTR lpNewFileName 
);

/* IRAPISession::CeOidGetInfo  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeOidGetInfo(
 CEOID oid, 
 CEOIDINFO * poidInfo 
);

/* IRAPISession::CeOidGetInfoEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeOidGetInfoEx(
 PCEGUID pceguid, 
 CEOID oid,
 CEOIDINFO * poidInfo 
);

/* IRAPISession::CeOpenDatabase  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HANDLE CeOpenDatabase (
 PCEOID poid, 
 LPWSTR lpszName, 
 CEPROPID propid, 
 DWORD dwFlags, 
 HWND hwndNotify 
);

/* IRAPISession::CeOpenDatabaseEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HANDLE CeOpenDatabaseEx( 
 PCEGUID pceguid, 
 PCEOID poid,
 LPWSTR lpszName, 
 CEPROPID propid, 
 DWORD dwFlags,
 CENOTIFYREQUEST * pRequest 
);

/* IRAPISession::CeQueryInstructionSet  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeQueryInstructionSet(
 DWORD dwInstructionSet,
 LPDWORD lpdwCurrentInstructionSet
);

/* IRAPISession::CeRapiFreeBuffer  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CeRapiFreeBuffer( 
 LPVOID Buffer 
);

/* IRAPISession::CeRapiGetError  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CeRapiGetError(void);

/* IRAPISession::CeRapiInit  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESUL CeRapiInit();

/* IRAPISession::CeRapiInvoke  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CeRapiInvoke(
 LPCWSTR pDllPath,
 LPCWSTR pFunctionName,
 DWORD cbInput,
 BYTE * pInput,
 DWORD * pcbOutput,
 BYTE ** ppOutput,
 IRAPIStream ** ppIRAPIStream,
 DWORD dwReserved
);

/* IRAPISession::CeRapiUninit  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CeRapiUninit ();

/* IRAPISession::CeReadFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeReadFile ( 
 HANDLE hFile, 
 LPVOID lpBuffer, 
 DWORD nNumberOfBytesToRead, 
 LPDWORD lpNumberOfBytesRead, 
 LPOVERLAPPED lpOverlapped 
);

/* IRAPISession::CeReadRecordProps  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeReadRecordProps(
 HANDLE hDbase, 
 DWORD dwFlags, 
 LPWORD lpcPropID, 
 CEPROPID * rgPropID, 
 LPBYTE * lplpBuffer, 
 LPDWORD lpcbBuffer 
);

/* IRAPISession::CeReadRecordPropsEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeReadRecordPropsEx( 
 HANDLE hDbase, 
 DWORD dwFlags,
 LPWORD lpcPropID, 
 CEPROPID * rgPropID, 
 LPBYTE * lplpBuffer,
 LPDWORD lpcbBuffer, 
 HANDLE hHeap 
);

/* IRAPISession::CeRegCloseKey  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegCloseKey(
 HKEY hKey 
);

/* IRAPISession::CeRegCreateKeyEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegCreateKeyEx( 
 HKEY hKey, 
 LPCWSTR lpszSubKey, 
 DWORD Reserved, 
 LPWSTR lpszClass, 
 DWORD dwOptions, 
 REGSAM samDesired, 
 LPSECURITY_ATTRIBUTES lpSecurityAttributes, 
 PHKEY phkResult, 
 LPDWORD lpdwDisposition 
);

/* IRAPISession::CeRegDeleteKey  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegDeleteKey( 
 HKEY hKey, 
 LPCWSTR lpszSubKey 
);

/* IRAPISession::CeRegDeleteValue  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegDeleteValue( 
 HKEY hKey, 
 LPCWSTR lpszValueName 
);

/* IRAPISession::CeRegEnumKeyEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegEnumKeyEx(
 HKEY hKey, 
 DWORD dwIndex, 
 LPWSTR lpName, 
 LPDWORD lpcbName, 
 LPDWORD lpReserved, 
 LPWSTR lpClass, 
 LPDWORD lpcbClass, 
 PFILETIME lpftLastWriteTime 
);

/* IRAPISession::CeRegEnumValue  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegEnumValue( 
 HKEY hKey, 
 DWORD dwIndex, 
 LPWSTR lpszValueName, 
 LPDWORD lpcbValueName, 
 LPDWORD lpReserved, 
 LPDWORD lpType, 
 LPBYTE lpData, 
 LPDWORD lpcbData 
);

/* IRAPISession::CeRegOpenKeyEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegOpenKeyEx( 
 HKEY hKey, 
 LPCWSTR lpszSubKey, 
 DWORD ulOptions, 
 REGSAM samDesired, 
 PHKEY phkResult 
);

/* IRAPISession::CeRegQueryInfoKey  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegQueryInfoKey( 
 HKEY hKey, 
 LPWSTR lpClass, 
 LPDWORD lpcbClass, 
 LPDWORD lpReserved, 
 LPDWORD lpcSubKeys, 
 LPDWORD lpcbMaxSubKeyLen, 
 LPDWORD lpcbMaxClassLen, 
 LPDWORD lpcValues, 
 LPDWORD lpcbMaxValueNameLen, 
 LPDWORD lpcbMaxValueLen, 
 LPDWORD lpcbSecurityDescriptor, 
 PFILETIME lpftLastWriteTime 
);

/* IRAPISession::CeRegQueryValueEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegQueryValueEx( 
 HKEY hKey, 
 LPCWSTR lpValueName, 
 LPDWORD lpReserved, 
 LPDWORD lpType, 
 LPBYTE lpData, 
 LPDWORD lpcbData 
);

/* IRAPISession::CeRegSetValueEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
LONG CeRegSetValueEx (
 HKEY hKey,
 LPCWSTR lpValueName,
 DWORD Reserved,
 DWORD dwType,
 LPBYTE lpData,
 DWORD cbData
);

/* IRAPISession::CeRemoveDirectory  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeRemoveDirectory(
 LPCWSTR lpPathName 
);

/* IRAPISession::CeSeekDatabase  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeSeekDatabase(
 HANDLE hDatabase, 
 DWORD dwSeekType, 
 DWORD dwValue, 
 LPDWORD lpdwIndex 
);

/* IRAPISession::CeSetDatabaseInfo  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSetDatabaseInfo(
 CEOID oidDbase, 
 CEDBASEINFO * pNewInfo 
);

/* IRAPISession::CeSetDatabaseInfoEx  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSetDatabaseInfoEx( 
 PCEGUID pceguid, 
 CEOID oidDbase,
 CEDBASEINFO * pNewInfo 
);

/* IRAPISession::CeSetEndOfFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSetEndOfFile( 
 HANDLE hFile 
);

/* IRAPISession::CeSetFileAttributes  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSetFileAttributes(
 LPCWSTR lpFileName, 
 DWORD dwFileAttributes 
);

/* IRAPISession::CeSetFilePointer  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
DWORD CeSetFilePointer( 
 HANDLE hFile, 
 LONG lDistanceToMove, 
 PLONG lpDistanceToMoveHigh, 
 DWORD dwMoveMethod 
);

/* IRAPISession::CeSetFileTime  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSetFileTime (
 HANDLE hFile,
 LPFILETIME lpCreationTime,
 LPFILETIME lpLastAccessTime,
 LPFILETIME lpLastWriteTime
);

/* IRAPISession::CeSHCreateShortcut  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSHCreateShortcut(
 LPWSTR lpszShortcut, 
 LPWSTR lpszTarget 
);

/* IRAPISession::CeSHGetShortcutTarget  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeSHGetShortcutTarget(
 LPWSTR lpszShortcut, 
 LPWSTR lpszTarget, 
 Int cbMax 
);

/* IRAPISession::CeSyncStart  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CeSyncStart(
 LPCWSTR szCommand
);

/* IRAPISession::CeSyncStop  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT CeSyncStop();

/* IRAPISession::CeUnmountDBVol  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeUnmountDBVol( 
 PCEGUID pceguid 
);

/* IRAPISession::CeWriteFile  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
BOOL CeWriteFile( 
 HANDLE hFile, 
 LPCVOID lpBuffer, 
 DWORD nNumberOfBytesToWrite, 
 LPDWORD lpNumberOfBytesWritten, 
 LPOVERLAPPED lpOverlapped 
);

/* IRAPISession::CeWriteRecordProps  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
CEOID CeWriteRecordProps(
 HANDLE hDbase, 
 CEOID oidRecord, 
 WORD cPropID, 
 CEPROPVAL * rgPropVal 
);

/* IRAPISink::OnDeviceConnected  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT OnDeviceConnected( 
 IRAPIDevice* pIDevice 
);

/* IRAPISink::OnDeviceDisconnected  [function; ce-only; CE 6.0..699; ole32.lib, rapiuuid.lib] */
HRESULT OnDeviceDisconnected( 
 IRAPIDevice* pIDevice 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT FindDevices( RAPIDEVICEID *pDeviceID, RAPI_GETDEVICEOPCODE opFlags,..IRAPIDevice** ppIDevice );
HRESULT GetConnectStat( RAPI_DEVICESTATUS* pStat );
HRESULT OnDeviceConnected( IRAPIDevice* pIDevice );
HRESULT OnDeviceDisconnected( IRAPIDevice* pIDevice );
HRESULT UnAdvise( DWORD dwContext );

#endif /* _RAPI2_ */
