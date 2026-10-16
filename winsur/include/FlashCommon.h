/* FlashCommon.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 2 declarations, 3 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _FLASHCOMMON_
#define _FLASHCOMMON_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FLASH_FLAG_NAND 0x00000001
#define FLASH_FLAG_NOR 0x00000002
#define FLASH_FLAG_REQUIRE_SEQ_PAGE_PROGRAM 0x00000004
#define FLASH_FLAG_SUPPORTS_COPY 0x00000008
#define FLASH_FLAG_SUPPORTS_LOCKING 0x00000020
#define FLASH_FLAG_SUPPORTS_XIP 0x00000010

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* BLOCK_RUN  [struct; ce-only] */

/* FLASH_REGION_INFO  [struct; ce-only] */

/* SECTOR_RUN  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* PARTITION_ID  [struct; ce-only] */
typedef struct __PARTITION_ID {
 WORD RegionIndex;
 WORD PartitionIndex;
} PARTITION_ID;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum FLASH_REGION_INFO_FLAGS {
  FLASH_FLAG_NAND = 0x00000001,
  FLASH_FLAG_NOR = 0x00000002,
  FLASH_FLAG_REQUIRE_SEQ_PAGE_PROGRAM = 0x00000004,
  FLASH_FLAG_SUPPORTS_COPY = 0x00000008,
  FLASH_FLAG_SUPPORTS_XIP = 0x00000010,
  FLASH_FLAG_SUPPORTS_LOCKING = 0x00000020,
};

#endif /* _FLASHCOMMON_ */
