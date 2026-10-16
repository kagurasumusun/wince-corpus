/* fls.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _FLS_
#define _FLS_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FlashLayoutSector  [struct; ce-only; CE 6.0..699] */
typedef struct _FlashLayoutSector {
 BYTE abFLSSig[FLASH_LAYOUT_SIG_SIZE];
 DWORD cbReservedEntries;
 DWORD cbRegionEntries;
}FlashLayoutSector, *PFlashLayoutSector;

/* FlashRegion  [struct; ce-only; CE 6.0..699] */
typedef struct _FlashRegion {
 REGION_TYPE regionType;
 DWORD dwStartPhysBlock;
 DWORD dwNumPhysBlocks;
 DWORD dwNumLogicalBlocks;
 DWORD dwSectorsPerBlock;
 DWORD dwBytesPerBlock;
 DWORD dwCompactBlocks;
} FlashRegion, *PFlashRegion;

/* ReservedEntry  [struct; ce-only; CE 6.0..699] */
typedef struct _ReservedEntry {
 CHAR szName[RESERVED_NAME_LEN];
 DWORD dwStartBlock;
 DWORD dwNumBlocks;
} ReservedEntry, *PReservedEntry;
#endif /* _WIN32_WCE */

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
