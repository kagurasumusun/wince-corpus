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

/* FLASH_PARTITION_CREATE_INFO  [struct; ce-only] */

/* FLASH_PARTITION_INFO  [struct; ce-only] */

/* FLASH_TRANSFER_REQUEST  [struct; ce-only] */

#endif /* _FLASHMDD_ */
