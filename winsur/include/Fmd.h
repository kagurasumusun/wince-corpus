/* Fmd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 16 declarations, 3 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _FMD_
#define _FMD_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define OEM_BLOCK_READONLY 0x02
#define OEM_BLOCK_RESERVED 0x01

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FMDInterface  [struct; ce-only] */

/* ReservedReq  [struct; ce-only] */

/* SectorInfo  [struct, macro; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* FlashInfoEx  [struct; ce-only] */
typedef struct _FlashInfoEx {
 DWORDcbSize;
 FLASH_TYPEflashType;
 DWORD dwNumBlocks;
 WORD dwDataBytesPerSector;
 DWORD dwNumRegions;
 FlashRegion region[1];
} FlashInfoEx, *PFlashInfoEx;

/* RawWriteBlocksReq  [struct; ce-only] */
typedef struct _RawWriteBlocksReq {
 DWORD dwStartBlock;
 DWORD dwNumBlocks;
 LPBYTE pBuffer;
 DWORD cbBuffer;
} RawWriteBlocksReq, *PRawWriteBlocksReq;

/* PFlashInfo  [extra struct] */
typedef struct _FlashInfo {FLASH_TYPEflashType;DWORDdwNumBlocks;DWORDdwBytesPerBlock; WORD wSectorsPerBlock; WORD wDataBytesPerSector;}FlashInfo, *PFlashInfo;

/* PSectorInfo  [extra struct] */
typedef struct _SectorInfo {DWORDdwReserved1;BYTEbOEMReserved; BYTE bBadBlock; WORD wReserved2;}SectorInfo, *PSectorInfo;

/* PSECTORINFO  [extra struct] */
typedef struct _SECTORINFO {
  DWORD dwReserved1;
  BYTE bOEMReserved;
  BYTE bBadBlock;
  BYTE wReserved2;
} SECTORINFO, *PSECTORINFO;

/* PRawWriteBlocksReq  [extra struct] */
typedef struct _RawWriteBlocksReq {
  DWORD dwStartBlock;
  DWORD dwNumBlocks;
  LPBYTE pBuffer;
  DWORD cbBuffer;
} RawWriteBlocksReq, *PRawWriteBlocksReq;

/* PFlashInfoEx  [extra struct] */
typedef struct _FlashInfoEx {
  DWORDcbSize;
  FLASH_TYPEflashType;
  DWORD dwNumBlocks;
  WORD dwDataBytesPerSector;
  DWORD dwNumRegions;
  FlashRegion region[1];
} FlashInfoEx, *PFlashInfoEx;

/* PFMDInfo  [extra struct] */
typedef struct _FMDInfo {
  DWORD cbSize;
  FLASH_TYPE flashType;
  DWORD dwBaseAddress;
  DWORD dwNumRegions;
  DWORD dwNumReserved;
}FMDInfo, *PFMDInfo;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* FMD_Deinit  [function; ce-only; CE 4.0..699] */
BOOL FMD_Deinit(
PVOID hFMD
);

/* FMD_GetInfo  [function; ce-only; CE 4.0..699] */
BOOL FMD_GetInfo(
 PFlashInfo pFlashInfo
);

/* FMD_PowerDown  [function; ce-only; CE 4.0..699] */
VOID FMD_PowerDown(VOID);

/* FMD_PowerUp  [function; ce-only; CE 4.0..699] */
VOID FMD_PowerUp(VOID);
#endif /* _WIN32_WCE */

#endif /* _FMD_ */
