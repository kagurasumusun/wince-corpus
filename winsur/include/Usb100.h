/* Usb100.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _USB100_
#define _USB100_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* USB_CONFIGURATION_DESCRIPTOR  [struct; ce-only] */
typedef struct {
 UCHAR bLength;
 UCHAR bDescriptorType;
 USHORT wTotalLength;
 UCHAR bNumInterfaces;
 UCHAR bConfigurationValue;
 UCHAR iConfiguration;
 UCHAR bmAttributes;
 UCHAR MaxPower;
} USB_CONFIGURATION_DESCRIPTOR;
typedef USB_CONFIGURATION_DESCRIPTOR *PUSB_CONFIGURATION_DESCRIPTOR, *LPUSB_CONFIGURATION_DESCRIPTOR;

/* USB_DEVICE_DESCRIPTOR  [struct; ce-only] */
typedef struct {
 UCHAR bLength;
 UCHAR bDescriptorType;
 USHORT bcdUSB;
 UCHAR bDeviceClass;
 UCHAR bDeviceSubClass;
 UCHAR bDeviceProtocol;
 UCHAR bMaxPacketSize0;
 USHORT idVendor;
 USHORT idProduct;
 USHORT bcdDevice;
 UCHAR iManufacturer;
 UCHAR iSerialNumber;
 UCHAR bNumConfigurations;
} USB_DEVICE_DESCRIPTOR;
typedef USB_DEVICE_DESCRIPTOR *PUSB_DEVICE_DESCRIPTOR, *LPUSB_DEVICE_DESCRIPTOR;

/* LPUSB_DEVICE  [extra struct] */
typedef struct _USB_DEVICE { const DWORD dwCount; const USB_DEVICE_DESCRIPTOR Descriptor; const LPCUSB_CONFIGURATION lpConfigs; const LPCUSB_CONFIGURATION lpActiveConfig;} USB_DEVICE, * PUSB_DEVICE, * LPUSB_DEVICE;

/* LPUSB_ENDPOINT  [extra struct] */
typedef struct _USB_ENDPOINT { const DWORD dwCount; const USB_ENDPOINT_DESCRIPTOR Descriptor; const LPCVOID lpvExtended;} USB_ENDPOINT, * PUSB_ENDPOINT, * LPUSB_ENDPOINT;

/* LPUSB_INTERFACE  [extra struct] */
typedef struct _USB_INTERFACE { const DWORD dwCount; const USB_INTERFACE_DESCRIPTOR Descriptor; const LPCVOID lpvExtended; const LPCUSB_ENDPOINT lpEndpoints;} USB_INTERFACE, * PUSB_INTERFACE, * LPUSB_INTERFACE;

#endif /* _USB100_ */
