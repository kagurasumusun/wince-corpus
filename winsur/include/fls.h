/* fls.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 2 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _FLS_
#define _FLS_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FlashLayoutSector  [struct; ce-only] */

/* ReservedEntry  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _FlashLayoutSector {
  BYTE abFLSSig[FLASH_LAYOUT_SIG_SIZE];
  DWORD cbReservedEntries;
  DWORD cbRegionEntries;
}FlashLayoutSector, *PFlashLayoutSector;
typedef struct _FlashRegion {
  REGION_TYPE regionType;
  DWORD dwStartPhysBlock;
  DWORD dwNumPhysBlocks;
  DWORD dwNumLogicalBlocks;
  DWORD dwSectorsPerBlock;
  DWORD dwBytesPerBlock;
  DWORD dwCompactBlocks;
} FlashRegion, *PFlashRegion;
typedef struct _ReservedEntry {
  CHAR szName[RESERVED_NAME_LEN];
  DWORD dwStartBlock;
  DWORD dwNumBlocks;
} ReservedEntry, *PReservedEntry;

#endif /* _FLS_ */
