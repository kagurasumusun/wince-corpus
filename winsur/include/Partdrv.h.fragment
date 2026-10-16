/* Partdrv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _PARTDRV_
#define _PARTDRV_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PD_PARTINFO  [struct; ce-only; CE 5.0..699] */
typedef struct _PD_PARTINFO {
 DWORD cbSize;
 TCHAR szPartitionName[PARTITIONNAMESIZE];
 SECTORNUM snNumSectors;
 FILETIME ftCreated;
 FILETIME ftLastModified;
 DWORD dwAttributes;
 BYTE bPartType;
} PD_PARTINFO, *PPD_PARTINFO;

/* PD_STOREINFO  [struct; ce-only; CE 5.0..699] */
typedef struct _PD_STOREINFO {
 DWORD cbSize;
 SECTORNUM snNumSectors;
 DWORD dwBytesPerSector;
 SECTORNUM snFreeSectors;
 SECTORNUM snBiggestPartCreatable;
 FILETIME ftCreated;
 FILETIME ftLastModified;
 DWORD dwAttributes;
} PD_STOREINFO, *PPD_STOREINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PD_ClosePartition  [function; ce-only; CE 5.0..699] */
void PD_ClosePartition(
 DWORD dwPartitionId
);

/* PD_CloseStore  [function; ce-only; CE 5.0..699] */
void PD_CloseStore(
 DWORD dwStoreId
);

/* PD_CreatePartition  [function; ce-only; CE 5.0..699] */
DWORD PD_CreatePartition(
 DWORD dwStoreId,
 LPCTSTR szPartName,
 BYTE bPartType, 
 SECTORNUM numSectors, 
 BOOL bAuto
);

/* PD_DeletePartition  [function; ce-only; CE 5.0..699] */
DWORD PD_DeletePartition(
 DWORD dwStoreId, 
 LPCTSTR szPartName
);

/* PD_DeviceIoControl  [function; ce-only; CE 5.0..699] */
DWORD PD_DeviceIoControl(
 DWORD dwPartitionId, 
 DWORD dwCode, 
 PBYTE pInBuf, 
 DWORD nInBufSize, 
 PBYTE pOutBuf, 
 DWORD nOutBufSize, 
 PDWORD pBytesReturned
);

/* PD_FindPartitionClose  [function; ce-only; CE 5.0..699] */
void PD_FindPartitionClose(
 DWORD dwSearchId
);

/* PD_FindPartitionNext  [function; ce-only; CE 5.0..699] */
DWORD PD_FindPartitionNext(
 DWORD dwSearchId, 
 PD_PARTINFO* pInfo
);

/* PD_FindPartitionStart  [function; ce-only; CE 5.0..699] */
DWORD PD_FindPartitionStart(
 DWORD dwStoreId, 
 LPDWORD pdwSearchId
);

/* PD_FormatPartition  [function; ce-only; CE 5.0..699] */
DWORD PD_FormatPartition(
 DWORD dwStoreId, 
 LPCTSTR szPartName, 
 BYTE bPartType, 
 BOOL bAuto
);

/* PD_FormatStore  [function; ce-only; CE 5.0..699] */
DWORD PD_FormatStore(
 DWORD dwStoreId
);

/* PD_GetPartitionInfo  [function; ce-only; CE 5.0..699] */
DWORD PD_GetPartitionInfo(
 DWORD dwStoreId, 
 LPCTSTR szPartName, 
 PD_PARTINFO* pInfo
);

/* PD_GetStoreInfo  [function; ce-only; CE 5.0..699] */
DWORD PD_GetStoreInfo(
 DWORD dwStoreId, 
 PD_STOREINFO* pInfo
);

/* PD_IsStoreFormatted  [function; ce-only; CE 5.0..699] */
DWORD PD_IsStoreFormatted(
 DWORD dwStoreId
);

/* PD_OpenPartition  [function; ce-only; CE 5.0..699] */
DWORD PD_OpenPartition(
 DWORD dwStoreId, 
 LPCTSTR szPartName, 
 LPDWORD pdwPartitionId
);

/* PD_OpenStore  [function; ce-only; CE 5.0..699] */
DWORD PD_OpenStore(
 HANDLE hDisk, 
 LPDWORD pdwStoreId
);

/* PD_RenamePartition  [function; ce-only; CE 5.0..699] */
DWORD PD_RenamePartition(
 DWORD dwStoreId, 
 LPCTSTR szOldName, 
 LPCTSTR szNewName
);

/* PD_SetPartitionAttrs  [function; ce-only; CE 5.0..699] */
DWORD PD_SetPartitionAttrs(
 DWORD dwStoreId, 
 LPCTSTR szPartName, 
 DWORD dwAttr
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PD_PARTINFO {DWORD cbSize;TCHAR szPartitionName[PARTITIONNAMESIZE];SECTORNUM snNumSectors;FILETIME ftCreated;FILETIME ftLastModified;DWORD dwAttributes;BYTE bPartType;} PD_PARTINFO, *PPD_PARTINFO;
typedef struct _PD_STOREINFO {DWORD cbSize;SECTORNUM snNumSectors;DWORD dwBytesPerSector;SECTORNUM snFreeSectors;SECTORNUM snBiggestPartCreatable;FILETIME ftCreated;FILETIME ftLastModified;DWORD dwAttributes;} PD_STOREINFO, *PPD_STOREINFO;

#endif /* _PARTDRV_ */
