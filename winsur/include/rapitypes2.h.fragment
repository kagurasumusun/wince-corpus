/* rapitypes2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _RAPITYPES2_
#define _RAPITYPES2_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* RAPI_CONNECTIONINFO  [struct; ce-only; CE 5.0..699; rapi.lib] */
typedef struct {
 SOCKADDR_STORAGE ipaddr;
 SOCKADDR_STORAGE hostIpaddr;
 RAPI_CONNECTIONTYPE connectionType;
} RAPI_CONNECTIONINFO;

/* RAPI_CONNECTIONTYPE  [enum; ce-only; CE 5.0..699; rapi.lib] */
typedef enum {
 RAPI_CONNECTION_USB = 0
 RAPI_CONNECTION_IR = 1
 RAPI_CONNECTION_SERIAL = 2
 RAPI_CONNECTION_NETWORK = 3
} RAPI_CONNECTIONTYPE;

/* RAPI_DEVICEINFO  [struct; ce-only; CE 5.0..699; rapi.lib] */
typedef struct {
 RAPIDEVICEID DeviceId;
 DWORD dwOsVersionMajor;
 DWORD dwOsVersionMinor;
 BSTR bstrName;
 BSTR bstrPlatform;
} RAPI_DEVICEINFO;

/* RAPI_DEVICESTATUS  [enum; ce-only; CE 5.0..699; rapi.lib] */
typedef enum {
 RAPI_DEVICE_DISCONNECTED = 0
 RAPI_DEVICE_CONNECTED = 1
} RAPI_DEVICESTATUS;

/* RAPI_GETDEVICEOPCODE  [enum; ce-only; CE 5.0..699; rapi.lib] */
typedef enum {
 RAPI_GETDEVICE_NONBLOCKING RAPI_GETDEVICE_BLOCKING
} RAPI_GETDEVICEOPCODE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* RAPIDEVICEID  [typedef; ce-only; CE 6.0..699] */
typedef GUID RAPIDEVICEID;
#endif /* _WIN32_WCE */

#endif /* _RAPITYPES2_ */
