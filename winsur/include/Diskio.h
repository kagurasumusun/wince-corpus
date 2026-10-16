/* Diskio.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 1 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _DISKIO_
#define _DISKIO_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DISK_COPY_EXTERNAL  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DELETE_SECTOR_INFO {DWORDcbSize;DWORDstartsector;DWORDnumsectors;}DELETE_SECTOR_INFO, *PDELETE_SECTOR_INFO;
typedef struct _DISK_COPY_EXTERNAL {DWORDcbSize;DWORDdwDirection;PVOIDpUserData; DWORDcbUserDataSize;TCHARszCancelEventName[MAX_PATH]; ULARGE_INTEGER ulFileSize; HANDLE hCallerProc; DWORD cbSectorListSize;} DISK_COPY_EXTERNAL, *PDISK_COPY_EXTERNAL;
typedef struct _DISK_INFO {DWORD di_total_sectors;DWORD di_bytes_per_sect;DWORD di_cylinders;DWORD di_heads;DWORD di_sectors; DWORD di_flags; } DISK_INFO, *PDISK_INFO;
typedef struct _SECTOR_LIST_ENTRY {DWORDdwStartSector;DWORDdwNumSectors;} SECTOR_LIST_ENTRY, *PSECTOR_LIST_ENTRY;
typedef struct _SG_BUF {PUCHAR sb_buf;DWORD sb_len;} SG_BUF, *PSG_BUF;
typedef struct _SG_REQ {DWORD sr_start;DWORD sr_num_sec;DWORD sr_num_sg;DWORD sr_status;PFN_REQDONE sr_callback;SG_BUF sr_sglist[1];} SG_REQ, *PSG_REQ;
typedef struct _STORAGE_IDENTIFICATION {
  DWORD dwSize;
  DWORD dwFlags;
  DWORD dwManufactureIDOffset;
  DWORD dwSerialNumOffset;
} STORAGE_IDENTIFICATION, *PSTORAGE_IDENTIFICATION;

#endif /* _DISKIO_ */
