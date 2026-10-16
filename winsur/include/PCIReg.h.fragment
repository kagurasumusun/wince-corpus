/* PCIReg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _PCIREG_
#define _PCIREG_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BUSDATA_PARMS  [struct; ce-only; CE 4.0..699] */
typedef struct BUSDATA_PARMS {
 DWORD Function;
 ULONG ReturnCode;
 BUS_DATA_TYPE BusDataType;
 ULONG BusNumber;
 ULONG SlotNumber;
 PVOID Buffer;
 ULONG Offset;
 ULONG Length;
} BUSDATA_PARMS, *PBUSDATA_PARMS;

/* PCI_REG_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _PCI_REG_INFO {
 WCHAR RegPath[DEVKEY_LEN];
 DWORD Bus;
 DWORD Device;
 DWORD Function;
 PCI_COMMON_CONFIG Cfg;
 PCI_REG_LIST MemBase;
 PCI_REG_LIST MemLen;
 PCI_REG_LIST IoBase;
 PCI_REG_LIST IoLen;
 DWORD SysIntr;
} PCI_REG_INFO, *PPCI_REG_INFO;

/* PCI_REG_LIST  [struct; ce-only; CE 4.0..699] */
typedef struct _PCI_REG_LIST {
 DWORD Num;
 DWORD Reg[PCI_TYPE0_ADDRESSES];
} PCI_REG_LIST, *PPCI_REG_LIST;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* PCIInitInfo  [function; ce-only; CE 4.0..699; PCIReg.lib] */
void PCIInitInfo(
 LPCWSTR RegPath,
 DWORD Bus,
 DWORD Device,
 DWORD Function,
 DWORD SysIntr,
 PPCI_COMMON_CONFIG pCfg,
 PPCI_REG_INFO pInfo
);

/* PCIReg  [function; ce-only; CE 4.0..699; PCIReg.lib] */
BOOL PCIReg(
 PPCI_REG_INFO pInfo
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct BUSDATA_PARMS {DWORD Function;ULONG ReturnCode;BUS_DATA_TYPE BusDataType;ULONG BusNumber;ULONG SlotNumber;PVOID Buffer;ULONG Offset;ULONG Length;} BUSDATA_PARMS, *PBUSDATA_PARMS;
typedef struct _PCI_REG_INFO {WCHAR RegPath[DEVKEY_LEN];DWORD Bus;DWORD Device;DWORD Function;PCI_COMMON_CONFIG Cfg;PCI_REG_LIST MemBase;PCI_REG_LIST MemLen;PCI_REG_LIST IoBase;PCI_REG_LIST IoLen;DWORD SysIntr;} PCI_REG_INFO, *PPCI_REG_INFO;
typedef struct _PCI_REG_LIST {DWORD Num;DWORD Reg[PCI_TYPE0_ADDRESSES];} PCI_REG_LIST, *PPCI_REG_LIST;

#endif /* _PCIREG_ */
