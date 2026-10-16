/* Hidpi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 38 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _HIDPI_
#define _HIDPI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

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

/* PHIDP_BUTTON_CAPS  [extra struct] */
typedef struct _HIDP_BUTTON_CAPS { USAGE UsagePage; UCHAR ReportID; BOOLEAN IsAlias; USHORT BitField; USHORT LinkCollection; USAGE LinkUsage; USAGE LinkUsagePage; BOOLEAN IsRange; BOOLEAN IsStringRange; BOOLEAN IsDesignatorRange; BOOLEAN IsAbsolute; ULONG Reserved[10]; union { struct { USAGE UsageMin, UsageMax; USHORT StringMin, StringMax; USHORT DesignatorMin, DesignatorMax; USHORT DataIndexMin, DataIndexMax; } Range; struct { USAGE Usage, Reserved1; USHORT StringIndex, Reserved2; USHORT DesignatorIndex, Reserved3; USHORT DataIndex, Reserved4; } NotRange; };} HIDP_BUTTON_CAPS, * PHIDP_BUTTON_CAPS;

/* PHIDP_CAPS  [extra struct] */
typedef struct _HIDP_CAPS { USAGE Usage; USAGE UsagePage; USHORT InputReportByteLength; USHORT OutputReportByteLength; USHORT FeatureReportByteLength; USHORT Reserved[17]; USHORT NumberLinkCollectionNodes; USHORT NumberInputButtonCaps; USHORT NumberInputValueCaps; USHORT NumberInputDataIndices; USHORT NumberOutputButtonCaps; USHORT NumberOutputValueCaps; USHORT NumberOutputDataIndices; USHORT NumberFeatureButtonCaps; USHORT NumberFeatureValueCaps; USHORT NumberFeatureDataIndices;} HIDP_CAPS, * PHIDP_CAPS;

/* PHIDP_DATA  [extra struct] */
typedef struct _HIDP_DATA { USHORT DataIndex; USHORT Reserved; union { ULONG RawValue; BOOLEAN On; };} HIDP_DATA, * PHIDP_DATA;

/* PHIDP_EXTENDED_ATTRIBUTES  [extra struct] */
typedef struct _HIDP_EXTENDED_ATTRIBUTES { UCHAR NumGlobalUnknowns; UCHAR Reserved[3]; PHIDP_UNKNOWN_TOKEN GlobalUnknowns; ULONG Data[1];} HIDP_EXTENDED_ATTRIBUTES, * PHIDP_EXTENDED_ATTRIBUTES;

/* PHIDP_LINK_COLLECTION_NODE  [extra struct] */
typedef struct _HIDP_LINK_COLLECTION_NODE { USAGE LinkUsage; USAGE LinkUsagePage; USHORT Parent; USHORT NumberOfChildren; USHORT NextSibling; USHORT FirstChild; ULONG CollectionType: 8; ULONG IsAlias: 1; ULONG Reserved: 23; PVOID UserContext;} HIDP_LINK_COLLECTION_NODE, * PHIDP_LINK_COLLECTION_NODE;

/* PHIDP_UNKNOWN_TOKEN  [extra struct] */
typedef struct _HIDP_UNKNOWN_TOKEN { UCHAR Token; UCHAR Reserved[3]; ULONG BitField;} HIDP_UNKNOWN_TOKEN, * PHIDP_UNKNOWN_TOKEN;

/* PHIDP_VALUE_CAPS  [extra struct] */
typedef struct _HIDP_VALUE_CAPS { USAGE UsagePage; UCHAR ReportID; BOOLEAN IsAlias; USHORT BitField; USHORT LinkCollection; USAGE LinkUsage; USAGE LinkUsagePage; BOOLEAN IsRange; BOOLEAN IsStringRange; BOOLEAN IsDesignatorRange; BOOLEAN IsAbsolute; BOOLEAN HasNull; UCHAR Reserved; USHORT BitSize; USHORT ReportCount; USHORT Reserved2[5]; ULONG UnitsExp; ULONG Units; LONG LogicalMin, LogicalMax; LONG PhysicalMin, PhysicalMax; union { struct { USAGE UsageMin, UsageMax; USHORT StringMin, StringMax; USHORT DesignatorMin, DesignatorMax; USHORT DataIndexMin, DataIndexMax; } Range; struct { USAGE Usage, Reserved1; USHORT StringIndex, Reserved2; USHORT DesignatorIndex, Reserved3; USHORT DataIndex, Reserved4; } NotRange; };} HIDP_VALUE_CAPS, * PHIDP_VALUE_CAPS;

/* PUSAGE_AND_PAGE  [extra struct] */
typedef struct _USAGE_AND_PAGE { USAGE Usage; USAGE UsagePage;} USAGE_AND_PAGE, * PUSAGE_AND_PAGE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* HidP_UsageAndPageListDifference  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_UsageAndPageListDifference(
 PUSAGE_AND_PAGE PreviousUsageList,
 PUSAGE_AND_PAGE CurrentUsageList,
 PUSAGE_AND_PAGE BreakUsageList,
 PUSAGE_AND_PAGE MakeUsageList,
 ULONG UsageListLength
);
#endif /* _WIN32_WCE */

#endif /* _HIDPI_ */
