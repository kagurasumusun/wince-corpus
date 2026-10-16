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

/* NDIS_TAPI_MAKE_CALL  [struct; ce-only] */

/* NDIS_TAPI_SET_CALL_PARAMS  [struct; ce-only] */

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
