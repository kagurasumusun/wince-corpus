/* CEDDK.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 49 declarations, 3 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CEDDK_
#define _CEDDK_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define InterfaceTypeUndefined -1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMA_ADAPTER_OBJECT  [struct; ce-only] */

/* INTERFACE_TYPE  [enum; ce-only] */

/* PCI_COMMON_CONFIG  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* MmMapIoSpace  [function; ce-only; CE 3.0..399, 5.0..699; CEDDK.lib] */
PVOID MmMapIoSpace( 
 PHYSICAL_ADDRESS PhysicalAddress, 
 ULONG NumberOfBytes, 
 BOOLEAN CacheEnable 
);

/* MmUnmapIoSpace  [function; ce-only; CE 3.0..399, 5.0..699; CEDDK.lib] */
VOID MmUnmapIoSpace( 
 PVOID BaseAddress, 
 ULONG NumberOfBytes 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* CalibrateStallCounter  [function; ce-only; CE 5.0..699; CEDDK.lib] */
VOID CalibrateStallCounter(
 void 
);

/* CloseBusAccessHandle  [function; ce-only; CE 5.0..699; CEDDK.lib] */
VOID CloseBusAccessHandle (
 HANDLE hBusAccess
);

/* CreateBusAccessHandle  [function; ce-only; CE 5.0..699; CEDDK.lib] */
HANDLE CreateBusAccessHandle (
 LPCTSTR lpActiveRegPath
);

/* GetBusNamePrefix  [function; ce-only; CE 5.0..699; CEDDK.lib] */
BOOL GetBusNamePrefix (
 HANDLE hBusAccess,
 LPTSTR lpReturnStr,
 DWORD dwSizeInCharacters
);

/* GetDeviceConfigurationData  [function; ce-only; CE 5.0..699; CEDDK.lib] */
ULONG GetDeviceConfigurationData (
 HANDLE hBusAccess,
 DWORD dwSpace,
 DWORD BusNumber,
 DWORD SlotNumber,
 DWORD dwOffset,
 DWORD dwLength,
 PVOID pBuffer
);

/* SetDeviceConfigurationData  [function; ce-only; CE 5.0..699; CEDDK.lib] */
ULONG SetDeviceConfigurationData (
 HANDLE hBusAccess,
 DWORD dwSpace,
 DWORD BusNumber,
 DWORD SlotNumber,
 DWORD dwOffset,
 DWORD dwLength,
 PVOID pBuffer
);

/* StallExecution  [function; ce-only; CE 5.0..699; CEDDK.lib] */
VOID StallExecution(
 DWORD dwMicroSec 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* BusChildIoControl  [function; ce-only; CE 6.0..699; CEDDK.lib] */
BOOL BusChildIoControl(
 HANDLE hBusAccess,
 DWORD dwIoControlCode,
 LPVOID lpBuffer, 
 DWORD nBufferSize
) ;

/* CeDriverDuplicateCallerHandle  [function; ce-only; CE 6.0..699; CEDDK.lib] */
HANDLE CeDriverDuplicateCallerHandle(
 HANDLE DirectCallerHandle,
 DWORD dwDesiredAccess,
 BOOL bInheritHandle,
 DWORD dwOptions
);
#endif /* _WIN32_WCE */

#endif /* _CEDDK_ */
