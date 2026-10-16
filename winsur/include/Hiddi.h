/* Hiddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _HIDDI_
#define _HIDDI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define HID_STRING_INDEXED 0

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HIDDeviceAttach  [function; ce-only; CE 4.0..699; Conshid_lib.lib, Kbdhid_lib.lib, Mouhid_lib.lib] */
BOOL HidDeviceAttach(
 HID_HANDLE hDevice, 
 PCHID_FUNCS pHidFuncs,
 const HID_DRIVER_SETTINGS* pDriverSettings,
 PHIDP_PREPARSED_DATA phidpPreparsedData,
 PVOID* ppvNotifyParameter,
 DWORD dwUnused
);

/* HIDDeviceNotifications  [function; ce-only; CE 4.0..699; Conshid_lib.lib, Kbdhid_lib.lib, Mouhid_lib.lib] */
BOOL HIDDeviceNotifications(
 DWORD dwMsg, 
 WPARAM wParam,
 PVOID pvNotifyParameter
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _HID_DRIVER_SETTINGS { DWORD dwVendorId; DWORD dwProductId; DWORD dwReleaseNumber; DWORD dwInterfaceNumber; DWORD dwCollection; DWORD dwUsagePage; DWORD dwUsage;} HID_DRIVER_SETTINGS, *PHID_DRIVER_SETTINGS;
struct _HID_FUNCS { DWORD dwCount; LPGET_REPORT lpGetReport; LPSET_REPORT lpSetReport; LPGET_INTERRUPT_REPORT lpGetInterruptReport; LPGET_STRING lpGetString; LPGET_QUEUE_SIZE lpGetQueueSize; LPSET_QUEUE_SIZE lpSetQueueSize;};

/* function */
BOOL HidDeviceAttach( HID_HANDLE hDevice, PCHID_FUNCS pHidFuncs, const HID_DRIVER_SETTINGS* pDriverSettings, PHIDP_PREPARSED_DATA phidpPreparsedData, PVOID* ppvNotifyParameter, DWORD dwUnused);

#endif /* _HIDDI_ */
