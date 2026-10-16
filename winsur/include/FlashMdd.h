/* FlashMdd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 5 constants, 5 declarations, 3 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FLASHMDD_
#define _FLASHMDD_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FLASH_PARTITION_FLAG_DIRECT_MAP 0x00000001
#define FLASH_PARTITION_FLAG_READ_ONLY 0x00000002
#define FLASH_PARTITION_FLAG_RESERVED 0x00000004
#define FLASH_SECTOR_REQUEST_FLAG_ATOMIC 0x00000001
#define FLASH_SECTOR_REQUEST_FLAG_WRITE_THROUGH 0x00000002

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FLASH_PARTITION_CREATE_INFO  [struct; ce-only; CE 6.0..699] */

/* FLASH_PARTITION_INFO  [struct; ce-only; CE 6.0..699] */

/* FLASH_TRANSFER_REQUEST  [struct; ce-only; CE 6.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FLASH_GET_SECTOR_ADDRESS  [struct; ce-only; CE 6.0..699] */
typedef struct __FLASH_GET_SECTOR_ADDRESS {
 PARTITION_ID PartitionId;
 DWORD SectorCount;
 DWORD LogicalSectorList[1];
} FLASH_GET_SECTOR_ADDRESS;

/* FLASH_PARTITION_FLAGS  [enum; ce-only; CE 6.0..699] */
enum FLASH_PARTITION_FLAGS {
 FLASH_PARTITION_FLAG_DIRECT_MAP = 0x00000001,
 FLASH_PARTITION_FLAG_READ_ONLY = 0x00000002,
 FLASH_PARTITION_FLAG_RESERVED = 0x00000004,
};

/* FLASH_SECTOR_DELETE  [struct; ce-only; CE 6.0..699] */
typedef struct __FLASH_SECTOR_DELETE {
 PARTITION_ID PartitionId;
 DWORD SectorRunCount;
 SECTOR_RUN SectorRunList[1];
} FLASH_SECTOR_DELETE;

/* FLASH_SECTOR_TRANSFER  [struct; ce-only; CE 6.0..699] */
typedef struct __FLASH_SECTOR_TRANSFER {
 SECTOR_RUN SectorRun;
 BYTE* pBuffer;
 VOID* pPhysicalAddress;
} FLASH_SECTOR_TRANSFER;

/* FLASH_TRANSFER_REQUEST_FLAGS  [enum; ce-only; CE 6.0..699] */
enum FLASH_TRANSFER_REQUEST_FLAGS {
 FLASH_SECTOR_REQUEST_FLAG_ATOMIC = 0x00000001,
 FLASH_SECTOR_REQUEST_FLAG_WRITE_THROUGH = 0x00000002,
};
#endif /* _WIN32_WCE */

#endif /* _FLASHMDD_ */
