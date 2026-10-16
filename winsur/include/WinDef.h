/* WinDef.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 29 constants, 67 declarations, 9 outlines, 59 base types, 1 extra macros, 1 extra decls
 */
#ifndef _WINDEF_
#define _WINDEF_

#include <stddef.h>
/* CE's Win32 API surface is Unicode (LPWSTR). */
#ifndef UNICODE
#define UNICODE
#endif
#ifndef _UNICODE
#define _UNICODE
#endif


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define APIENTRY WINAPI
#define APIPRIVATE __stdcall
#define CALLBACK __stdcall
#define CDECL _cdecl
#define DECLSPEC_EXPORT __declspec(dllexport)
#define DECLSPEC_IMPORT __declspec(dllimport)
#define DECLSPEC_NORETURN __declspec(noreturn)
#define DUMMYSTRUCTNAME s
#define DUMMYSTRUCTNAME2 s2
#define DUMMYSTRUCTNAME3 s3
#define DUMMYUNIONNAME2 u2
#define DUMMYUNIONNAME3 u3
#define DUMMYUNIONNAME4 u4
#define DUMMYUNIONNAME5 u5
#define DUMMYUNIONNAME6 u6
#define DUMMYUNIONNAME7 u7
#define DUMMYUNIONNAME8 u8
#define FALSE 0
#define FASTCALL __fastcall
#define HMONITOR_DECLARED 1
#define NULL 0
#define PACKED __attribute__((packed))
#define STDCALL __stdcall
#define STRICT 1
#define TRUE 1
#define VOID void
#define WINAPI __stdcall
#define WINAPIV __cdecl
#define WINVER 0x0400

/* ==================================================================
 * base types -- fundamental Windows type definitions
 * CE-specific types are marked; verify sizes for your platform
 * ================================================================ */

/* BOOL [CE-SPECIFIC]
 * Boolean (TRUE/FALSE)
 * 32-bit int on CE
 * source: win32/common/windows-data-types.md */
typedef int BOOL;

/* BYTE [CE-SPECIFIC]
 * 8-bit unsigned integer
 * Always 8-bit
 * source: win32/common/windows-data-types.md */
typedef unsigned char BYTE;

/* DWORD [CE-SPECIFIC]
 * 32-bit unsigned integer (same as desktop)
 * Always 32-bit on CE regardless of architecture
 * source: win32/common/windows-data-types.md */
typedef unsigned long DWORD;

/* DWORD64
 * source: win32/common/windows-data-types.md */
typedef unsigned __int64 DWORD64;

/* FLOAT
 * source: win32/common/windows-data-types.md */
typedef float FLOAT;

/* HFILE
 * source: win32/common/windows-data-types.md */
typedef int HFILE;

/* INT [CE-SPECIFIC]
 * Signed integer
 * Platform-dependent (32-bit on most CE platforms)
 * source: win32/common/windows-data-types.md */
typedef int INT;

/* LONG64
 * source: win32/common/windows-data-types.md */
typedef __int64 LONG64;

/* UHALF_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned short UHALF_PTR;

/* UINT [CE-SPECIFIC]
 * Unsigned integer
 * Platform-dependent (32-bit on most CE platforms)
 * source: win32/common/windows-data-types.md */
typedef unsigned int UINT;

/* UINT64
 * source: win32/common/windows-data-types.md */
typedef unsigned __int64 UINT64;

/* WORD [CE-SPECIFIC]
 * 16-bit unsigned integer
 * Always 16-bit
 * source: win32/common/windows-data-types.md */
typedef unsigned short WORD;

/* LONG [CE-SPECIFIC]
 * 32-bit signed integer
 * Always 32-bit on CE
 * source: win32/common/windows-data-types.md */
typedef long LONG;

/* ULONG [CE-SPECIFIC]
 * 32-bit unsigned integer
 * Always 32-bit on CE
 * source: win32/common/windows-data-types.md */
typedef unsigned long ULONG;

/* SHORT
 * source: win32/common/windows-data-types.md */
typedef short SHORT;

/* CHAR [CE-SPECIFIC]
 * 8-bit ANSI character
 * Always 8-bit; limited use on CE (prefer WCHAR)
 * source: win32/common/windows-data-types.md */
typedef char CHAR;

/* WCHAR [CE-SPECIFIC]
 * 16-bit Unicode character
 * Always 16-bit on CE (UTF-16LE)
 * source: win32/common/windows-data-types.md */
typedef wchar_t WCHAR;

/* HANDLE [CE-SPECIFIC]
 * Generic handle type
 * Pointer-sized on CE (32-bit on ARM, SHx; varies by platform)
 * source: win32/common/windows-data-types.md */
typedef void *HANDLE;

/* HDC
 * source: win32/common/windows-data-types.md */
typedef HANDLE HDC;

/* HPEN
 * source: win32/common/windows-data-types.md */
typedef HANDLE HPEN;

/* LPWSTR [CE-SPECIFIC]
 * Pointer to wide string
 * Primary mutable string type on CE
 * source: CE SDK reference */
typedef WCHAR *LPWSTR;

/* LPCWSTR [CE-SPECIFIC]
 * Pointer to const wide string
 * Primary string type on CE
 * source: CE SDK reference */
typedef const WCHAR *LPCWSTR;

/* LONG_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef long LONG_PTR;

/* UINT_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned long UINT_PTR;

/* ULONG_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned long ULONG_PTR;

/* DWORD_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned long DWORD_PTR;

/* HALF_PTR [CE-SPECIFIC]
 * 32-bit CE pointer-sized integer
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md (32-bit row) */
typedef short HALF_PTR;

/* ATOM
 * source: win32/common/windows-data-types.md */
typedef WORD ATOM;

/* BOOLEAN
 * source: win32/common/windows-data-types.md */
typedef BYTE BOOLEAN;

/* COLORREF
 * source: win32/common/windows-data-types.md */
typedef DWORD COLORREF;

/* HBITMAP
 * source: win32/common/windows-data-types.md */
typedef HANDLE HBITMAP;

/* HBRUSH
 * source: win32/common/windows-data-types.md */
typedef HANDLE HBRUSH;

/* HCONVLIST
 * source: win32/common/windows-data-types.md */
typedef HANDLE HCONVLIST;

/* HDDEDATA
 * source: win32/common/windows-data-types.md */
typedef HANDLE HDDEDATA;

/* HDWP
 * source: win32/common/windows-data-types.md */
typedef HANDLE HDWP;

/* HENHMETAFILE
 * source: win32/common/windows-data-types.md */
typedef HANDLE HENHMETAFILE;

/* HFONT
 * source: win32/common/windows-data-types.md */
typedef HANDLE HFONT;

/* HGDIOBJ
 * source: win32/common/windows-data-types.md */
typedef HANDLE HGDIOBJ;

/* HGLOBAL
 * source: win32/common/windows-data-types.md */
typedef HANDLE HGLOBAL;

/* HHOOK
 * source: win32/common/windows-data-types.md */
typedef HANDLE HHOOK;

/* HICON
 * source: win32/common/windows-data-types.md */
typedef HANDLE HICON;

/* HINSTANCE
 * source: win32/common/windows-data-types.md */
typedef HANDLE HINSTANCE;

/* HKEY
 * source: win32/common/windows-data-types.md */
typedef HANDLE HKEY;

/* HKL
 * source: win32/common/windows-data-types.md */
typedef HANDLE HKL;

/* HLOCAL
 * source: win32/common/windows-data-types.md */
typedef HANDLE HLOCAL;

/* HMENU
 * source: win32/common/windows-data-types.md */
typedef HANDLE HMENU;

/* HMETAFILE
 * source: win32/common/windows-data-types.md */
typedef HANDLE HMETAFILE;

/* HMODULE
 * source: win32/common/windows-data-types.md */
typedef HINSTANCE HMODULE;

/* HMONITOR
 * source: win32/common/windows-data-types.md */
typedef HANDLE HMONITOR;

/* HPALETTE
 * source: win32/common/windows-data-types.md */
typedef HANDLE HPALETTE;

/* HRGN
 * source: win32/common/windows-data-types.md */
typedef HANDLE HRGN;

/* HSZ
 * source: win32/common/windows-data-types.md */
typedef HANDLE HSZ;

/* HWND [CE-SPECIFIC]
 * Window handle
 * Same as HANDLE
 * source: win32/common/windows-data-types.md */
typedef HANDLE HWND;

/* LPARAM [CE-SPECIFIC]
 * Message parameter (signed)
 * Pointer-sized on CE
 * source: win32/common/windows-data-types.md */
typedef LONG_PTR LPARAM;

/* LRESULT [CE-SPECIFIC]
 * Message result
 * Pointer-sized on CE
 * source: win32/common/windows-data-types.md */
typedef LONG_PTR LRESULT;

/* PTSTR
 * source: win32/common/windows-data-types.md */
typedef LPWSTR PTSTR;

/* WINSTA
 * source: win32/common/windows-data-types.md */
typedef HANDLE WINSTA;

/* WPARAM [CE-SPECIFIC]
 * Message parameter (unsigned)
 * Pointer-sized on CE
 * source: CE SDK reference */
typedef UINT_PTR WPARAM;

/* HCURSOR
 * source: win32/common/windows-data-types.md */
typedef HICON HCURSOR;

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define MAX_PATH 128

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CALLBACK  [typedef, macro; shared; entity-headers] */

/* CONST  [struct, typedef, macro; shared; entity-headers] */

/* HWINSTA  [typedef; shared; entity-headers] */

/* WINAPI  [typedef, macro; shared; entity-headers] */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 2.11..2.12, 3.0..399 */

/* HIBYTE  [macro; shared; CE 2.11..2.12, 3.0..399] */

/* HIWORD  [macro; shared; CE 2.11..2.12, 3.0..399] */

/* LOBYTE  [macro; shared; CE 2.11..2.12, 3.0..399] */

/* LOWORD  [macro; shared; CE 2.11..2.12, 3.0..399] */

/* MAKELONG  [macro; shared; CE 2.11..2.12, 3.0..399] */
#define MAKELONG(a, b) \ 
 ((LONG) (((WORD) (a)) | ((DWORD) ((WORD) (b))) << 16))

/* MAKEWORD  [macro; shared; CE 2.11..2.12, 3.0..399] */
#define MAKEWORD(a, b) \ 
 ((WORD) (((BYTE) (a)) | ((WORD) ((BYTE) (b))) << 8))
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* INT  [typedef, function; shared; CE 2.12..399; entity-headers] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* HACCEL  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HACCEL;

/* HDESK  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HDESK;

/* HRSRC  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HRSRC;

/* LPBOOL  [typedef; shared; entity-headers; win32-reference] */
typedef BOOL far *LPBOOL;

/* LPBYTE  [typedef; shared; entity-headers; win32-reference] */
typedef BYTE far *LPBYTE;

/* LPCOLORREF  [typedef; shared; entity-headers; win32-reference] */
typedef DWORD *LPCOLORREF;

/* LPCVOID  [typedef; shared; entity-headers; win32-reference] */
typedef CONST void *LPCVOID;

/* LPDWORD  [typedef; shared; entity-headers; win32-reference] */
typedef DWORD *LPDWORD;

/* LPHANDLE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE *LPHANDLE;

/* LPINT  [typedef; shared; entity-headers; win32-reference] */
typedef int *LPINT;

/* LPLONG  [typedef; shared; entity-headers; win32-reference] */
typedef long *LPLONG;

/* LPVOID  [typedef; shared; entity-headers; win32-reference] */
typedef void *LPVOID;

/* LPWORD  [typedef; shared; entity-headers; win32-reference] */
typedef WORD *LPWORD;

/* PBOOL  [typedef; shared; entity-headers; win32-reference] */
typedef BOOL *PBOOL;

/* PBYTE  [typedef; shared; entity-headers; win32-reference] */
typedef BYTE *PBYTE;

/* PDWORD  [typedef; shared; entity-headers; win32-reference] */
typedef DWORD *PDWORD;

/* PFLOAT  [typedef; shared; entity-headers; win32-reference] */
typedef FLOAT *PFLOAT;

/* PHKEY  [typedef; shared; entity-headers; win32-reference] */
typedef HKEY *PHKEY;

/* PINT  [typedef; shared; entity-headers; win32-reference] */
typedef int *PINT;

/* PUCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef UCHAR *PUCHAR;

/* PUINT  [typedef; shared; entity-headers; win32-reference] */
typedef UINT *PUINT;

/* PULONG  [typedef; shared; entity-headers; win32-reference] */
typedef ULONG *PULONG;

/* PUSHORT  [typedef; shared; entity-headers; win32-reference] */
typedef USHORT *PUSHORT;

/* PWORD  [typedef; shared; entity-headers; win32-reference] */
typedef WORD *PWORD;

/* UCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned char UCHAR;

/* USHORT  [typedef, struct; shared; entity-headers; win32-reference] */
typedef unsigned short USHORT;

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699 */

/* POINTS  [struct; shared; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagPOINTS { 
 SHORT x;
 SHORT y; 
} POINTS;

/* RECT  [struct, library; shared; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _RECT { 
 LONG left; 
 LONG top; 
 LONG right; 
 LONG bottom; 
} RECT;

/* SIZE  [struct, function, library; shared; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagSIZE { 
 LONG cx; 
 LONG cy; 
} SIZE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..209, 2.11..399, 5.0..699 */

/* POINT  [struct, function, library; shared; CE 1.0..209, 2.11..399, 5.0..699] */
typedef struct tagPOINT {
 LONG x;
 LONG y;
} POINT;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* RECTL  [struct; shared; CE 3.0..399, 5.0..699] */
typedef struct _RECTL { 
 LONG left; 
 LONG top; 
 LONG right; 
 LONG bottom; 
} RECTL, *PRECTL;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _RECTL { LONG left; LONG top; LONG right; LONG bottom; } RECTL, *PRECTL;

#endif /* _WINDEF_ */
