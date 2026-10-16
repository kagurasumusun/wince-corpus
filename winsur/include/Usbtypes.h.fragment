/* Usbtypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _USBTYPES_
#define _USBTYPES_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* USB_CONFIGURATION  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _USB_CONFIGURATION {
 const DWORD dwCount;
 const USB_CONFIGURATION_DESCRIPTOR Descriptor;
 const LPCVOID lpvExtended;
 const DWORD dwNumInterfaces;
 const LPCUSB_INTERFACE lpInterfaces;
} USB_CONFIGURATION, * PUSB_CONFIGURATION, * LPUSB_CONFIGURATION;

/* USB_DEVICE  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _USB_DEVICE {
 const DWORD dwCount;
 const USB_DEVICE_DESCRIPTOR Descriptor;
 const LPCUSB_CONFIGURATION lpConfigs;
 const LPCUSB_CONFIGURATION lpActiveConfig;
} USB_DEVICE, * PUSB_DEVICE, * LPUSB_DEVICE;

/* USB_ENDPOINT  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _USB_ENDPOINT {
 const DWORD dwCount;
 const USB_ENDPOINT_DESCRIPTOR Descriptor;
 const LPCVOID lpvExtended;
} USB_ENDPOINT, * PUSB_ENDPOINT, * LPUSB_ENDPOINT;

/* USB_INTERFACE  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _USB_INTERFACE {
 const DWORD dwCount;
 const USB_INTERFACE_DESCRIPTOR Descriptor;
 const LPCVOID lpvExtended;
 const LPCUSB_ENDPOINT lpEndpoints;
} USB_INTERFACE, * PUSB_INTERFACE, * LPUSB_INTERFACE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* LPTRANSFER_NOTIFY_ROUTINE  [typedef; ce-only; CE 5.0..699] */
typedef DWORD (WINAPI *LPTRANSFER_NOTIFY_ROUTINE)(
 LPVOID lpvNotifyParameter
);

/* USB_INTERFACE_DESCRIPTOR  [struct; ce-only; CE 5.0..699] */
typedef struct {
 UCHAR bLength;
 UCHAR bDescriptorType;
 UCHAR bInterfaceNumber;
 UCHAR bAlternateSetting;
 UCHAR bNumEndpoints;
 UCHAR bInterfaceClass;
 UCHAR bInterfaceSubClass;
 UCHAR bInterfaceProtocol;
 UCHAR iInterface;
} USB_INTERFACE_DESCRIPTOR;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef DWORD (WINAPI *LPTRANSFER_NOTIFY_ROUTINE)( LPVOID lpvNotifyParameter);

/* struct */
typedef struct _USB_CONFIGURATION { const DWORD dwCount; const USB_CONFIGURATION_DESCRIPTOR Descriptor; const LPCVOID lpvExtended; const DWORD dwNumInterfaces; const LPCUSB_INTERFACE lpInterfaces;} USB_CONFIGURATION, * PUSB_CONFIGURATION, * LPUSB_CONFIGURATION;

#endif /* _USBTYPES_ */
