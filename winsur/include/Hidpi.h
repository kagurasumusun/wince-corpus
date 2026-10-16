/* Hidpi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 34 declarations, 3 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _HIDPI_
#define _HIDPI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* HIDP_BUTTON_CAPS  [struct; ce-only] */

/* HIDP_DATA  [struct; ce-only] */

/* HidP_GetButtons  [macro; ce-only] */
#define HidP_GetButtons(Rty, UPa, LCo, ULi, ULe, Ppd, Rep, RLe) \
 HidP_GetUsages(Rty, UPa, LCo, ULi, ULe, Ppd, Rep, RLe)

/* HidP_GetButtonsEx  [macro; ce-only] */
#define HidP_GetButtonsEx(Rty, LCo, BLi, ULe, Ppd, Rep, RLe) \
 HidP_GetUsagesEx(Rty, LCo, BLi, ULe, Ppd, Rep, RLe)

/* HidP_SetButtons  [macro; ce-only] */
#define HidP_SetButtons(Rty, Up, Lco, ULi, ULe, Ppd, Rep, Rle) \
 HidP_SetUsages(Rty, Up, Lco, ULi, ULe, Ppd, Rep, Rle)

/* HidP_UnsetButtons  [macro; ce-only] */
#define HidP_UnsetButtons(Rty, Up, Lco, ULi, ULe, Ppd, Rep, Rle) \
 HidP_UnsetUsages(Rty, Up, Lco, ULi, ULe, Ppd, Rep, Rle)

/* HIDP_VALUE_CAPS  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* HIDP_KEYBOARD_DIRECTION  [enum; ce-only] */
typedef enum _HIDP_KEYBOARD_DIRECTION {
 HidP_Keyboard_Break,
 HidP_Keyboard_Make
} HIDP_KEYBOARD_DIRECTION;

/* HIDP_REPORT_TYPE  [enum; ce-only] */
typedef enum _HIDP_REPORT_TYPE {
 HidP_Input,
 HidP_Output,
 HidP_Feature
} HIDP_REPORT_TYPE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HidP_GetButtonCaps  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetButtonCaps(
 HIDP_REPORT_TYPE ReportType,
 PHIDP_BUTTON_CAPS ButtonCaps,
 PUSHORT ButtonCapsLength,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_GetCaps  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetCaps(
 PHIDP_PREPARSED_DATA PreparsedData,
 PHIDP_CAPS Capabilities
);

/* HidP_GetData  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetData(
 HIDP_REPORT_TYPE ReportType,
 PHIDP_DATA DataList,
 PULONG DataLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_GetExtendedAttributes  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetExtendedAttributes(
 HIDP_REPORT_TYPE ReportType,
 USHORT DataIndex,
 PHIDP_PREPARSED_DATA PreparsedData,
 PHIDP_EXTENDED_ATTRIBUTES Attributes,
 PULONG LengthAttributes
);

/* HidP_GetLinkCollectionNodes  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetLinkCollectionNodes(
 PHIDP_LINK_COLLECTION_NODE LinkCollectionNodes,
 PULONG LinkCollectionNodesLength,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_GetScaledUsageValue  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetScaledUsageValue(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 PLONG UsageValue,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_GetSpecificButtonCaps  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetSpecificButtonCaps(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 PULONG ButtonCapsLength,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_GetSpecificValueCaps  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetSpecificValueCaps(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 PHIDP_VALUE_CAPS ValueCaps,
 PULONG ValueCapsLength,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_GetUsages  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetUsages(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE* UsageList,
 ULONG* UsageLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_GetUsagesEx  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetUsagesEx(
 HIDP_REPORT_TYPE ReportType,
 USHORT LinkCollection,
 PUSAGE_AND_PAGE ButtonList,
 ULONG* UsageLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_GetUsageValue  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetUsageValue(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 PULONG UsageValue,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_GetUsageValueArray  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetUsageValueArray(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 PCHAR UsageValue,
 USHORT UsageValueByteLength,
 PDIP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_GetValueCaps  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetValueCaps(
 HIDP_REPORT_TYPE ReportType,
 PHIDP_VALUE_CAPS ValueCaps,
 PULONG ValueCapsLength,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_MaxDataListLength  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
ULONG HidP_MaxDataListLength(
 HIDP_REPORT_TYPE ReportType,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_MaxUsageListLength  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
ULONG HidP_MaxUsageListLength(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 PHIDP_PREPARSED_DATA PreparsedData
);

/* HidP_SetData  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_SetData(
 HIDP_REPORT_TYPE ReportType,
 PHIDP_DATA DataList,
 OUT PULONG DataLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_SetScaledUsageValue  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_SetScaledUsageValue(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage, 
 USHORT LinkCollection,
 USAGE Usage,
 LONG UsageValue,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_SetUsages  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_SetUsages(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 PUSAGE UsageList,
 PULONG UsageLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_SetUsageValue  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_SetUsageValue(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 ULONG UsageValue,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_SetUsageValueArray  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_SetUsageValueArray(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 USAGE Usage,
 PCHAR UsageValue,
 USHORT UsageValueByteLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_UnsetUsages  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_UnsetUsages(
 HIDP_REPORT_TYPE ReportType,
 USAGE UsagePage,
 USHORT LinkCollection,
 PUSAGE UsageList,
 PULONG UsageLength,
 PHIDP_PREPARSED_DATA PreparsedData,
 PCHAR Report,
 ULONG ReportLength
);

/* HidP_UsageAndPageListDifference  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_UsageAndPageListDifference(
 PUSAGE_AND_PAGE PreviousUsageList,
 PUSAGE_AND_PAGE CurrentUsageList,
 PUSAGE_AND_PAGE BreakUsageList,
 PUSAGE_AND_PAGE MakeUsageList,
 ULONG UsageListLength
);

/* HidP_UsageListDifference  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_UsageListDifference(
 PUSAGE PreviousUsageList,
 PUSAGE CurrentUsageList,
 PUSAGE BreakUsageList,
 PUSAGE MakeUsageList,
 ULONG UsageListLength
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _HIDP_CAPS { USAGE Usage; USAGE UsagePage; USHORT InputReportByteLength; USHORT OutputReportByteLength; USHORT FeatureReportByteLength; USHORT Reserved[17]; USHORT NumberLinkCollectionNodes; USHORT NumberInputButtonCaps; USHORT NumberInputValueCaps; USHORT NumberInputDataIndices; USHORT NumberOutputButtonCaps; USHORT NumberOutputValueCaps; USHORT NumberOutputDataIndices; USHORT NumberFeatureButtonCaps; USHORT NumberFeatureValueCaps; USHORT NumberFeatureDataIndices;} HIDP_CAPS, * PHIDP_CAPS;
typedef struct _HIDP_EXTENDED_ATTRIBUTES { UCHAR NumGlobalUnknowns; UCHAR Reserved[3]; PHIDP_UNKNOWN_TOKEN GlobalUnknowns; ULONG Data[1];} HIDP_EXTENDED_ATTRIBUTES, * PHIDP_EXTENDED_ATTRIBUTES;
typedef struct _HIDP_LINK_COLLECTION_NODE { USAGE LinkUsage; USAGE LinkUsagePage; USHORT Parent; USHORT NumberOfChildren; USHORT NextSibling; USHORT FirstChild; ULONG CollectionType: 8; ULONG IsAlias: 1; ULONG Reserved: 23; PVOID UserContext;} HIDP_LINK_COLLECTION_NODE, * PHIDP_LINK_COLLECTION_NODE;
typedef struct _HIDP_UNKNOWN_TOKEN { UCHAR Token; UCHAR Reserved[3]; ULONG BitField;} HIDP_UNKNOWN_TOKEN, * PHIDP_UNKNOWN_TOKEN;
typedef struct _USAGE_AND_PAGE { USAGE Usage; USAGE UsagePage;} USAGE_AND_PAGE, * PUSAGE_AND_PAGE;

#endif /* _HIDPI_ */
