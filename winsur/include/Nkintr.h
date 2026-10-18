/* Nkintr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _NKINTR_
#define _NKINTR_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MEMORY_SECTION  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MEMORY_SECTION
#define __WINCE_DEFINED__MEMORY_SECTION
#ifndef __WINCE_DEFINED_MEMORY_SECTION
#define __WINCE_DEFINED_MEMORY_SECTION
#ifndef __WINCE_DEFINED_PMEMORY_SECTION
#define __WINCE_DEFINED_PMEMORY_SECTION
typedef struct _MEMORY_SECTION {
 DWORD dwFlags;
 DWORD dwStart;
 DWORD dwLen;
} MEMORY_SECTION, *PMEMORY_SECTION;
#endif /* __WINCE_DEFINED_PMEMORY_SECTION */
#endif /* __WINCE_DEFINED_MEMORY_SECTION */
#endif /* __WINCE_DEFINED__MEMORY_SECTION */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 3.0..399 */

/* lpParallelPortGetByteFunc  [function; ce-only; CE 3.0..399] */
int (*lpParallelPortGetByteFunc)(void);

/* lpParallelPortSendByteFunc  [function; ce-only; CE 3.0..399] */
void (*lpParallelPortSendByteFunc)(BYTE ch);

/* SetKernelCommDev  [function; ce-only; CE 3.0..399] */
BOOL SetKernelCommDev(UCHAR Service,
UCHAR CommDevice);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* HookInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
BOOL HookInterrupt(int hwIntNumber,
 FARPROC pfnHandler);

/* INTERRUPTS_OFF  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib] */
VOID INTERRUPTS_OFF (void);

/* INTERRUPTS_ON  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib] */
VOID INTERRUPTS_ON (void);

/* KCompareFileTime  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
LONG KCompareFileTime(LPFILETIME lpft1,
 LPFILETIME lpft2);

/* KFileTimeToSystemTime  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
BOOL KFileTimeToSystemTime(const FILETIME* lpft,
 LPSYSTEMTIME lpst);

/* KSystemTimeToFileTime  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
BOOL KSystemTimeToFileTime(LPSYSTEMTIME lpst,
 LPFILETIME lpft);

/* lpReadDebugByteFunc  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
int (*lpReadDebugByteFunc)(void);

/* lpWriteDebugByteFunc  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
void (*lpWriteDebugByteFunc)(BYTE ch);

/* lpWriteDebugStringFunc  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nkstub.lib] */
void (*lpWriteDebugStringFunc)(unsigned short* str);

/* SetInterruptEvent  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, Nkstub.lib] */
BOOL SetInterruptEvent(DWORD idInt);

/* UnhookInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
BOOL UnhookInterrupt(INT hwInterruptNumber,
 FARPROC pfnHandler);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* pNKEnumExtensionDRAM  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
DWORD (*pNKEnumExtensionDRAM)(PMEMORY_SECTION pMemSections,
 DWORD cMemSections);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* CeSetPowerOnEvent  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeSetPowerOnEvent(HANDLE hEvt);

/* INTERRUPTS_ENABLE  [function; ce-only; CE 5.0..699; Nk.lib] */
BOOL INTERRUPTS_ENABLE(BOOL fEnable);
#endif /* _WIN32_WCE */

#endif /* _NKINTR_ */
