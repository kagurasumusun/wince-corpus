/* Oal_pci.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_PCI_
#define _OAL_PCI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALPCICfgRead  [function; ce-only; CE 5.0..699] */
UINT32 OALPCICfgRead(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc,
 UINT32 offset,
 UINT32 size,
 VOID *pData
);

/* OALPCICfgWrite  [function; ce-only; CE 5.0..699] */
UINT32 OALPCICfgWrite(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc,
 UINT32 offset,
 UINT32 size,
 VOID *pData
);

/* OALPCIConfig  [function; ce-only; CE 5.0..699] */
BOOL OALPCIConfig(
 UINT32 busId,
 UINT32 memBase,
 UINT32 memSize,
 UINT32 ioBase,
 UINT32 ioSize,
 UINT32 pciLocCount,
 OAL_PCI_LOCATION *aPciLoc
);

/* OALPCIDump  [function; ce-only; CE 5.0..699] */
VOID OALPCIDump(
 UINT32 busId,
 BOOL full
);

/* OALPCIDumpConfig  [function; ce-only; CE 5.0..699] */
VOID OALPCIDumpConfig(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCIFindNextId  [function; ce-only; CE 5.0..699] */
BOOL OALPCIFindNextId(
 UINT32 busId,
 UINT32 deviceId,
 OAL_PCI_LOCATION *pPciLoc
);

/* OALPCIGetHeaderType  [function; ce-only; CE 5.0..699] */
UINT8 OALPCIGetHeaderType(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCIGetId  [function; ce-only; CE 5.0..699] */
UINT32 OALPCIGetId(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCIGetInterruptPin  [function; ce-only; CE 5.0..699] */
UINT32 OALPCIGetInterruptPin(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCIGetMBAR  [function; ce-only; CE 5.0..699] */
UINT32 OALPCIGetMBAR(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc,
 UINT32 index
);

/* OALPCIGetSecBusNum  [function; ce-only; CE 5.0..699] */
UINT8 OALPCIGetSecBusNum(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCIGetSubBusNum  [function; ce-only; CE 5.0..699] */
UINT8 OALPCIGetSubBusNum(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCIInit  [function; ce-only; CE 5.0..699] */
BOOL OALPCIInit();

/* OALPCIPowerOff  [function; ce-only; CE 5.0..699] */
VOID OALPCIPowerOff(
 UINT32 busId
);

/* OALPCIPowerOn  [function; ce-only; CE 5.0..699] */
VOID OALPCIPowerOn(
 UINT32 busId
);

/* OALPCIRegisterAsUsed  [function; ce-only; CE 5.0..699] */
BOOL OALPCIRegisterAsUsed(
 UINT32 busId,
 OAL_PCI_LOCATION pciLoc
);

/* OALPCITransBusAddress  [function; ce-only; CE 5.0..699] */
BOOL OALPCITransBusAddress(
 UINT32 busId,
 UINT64 busAddress,
 UINT32 *pAddressSpace,
 UINT64 *pSystemAddress
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef union { struct { UINT8 fnc; UINT8 dev; UINT8 bus; }; UINT32 logicalLoc;} OAL_PCI_LOCATION, *POAL_PCI_LOCATION;

#endif /* _OAL_PCI_ */
