/* PCIbus.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _PCIBUS_
#define _PCIBUS_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* PCI_DEV_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _PCI_DEV_INFO {
 WCHAR RegPath[DEVKEY_LEN];
 DWORD Bus;
 DWORD Device;
 DWORD Function;
 PPCI_COMMON_CONFIG Cfg;
 PCI_RSRC_LIST MemBase;
 PCI_RSRC_LIST MemLen;
 PCI_RSRC_LIST IoBase;
 PCI_RSRC_LIST IoLen;
 BOOL Matched;
 BOOL Configure;
 BOOL ConfigEntry;
 WCHAR ConfigEntryName[DEVENTRY_LEN];
 WCHAR ConfigDllName[DEVDLL_LEN];
 WCHAR DllName[DEVDLL_LEN];
 DWORD DevFlags;
 PPCI_CFG_INFO ConfigInfo;
 DWORD Command;
 DWORD BridgeControl;
 DWORD Latency;
 DWORD SecondaryLatency;
} PCI_DEV_INFO, *PPCI_DEV_INFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PCI_DEV_INFO {WCHAR RegPath[DEVKEY_LEN];DWORD Bus;DWORD Device;DWORD Function;PPCI_COMMON_CONFIG Cfg;PCI_RSRC_LIST MemBase;PCI_RSRC_LIST MemLen;PCI_RSRC_LIST IoBase;PCI_RSRC_LIST IoLen;BOOL Matched;BOOL Configure;BOOL ConfigEntry;WCHAR ConfigEntryName[DEVENTRY_LEN];WCHAR ConfigDllName[DEVDLL_LEN];WCHAR DllName[DEVDLL_LEN];DWORD DevFlags;PPCI_CFG_INFO ConfigInfo;DWORD Command;DWORD BridgeControl;DWORD Latency;DWORD SecondaryLatency;} PCI_DEV_INFO, *PPCI_DEV_INFO;

#endif /* _PCIBUS_ */
