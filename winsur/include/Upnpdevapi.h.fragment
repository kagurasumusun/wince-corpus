/* Upnpdevapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _UPNPDEVAPI_
#define _UPNPDEVAPI_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* PUPNPCALLBACK  [callback; ce-only; CE 4.0..699; Upnpcapi.lib] */
typedef DWORD (*PUPNPCALLBACK) (
 UPNPCB_ID callbackId,
 PVOID pvUserContext,
 PVOID pvSvcParam
);

/* UPNPCB_ID  [enum; ce-only; CE 4.0..699] */
typedef enum {
 UPNPCB_INIT,
 UPNPCB_SUBSCRIBING,
 UPNPCB_UNSUBSCRIBING,
 UPNPCB_CONTROL,
 UPNPCB_IDLE,
 UPNPCB_WAKEUP,
 UPNPCB_SHUTDOWN
} UPNPCB_ID;

/* UPNPDEVICEINFO  [struct; ce-only; CE 4.0..699] */
typedef struct {
 DWORD cbStruct;
 PWSTR pszDeviceDescription;
 PWSTR pszDeviceName;
 PWSTR pszUDN;
 DWORD cachecontrol;
 PUPNPCALLBACK pfCallback;
 PVOID pvUserDevContext; 
} UPNPDEVICEINFO;

/* UPNPPARAM  [struct; ce-only; CE 4.0..699] */
typedef struct {
 PCWSTR pszName;
 PCWSTR pszValue;
} UPNPPARAM;

/* UPNPSERVICECONTROL  [struct; ce-only; CE 4.0..699] */
typedef struct {
 PCWSTR pszRequestXML;
 PCWSTR pszSID;
 PCWSTR pszServiceType;
 PCWSTR pszAction;
 PCWSTR pszUDN;
 DWORD iAction;
 DWORD cInArgs;
 UPNPPARAM* pInArgs;
 PVOID Reserved1; 
} UPNPSERVICECONTROL;

/* UPNPSUBSCRIPTION  [struct; ce-only; CE 4.0..699] */
typedef struct {
 PCWSTR pszUDN;
 PCWSTR pszSID;
} UPNPSUBSCRIPTION, *PUNPNSUBSCRIPTION;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* UpnpAddDevice  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpAddDevice(
 UPNPDEVICEINFO* pDevInfo
);

/* UpnpGetSCPDPath  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpGetSCPDPath(
 PCWSTR pszDeviceName,
 PCWSTR pszServiceId,
 PCWSTR pszUDN,
 PCWSTR pszSCPDFilePath,
 DWORD cchFilePath
);

/* UpnpGetUDN  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpGetUDN(
 PCWSTR pszDeviceName,
 PCWSTR pszTemplateUDN,
 PWSTR pszUDNBuf,
 PDWORD pchBuf
);

/* UpnpPublishDevice  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpPublishDevice( 
 PCWSTR pszDeviceName
);

/* UpnpRemoveDevice  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpRemoveDevice(
 PCWSTR pszDeviceName
);

/* UpnpSetControlResponse  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
UpnpSetControlResponse(
 UPNPSERVICECONTROL* pUPnPAction,
 DWORD cOutArgs,
 UPNPPARAM* aOutArgs
);

/* UpnpSetErrorResponse  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
UpnpSetErrorResponse(
 UPNPSERVICECONTROL* pUPnPAction,
 DWORD dwErrorCode,
 PCWSTR pszErrorDescription
);

/* UpnpSetRawControlResponse  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
UpnpSetRawControlResponse(
 UPNPSERVICECONTROL* pUPnPAction,
 DWORD dwHttpStatus,
 PCWSTR pszRespXML
);

/* UpnpSubmitPropertyEvent  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpSubmitPropertyEvent(
 PCWSTR pszDeviceName,
 PCWSTR pszUDN,
 PCWSTR pszServiceId,
 DWORD nArgs,
 UPNPPARAM* rgArgs
);

/* UpnpUnpublishDevice  [function; ce-only; CE 4.0..699; Upnpcapi.lib] */
BOOL WINAPI UpnpUnpublishDevice(
 PCWSTR pszDeviceName
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {PCWSTRpszUDN;PCWSTRpszSID;} UPNPSUBSCRIPTION, *PUNPNSUBSCRIPTION;

#endif /* _UPNPDEVAPI_ */
