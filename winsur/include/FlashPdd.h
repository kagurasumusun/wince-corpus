/* FlashPdd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 8 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _FLASHPDD_
#define _FLASHPDD_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FLASH_BLOCK_STATUS_BAD 0x1
#define FLASH_BLOCK_STATUS_RESERVED 0x2
#define FLASH_READ_STATUS_ECC_CORRECTION_REQUIRED 0x1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FLASH_IDENTITY_INFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* FLASH_LIFE_CYCLE_INFO  [struct; ce-only] */
typedef struct __FLASH_LIFE_CYCLE_INFO {
 DWORD ErasePerBlock;
} FLASH_LIFE_CYCLE_INFO;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum FLASH_READ_STATUS { FLASH_READ_STATUS_ECC_CORRECTION_REQUIRED = 0x1 };

#endif /* _FLASHPDD_ */
