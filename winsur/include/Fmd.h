/* Fmd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 19 declarations, 1 outlines, 0 base types, 0 extra macros, 8 extra decls
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SectorInfo  [struct, macro; ce-only; CE 4.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BlockLockInfo  [struct; ce-only; CE 5.0..699] */
typedef struct _BlockLockInfo {
 BLOCK_ID StartBlock;
 ULONG NumBlocks;
} BlockLockInfo, *PBlockLockInfo;

/* FlashInfo  [struct; ce-only; CE 5.0..699] */
typedef struct _FlashInfo {
 FLASH_TYPE flashType;
 DWORD dwNumBlocks;
 DWORD dwBytesPerBlock;
 WORD wSectorsPerBlock;
 WORD wDataBytesPerSector;
} FlashInfo, *PFlashInfo;

/* FMDInterface  [struct; ce-only; CE 5.0..699] */
typedef struct _FMDInterface {
 DWORD cbSize;
 PFN_INIT pInit;
 PFN_DEINIT pDeInit;
 PFN_GETINFO pGetInfo;
 PFN_GETBLOCKSTATUS pGetBlockStatus;
 PFN_SETBLOCKSTATUS pSetBlockStatus;
 PFN_READSECTOR pReadSector;
 PFN_WRITESECTOR pWriteSector;
 PFN_ERASEBLOCK pEraseBlock;
 PFN_POWERUP pPowerUp;
 PFN_POWERDON pPowerDown
 PFN_GETPHYSSECTORADDR pGetPhysSectorAddr;
 PFN_GETINFOEX pGetInfoEx;
 PFN_OEMIOCONTROL pOEMIoControl;
} FMDInterface, *PFMDInterface;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FlashInfoEx  [struct; ce-only; CE 6.0..699] */
typedef struct _FlashInfoEx {
 DWORDcbSize;
 FLASH_TYPEflashType;
 DWORD dwNumBlocks;
 WORD dwDataBytesPerSector;
 DWORD dwNumRegions;
 FlashRegion region[1];
} FlashInfoEx, *PFlashInfoEx;

/* FMDInfo  [struct; ce-only; CE 6.0..699] */
typedef struct _FMDInfo {
 DWORD cbSize;
 FLASH_TYPE flashType;
 DWORD dwBaseAddress;
 DWORD dwNumRegions;
 DWORD dwNumReserved;
}FMDInfo, *PFMDInfo;

/* RawWriteBlocksReq  [struct; ce-only; CE 6.0..699] */
typedef struct _RawWriteBlocksReq {
 DWORD dwStartBlock;
 DWORD dwNumBlocks;
 LPBYTE pBuffer;
 DWORD cbBuffer;
} RawWriteBlocksReq, *PRawWriteBlocksReq;

/* ReservedReq  [struct; ce-only; CE 6.0..699] */
typedef struct _ReservedReq {
 CHAR szName[RESERVED_NAME_LEN];
 DWORD dwStart;
 DWORD dwLen;
 LPBYTE pBuffer;
} ReservedReq, *PReservedReq;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* FMD_Deinit  [function; ce-only; CE 4.0..699] */
BOOL FMD_Deinit(
PVOID hFMD
);

/* FMD_EraseBlock  [function; ce-only; CE 4.0..699] */
BOOL FMD_EraseBlock(
 BLOCK_ID blockID
);

/* FMD_GetBlockStatus  [function; ce-only; CE 4.0..699] */
DWORD FMD_GetBlockStatus(
 BLOCK_ID blockID
);

/* FMD_GetInfo  [function; ce-only; CE 4.0..699] */
BOOL FMD_GetInfo(
 PFlashInfo pFlashInfo
);

/* FMD_Init  [function; ce-only; CE 4.0..699] */
PVOID FMD_Init(
 LPCTSTR lpActiveReg,
 PPCI_REG_INFO pRegIn,
 PPCI_REG_INFO pRegOut
);

/* FMD_OEMIoControl  [function; ce-only; CE 4.0..699] */
FMD_OEMIoControl(
 DWORD dwIoControlCode,
 PBYTE pInBuf,
 DWORD nInBufSize,
 PBYTE pOutBuf,
 DWORD nOutBufSize,
 PDWORD pBytesReturned
);

/* FMD_PowerDown  [function; ce-only; CE 4.0..699] */
VOID FMD_PowerDown(VOID);

/* FMD_PowerUp  [function; ce-only; CE 4.0..699] */
VOID FMD_PowerUp(VOID);

/* FMD_ReadSector  [function; ce-only; CE 4.0..699] */
BOOL FMD_ReadSector(
 SECTOR_ADDR startSectorAddr,
 LPBYTE pSectorBuff,
 PSectorInfo pSectorInfoBuff,
 DWORD dwNumSectors
);

/* FMD_SetBlockStatus  [function; ce-only; CE 4.0..699] */
BOOL FMD_SetBlockStatus(
 BLOCK_ID blockID,
 DWORD dwStatus
);

/* FMD_WriteSector  [function; ce-only; CE 4.0..699] */
BOOL FMD_WriteSector(
 SECTOR_ADDR startSectorAddr,
 LPBYTE pSectorBuff,
 PSectorInfo pSectorInfoBuff,
 DWORD dwNumSectors
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FMD_GetInfoEx  [function; ce-only; CE 6.0..699] */
BOOL FMD_GetInfoEx(
 PFlashInfoEx pFlashInfo,
 PDWORD pdwNumRegions
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _FMDInfo {
  DWORD cbSize;
  FLASH_TYPE flashType;
  DWORD dwBaseAddress;
  DWORD dwNumRegions;
  DWORD dwNumReserved;
}FMDInfo, *PFMDInfo;
typedef struct _FMDInterface {DWORDcbSize;PFN_INITpInit;PFN_DEINITpDeInit; PFN_GETINFO pGetInfo; PFN_GETBLOCKSTATUS pGetBlockStatus; PFN_SETBLOCKSTATUS pSetBlockStatus; PFN_READSECTOR pReadSector; PFN_WRITESECTOR pWriteSector; PFN_ERASEBLOCK pEraseBlock; PFN_POWERUP pPowerUp; PFN_POWERDON pPowerDown PFN_GETPHYSSECTORADDR pGetPhysSectorAddr; PFN_GETINFOEX pGetInfoEx;PFN_OEMIOCONTROLpOEMIoControl; }FMDInterface, *PFMDInterface;
typedef struct _FlashInfo {FLASH_TYPEflashType;DWORDdwNumBlocks;DWORDdwBytesPerBlock; WORD wSectorsPerBlock; WORD wDataBytesPerSector;}FlashInfo, *PFlashInfo;
typedef struct _FlashInfoEx {
  DWORDcbSize;
  FLASH_TYPEflashType;
  DWORD dwNumBlocks;
  WORD dwDataBytesPerSector;
  DWORD dwNumRegions;
  FlashRegion region[1];
} FlashInfoEx, *PFlashInfoEx;
typedef struct _RawWriteBlocksReq {
  DWORD dwStartBlock;
  DWORD dwNumBlocks;
  LPBYTE pBuffer;
  DWORD cbBuffer;
} RawWriteBlocksReq, *PRawWriteBlocksReq;
typedef struct _ReservedReq {
  CHAR szName[RESERVED_NAME_LEN];
  DWORD dwStart;
  DWORD dwLen;
  LPBYTE pBuffer;
} ReservedReq, *PReservedReq;
typedef struct _SECTORINFO {
  DWORD dwReserved1;
  BYTE bOEMReserved;
  BYTE bBadBlock;
  BYTE wReserved2;
} SECTORINFO, *PSECTORINFO;
typedef struct _SectorInfo {DWORDdwReserved1;BYTEbOEMReserved; BYTE bBadBlock; WORD wReserved2;}SectorInfo, *PSectorInfo;

#endif /* _FMD_ */
