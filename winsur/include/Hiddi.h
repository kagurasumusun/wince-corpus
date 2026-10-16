/* Hiddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _HIDDI_
#define _HIDDI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

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
struct _HID_FUNCS { DWORD dwCount; LPGET_REPORT lpGetReport; LPSET_REPORT lpSetReport; LPGET_INTERRUPT_REPORT lpGetInterruptReport; LPGET_STRING lpGetString; LPGET_QUEUE_SIZE lpGetQueueSize; LPSET_QUEUE_SIZE lpSetQueueSize;};

#endif /* _HIDDI_ */
