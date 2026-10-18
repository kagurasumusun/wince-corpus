/* controldefinitions.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 9 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CONTROLDEFINITIONS_
#define _CONTROLDEFINITIONS_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* STATUS_HEADER_PARAMETERS  [struct; ce-only; PhCommon.dll] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DIALOG_HOOK_PROC  [typedef; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED_DIALOG_HOOK_PROC
#define __WINCE_DEFINED_DIALOG_HOOK_PROC
typedef BOOL (CALLBACK* DIALOG_HOOK_PROC)(HWND hDialogWnd,
 UINT Message,
 WPARAM wParam,
 LPARAM lParam,
 void* pUserData);
#endif /* __WINCE_DEFINED_DIALOG_HOOK_PROC */

/* PH_COLOR  [enum; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PH_COLOR
#define __WINCE_DEFINED__PH_COLOR
typedef enum _PH_COLOR
{
 phcDefaultTransparentColor = 0,
 phcDefaultBackgroundColor,
 phcDefaultTextColor,
 phcDisplayItemBackgroundColor,
 phcDisplayItemSelectedBackgroundColor,
 phcDisplayItemTextColor,
 phcDisplayItemSelectedTextColor,
 phcDisplayItemBorderColor,
 phcDisplayItemSelectedBorderColor,
 phcLast,
} PH_COLOR;
#endif /* __WINCE_DEFINED__PH_COLOR */
#ifndef __WINCE_DEFINED_PPH_COLOR
#define __WINCE_DEFINED_PPH_COLOR
typedef PH_COLOR *PPH_COLOR, *LPPH_COLOR;
#endif /* __WINCE_DEFINED_PPH_COLOR */

/* PH_DIALOG_SCREEN_PARAMETERS  [struct; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PH_DIALOG_SCREEN_PARAMETERS
#define __WINCE_DEFINED__PH_DIALOG_SCREEN_PARAMETERS
typedef struct _PH_DIALOG_SCREEN_PARAMETERS
{
 DWORD StructSize;
 DWORD Flags;
 HWND Owner;
 UINT Id;
 HINSTANCE Instance;
 const WCHAR* pStatusHeader;
 const WCHAR* pTitle;
 UINT MenuId;
 DIALOG_HOOK_PROC pDialogHook;
 void* pUserData;
 union {
 UINT SelectedId;
 HWND Dialog;
 } result;
} PH_DIALOG_SCREEN_PARAMETERS;
#endif /* __WINCE_DEFINED__PH_DIALOG_SCREEN_PARAMETERS */
#ifndef __WINCE_DEFINED_PPH_DIALOG_SCREEN_PARAMETERS
#define __WINCE_DEFINED_PPH_DIALOG_SCREEN_PARAMETERS
typedef PH_DIALOG_SCREEN_PARAMETERS *PPH_DIALOG_SCREEN_PARAMETERS, *LPPH_DIALOG_SCREEN_PARAMETERS;
#endif /* __WINCE_DEFINED_PPH_DIALOG_SCREEN_PARAMETERS */

/* PH_FONT  [enum; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PH_FONT
#define __WINCE_DEFINED__PH_FONT
typedef enum _PH_FONT
{
 phfStandardText = 0,
 phfStandardTextBold,
 phfInformationText,
 phfLargeText,
 phfBigNumbersText,
 phfLast,
} PH_FONT;
#endif /* __WINCE_DEFINED__PH_FONT */
#ifndef __WINCE_DEFINED_PPH_FONT
#define __WINCE_DEFINED_PPH_FONT
typedef PH_FONT *PPH_FONT, *LPPH_FONT;
#endif /* __WINCE_DEFINED_PPH_FONT */

/* PH_MESSAGE_BOX_PARAMETERS  [struct; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PH_MESSAGE_BOX_PARAMETERS
#define __WINCE_DEFINED__PH_MESSAGE_BOX_PARAMETERS
typedef struct _PH_MESSAGE_BOX_PARAMETERS
{
 DWORD StructSize;
 DWORD Flags;
 HWND Owner;
 HINSTANCE Instance;
 const WCHAR* pTitle;
 const WCHAR* pText;
 UINT IconId;
 UINT MenuId;
 union{
 UINT SelectedId;
 HWND Dialog;
 } result;
} PH_MESSAGE_BOX_PARAMETERS;
#endif /* __WINCE_DEFINED__PH_MESSAGE_BOX_PARAMETERS */
#ifndef __WINCE_DEFINED_PPH_MESSAGE_BOX_PARAMETERS
#define __WINCE_DEFINED_PPH_MESSAGE_BOX_PARAMETERS
typedef PH_MESSAGE_BOX_PARAMETERS *PPH_MESSAGE_BOX_PARAMETERS, *LPPH_MESSAGE_BOX_PARAMETERS;
#endif /* __WINCE_DEFINED_PPH_MESSAGE_BOX_PARAMETERS */

/* PHMS_ITEM  [struct; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PHMS_ITEM
#define __WINCE_DEFINED__PHMS_ITEM
typedef struct _PHMS_ITEM
{
 int Identifier;
 int StringId;
} PHMS_ITEM;
#endif /* __WINCE_DEFINED__PHMS_ITEM */
#ifndef __WINCE_DEFINED_PPHMS_ITEM
#define __WINCE_DEFINED_PPHMS_ITEM
typedef PHMS_ITEM *PPHMS_ITEM, *LPPHMS_ITEM;
#endif /* __WINCE_DEFINED_PPHMS_ITEM */

/* STATUS_HEADER_PRIORITY  [enum; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__STATUS_HEADER_PRIORITY
#define __WINCE_DEFINED__STATUS_HEADER_PRIORITY
typedef enum _STATUS_HEADER_PRIORITY
{
 shpError = 0,
 shpTempChanges,
 shpNodeHelp,
 shpSystem,
 shpHelp,
 shpForwarding,
 shpIncomingCall,
 shpMissedCalls,
 shpDefault,
 StatusHeaderPriorities,
} STATUS_HEADER_PRIORITY;
#endif /* __WINCE_DEFINED__STATUS_HEADER_PRIORITY */
#ifndef __WINCE_DEFINED_PSTATUS_HEADER_PRIORITY
#define __WINCE_DEFINED_PSTATUS_HEADER_PRIORITY
typedef STATUS_HEADER_PRIORITY *PSTATUS_HEADER_PRIORITY, *LPSTATUS_HEADER_PRIORITY;
#endif /* __WINCE_DEFINED_PSTATUS_HEADER_PRIORITY */

/* PH_MENU_SCREEN_PARAMETERS  [struct; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PH_MENU_SCREEN_PARAMETERS
#define __WINCE_DEFINED__PH_MENU_SCREEN_PARAMETERS
typedef struct _PH_MENU_SCREEN_PARAMETERS
{
 DWORD StructSize;
 DWORD Flags;
 HWND Owner;
 UINT Id;
 HINSTANCE Instance;
 const WCHAR* pTitle;
 PHMS_ITEM* pMenuScreenItems;
 int ItemCount;
 UINT NotificationMsg;
 union{
 UINT SelectedId;
 HWND Dialog;
 } result;
} PH_MENU_SCREEN_PARAMETERS;
#endif /* __WINCE_DEFINED__PH_MENU_SCREEN_PARAMETERS */
#ifndef __WINCE_DEFINED_PPH_MENU_SCREEN_PARAMETERS
#define __WINCE_DEFINED_PPH_MENU_SCREEN_PARAMETERS
typedef PH_MENU_SCREEN_PARAMETERS *PPH_MENU_SCREEN_PARAMETERS, *LPPH_MENU_SCREEN_PARAMETERS;
#endif /* __WINCE_DEFINED_PPH_MENU_SCREEN_PARAMETERS */

#endif /* _CONTROLDEFINITIONS_ */
