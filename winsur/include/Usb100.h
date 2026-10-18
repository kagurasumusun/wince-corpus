/* Usb100.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _USB100_
#define _USB100_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* USB_CONFIGURATION_DESCRIPTOR  [struct; ce-only] */
#ifndef __WINCE_DEFINED_USB_CONFIGURATION_DESCRIPTOR
#define __WINCE_DEFINED_USB_CONFIGURATION_DESCRIPTOR
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
#endif /* __WINCE_DEFINED_USB_CONFIGURATION_DESCRIPTOR */
#ifndef __WINCE_DEFINED_PUSB_CONFIGURATION_DESCRIPTOR
#define __WINCE_DEFINED_PUSB_CONFIGURATION_DESCRIPTOR
typedef USB_CONFIGURATION_DESCRIPTOR *PUSB_CONFIGURATION_DESCRIPTOR, *LPUSB_CONFIGURATION_DESCRIPTOR;
#endif /* __WINCE_DEFINED_PUSB_CONFIGURATION_DESCRIPTOR */

/* USB_DEVICE_DESCRIPTOR  [struct; ce-only] */
#ifndef __WINCE_DEFINED_USB_DEVICE_DESCRIPTOR
#define __WINCE_DEFINED_USB_DEVICE_DESCRIPTOR
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
#endif /* __WINCE_DEFINED_USB_DEVICE_DESCRIPTOR */
#ifndef __WINCE_DEFINED_PUSB_DEVICE_DESCRIPTOR
#define __WINCE_DEFINED_PUSB_DEVICE_DESCRIPTOR
typedef USB_DEVICE_DESCRIPTOR *PUSB_DEVICE_DESCRIPTOR, *LPUSB_DEVICE_DESCRIPTOR;
#endif /* __WINCE_DEFINED_PUSB_DEVICE_DESCRIPTOR */

/* USB_ENDPOINT_DESCRIPTOR  [struct; ce-only] */
#ifndef __WINCE_DEFINED_USB_ENDPOINT_DESCRIPTOR
#define __WINCE_DEFINED_USB_ENDPOINT_DESCRIPTOR
#ifndef __WINCE_DEFINED_USB_ENDPOINT
#define __WINCE_DEFINED_USB_ENDPOINT
typedef struct {
 UCHAR bLength;
 UCHAR bDescriptorType;
 UCHAR bEndpointAddress;
 UCHAR bmAttributes;
 USHORT wMaxPacketSize;
 UCHAR bInterval;
} USB_ENDPOINT;
#endif /* __WINCE_DEFINED_USB_ENDPOINT */
#endif /* __WINCE_DEFINED_USB_ENDPOINT_DESCRIPTOR */

#endif /* _USB100_ */
