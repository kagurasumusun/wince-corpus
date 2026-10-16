/* WindowsApis.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 105 constants, 68 declarations, 28 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WINDOWSAPIS_
#define _WINDOWSAPIS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DWL_MSGRESULT 0
#define EDD_GET_DEVICE_INTERFACE_NAME 0x00000001
#define FILE_ACTION_ADDED 0x00000001
#define FILE_ACTION_MODIFIED 0x00000003
#define FILE_ACTION_REMOVED 0x00000002
#define FILE_ACTION_RENAMED_NEW_NAME 0x00000005
#define FILE_ACTION_RENAMED_OLD_NAME 0x00000004
#define MFS_CHECKED 0x00000008L
#define MFS_DEFAULT 0x00001000L
#define MFS_DISABLED 0x00000003L
#define MFS_ENABLED 0x00000000L
#define MFS_GRAYED 0x00000003L
#define MFS_HILITE 0x00000080L
#define MFS_UNCHECKED 0x00000000L
#define MFS_UNHILITE 0x00000000L
#define MFT_BITMAP 0x00000004L
#define MFT_MENUBARBREAK 0x00000020L
#define MFT_MENUBREAK 0x00000040L
#define MFT_OWNERDRAW 0x00000100L
#define MFT_RADIOCHECK 0x00000200L
#define MFT_RIGHTJUSTIFY 0x00004000L
#define MFT_RIGHTORDER 0x00002000L
#define MFT_SEPARATOR 0x00000800L
#define MFT_STRING 0x00000000L
#define MIIM_BITMAP 0x00000080
#define MIIM_CHECKMARKS 0x00000008
#define MIIM_DATA 0x00000020
#define MIIM_FTYPE 0x00000100
#define MIIM_ID 0x00000002
#define MIIM_STATE 0x00000001
#define MIIM_STRING 0x00000040
#define MIIM_SUBMENU 0x00000004
#define MIIM_TYPE 0x00000010
#define MKF_AVAILABLE 0x00000002
#define MKF_CONFIRMHOTKEY 0x00000008
#define MKF_HOTKEYACTIVE 0x00000004
#define MKF_HOTKEYSOUND 0x00000010
#define MKF_INDICATOR 0x00000020
#define MKF_LEFTBUTTONDOWN 0x01000000
#define MKF_LEFTBUTTONSEL 0x10000000
#define MKF_MODIFIERS 0x00000040
#define MKF_MOUSEKEYSON 0x00000001
#define MKF_MOUSEMODE 0x80000000
#define MKF_REPLACENUMBERS 0x00000080
#define MKF_RIGHTBUTTONDOWN 0x02000000
#define MKF_RIGHTBUTTONSEL 0x20000000
#define MOD_NOREPEAT 0x4000
#define NUMPAD0 0
#define NUMPAD1 0
#define NUMPAD2 0
#define NUMPAD3 0
#define NUMPAD4 0
#define NUMPAD5 0
#define NUMPAD6 0
#define NUMPAD7 0
#define NUMPAD8 0
#define NUMPAD9 0
#define SKF_AUDIBLEFEEDBACK 0x00000040
#define SKF_AVAILABLE 0x00000002
#define SKF_CONFIRMHOTKEY 0x00000008
#define SKF_HOTKEYACTIVE 0x00000004
#define SKF_HOTKEYSOUND 0x00000010
#define SKF_INDICATOR 0x00000020
#define SKF_LALTLATCHED 0x10000000
#define SKF_LALTLOCKED 0x00100000
#define SKF_LCTLLATCHED 0x04000000
#define SKF_LCTLLOCKED 0x00040000
#define SKF_LSHIFTLATCHED 0x01000000
#define SKF_LSHIFTLOCKED 0x00010000
#define SKF_LWINLATCHED 0x40000000
#define SKF_LWINLOCKED 0x00400000
#define SKF_RALTLATCHED 0x20000000
#define SKF_RALTLOCKED 0x00200000
#define SKF_RCTLLATCHED 0x08000000
#define SKF_RCTLLOCKED 0x00080000
#define SKF_RSHIFTLATCHED 0x02000000
#define SKF_RSHIFTLOCKED 0x00020000
#define SKF_RWINLATCHED 0x80000000
#define SKF_RWINLOCKED 0x00800000
#define SKF_STICKYKEYSON 0x00000001
#define SKF_TRISTATE 0x00000080
#define SKF_TWOKEYSOFF 0x00000100
#define SSF_AVAILABLE 0x00000002
#define SSF_INDICATOR 0x00000004
#define SSF_SOUNDSENTRYON 0x00000001
#define SSGF_DISPLAY 3
#define SSGF_NONE 0
#define SSTF_BORDER 2
#define SSTF_CHARS 1
#define SSTF_DISPLAY 3
#define SSTF_NONE 0
#define SSWF_CUSTOM 4
#define SSWF_DISPLAY 3
#define SSWF_NONE 0
#define SSWF_TITLE 1
#define SSWF_WINDOW 2
#define TKF_AVAILABLE 0x00000002
#define TKF_CONFIRMHOTKEY 0x00000008
#define TKF_HOTKEYACTIVE 0x00000004
#define TKF_HOTKEYSOUND 0x00000010
#define TKF_INDICATOR 0x00000020
#define TKF_TOGGLEKEYSON 0x00000001
#define VER_PLATFORM_WIN32_NT 2
#define XBUTTON1 0x0001
#define XBUTTON2 0x0002

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* definition  [typedef; ce-only; heuristic-prefix] */

/* firstChild  [typedef; ce-only; heuristic-prefix] */

/* HIMAGELIST  [typedef; ce-only; heuristic-prefix] */

/* HIMC  [typedef; ce-only; heuristic-prefix] */

/* lastChild  [typedef; ce-only; heuristic-prefix] */

/* LPCRITICAL_SECTION  [typedef; ce-only; heuristic-prefix] */

/* LUID  [typedef; ce-only; heuristic-prefix] */

/* MAKEINTATOM  [macro, function; shared] */
LPTSTR MAKEINTATOM(
 WORD wInteger
);

/* namespaceURI  [typedef; ce-only; heuristic-prefix] */

/* nextSibling  [typedef; ce-only; heuristic-prefix] */

/* nodeName  [typedef; ce-only; heuristic-prefix] */

/* nodeType  [typedef; ce-only; heuristic-prefix] */

/* nodeTypedValue  [typedef; ce-only; heuristic-prefix] */

/* nodeTypeString  [typedef; ce-only; heuristic-prefix] */

/* nodeValue  [typedef; ce-only; heuristic-prefix] */

/* ownerDocument  [typedef; ce-only; heuristic-prefix] */

/* PALETTEINDEX2BPP  [macro; ce-only] */
#define PALETTEINDEX2BPP (i) \
 (((i)==0)?0x00000000: \
 (((i)==1)?0x00808080: \
 (((i)==2)?0x00C0C0C0:0x00FFFFFF)))

/* parentNode  [typedef; ce-only; heuristic-prefix] */

/* parsed  [typedef; ce-only; heuristic-prefix] */

/* PCRITICAL_SECTION  [typedef; ce-only; heuristic-prefix] */

/* PCWCH  [typedef; ce-only; heuristic-prefix] */

/* PLUID  [typedef; ce-only; heuristic-prefix] */

/* prefix  [typedef; ce-only; heuristic-prefix] */

/* previousSibling  [typedef; ce-only; heuristic-prefix] */

/* REGSAM  [typedef; ce-only; heuristic-prefix] */

/* specified  [typedef; ce-only; heuristic-prefix] */

/* UNSIGNED  [typedef; ce-only; heuristic-prefix] */

/* xml  [typedef; ce-only; heuristic-prefix] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ABC  [struct; shared] */
typedef struct _ABC {
 int abcA; 
 UINT abcB; 
 int abcC; 
} ABC, *PABC;

/* BLENDFUNCTION  [struct; shared] */
typedef struct _BLENDFUNCTION {
 BYTE BlendOp;
 BYTE BlendFlags;
 BYTE SourceConstantAlpha;
 BYTE AlphaFormat;
}BLENDFUNCTION, *PBLENDFUNCTION, *LPBLENDFUNCTION;

/* DISPLAY_DEVICE  [struct; shared; A/W DISPLAY_DEVICEA,DISPLAY_DEVICEW (CE is W-side)] */
typedef struct _DISPLAY_DEVICE {
 DWORD cb;
 WCHAR DeviceName[32];
 WCHAR DeviceString[128];
 DWORD StateFlags;
 WCHAR DeviceID[128];
 WCHAR DeviceKey[128];
} DISPLAY_DEVICE, *PDISPLAY_DEVICE;

/* EXTENDED_NAME_FORMAT  [enum; shared] */
typedef enum {
 NameUnknown = 0,
 NameFullyQualifiedDN = 1,
 NameSamCompatible = 2,
 NameDisplay = 3,
 NameUniqueId = 6,
 NameCanonical = 7,
 NameUserPrincipal = 8,
 NameCanonicalEx = 9,
 NameServicePrincipal = 10,
 NameWindowsCeLocal = 0x80000001
} EXTENDED_NAME_FORMAT, *PEXTENDED_NAME_FORMAT;

/* GRADIENT_RECT  [struct; shared] */
typedef struct _GRADIENT_RECT {
 ULONG UpperLeft;
 ULONG LowerRight;
}GRADIENT_RECT, *PGRADIENT_RECT;

/* PERF_COUNTER_BLOCK  [struct, typedef; shared] */
typedef struct _PERF_COUNTER_BLOCK {
 DWORD ByteLength;
} PERF_COUNTER_BLOCK;
typedef PERF_COUNTER_BLOCK *PPERF_COUNTER_BLOCK, *LPPERF_COUNTER_BLOCK;

/* PERF_COUNTER_DEFINITION  [struct, typedef; shared] */
typedef struct _PERF_COUNTER_DEFINITION {
 DWORD ByteLength;
 DWORD CounterNameTitleIndex;
 LPWSTR CounterNameTitle;
 DWORD CounterHelpTitleIndex;
 LPWSTR CounterHelpTitle;
 DWORD DefaultScale;
 DWORD DetailLevel;
 DWORD CounterType;
 DWORD CounterSize;
 DWORD CounterOffset;
} PERF_COUNTER_DEFINITION;
typedef PERF_COUNTER_DEFINITION *PPERF_COUNTER_DEFINITION, *LPPERF_COUNTER_DEFINITION;

/* PERF_DATA_BLOCK  [struct, typedef; shared] */
typedef struct _PERF_DATA_BLOCK {
 WCHAR Signature[4];
 DWORD LittleEndian;
 DWORD Version;
 DWORD Revision;
 DWORD TotalByteLength;
 DWORD HeaderLength;
 DWORD NumObjectTypes;
 DWORD DefaultObject;
 SYSTEMTIME SystemTime;
 LARGE_INTEGER PerfTime;
 LARGE_INTEGER PerfFreq;
 LARGE_INTEGER PerfTime100nSec;
 DWORD SystemNameLength;
 DWORD SystemNameOffset;
} PERF_DATA_BLOCK;
typedef PERF_DATA_BLOCK *PPERF_DATA_BLOCK, *LPPERF_DATA_BLOCK;

/* PERF_INSTANCE_DEFINITION  [struct, typedef; shared] */
typedef struct _PERF_INSTANCE_DEFINITION {
 DWORD ByteLength;
 DWORD ParentObjectTitleIndex;
 DWORD ParentObjectInstance;
 DWORD UniqueID;
 DWORD NameOffset;
 DWORD NameLength;
} PERF_INSTANCE_DEFINITION;
typedef PERF_INSTANCE_DEFINITION *PPERF_INSTANCE_DEFINITION, *LPPERF_INSTANCE_DEFINITION;

/* PERF_OBJECT_TYPE  [struct, typedef; shared] */
typedef struct _PERF_OBJECT_TYPE {
 DWORD TotalByteLength;
 DWORD DefinitionLength;
 DWORD HeaderLength;
 DWORD ObjectNameTitleIndex;
 LPWSTR ObjectNameTitle;
 DWORD ObjectHelpTitleIndex;
 LPWSTR ObjectHelpTitle;
 DWORD DetailLevel;
 DWORD NumCounters;
 DWORD DefaultCounter;
 DWORD NumInstances;
 DWORD CodePage;
 LARGE_INTEGER PerfTime;
 LARGE_INTEGER PerfFreq;
} PERF_OBJECT_TYPE;
typedef PERF_OBJECT_TYPE *PPERF_OBJECT_TYPE, *LPPERF_OBJECT_TYPE;

/* SECURITY_DESCRIPTOR  [typedef, struct; shared; entity-headers] */
typedef PVOID PSECURITY_DESCRIPTOR;

/* COMMCONFIG  [struct; shared; entity-headers] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwSize */
/*   wVersion */
/*   wReserved */
/*   dcb */
/*   dwProviderSubType */
/*   dwProviderOffset */
/*   dwProviderSize */
/*   wcProviderData */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

/* PALETTEINDEX  [function; shared; entity-headers; win32-reference] */
COLORREF PALETTEINDEX(
    WORD i
);

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* EnumUILanguagesProc  [function; ce-only; CE 4.0..699; Coreloc.lib] */
BOOL CALLBACK EnumUILanguagesProc(
 LPTSTR lpUILanguageString
);

/* GetCharABCWidths  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W GetCharABCWidthsA,GetCharABCWidthsW (CE is W-side)] */
BOOL GetCharABCWidths(
 HDC hdc,
 UINT uFirstChar,
 UINT uLastChar,
 LPABC lpabc
);

/* GetCharWidth32  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W GetCharWidth32A,GetCharWidth32W (CE is W-side)] */
WINGDIAPI BOOL WINAPI GetCharWidth32(
 HDC hdc,
 UINT iFirstChar,
 UINT iLastChar,
 LPINT lpBuffer
);

/* GetTextAlign  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib] */
WINGDIAPI UINT WINAPI GetTextAlign(
 HDC hdc
);

/* SetTextAlign  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib] */
WINGDIAPI UINT WINAPI SetTextAlign(
 HDC hdc,
 UINT fmode
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* AlphaBlend  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL AlphaBlend(
 HDC hdcDest,
 int nXOriginDest,
 int nYOriginDest,
 int nWidthDest,
 int nHeightDest,
 HDC hdcSrc,
 int nXOriginSrc,
 int nYOriginSrc,
 int nWidthSrc,
 int nHeightSrc,
 BLENDFUNCTION blendFunction
);

/* DuplicateHandle  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL DuplicateHandle(
 HANDLE hSourceProcessHandle,
 HANDLE hSourceHandle,
 HANDLE hTargetProcessHandle,
 LPHANDLE lpTargetHandle,
 DWORD dwDesiredAccess,
 BOOL bInheritHandle,
 DWORD dwOptions
);

/* EnumDisplayDevices  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W EnumDisplayDevicesA,EnumDisplayDevicesW (CE is W-side)] */
BOOL EnumDisplayDevices(
 LPCTSTR lpDevice, 
 DWORD iDevNum, 
 PDISPLAY_DEVICE lpDisplayDevice, 
 DWORD dwFlags 
);

/* FiberProc  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
VOID CALLBACK FiberProc(
 PVOID lpParameter
);

/* GetCharABCWidthsI  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL GetCharABCWidthsI(
 HDC hdc,
 UINT giFirst,
 UINT cgi,
 LPWORD pgi,
 LPABC lpabc
);

/* GetCurrentPositionEx  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
WINGDIAPI BOOL WINAPI GetCurrentPositionEx(
 HDC hdc,
 LPPOINT lpPoint
);

/* GetFontData  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD GetFontData(
 HDC hdc, 
 DWORD dwTable, 
 DWORD dwOffset, 
 LPVOID lpvBuffer, 
 DWORD cbData
);

/* GetLayout  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD GetLayout(
 HDC hdc
);

/* GetMessageQueueReadyTimeStamp  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD WINAPI GetMessageQueueReadyTimeStamp(
 HWND hWnd
);

/* GetProp  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W GetPropA,GetPropW (CE is W-side)] */
HANDLE GetProp(
 HWND hWnd,
 LPCTSTR lpString
);

/* GetROP2  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
int GetROP2(
 HDC hdc
);

/* GetStretchBltMode  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
int GetStretchBltMode(
 HDC hdc
);

/* GlobalAddAtom  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W GlobalAddAtomA,GlobalAddAtomW (CE is W-side)] */
ATOM GlobalAddAtom(
 LPCTSTR lpString
);

/* GlobalDeleteAtom  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
ATOM GlobalDeleteAtom(
 ATOM nAtom
);

/* GlobalFindAtom  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W GlobalFindAtomA,GlobalFindAtomW (CE is W-side)] */
ATOM GlobalFindAtom(
 LPCTSTR lpString
);

/* InterlockedCompareExchange  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
LONG InterlockedCompareExchange(
 LPLONG Destination,
 LONG Exchange,
 LONG Comperand
);

/* InterlockedExchangeAdd  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
LONG InterlockedExchangeAdd(
 LPLONG Addend,
 LONG Increment
);

/* InvalidateRgn  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WINAPI InvalidateRgn(
 HWND hWnd,
 HRGN hRgn,
 BOOL fErase
);

/* InvertRect  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL InvertRect(
 HDC hDC,
 CONST RECT* lprc
);

/* LineTo  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
WINGDIAPI BOOL WINAPI LineTo(
 HDC hdc,
 int nXEnd,
 int nYEnd
);

/* MoveToEx  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
WINGDIAPI BOOL WINAPI MoveToEx(
 HDC hdc,
 int X,
 int Y,
 LPPOINT lpPoint
);

/* PropEnumProcEx  [function; shared; CE 5.0..699; A/W PROPENUMPROCEXA,PROPENUMPROCEXW (CE is W-side)] */
BOOL CALLBACK PropEnumProcEx(
 HWND hwnd,
 LPTSTR lpszString,
 HANDLE hData,
 ULONG_PTR dwData
);

/* RedrawWindow  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WINAPI RedrawWindow(
 HWND hwnd,
 CONST RECT* lprcUpdate,
 HRGN hrgnUpdate,
 UINT flags
);

/* RemoveProp  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W RemovePropA,RemovePropW (CE is W-side)] */
HANDLE RemoveProp(
 HWND hWnd,
 LPCTSTR lpString
);

/* SendMessageTimeout  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W SendMessageTimeoutA,SendMessageTimeoutW (CE is W-side)] */
LRESULT SendMessageTimeout(
 HWND hWnd,
 UINT Msg,
 WPARAM wParam,
 LPARAM lParam,
 UINT fuFlags,
 UINT uTimeout,
 PDWORD_PTR lpdwResult
);

/* SetBitmapBits  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
LONG SetBitmapBits(
 HBITMAP hbmp,
 DWORD cBytes,
 CONST VOID *lpBits
);

/* SetLayout  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD SetLayout(
 HDC hdc,
 DWORD dwLayout,
);

/* SetProp  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W SetPropA,SetPropW (CE is W-side)] */
BOOL SetProp(
 HWND hWnd,
 LPCTSTR lpString,
 HANDLE hData
);

/* SetStretchBltMode  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
int SetStretchBltMode(
 HDC hdc,
 int iStretchMode
);

/* TransparentBlt  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL TransparentBlt(
 HDC hdcDest,
 int nXOriginDest,
 int nYOriginDest,
 int nWidthDest,
 int hHeightDest,
 HDC hdcSrc,
 int nXOriginSrc,
 int nYOriginSrc,
 int nWidthSrc,
 int nHeightSrc,
 UINT crTransparent
);

/* ValidateRgn  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WINAPI ValidateRgn(
 HWND hWnd,
 HRGN hRgn
);
#endif /* _WIN32_WCE */

#endif /* _WINDOWSAPIS_ */
