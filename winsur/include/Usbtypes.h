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

/* USB_INTERFACE_DESCRIPTOR  [struct; ce-only] */
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

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef DWORD (WINAPI *LPTRANSFER_NOTIFY_ROUTINE)( LPVOID lpvNotifyParameter);

/* struct */
typedef struct _USB_CONFIGURATION { const DWORD dwCount; const USB_CONFIGURATION_DESCRIPTOR Descriptor; const LPCVOID lpvExtended; const DWORD dwNumInterfaces; const LPCUSB_INTERFACE lpInterfaces;} USB_CONFIGURATION, * PUSB_CONFIGURATION, * LPUSB_CONFIGURATION;

#endif /* _USBTYPES_ */
