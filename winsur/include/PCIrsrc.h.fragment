/* PCIrsrc.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _PCIRSRC_
#define _PCIRSRC_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* PCI_RSRC  [struct; ce-only; CE 4.0..699] */
typedef struct _PCI_RSRC {
 DWORD Bus;
 DWORD Device;
 DWORD Function;
 DWORD Offset;
 DWORD Base;
 DWORD Size;
 BOOL Bridge;
 DWORD SecBus;
 BOOL Placed;
 PPCI_CFG_INFO ConfigInfo;
 struct _PCI_RSRC* Next;
 struct _PCI_RSRC* Prev;
} PCI_RSRC, *PPCI_RSRC;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PCI_RSRC {DWORD Bus;DWORD Device;DWORD Function;DWORD Offset;DWORD Base;DWORD Size;BOOL Bridge;DWORD SecBus;BOOL Placed;PPCI_CFG_INFO ConfigInfo;struct _PCI_RSRC* Next;struct _PCI_RSRC* Prev;} PCI_RSRC, *PPCI_RSRC;

#endif /* _PCIRSRC_ */
