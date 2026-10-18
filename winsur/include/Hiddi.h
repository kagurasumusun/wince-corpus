/* Hiddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _HIDDI_
#define _HIDDI_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* HID_DRIVER_SETTINGS  [struct; ce-only] */
#ifndef __WINCE_DEFINED__HID_DRIVER_SETTINGS
#define __WINCE_DEFINED__HID_DRIVER_SETTINGS
#ifndef __WINCE_DEFINED_HID_DRIVER_SETTINGS
#define __WINCE_DEFINED_HID_DRIVER_SETTINGS
#ifndef __WINCE_DEFINED_PHID_DRIVER_SETTINGS
#define __WINCE_DEFINED_PHID_DRIVER_SETTINGS
typedef struct _HID_DRIVER_SETTINGS {
 DWORD dwVendorId;
 DWORD dwProductId;
 DWORD dwReleaseNumber;
 DWORD dwInterfaceNumber;
 DWORD dwCollection;
 DWORD dwUsagePage;
 DWORD dwUsage;
} HID_DRIVER_SETTINGS, *PHID_DRIVER_SETTINGS;
#endif /* __WINCE_DEFINED_PHID_DRIVER_SETTINGS */
#endif /* __WINCE_DEFINED_HID_DRIVER_SETTINGS */
#endif /* __WINCE_DEFINED__HID_DRIVER_SETTINGS */

/* HID_STRING_TYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED__HID_STRING_TYPE
#define __WINCE_DEFINED__HID_STRING_TYPE
#ifndef __WINCE_DEFINED_HID_STRING_TYPE
#define __WINCE_DEFINED_HID_STRING_TYPE
typedef enum _HID_STRING_TYPE {
 HID_STRING_INDEXED = 0,
 HID_STRING_ID_IMANUFACTURER,
 HID_STRING_ID_IPRODUCT,
 HID_STRING_ID_ISERIALNUMBER,
 HID_STRING_MAX
} HID_STRING_TYPE;
#endif /* __WINCE_DEFINED_HID_STRING_TYPE */
#endif /* __WINCE_DEFINED__HID_STRING_TYPE */
#ifndef __WINCE_DEFINED_PHID_STRING_TYPE
#define __WINCE_DEFINED_PHID_STRING_TYPE
typedef HID_STRING_TYPE *PHID_STRING_TYPE, *LPHID_STRING_TYPE;
#endif /* __WINCE_DEFINED_PHID_STRING_TYPE */

#endif /* _HIDDI_ */
