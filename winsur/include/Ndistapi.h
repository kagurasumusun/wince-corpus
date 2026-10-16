/* Ndistapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 34 declarations, 2 outlines, 0 base types, 0 extra macros, 34 extra decls
 */
#ifndef _NDISTAPI_
#define _NDISTAPI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* NDIS_TAPI_MAKE_CALL  [struct; ce-only; CE 4.0..699] */

/* NDIS_TAPI_SET_CALL_PARAMS  [struct; ce-only; CE 4.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* NDIS_TAPI_ACCEPT  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_ACCEPT { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulUserUserInfoSize; 
 UCHAR UserUserInfo[1]; 
} NDIS_TAPI_ACCEPT, *PNDIS_TAPI_ACCEPT;

/* NDIS_TAPI_ANSWER  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_ANSWER { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulUserUserInfoSize; 
 UCHAR UserUserInfo[1]; 
} NDIS_TAPI_ANSWER, *PNDIS_TAPI_ANSWER;

/* NDIS_TAPI_CLOSE  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_CLOSE { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
} NDIS_TAPI_CLOSE, *PNDIS_TAPI_CLOSE;

/* NDIS_TAPI_CLOSE_CALL  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_CLOSE_CALL { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
} NDIS_TAPI_CLOSE_CALL, *PNDIS_TAPI_CLOSE_CALL;

/* NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulMediaModes; 
 LINE_CALL_PARAMS LineCallParams; 
} NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION, 
*PNDIS_TAPI_CONDITIONAL_MEDIA_DETECTION;

/* NDIS_TAPI_CONFIG_DIALOG  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_CONFIG_DIALOG { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 ULONG ulDeviceClassSize; 
 ULONG ulDeviceClassOffset; 
 ULONG ulLibraryNameTotalSize; 
 ULONG ulLibraryNameNeededSize; 
 CHAR szLibraryName[1]; 
} NDIS_TAPI_CONFIG_DIALOG, *PNDIS_TAPI_CONFIG_DIALOG;

/* NDIS_TAPI_DEV_SPECIFIC  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_DEV_SPECIFIC { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulAddressID; 
 HDRV_CALL hdCall; 
 ULONG ulParamsSize; 
 UCHAR Params[1]; 
} NDIS_TAPI_DEV_SPECIFIC, *PNDIS_TAPI_DEV_SPECIFIC;

/* NDIS_TAPI_DIAL  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_DIAL { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulDestAddressSize; 
 CHAR szDestAddress[1]; 
} NDIS_TAPI_DIAL, *PNDIS_TAPI_DIAL;

/* NDIS_TAPI_DROP  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_DROP { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulUserUserInfoSize; 
 UCHAR UserUserInfo[1]; 
} NDIS_TAPI_DROP, *PNDIS_TAPI_DROP;

/* NDIS_TAPI_EVENT  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_EVENT {
 HTAPI_LINE htLine,
 HTAPI_CALL htCall,
 ULONG ulMsg,
 ULONG ulParam1,
 ULONG ulParam2,
 ULONG ulParam3
} NDIS_TAPI_EVENT, *PNDIS_TAPI_EVENT;

/* NDIS_TAPI_GET_ADDRESS_CAPS  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_ADDRESS_CAPS { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 ULONG ulAddressID; 
 ULONG ulExtVersion; 
 LINE_ADDRESS_CAPS LineAddressCaps; 
} NDIS_TAPI_GET_ADDRESS_CAPS, *PNDIS_TAPI_GET_ADDRESS_CAPS;

/* NDIS_TAPI_GET_ADDRESS_ID  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_ADDRESS_ID { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulAddressID; 
 ULONG ulAddressMode; 
 ULONG ulAddressSize; 
 CHAR szAddress[1]; 
} NDIS_TAPI_GET_ADDRESS_ID, *PNDIS_TAPI_GET_ADDRESS_ID;

/* NDIS_TAPI_GET_ADDRESS_STATUS  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_ADDRESS_STATUS { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulAddressID; 
 OUT LINE_ADDRESS_STATUS LineAddressStatus; 
} NDIS_TAPI_GET_ADDRESS_STATUS, *PNDIS_TAPI_GET_ADDRESS_STATUS;

/* NDIS_TAPI_GET_CALL_ADDRESS_ID  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_CALL_ADDRESS_ID { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulAddressID; 
} NDIS_TAPI_GET_CALL_ADDRESS_ID, *PNDIS_TAPI_GET_CALL_ADDRESS_ID;

/* NDIS_TAPI_GET_CALL_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_CALL_INFO { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 LINE_CALL_INFO LineCallInfo; 
} NDIS_TAPI_GET_CALL_INFO, *PNDIS_TAPI_GET_CALL_INFO;

/* NDIS_TAPI_GET_CALL_STATUS  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_CALL_STATUS { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 OUT LINE_CALL_STATUS LineCallStatus; 
} NDIS_TAPI_GET_CALL_STATUS, *PNDIS_TAPI_GET_CALL_STATUS;

/* NDIS_TAPI_GET_DEV_CAPS  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_DEV_CAPS { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 ULONG ulExtVersion; 
 LINE_DEV_CAPS LineDevCaps; 
} NDIS_TAPI_GET_DEV_CAPS, *PNDIS_TAPI_GET_DEV_CAPS;

/* NDIS_TAPI_GET_DEV_CONFIG  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_DEV_CONFIG { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 ULONG ulDeviceClassSize; 
 ULONG ulDeviceClassOffset; 
 VAR_STRING DeviceConfig; 
} NDIS_TAPI_GET_DEV_CONFIG, *PNDIS_TAPI_GET_DEV_CONFIG;

/* NDIS_TAPI_GET_EXTENSION_ID  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_EXTENSION_ID { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 LINE_EXTENSION_ID LineExtensionID; 
} NDIS_TAPI_GET_EXTENSION_ID, *PNDIS_TAPI_GET_EXTENSION_ID;

/* NDIS_TAPI_GET_ID  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_ID { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulAddressID; 
 HDRV_CALL hdCall; 
 ULONG ulSelect; 
 ULONG ulDeviceClassSize; 
 ULONG ulDeviceClassOffset; 
 VAR_STRING DeviceID; 
} NDIS_TAPI_GET_ID, *PNDIS_TAPI_GET_ID;

/* NDIS_TAPI_GET_LINE_DEV_STATUS  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_GET_LINE_DEV_STATUS { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 LINE_DEV_STATUS LineDevStatus; 
} NDIS_TAPI_GET_LINE_DEV_STATUS, *PNDIS_TAPI_GET_LINE_DEV_STATUS;

/* NDIS_TAPI_NEGOTIATE_EXT_VERSION  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_NEGOTIATE_EXT_VERSION { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 ULONG ulLowVersion; 
 ULONG ulHighVersion; 
 OUT ULONG ulExtVersion; 
} NDIS_TAPI_NEGOTIATE_EXT_VERSION, *PNDIS_TAPI_NEGOTIATE_EXT_VERSION;

/* NDIS_TAPI_OPEN  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_OPEN { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 HTAPI_LINE htLine; 
 HDRV_LINE hdLine; 
} NDIS_TAPI_OPEN, *PNDIS_TAPI_OPEN;

/* NDIS_TAPI_PROVIDER_INITIALIZE  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_PROVIDER_INITIALIZE { 
 ULONG ulRequestID; 
 ULONG ulDeviceIDBase; 
 ULONG ulNumLineDevs; 
 ULONG ulProviderID; 
} NDIS_TAPI_PROVIDER_INITIALIZE, *PNDIS_TAPI_PROVIDER_INITIALIZE;

/* NDIS_TAPI_PROVIDER_SHUTDOWN  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_PROVIDER_SHUTDOWN { 
 ULONG ulRequestID; 
} NDIS_TAPI_PROVIDER_SHUTDOWN, *PNDIS_TAPI_PROVIDER_SHUTDOWN;

/* NDIS_TAPI_SECURE_CALL  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SECURE_CALL { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
} NDIS_TAPI_SECURE_CALL, *PNDIS_TAPI_SECURE_CALL;

/* NDIS_TAPI_SELECT_EXT_VERSION  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SELECT_EXT_VERSION { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulExtVersion; 
} NDIS_TAPI_SELECT_EXT_VERSION, *PNDIS_TAPI_SELECT_EXT_VERSION;

/* NDIS_TAPI_SEND_USER_USER_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SEND_USER_USER_INFO { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulUserUserInfoSize; 
 UCHAR UserUserInfo[1]; 
} NDIS_TAPI_SEND_USER_USER_INFO, *PNDIS_TAPI_SEND_USER_USER_INFO;

/* NDIS_TAPI_SET_APP_SPECIFIC  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SET_APP_SPECIFIC { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulAppSpecific; 
} NDIS_TAPI_SET_APP_SPECIFIC, *PNDIS_TAPI_SET_APP_SPECIFIC;

/* NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulMediaModes; 
} NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION, *PNDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION;

/* NDIS_TAPI_SET_DEV_CONFIG  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SET_DEV_CONFIG { 
 ULONG ulRequestID; 
 ULONG ulDeviceID; 
 ULONG ulDeviceClassSize; 
 ULONG ulDeviceClassOffset; 
 ULONG ulDeviceConfigSize; 
 UCHAR DeviceConfig[1]; 
} NDIS_TAPI_SET_DEV_CONFIG, *PNDIS_TAPI_SET_DEV_CONFIG;

/* NDIS_TAPI_SET_MEDIA_MODE  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SET_MEDIA_MODE { 
 ULONG ulRequestID; 
 HDRV_CALL hdCall; 
 ULONG ulMediaMode; 
} NDIS_TAPI_SET_MEDIA_MODE, *PNDIS_TAPI_SET_MEDIA_MODE;

/* NDIS_TAPI_SET_STATUS_MESSAGES  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TAPI_SET_STATUS_MESSAGES { 
 ULONG ulRequestID; 
 HDRV_LINE hdLine; 
 ULONG ulLineStates; 
 ULONG ulAddressStates; 
} NDIS_TAPI_SET_STATUS_MESSAGES, *PNDIS_TAPI_SET_STATUS_MESSAGES;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* VAR_STRING  [struct; ce-only; CE 5.0..699] */
typedef struct _VAR_STRING {
 ULONG ulTotalSize;
 ULONG ulNeededSize;
 ULONG ulUsedSize;
 ULONG ulStringFormat;
 ULONG ulStringSize;
 ULONG ulStringOffset;
} VAR_STRING, *PVAR_STRING;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _NDIS_TAPI_ACCEPT { ULONGulRequestID;HDRV_CALLhdCall;ULONGulUserUserInfoSize;UCHARUserUserInfo[1];} NDIS_TAPI_ACCEPT, *PNDIS_TAPI_ACCEPT;
typedef struct _NDIS_TAPI_ANSWER { ULONGulRequestID; HDRV_CALLhdCall;ULONGulUserUserInfoSize;UCHARUserUserInfo[1];} NDIS_TAPI_ANSWER, *PNDIS_TAPI_ANSWER;
typedef struct _NDIS_TAPI_CLOSE { ULONGulRequestID;HDRV_LINEhdLine;} NDIS_TAPI_CLOSE, *PNDIS_TAPI_CLOSE;
typedef struct _NDIS_TAPI_CLOSE_CALL { ULONGulRequestID;HDRV_CALLhdCall;} NDIS_TAPI_CLOSE_CALL, *PNDIS_TAPI_CLOSE_CALL;
typedef struct _NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION { ULONGulRequestID;HDRV_LINEhdLine;ULONGulMediaModes;LINE_CALL_PARAMSLineCallParams;} NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION, *PNDIS_TAPI_CONDITIONAL_MEDIA_DETECTION;
typedef struct _NDIS_TAPI_CONFIG_DIALOG { ULONGulRequestID;ULONGulDeviceID;ULONGulDeviceClassSize;ULONGulDeviceClassOffset;ULONGulLibraryNameTotalSize; ULONGulLibraryNameNeededSize; CHARszLibraryName[1];} NDIS_TAPI_CONFIG_DIALOG, *PNDIS_TAPI_CONFIG_DIALOG;
typedef struct _NDIS_TAPI_DEV_SPECIFIC { ULONGulRequestID;HDRV_LINEhdLine;ULONGulAddressID;HDRV_CALLhdCall;ULONGulParamsSize;UCHARParams[1];} NDIS_TAPI_DEV_SPECIFIC, *PNDIS_TAPI_DEV_SPECIFIC;
typedef struct _NDIS_TAPI_DIAL { ULONGulRequestID; HDRV_CALLhdCall; ULONGulDestAddressSize;CHARszDestAddress[1];} NDIS_TAPI_DIAL, *PNDIS_TAPI_DIAL;
typedef struct _NDIS_TAPI_DROP { ULONGulRequestID;HDRV_CALLhdCall; ULONGulUserUserInfoSize; UCHARUserUserInfo[1];} NDIS_TAPI_DROP, *PNDIS_TAPI_DROP;
typedef struct _NDIS_TAPI_EVENT {HTAPI_LINEhtLine,HTAPI_CALLhtCall,ULONGulMsg,ULONGulParam1,ULONGulParam2,ULONGulParam3} NDIS_TAPI_EVENT, *PNDIS_TAPI_EVENT;
typedef struct _NDIS_TAPI_GET_ADDRESS_CAPS { ULONGulRequestID; ULONG ulDeviceID; ULONGulAddressID;ULONG ulExtVersion; LINE_ADDRESS_CAPSLineAddressCaps;} NDIS_TAPI_GET_ADDRESS_CAPS, *PNDIS_TAPI_GET_ADDRESS_CAPS;
typedef struct _NDIS_TAPI_GET_ADDRESS_ID { ULONGulRequestID;HDRV_LINEhdLine;ULONGulAddressID;ULONGulAddressMode;ULONGulAddressSize;CHARszAddress[1];} NDIS_TAPI_GET_ADDRESS_ID, *PNDIS_TAPI_GET_ADDRESS_ID;
typedef struct _NDIS_TAPI_GET_ADDRESS_STATUS { ULONG ulRequestID;HDRV_LINEhdLine;ULONGulAddressID;OUT LINE_ADDRESS_STATUSLineAddressStatus;} NDIS_TAPI_GET_ADDRESS_STATUS, *PNDIS_TAPI_GET_ADDRESS_STATUS;
typedef struct _NDIS_TAPI_GET_CALL_ADDRESS_ID { ULONG ulRequestID;HDRV_CALLhdCall; ULONGulAddressID;} NDIS_TAPI_GET_CALL_ADDRESS_ID, *PNDIS_TAPI_GET_CALL_ADDRESS_ID;
typedef struct _NDIS_TAPI_GET_CALL_INFO { ULONGulRequestID;HDRV_CALLhdCall;LINE_CALL_INFOLineCallInfo;} NDIS_TAPI_GET_CALL_INFO, *PNDIS_TAPI_GET_CALL_INFO;
typedef struct _NDIS_TAPI_GET_CALL_STATUS { ULONGulRequestID;HDRV_CALLhdCall; OUT LINE_CALL_STATUSLineCallStatus;} NDIS_TAPI_GET_CALL_STATUS, *PNDIS_TAPI_GET_CALL_STATUS;
typedef struct _NDIS_TAPI_GET_DEV_CAPS { ULONG ulRequestID;ULONGulDeviceID; ULONGulExtVersion; LINE_DEV_CAPSLineDevCaps;} NDIS_TAPI_GET_DEV_CAPS, *PNDIS_TAPI_GET_DEV_CAPS;
typedef struct _NDIS_TAPI_GET_DEV_CONFIG { ULONGulRequestID;ULONGulDeviceID; ULONGulDeviceClassSize;ULONGulDeviceClassOffset;VAR_STRINGDeviceConfig;} NDIS_TAPI_GET_DEV_CONFIG, *PNDIS_TAPI_GET_DEV_CONFIG;
typedef struct _NDIS_TAPI_GET_EXTENSION_ID { ULONGulRequestID;ULONGulDeviceID;LINE_EXTENSION_IDLineExtensionID;} NDIS_TAPI_GET_EXTENSION_ID, *PNDIS_TAPI_GET_EXTENSION_ID;
typedef struct _NDIS_TAPI_GET_ID { ULONGulRequestID;HDRV_LINEhdLine;ULONGulAddressID;HDRV_CALLhdCall;ULONGulSelect;ULONGulDeviceClassSize;ULONGulDeviceClassOffset;VAR_STRINGDeviceID;}NDIS_TAPI_GET_ID, *PNDIS_TAPI_GET_ID;
typedef struct _NDIS_TAPI_GET_LINE_DEV_STATUS { ULONGulRequestID;HDRV_LINEhdLine;LINE_DEV_STATUSLineDevStatus;} NDIS_TAPI_GET_LINE_DEV_STATUS, *PNDIS_TAPI_GET_LINE_DEV_STATUS;
typedef struct _NDIS_TAPI_NEGOTIATE_EXT_VERSION { ULONGulRequestID;ULONGulDeviceID;ULONGulLowVersion;ULONGulHighVersion;OUT ULONGulExtVersion;} NDIS_TAPI_NEGOTIATE_EXT_VERSION, *PNDIS_TAPI_NEGOTIATE_EXT_VERSION;
typedef struct _NDIS_TAPI_OPEN { ULONGulRequestID;ULONGulDeviceID;HTAPI_LINEhtLine;HDRV_LINEhdLine;} NDIS_TAPI_OPEN, *PNDIS_TAPI_OPEN;
typedef struct _NDIS_TAPI_PROVIDER_INITIALIZE { ULONGulRequestID;ULONGulDeviceIDBase; ULONGulNumLineDevs;ULONGulProviderID;} NDIS_TAPI_PROVIDER_INITIALIZE, *PNDIS_TAPI_PROVIDER_INITIALIZE;
typedef struct _NDIS_TAPI_PROVIDER_SHUTDOWN { ULONGulRequestID;} NDIS_TAPI_PROVIDER_SHUTDOWN, *PNDIS_TAPI_PROVIDER_SHUTDOWN;
typedef struct _NDIS_TAPI_SECURE_CALL { ULONGulRequestID; HDRV_CALLhdCall;} NDIS_TAPI_SECURE_CALL, *PNDIS_TAPI_SECURE_CALL;
typedef struct _NDIS_TAPI_SELECT_EXT_VERSION { ULONGulRequestID;HDRV_LINEhdLine;ULONGulExtVersion;} NDIS_TAPI_SELECT_EXT_VERSION, *PNDIS_TAPI_SELECT_EXT_VERSION;
typedef struct _NDIS_TAPI_SEND_USER_USER_INFO { ULONGulRequestID; HDRV_CALLhdCall; ULONGulUserUserInfoSize; UCHARUserUserInfo[1];} NDIS_TAPI_SEND_USER_USER_INFO, *PNDIS_TAPI_SEND_USER_USER_INFO;
typedef struct _NDIS_TAPI_SET_APP_SPECIFIC { ULONGulRequestID;HDRV_CALLhdCall;ULONGulAppSpecific;} NDIS_TAPI_SET_APP_SPECIFIC, *PNDIS_TAPI_SET_APP_SPECIFIC;
typedef struct _NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION { ULONGulRequestID; HDRV_LINEhdLine; ULONGulMediaModes;} NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION, *PNDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION;
typedef struct _NDIS_TAPI_SET_DEV_CONFIG { ULONG ulRequestID; ULONGulDeviceID; ULONGulDeviceClassSize; ULONGulDeviceClassOffset; ULONGulDeviceConfigSize; UCHARDeviceConfig[1];} NDIS_TAPI_SET_DEV_CONFIG, *PNDIS_TAPI_SET_DEV_CONFIG;
typedef struct _NDIS_TAPI_SET_MEDIA_MODE { ULONGulRequestID;HDRV_CALLhdCall;ULONGulMediaMode;} NDIS_TAPI_SET_MEDIA_MODE, *PNDIS_TAPI_SET_MEDIA_MODE;
typedef struct _NDIS_TAPI_SET_STATUS_MESSAGES { ULONGulRequestID;HDRV_LINEhdLine;ULONGulLineStates; ULONGulAddressStates;} NDIS_TAPI_SET_STATUS_MESSAGES, *PNDIS_TAPI_SET_STATUS_MESSAGES;
typedef struct _VAR_STRING { ULONGulTotalSize;ULONGulNeededSize;ULONGulUsedSize;ULONGulStringFormat;ULONGulStringSize;ULONGulStringOffset;} VAR_STRING, *PVAR_STRING;

#endif /* _NDISTAPI_ */
