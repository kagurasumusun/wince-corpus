/* lfapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 18 declarations, 4 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _LFAPI_
#define _LFAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define LOCATION_OFFSET_UNSET 0xFFFFFFFF

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* LOCATION_REPORT_802_11  [struct; ce-only] */

/* PLUGIN_INFORMATION  [struct; ce-only] */

/* PLUGIN_STATE  [enum; ce-only] */

/* RESOLVER_INFORMATION  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* LocationClose  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationClose(
 HLOCATION hLocation // HLOCATION returned by LocationOpen
);

/* LocationGetPluginInfoForReport  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationGetPluginInfoForReport(
 HLOCATION hLocation,
 REFGUID reportType, 
 PLUGIN_STATE* pPluginState,
 GUID* pPluginGuid
);

/* LocationGetProvidersInfo  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationGetProvidersInfo(
 HLOCATION hLocation,
 PROVIDER_INFORMATION* pProviders,
 DWORD* pcbBuffer
);

/* LocationGetReport  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationGetReport(
 HLOCATION hLocation,
 REFGUID reportType,
 DWORD maximumAge,
 LOCATION_REPORT* pLocationReport,
 DWORD* pcbLocationReport, 
 DWORD flags
);

/* LocationGetResolversInfo  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationGetResolversInfo(
 HLOCATION hLocation,
 RESOLVER_INFORMATION* pResolvers,
 DWORD* pcbBuffer
);

/* LocationGetServiceState  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationGetServiceState(
 HLOCATION hLocation,
 LOCATION_SERVICE_STATE* pServiceState
);

/* LocationOpen  [function; ce-only; CE 6.0..699; lfapi.lib] */
HLOCATION LocationOpen(
 DWORD version,
 VOID* pReserved,
 DWORD flags
);

/* LocationPluginClose  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationPluginClose(
 HLOCATION hLocation,
 HLOCATIONPLUGIN hPlugin
);

/* LocationPluginIOCTL  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationPluginIOCTL(
 HLOCATION hLocation,
 HLOCATIONPLUGIN hPlugin,
 DWORD dwCode,
 BYTE* pbIn,
 DWORD cbIn,
 BYTE* pbOut,
 DWORD* pcbOut
);

/* LocationPluginOpen  [function; ce-only; CE 6.0..699; lfapi.lib] */
HLOCATIONPLUGIN LocationPluginOpen(
 HLOCATION hLocation,
 REFGUID pluginGuid
);

/* LocationRegisterForReport  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationRegisterForReport(
 HLOCATION hLocation,
 HANDLE hNewLocationReport,
 HANDLE hStateChangeEvent,
 REFGUID reportType,
 DWORD flags
);

/* LocationUnRegisterForReport  [function; ce-only; CE 6.0..699; lfapi.lib] */
DWORD LocationUnRegisterForReport(
 HLOCATION hLocation,
 REFGUID reportType,
 DWORD flags
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _LOCATION_REPORT_802_11 {
  LOCATION_REPORT_BASE base;
  DWORD numAccessPoints;
  BYTE BSSID[LOCATION_MAX_ACCESS_POINTS][BSSID_MAX_LEN];
  FLOAT RSSI[LOCATION_MAX_ACCESS_POINTS];
} LOCATION_REPORT_802_11, *PLOCATION_REPORT_802_11;
typedef struct _LOCATION_REPORT_ADDRESS {
  LOCATION_REPORT_BASE base;
  DWORD buildingNameOffset;
  DWORD floorOffset;
  DWORD roomOffset;
  DWORD descriptionOffset;
  BYTE data[1];
} LOCATION_REPORT_ADDRESS, *PLOCATION_REPORT_ADDRESS;
typedef struct _LOCATION_REPORT_BASE {
  DWORD version;
  GUID type;
  DWORD size;
  GUID plugin;
  FILETIME creationTime;
  DWORD flags;
} LOCATION_REPORT_BASE, *PLOCATION_REPORT_BASE;
typedef struct _LOCATION_REPORT_LATLONG {
  LOCATION_REPORT_BASE base;
  DWORD validFields;
  DOUBLE latitude;
  DOUBLE longitude;
  DOUBLE altitudeWRTSeaLevel;
  DOUBLE speed;
  DOUBLE heading;
} LOCATION_REPORT_LATLONG, *PLOCATION_REPORT_LATLONG;
typedef struct _LOCATION_SERVICE_STATE {
  DWORD serviceState;
  DWORD numLoadedProviders;
  DWORD numLoadedResolvers;
  DWORD numActiveProviders;
  DWORD numActiveResolvers;
} LOCATION_SERVICE_STATE, *PLOCATION_SERVICE_STATE;
typedef struct _PLUGIN_INFORMATION {
  DWORD version;
  GUID guid;
  WCHAR friendlyName[MAX_PLUGIN_FRIENDLY_NAME];
  PLUGIN_STATE pluginState;
  DWORD retryInterval;
  DWORD maximumInitialWait;
  DWORD numReportsGenerated;
  GUID reportsGenerated[MAX_PLUGIN_REPORT_TYPES];
  FILETIME lastUpdate;
  DWORD pluginFlags;
} PLUGIN_INFORMATION, *PPLUGIN_INFORMATION;
typedef struct _PROVIDER_INFORMATION {
  PLUGIN_INFORMATION pluginInfo;
  DWORD pollInterval;
  DWORD providerFlags;
} PROVIDER_INFORMATION, *PPROVIDER_INFORMATION;
typedef struct _RESOLVER_INFORMATION {
  PLUGIN_INFORMATION pluginInfo;
  DWORD minRequeryInterval;
  DWORD numReportsSupported;
  GUID reportsSupported[MAX_PLUGIN_REPORT_TYPES];
  DWORD resolverFlags;
} RESOLVER_INFORMATION, *PRESOLVER_INFORMATION;

#endif /* _LFAPI_ */
