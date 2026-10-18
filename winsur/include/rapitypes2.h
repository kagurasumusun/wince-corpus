/* rapitypes2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _RAPITYPES2_
#define _RAPITYPES2_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RAPI_DEVICEINFO  [struct; ce-only; rapi.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* RAPI_CONNECTIONTYPE  [enum; ce-only; rapi.lib] */
#ifndef __WINCE_DEFINED_RAPI_CONNECTIONTYPE
#define __WINCE_DEFINED_RAPI_CONNECTIONTYPE
typedef enum {
 RAPI_CONNECTION_USB = 0
 RAPI_CONNECTION_IR = 1
 RAPI_CONNECTION_SERIAL = 2
 RAPI_CONNECTION_NETWORK = 3
} RAPI_CONNECTIONTYPE;
#endif /* __WINCE_DEFINED_RAPI_CONNECTIONTYPE */
#ifndef __WINCE_DEFINED_PRAPI_CONNECTIONTYPE
#define __WINCE_DEFINED_PRAPI_CONNECTIONTYPE
typedef RAPI_CONNECTIONTYPE *PRAPI_CONNECTIONTYPE, *LPRAPI_CONNECTIONTYPE;
#endif /* __WINCE_DEFINED_PRAPI_CONNECTIONTYPE */

/* RAPI_DEVICESTATUS  [enum; ce-only; rapi.lib] */
#ifndef __WINCE_DEFINED_RAPI_DEVICESTATUS
#define __WINCE_DEFINED_RAPI_DEVICESTATUS
typedef enum {
 RAPI_DEVICE_DISCONNECTED = 0
 RAPI_DEVICE_CONNECTED = 1
} RAPI_DEVICESTATUS;
#endif /* __WINCE_DEFINED_RAPI_DEVICESTATUS */
#ifndef __WINCE_DEFINED_PRAPI_DEVICESTATUS
#define __WINCE_DEFINED_PRAPI_DEVICESTATUS
typedef RAPI_DEVICESTATUS *PRAPI_DEVICESTATUS, *LPRAPI_DEVICESTATUS;
#endif /* __WINCE_DEFINED_PRAPI_DEVICESTATUS */

/* RAPI_GETDEVICEOPCODE  [enum; ce-only; rapi.lib] */
#ifndef __WINCE_DEFINED_RAPI_GETDEVICEOPCODE
#define __WINCE_DEFINED_RAPI_GETDEVICEOPCODE
typedef enum {
 RAPI_GETDEVICE_NONBLOCKING RAPI_GETDEVICE_BLOCKING
} RAPI_GETDEVICEOPCODE;
#endif /* __WINCE_DEFINED_RAPI_GETDEVICEOPCODE */
#ifndef __WINCE_DEFINED_PRAPI_GETDEVICEOPCODE
#define __WINCE_DEFINED_PRAPI_GETDEVICEOPCODE
typedef RAPI_GETDEVICEOPCODE *PRAPI_GETDEVICEOPCODE, *LPRAPI_GETDEVICEOPCODE;
#endif /* __WINCE_DEFINED_PRAPI_GETDEVICEOPCODE */

#endif /* _RAPITYPES2_ */
