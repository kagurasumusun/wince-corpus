/* FlashCommon.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _FLASHCOMMON_
#define _FLASHCOMMON_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BLOCK_RUN  [struct; ce-only] */
#ifndef __WINCE_DEFINED___BLOCK_RUN
#define __WINCE_DEFINED___BLOCK_RUN
#ifndef __WINCE_DEFINED_BLOCK_RUN
#define __WINCE_DEFINED_BLOCK_RUN
typedef struct __BLOCK_RUN {
 ULONG RegionIndex;
 ULONGLONG StartBlock;
 ULONG BlockCount;
} BLOCK_RUN;
#endif /* __WINCE_DEFINED_BLOCK_RUN */
#endif /* __WINCE_DEFINED___BLOCK_RUN */
#ifndef __WINCE_DEFINED_PBLOCK_RUN
#define __WINCE_DEFINED_PBLOCK_RUN
typedef BLOCK_RUN *PBLOCK_RUN, *LPBLOCK_RUN;
#endif /* __WINCE_DEFINED_PBLOCK_RUN */

/* FLASH_REGION_INFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED___FLASH_REGION_INFO
#define __WINCE_DEFINED___FLASH_REGION_INFO
#ifndef __WINCE_DEFINED_FLASH_REGION_INFO
#define __WINCE_DEFINED_FLASH_REGION_INFO
typedef struct __FLASH_REGION_INFO {
 ULONG FlashFlags;
 ULONGLONG StartBlock;
 ULONGLONG BlockCount;
 ULONG SectorsPerBlock;
 ULONG DataBytesPerSector;
 ULONG SpareBytesPerSector;
 ULONG PageProgramLimit;
 ULONG BadBlockHundredthPercent
} FLASH_REGION_INFO;
#endif /* __WINCE_DEFINED_FLASH_REGION_INFO */
#endif /* __WINCE_DEFINED___FLASH_REGION_INFO */
#ifndef __WINCE_DEFINED_PFLASH_REGION_INFO
#define __WINCE_DEFINED_PFLASH_REGION_INFO
typedef FLASH_REGION_INFO *PFLASH_REGION_INFO, *LPFLASH_REGION_INFO;
#endif /* __WINCE_DEFINED_PFLASH_REGION_INFO */

/* FLASH_REGION_INFO_FLAGS  [enum; ce-only] */
#ifndef __WINCE_DEFINED_FLASH_REGION_INFO_FLAGS
#define __WINCE_DEFINED_FLASH_REGION_INFO_FLAGS
enum FLASH_REGION_INFO_FLAGS {
 FLASH_FLAG_NAND = 0x00000001,
 FLASH_FLAG_NOR = 0x00000002,
 FLASH_FLAG_REQUIRE_SEQ_PAGE_PROGRAM = 0x00000004,
 FLASH_FLAG_SUPPORTS_COPY = 0x00000008,
 FLASH_FLAG_SUPPORTS_XIP = 0x00000010,
 FLASH_FLAG_SUPPORTS_LOCKING = 0x00000020,
};
#endif /* __WINCE_DEFINED_FLASH_REGION_INFO_FLAGS */

/* PARTITION_ID  [struct; ce-only] */
#ifndef __WINCE_DEFINED___PARTITION_ID
#define __WINCE_DEFINED___PARTITION_ID
#ifndef __WINCE_DEFINED_PARTITION_ID
#define __WINCE_DEFINED_PARTITION_ID
typedef struct __PARTITION_ID {
 WORD RegionIndex;
 WORD PartitionIndex;
} PARTITION_ID;
#endif /* __WINCE_DEFINED_PARTITION_ID */
#endif /* __WINCE_DEFINED___PARTITION_ID */
#ifndef __WINCE_DEFINED_PPARTITION_ID
#define __WINCE_DEFINED_PPARTITION_ID
typedef PARTITION_ID *PPARTITION_ID, *LPPARTITION_ID;
#endif /* __WINCE_DEFINED_PPARTITION_ID */

/* SECTOR_RUN  [struct; ce-only] */
#ifndef __WINCE_DEFINED___SECTOR_RUN
#define __WINCE_DEFINED___SECTOR_RUN
#ifndef __WINCE_DEFINED_SECTOR_RUN
#define __WINCE_DEFINED_SECTOR_RUN
typedef struct __SECTOR_RUN {
 ULONGLONG StartSector;
 DWORD SectorCount;
} SECTOR_RUN;
#endif /* __WINCE_DEFINED_SECTOR_RUN */
#endif /* __WINCE_DEFINED___SECTOR_RUN */
#ifndef __WINCE_DEFINED_PSECTOR_RUN
#define __WINCE_DEFINED_PSECTOR_RUN
typedef SECTOR_RUN *PSECTOR_RUN, *LPSECTOR_RUN;
#endif /* __WINCE_DEFINED_PSECTOR_RUN */

/* x00000020  [extra enum] */
#ifndef __WINCE_DEFINED_FLASH_REGION_INFO_FLAGS
#define __WINCE_DEFINED_FLASH_REGION_INFO_FLAGS
#ifndef __WINCE_DEFINED_X00000020
#define __WINCE_DEFINED_X00000020
enum FLASH_REGION_INFO_FLAGS {
 FLASH_FLAG_NAND = 0x00000001,
 FLASH_FLAG_NOR = 0x00000002,
 FLASH_FLAG_REQUIRE_SEQ_PAGE_PROGRAM = 0x00000004,
 FLASH_FLAG_SUPPORTS_COPY = 0x00000008,
 FLASH_FLAG_SUPPORTS_XIP = 0x00000010,
 FLASH_FLAG_SUPPORTS_LOCKING = 0x00000020,
};
#endif /* __WINCE_DEFINED_X00000020 */
#endif /* __WINCE_DEFINED_FLASH_REGION_INFO_FLAGS */

#endif /* _FLASHCOMMON_ */
