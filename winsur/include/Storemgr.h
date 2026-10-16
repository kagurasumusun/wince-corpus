/* Storemgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 26 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _STOREMGR_
#define _STOREMGR_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CE_VOLUME_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct _CE_VOLUME_INFO{
 DWORD cbSize;
 DWORD dwAttributes;
 DWORD dwFlags;
 DWORD dwBlockSize;
 TCHAR szStoreName[STORENAMESIZE];
 TCHAR szPartitionName[PARTITIONNAMESIZE];
} CE_VOLUME_INFO, *PCE_VOLUME_INFO, *LPCE_VOLUME_INFO;

/* PARTINFO  [struct; ce-only; CE 5.0..699] */
typedef struct {
 DWORD cbSize;
 TCHAR szPartitionName[PARTITIONNAMESIZE];
 TCHAR szFileSys[FILESYSNAMESIZE];
 TCHAR szVolumeName[VOLUMENAMESIZE];
 SECTORNUM snNumSectors;
 FILETIME ftCreated;
 FILETIME ftLastModified;
 DWORD dwAttributes;
 BYTE bPartType;
} PARTINFO, *PPARTINFO;

/* STORAGECONTEXT  [struct; ce-only; CE 5.0..699] */
typedef struct tagSTORAGECONTEXT {
 DWORD cbSize;
 STOREINFO StoreInfo;
 PARTINFO PartInfo;
 DWORD dwFlags;
} STORAGECONTEXT, *PSTORAGECONTEXT;

/* STORAGEDEVICEINFO  [struct; ce-only; CE 5.0..699] */
typedef struct tagSTORAGEDEVICEINFO {
 DWORD cbSize;
 TCHAR szProfile[PROFILENAMESIZE];
 DWORD dwDeviceClass;
 DWORD dwDeviceType;
 DWORD dwDeviceFlags;
} STORAGEDEVICEINFO, *PSTORAGEDEVICEINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CeGetVolumeInfo  [function; ce-only; CE 5.0..699; Storeapi.lib] */
WINBASEAPI BOOL CeGetVolumeInfo(
 LPCWSTR pszRootPath,
 CE_VOLUME_INFO_LEVEL InfoLevel,
 LPCE_VOLUME_INFO lpVolumeInfo
);

/* CreatePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI CreatePartition(
 HANDLE hStore,
 LPCTSTR szPartitionName,
 SECTORNUM snNumSectors
);

/* CreatePartitionEx  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI CreatePartitionEx(
 HANDLE hStore,
 LPCTSTR szPartitionName,
 BYTE bPartType,
 SECTORNUM snNumSectors
);

/* DeletePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI DeletePartition(
 HANDLE hStore,
 LPCTSTR szPartitionName
);

/* DismountPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI DismountPartition(
 HANDLE hPartition
);

/* DismountStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI DismountStore(
 HANDLE hStore
);

/* FindClosePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FindClosePartition(
 HANDLE hSearch
);

/* FindCloseStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FindCloseStore(
 HANDLE hSearch
);

/* FindFirstPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE WINAPI FindFirstPartition(
 HANDLE hStore,
 PPARTINFO pPartInfo
);

/* FindFirstStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE WINAPI FindFirstStore(
 PSTOREINFO pStoreInfo
);

/* FindNextPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FindNextPartition(
 HANDLE hSearch,
 PPARTINFO pPartInfo
);

/* FindNextStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FindNextStore(
 HANDLE hSearch,
 PSTOREINFO pStoreInfo
);

/* FormatPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FormatPartition(
 HANDLE hPartition
);

/* FormatPartitionEx  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FormatPartitionEx(
 HANDLE hPartition,
 BYTE bPartType,
 BOOL bAuto
);

/* FormatStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FormatStore(
 HANDLE hStore
);

/* GetPartitionInfo  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI GetPartitionInfo(
 HANDLE hPartition,
 PPARTINFO pPartInfo
);

/* GetStoreInfo  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI GetStoreInfo(
 HANDLE hStore,
 PSTOREINFO pStoreInfo
);

/* MountPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI MountPartition(
 HANDLE hPartition
);

/* OpenPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE WINAPI OpenPartition(
 HANDLE hStore,
 LPCTSTR szPartitionName
);

/* OpenStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE OpenStore(
 LPCSTR szDeviceName
);

/* RenamePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI RenamePartition(
 HANDLE hPartition,
 LPCTSTR szNewName
);

/* SetPartitionAttributes  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI SetPartitionAttributes(
 HANDLE hPartition,
 DWORD dwAttrs
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _CE_VOLUME_INFO{DWORD cbSize;DWORD dwAttributes;DWORD dwFlags; DWORD dwBlockSize;TCHAR szStoreName[STORENAMESIZE];TCHARszPartitionName[PARTITIONNAMESIZE]; } CE_VOLUME_INFO, *PCE_VOLUME_INFO, *LPCE_VOLUME_INFO;
typedef struct {DWORD cbSize;TCHAR szPartitionName[PARTITIONNAMESIZE];TCHAR szFileSys[FILESYSNAMESIZE];TCHARszVolumeName[VOLUMENAMESIZE];SECTORNUM snNumSectors;FILETIME ftCreated;FILETIME ftLastModified;DWORD dwAttributes;BYTE bPartType;} PARTINFO, *PPARTINFO;
typedef struct tagSTORAGECONTEXT {DWORD cbSize;STOREINFO StoreInfo;PARTINFO PartInfo;DWORD dwFlags;} STORAGECONTEXT, *PSTORAGECONTEXT;
typedef struct tagSTORAGEDEVICEINFO {DWORD cbSize;TCHAR szProfile[PROFILENAMESIZE];DWORD dwDeviceClass;DWORD dwDeviceType;DWORD dwDeviceFlags;} STORAGEDEVICEINFO, *PSTORAGEDEVICEINFO;

#endif /* _STOREMGR_ */
