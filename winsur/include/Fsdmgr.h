/* Fsdmgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 82 declarations, 0 outlines, 0 base types, 0 extra macros, 9 extra decls
 */
#ifndef _FSDMGR_
#define _FSDMGR_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FDI_CHS_UNCERTAIN 0x00000002
#define FDI_MBR 0x00000001
#define FDI_PAGEABLE 0x00000008
#define FDI_READONLY 0x00000010
#define FDI_RESERVED 0xffffffe0
#define FDI_UNFORMATTED 0x00000004
#define FSD_FLAG_LOCKFILE_SUPPORTED 0x8
#define FSD_FLAG_NETWORK 0x10
#define FSD_FLAG_TRANSACT_WRITES 0x2
#define FSD_FLAG_TRANSACTION_SAFE 0x1
#define FSD_FLAG_WFSC_SUPPORTED 0x4

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* FSD_BUFFER_INFO  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _FSD_BUFFER_INFO{
 PBYTE pBuffer;
 DWORD cbBuffer;
} FSD_BUFFER_INFO, *PFBI;

/* FSD_DISK_INFO  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _FSD_DISK_INFO{ 
 DWORD cSectors;
 DWORD cbSector;
 DWORD cCylinders;
 DWORD cHeadsPerCylinder;
 DWORD cSectorsPerTrack;
 DWORD dwFlags;
} FSD_DISK_INFO, *PFDI;

/* FSD_SCATTER_GATHER_INFO  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _FSD_SCATTER_GATHER_INFO{
 DWORD dwFlags;
 DWORD idDsk;
 DWORD dwSector;
 DWORD cSectors;
 PFDI pfdi;
 DWORD cfbi;
 PFBI pfbi;
 PFNFSG pfnCallBack;
} FSD_SCATTER_GATHER_INFO, *PFSGI;

/* FSD_SCATTER_GATHER_RESULTS  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _FSD_SCATTER_GATHER_RESULTS{
 DWORD dwFlags;
 DWORD cSectorsTransferred;
} FSD_SCATTER_GATHER_RESULTS, *PFSGR;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* FILTERHOOK  [struct; ce-only; CE 4.0..699] */
typedef struct tagFILTERHOOK {
 DWORD cbSize;
 DWORD hVolume;
 PCLOSEVOLUME pCloseVolume;
 PCREATEDIRECTORYW pCreateDirectoryW; 
 PREMOVEDIRECTORYW pRemoveDirectoryW;
 PGETFILEATTRIBUTESW pGetFileAttributesW;
 PSETFILEATTRIBUTESW pSetFileAttributesW;
 PDELETEFILEW pDeleteFileW;
 PMOVEFILEW pMoveFileW;
 PDELETEANDRENAMEFILEW pDeleteAndRenameFileW;
 PGETDISKFREESPACEW pGetDiskFreeSpaceW;
 PNOTIFY pNotify;
 PREGISTERFILESYSTEMFUNCTION pRegisterFileSystemFunction;
 PFINDFIRSTFILEW pFindFirstFileW;
 PFINDNEXTFILEW pFindNextFileW;
 PFINDCLOSE pFindClose;
 PCREATEFILEW pCreateFileW;
 PREADFILE pReadFile;
 PREADFILEWITHSEEK pReadFileWithSeek;
 PWRITEFILE pWriteFile;
 PWRITEFILEWITHSEEK pWriteFileWithSeek;
 PSETFILEPOINTER pSetFilePointer;
 PGETFILESIZE pGetFileSize;
 PGETFILEINFORMATIONBYHANDLE pGetFileInformationByHandle;
 PFLUSHFILEBUFFERS pFlushFileBuffers;
 PGETFILETIME pGetFileTime;
 PSETFILETIME pSetFileTime;
 PSETENDOFFILE pSetEndOfFile;
 PDEVICEIOCONTROL pDeviceIoControl;
 PCLOSEFILE pCloseFile;
 PREFRESHVOLUME pRefreshVolume;
} FILTERHOOK, *PFILTERHOOK;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FILELOCKSTATE  [struct; ce-only; CE 5.0..699; Fsdmgr.lib] */
typedef struct _FILELOCKSTATE {
 DWORD dwPosLow;
 DWORD dwPosHigh;
 DWORD dwAccess;
 LPCRITICAL_SECTION lpcs;
 BOOL fTerminal;
 HANDLE hevUnlock;
 DWORD cQueue;
 PVOID pvLockContainer;
} FILELOCKSTATE, * PFILELOCKSTATE;

/* FSD_VOLUME_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct _FSD_VOLUME_INFO {
 DWORD cbSize;
 DWORD dwFSVersion; 
 TCHAR szFSDDesc[MAX_FSD_DESCRIPTOR];
 TCHAR szFSDSubType[MAX_FSD_DESCRIPTOR];
 DWORD dwAttributes;
 DWORD dwBlockSize;
 DWORD dwFlags;
} FSD_VOLUME_INFO, *PFSD_VOLUME_INFO;

/* PEMPTYLOCKCONTAINER  [callback; ce-only; CE 5.0..699; Fsdmgr.lib] */
typedef VOID(*PEMPTYLOCKCONTAINER)(
 PFILELOCKSTATE pFileLockState
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 2.11..2.12, 3.0..399, 5.0..599 */

/* MyFSD_RegisterFileSystemFunction  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..599; Fsdmgr.lib] */
BOOL MyFSD_RegisterFileSystemFunction( 
PVOLUME pVolume, 
SHELLFILECHANGEFUNC_t pfn);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* FSD_MountDisk  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL FSD_MountDisk( 
 HDSK hdsk
);

/* FSD_UnmountDisk  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL FSD_UnmountDisk( 
 HDSK hdsk
);

/* FSDMGR_GetVolumeName  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib, fsdmgr.lib] */
INT FSDMGR_GetVolumeName( 
 HVOL hVol, 
 PWSTR pwsName,
 int cchMax
);

/* FSDMGR_ReadDisk  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib, fsdmgr.lib] */
DWORD FSDMGR_ReadDisk( 
 HDSK hDsk, 
 DWORD dwSector,
 DWORD cSectors, 
 PBYTE pBuffer, 
 DWORD cbBuffer
);

/* FSDMGR_ReadDiskEx  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib, fsdmgr.lib] */
DWORD FSDMGR_ReadDiskEx( 
 PFSGI pfsgi, 
 PFSGR pfsgr
);

/* FSDMGR_RegisterVolume  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib, fsdmgr.lib] */
HVOL FSDMGR_RegisterVolume( 
 HDSK hDsk, 
 PWSTR pwsName, 
 PVOLUME pVolume
);

/* FSDMGR_WriteDisk  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib, fsdmgr.lib] */
DWORD FSDMGR_WriteDisk( 
 HDSK hDsk, 
 DWORD dwSector,
 DWORD cSectors, 
 PBYTE pBuffer, 
 DWORD cbBuffer
);

/* FSDMGR_WriteDiskEx  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib, fsdmgr.lib] */
DWORD FSDMGR_WriteDiskEx( 
 PFSGI pfsgi, 
 PFSGR pfsgr
);

/* MyFSD_CloseFile  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_CloseFile( 
 PFILE pFile
);

/* MyFSD_CloseVolume  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_CloseVolume( 
 PVOLUME pVolume
);

/* MyFSD_CreateDirectoryW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_CreateDirectoryW( 
 PVOLUME pVolume, 
 PCWSTR pwsPathName, 
 PSECURITY_ATTRIBUTES pSecurityAttributes
);

/* MyFSD_CreateFileW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
HANDLE MyFSD_CreateFileW( 
 PVOLUME pVolume, 
 HANDLE hProc, 
 PCWSTR pwsFileName, 
 DWORD dwAccess, 
 DWORD dwShareMode,
 PSECURITY_ATTRIBUTES pSecurityAttributes, 
 DWORD dwCreate,
 DWORD dwFlagsAndAttributes, 
 HANDLE hTemplateFile
);

/* MyFSD_DeleteAndRenameFileW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_DeleteAndRenameFileW( 
 PVOLUME pVolume,
 LPCWSTR lpszDestFileName,
 LPCWSTR lpszSourceFileName
);

/* MyFSD_DeleteFileW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_DeleteFileW( 
 PVOLUME pVolume, 
 PCWSTR pwsFileName
);

/* MyFSD_DeviceIoControl  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_DeviceIoControl( 
 PFILE pFile, 
 DWORD dwIoControlCode, 
 PVOID pInBuf, 
 DWORD nInBufSize, 
 PVOID pOutBuf, 
 DWORD nOutBufSize, 
 PDWORD pBytesReturned, 
 OVERLAPPED* pOverlapped
);

/* MyFSD_FindClose  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_FindClose( 
 PSEARCH pSearch
);

/* MyFSD_FindFirstFileW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
HANDLE MyFSD_FindFirstFileW( 
 PVOLUME pVolume, 
 HANDLE hProc,
 PCWSTR pwsFileSpec, 
 PWIN32_FIND_DATAW pfd
);

/* MyFSD_FindNextFileW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_FindNextFileW( 
 PSEARCH pSearch, 
 PWIN32_FIND_DATAW pfd
);

/* MyFSD_FlushFileBuffers  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_FlushFileBuffers( 
 PFILE pFile
);

/* MyFSD_GetDiskFreeSpaceW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_GetDiskFreeSpaceW( 
 PVOLUME pVolume, 
 PCWSTR pwsPathName, 
 PDWORD pSectorsPerCluster,
 PDWORD pBytesPerSector, 
 PDWORD pFreeClusters, 
 PDWORD pClusters
);

/* MyFSD_GetFileAttributesW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
DWORD MyFSD_GetFileAttributesW( 
 PVOLUME pVolume,
 PCWSTR pwsFileName
);

/* MyFSD_GetFileInformationByHandle  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_GetFileInformationByHandle( 
 PFILE pFile,
 PBY_HANDLE_FILE_INFORMATION pFileInfo
);

/* MyFSD_GetFileSize  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
DWORD MyFSD_GetFileSize( 
 PFILE pFile, 
 PDWORD pFileSizeHigh
);

/* MyFSD_GetFileTime  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_GetFileTime( 
 PFILE pFile, 
 FILETIME* pCreation, 
 FILETIME* pLastAccess, 
 FILETIME* pLastWrite
);

/* MyFSD_MountDisk  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_MountDisk( 
 HDSK hdsk
);

/* MyFSD_MoveFileW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_MoveFileW( 
 PVOLUME pVolume,
 PCWSTR pwsOldFileName, 
 PCWSTR pwsNewFileName
);

/* MyFSD_Notify  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
void MyFSD_Notify( 
 PVOLUME pVolume, 
 DWORD dwFlags
);

/* MyFSD_ReadFile  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_ReadFile( 
 PFILE pFile, 
 PVOID pBuffer, 
 DWORD cbRead, 
 PDWORD pcbRead, 
 OVERLAPPED* pOverlapped
);

/* MyFSD_RemoveDirectoryW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_RemoveDirectoryW( 
 PVOLUME pVolume,
 PCWSTR pwsPathName
);

/* MyFSD_SetEndOfFile  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_SetEndOfFile( 
 PFILE pFile
);

/* MyFSD_SetFileAttributesW  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_SetFileAttributesW( 
 PVOLUME pVolume,
 PCWSTR pwsFileName, 
 DWORD dwFileAttributes
);

/* MyFSD_SetFilePointer  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
DWORD MyFSD_SetFilePointer( 
 PFILE pFile, 
 LONG lDistanceToMove, 
 PLONG pDistanceToMoveHigh, 
 DWORD dwMoveMethod
);

/* MyFSD_SetFileTime  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_SetFileTime( 
 PFILE pFile, 
 CONST FILETIME* pCreation, 
 CONST FILETIME* pLastAccess, 
 CONST FILETIME* pLastWrite 
);

/* MyFSD_UnmountDisk  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_UnmountDisk( 
 HDSK hdsk
);

/* MyFSD_WriteFile  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_WriteFile( 
 PFILE pFile, 
 PCVOID pBuffer, 
 DWORD cbWrite, 
 PDWORD pcbWritten, 
 OVERLAPPED* pOverlapped
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* FSDMGR_CreateFileHandle  [function; ce-only; CE 2.11..2.12, 3.0..699; Fsdmgr.lib, fsdmgr.lib] */
HANDLE FSDMGR_CreateFileHandle( 
 HVOL hVol, 
 HANDLE hProc,
 PFILE pFile
);

/* FSDMGR_CreateSearchHandle  [function; ce-only; CE 2.11..2.12, 3.0..699; Fsdmgr.lib, fsdmgr.lib] */
HANDLE FSDMGR_CreateSearchHandle( 
 HVOL hVol, 
 HANDLE hProc,
 PSEARCH pSearch
);

/* FSDMGR_DeregisterVolume  [function; ce-only; CE 2.11..2.12, 3.0..699; Fsdmgr.lib, fsdmgr.lib] */
void FSDMGR_DeregisterVolume( 
 HVOL hVol
);

/* FSDMGR_GetDiskInfo  [function; ce-only; CE 2.11..2.12, 3.0..699; Fsdmgr.lib, fsdmgr.lib] */
DWORD FSDMGR_GetDiskInfo( 
 HDSK hDsk, 
 PFDI pfdi
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* MyFSD_ReadFileWithSeek  [function; ce-only; CE 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_ReadFileWithSeek( 
 PFILE pFile, 
 PVOID pBuffer, 
 DWORD cbRead, 
 PDWORD pcbRead, 
 OVERLAPPED* pOverlapped, 
 DWORD dwLowOffset, 
 DWORD dwHighOffset
);

/* MyFSD_WriteFileWithSeek  [function; ce-only; CE 3.0..399, 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_WriteFileWithSeek( 
 PFILE pFile, 
 PCVOID pBuffer, 
 DWORD cbWrite, 
 PDWORD pcbWritten, 
 OVERLAPPED* pOverlapped,
 DWORD dwLowOffset, 
 DWORD dwHighOffset
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* FSDMGR_GetRegistryFlag  [function; ce-only; CE 4.0..699; Fsdmgr.lib] */
BOOL FSDMGR_GetRegistryFlag( 
 HDSK hDsk, 
 PCTSTR szValueName,
 PDWORD pdwFlag,
 DWORD dwSet 
);

/* FSDMGR_GetRegistryString  [function; ce-only; CE 4.0..699; Fsdmgr.lib] */
BOOL FSDMGR_GetRegistryString(
 HDSK hDsk,
 PCTSTR szValueName,
 PTSTR szValue,
 DWORD dwSize
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CachedRead  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD CachedRead(
 DWORD dwCacheId, 
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwReadFlags
);

/* CachedWrite  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD CachedWrite(
 DWORD dwCacheId, 
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwWriteFlags
);

/* CacheIoControl  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL CacheIoControl(
 DWORD dwCacheId, 
 DWORD dwIoControlCode,
 LPVOID lpInbuf,
 DWORD nInBufSize,
 LPVOID lpOutBuf,
 DWORD nOutBufSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);

/* CreateCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD CreateCache(
 HANDLE hDsk, 
 DWORD dwStart,
 DWORD dwEnd,
 DWORD dwCacheSize,
 DWORD dwBlockSize,
 DWORD dwCreateFlags
);

/* DeleteCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD DeleteCache(
 DWORD dwCacheId 
);

/* FlushCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD FlushCache(
 DWORD dwCacheId, 
 PSECTOR_LIST_ENTRY pSectorList,
 DWORD dwNumEntries,
 DWORD dwFlushFlags
);

/* FSD_HookVolume  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
PVOLUME FSD_HookVolume(
 HDSK hdsk,
 PFILTERHOOK pFilterHook
);

/* FSD_UnhookVolume  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL FSD_UnhookVolume(
 PVOLUME pvol
);

/* FSDMGR_DeviceHandleToHDSK  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
HDSK FSDMGR_DeviceHandleToHDSK(
 HANDLE hDisk
);

/* FSDMGR_DiskIoControl  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD FSDMGR_DiskIoControl( 
 HDSK hDsk, 
 DWORD dwIoControlCode,
 LPVOID lpInBuf,
 DWORD nInBufSize,
 LPVOID lpOutBuf,
 DWORD nOutBufSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);

/* FSDMGR_EmptyLockContainer  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_EmptyLockContainer(
 PFILELOCKSTATE pFileLockState
);

/* FSDMGR_GetRegistryValue  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL FSDMGR_GetRegistryValue( 
 HDSK hDsk, 
 PCTSTR szValueName,
 PDWORD pdwValue 
);

/* InvalidateCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD InvalidateCache(
 DWORD dwCacheId, 
 PSECTOR_LIST_ENTRY pSectorList,
 DWORD dwNumEntries,
 DWORD dwFlags
);

/* MyFSD_FsIoControl  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_FsIoControl( 
 DWORD pVol,
 DWORD dwIoControlCode,
 LPVOID lpInBuffer,
 DWORD nInBufferSize,
 LPVOID lpOutBuffer,
 DWORD nOutBufferSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);

/* MyFSD_GetVolumeInfo  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
MyFSD_GetVolumeInfo(
 DWORD dwVolume,
 FSD_VOLUME_INFO *pInfo
);

/* MyFSD_LockFileEx  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_LockFileEx(
 PFILE pFile, 
 DWORD dwFlags, 
 DWORD dwReserved, 
 DWORD nNumberOfBytesToLockLow, 
 DWORD nNumberOfBytesToLockHigh, 
 LPOVERLAPPED lpOverlapped
);

/* MyFSD_ReadFileScatter  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL ReadFileScatter(
 HANDLE hFile,
 FILE_SEGMENT_ELEMENT aSegmentArray[],
 DWORD nNumberOfBytesToRead,
 LPDWORD lpReserved,
 LPOVERLAPPED lpOverlapped
);

/* MyFSD_UnLockFileEx  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_UnlockFileEx(
 DWORD dwFile,
 DWORD dwReserved,
 DWORD nNumberOfBytesToUnlockLow,
 DWORD nNumberOfBytesToUnlockHigh,
 LPOVERLAPPED lpOverlapped
);

/* MyFSD_WriteFileGather  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL WriteFileGather(
 HANDLE hFile,
 FILE_SEGMENT_ELEMENT aSegmentArray[],
 DWORD nNumberOfBytesToWrite,
 LPDWORD lpReserved,
 LPOVERLAPPED lpOverlapped
);

/* ResizeCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD ResizeCache(
 DWORD dwCacheId, 
 DWORD dwSize,
 DWORD dwResizeFlags
);

/* SyncCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD SyncCache(
 DWORD dwCacheId, 
 PSECTOR_LIST_ENTRY pSectorList,
 DWORD dwNumEntries,
 DWORD dwSyncFlags
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FSDMGR_CachedRead  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_CachedRead(
 DWORD dwCacheId,
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwReadFlags
);

/* FSDMGR_CachedWrite  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_CachedWrite(
 DWORD dwCacheId,
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwWriteFlags
);

/* FSDMGR_CacheIoControl  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
BOOL FSDMGR_CacheIoControl(
 DWORD dwCacheId,
 DWORD dwIoControlCode,
 LPVOID lpInBuf,
 DWORD nInBufSize,
 LPVOID lpOutBuf,
 DWORD nOutBufSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);

/* FSDMGR_CreateCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_CreateCache(
 HDSK pDsk,
 DWORD dwStart,
 DWORD dwEnd,
 DWORD dwCacheSize,
 DWORD dwBlockSize,
 DWORD dwCreateFlags
);

/* FSDMGR_DeleteCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_DeleteCache(
 DWORD dwCacheId
);

/* FSDMGR_FlushCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_FlushCache(
 DWORD dwCacheId,
 PSECTOR_LIST_ENTRY pSectorList,
 DWORD dwNumEntries,
 DWORD dwFlushFlags
);

/* FSDMGR_InvalidateCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_InvalidateCache(
 DWORD dwCacheId,
 PSECTOR_LIST_ENTRY pSectorList,
 DWORD dwNumEntries,
 DWORD dwFlags
);

/* FSDMGR_ResizeCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_ResizeCache(
 DWORD dwCacheId,
 DWORD dwSize,
 DWORD dwResizeFlags
);

/* FSDMGR_SyncCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_SyncCache(
 DWORD dwCacheId,
 PSECTOR_LIST_ENTRY pSectorList,
 DWORD dwNumEntries,
 DWORD dwSyncFlags
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef union _FILE_SEGMENT_ELEMENT { PVOID64 Buffer;

/* struct */
typedef struct _FSD_BUFFER_INFO{PBYTE pBuffer;DWORD cbBuffer;} FSD_BUFFER_INFO, *PFBI;
typedef struct _FSD_DISK_INFO{DWORD cSectors;DWORD cbSector;DWORD cCylinders;DWORD cHeadsPerCylinder;DWORD cSectorsPerTrack;DWORD dwFlags;} FSD_DISK_INFO, *PFDI;
typedef struct _FILELOCKSTATE { DWORD dwPosLow; DWORD dwPosHigh; DWORD dwAccess; LPCRITICAL_SECTION lpcs; BOOL fTerminal; HANDLE hevUnlock; DWORD cQueue; PVOID pvLockContainer;} FILELOCKSTATE, * PFILELOCKSTATE;
typedef struct tagFILTERHOOK {DWORD cbSize;DWORD hVolume;PCLOSEVOLUME pCloseVolume;PCREATEDIRECTORYW pCreateDirectoryW; PREMOVEDIRECTORYW pRemoveDirectoryW;PGETFILEATTRIBUTESW pGetFileAttributesW;PSETFILEATTRIBUTESW pSetFileAttributesW;PDELETEFILEW pDeleteFileW;PMOVEFILEW pMoveFileW;PDELETEANDRENAMEFILEW pDeleteAndRenameFileW;PGETDISKFREESPACEW pGetDiskFreeSpaceW;PNOTIFY pNotify;PREGISTERFILESYSTEMFUNCTION pRegisterFileSystemFunction;PFINDFIRSTFILEW pFindFirstFileW;PFINDNEXTFILEW pFindNextFileW;PFINDCLOSE pFindClose;PCREATEFILEW pCreateFileW;PREADFILE pReadFile;PREADFILEWITHSEEK pReadFileWithSeek;PWRITEFILE pWriteFile;PWRITEFILEWITHSEEK pWriteFileWithSeek;PSETFILEPOINTER pSetFilePointer;PGETFILESIZE pGetFileSize;PGETFILEINFORMATIONBYHANDLE pGetFileInformationByHandle;PFLUSHFILEBUFFERS pFlushFileBuffers;PGETFILETIME pGetFileTime;PSETFILETIME pSetFileTime;PSETENDOFFILE pSetEndOfFile;PDEVICEIOCONTROL pDeviceIoControl;PCLOSEFILE pCloseFile;PREFRESHVOLUME pRefreshVolume;} FILTERHOOK, *PFILTERHOOK;
typedef struct _FSD_VOLUME_INFO {
  DWORD cbSize;
  DWORD dwFSVersion ;
  TCHAR szFSDDesc[MAX_FSD_DESCRIPTOR];
  TCHAR szFSDSubType[MAX_FSD_DESCRIPTOR];
  DWORD dwAttributes;
  DWORD dwBlockSize;
  DWORD dwFlags;
} FSD_VOLUME_INFO, *PFSD_VOLUME_INFO;
typedef struct _FSD_SCATTER_GATHER_INFO{DWORD dwFlags;DWORD idDsk;DWORD dwSector;DWORD cSectors;PFDI pfdi;DWORD cfbi;PFBI pfbi;PFNFSG pfnCallBack;} FSD_SCATTER_GATHER_INFO, *PFSGI;
typedef struct _FSD_SCATTER_GATHER_RESULTS{DWORD dwFlags;DWORD cSectorsTransferred;} FSD_SCATTER_GATHER_RESULTS, *PFSGR;

/* function */
BOOL MyFSD_EmptyLockContainer( PFILELOCKSTATE pFileLockState );

#endif /* _FSDMGR_ */
