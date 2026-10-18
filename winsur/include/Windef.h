/* Windef.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 23 constants, 8 declarations, 4 outlines, 122 base types, 0 extra macros, 0 extra decls
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

/* compiler surface: empty 16-bit keywords + SAL, GCC __int64.
 * These expand to nothing / long long.  Not copied from an SDK.
 * stdarg.h is ISO C (va_list on FormatMessage). */
#include <stdarg.h>
/* stdbool.h is ISO C99 (bool printed by some pages). */
#include <stdbool.h>
/* stdio.h is ISO C (FILE used by some page prototypes). */
#include <stdio.h>
/* MFC/ATL message-map keywords some pages print bare. */
#ifndef afx_msg
#define afx_msg
#endif
/* OLE calling conventions some pages print bare. */
#ifndef WINOLEAPI
#define WINOLEAPI HRESULT STDMETHODCALLTYPE
#endif
#ifndef WINOLEAUTAPI
#define WINOLEAUTAPI HRESULT STDMETHODCALLTYPE
#endif
#ifndef ATLAPI
#define ATLAPI HRESULT STDMETHODCALLTYPE
#endif
#ifndef interface
#define interface struct
#endif
#ifndef FARSTRUCT
#define FARSTRUCT
#endif
#ifndef HUGEP
#define HUGEP
#endif
#ifndef __RPC_FAR
#define __RPC_FAR
#endif
#ifndef __RPC
#define __RPC
#endif
#ifndef MAKEFOURCC
#define MAKEFOURCC(ch0, ch1, ch2, ch3) \
    ((DWORD)(ch0) | ((DWORD)(ch1) << 8) | \
     ((DWORD)(ch2) << 16) | ((DWORD)(ch3) << 24))
#endif
#ifndef CONST
#define CONST const
#endif
#ifndef FAR
#define FAR
#endif
#ifndef NEAR
#define NEAR
#endif
#ifndef far
#define far
#endif
#ifndef near
#define near
#endif
#ifndef PASCAL
#define PASCAL
#endif
#ifndef IN
#define IN
#endif
#ifndef OUT
#define OUT
#endif
#ifndef OPTIONAL
#define OPTIONAL
#endif
#ifndef UNALIGNED
#define UNALIGNED
#endif
#ifndef __nullterminated
#define __nullterminated
#endif
#ifndef __nullnullterminated
#define __nullnullterminated
#endif
#ifndef _MSC_VER
#ifndef __int64
#define __int64 long long
#endif
#ifndef __stdcall
#define __stdcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#ifndef _cdecl
#define _cdecl
#endif
#ifndef __fastcall
#define __fastcall
#endif
#ifndef __declspec
#define __declspec(x)
#endif
#endif /* _MSC_VER */
#ifndef WINAPI
#define WINAPI __stdcall
#endif
#ifndef CALLBACK
#define CALLBACK __stdcall
#endif
#ifndef APIENTRY
#define APIENTRY WINAPI
#endif
#ifndef TEXT
#define TEXT(s) L ## s
#endif
#ifndef __TEXT
#define __TEXT(s) L ## s
#endif
#ifndef _T
#define _T(s) TEXT(s)
#endif


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define APIPRIVATE __stdcall
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
#define FASTCALL __fastcall
#define HMONITOR_DECLARED 1
#ifndef NULL
#define NULL 0
#endif
#define PACKED __attribute__((packed))
#define STDCALL __stdcall
#define STRICT 1
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

/* INT_PTR [CE-SPECIFIC]
 * 32-bit CE pointer-sized integer
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md (32-bit row) */
typedef long INT_PTR;

/* HALF_PTR [CE-SPECIFIC]
 * 32-bit CE pointer-sized integer
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md (32-bit row) */
typedef short HALF_PTR;

/* UCHAR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef unsigned char UCHAR;

/* USHORT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef unsigned short USHORT;

/* PVOID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef void *PVOID;

/* LPVOID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef void *LPVOID;

/* LPCVOID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef CONST void *LPCVOID;

/* LPSTR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef CHAR *LPSTR;

/* LPCSTR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef CONST CHAR *LPCSTR;

/* TCHAR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef WCHAR TCHAR;

/* LPTSTR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LPWSTR LPTSTR;

/* LPCTSTR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LPCWSTR LPCTSTR;

/* PCTSTR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LPCWSTR PCTSTR;

/* LONGLONG [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef __int64 LONGLONG;

/* ULONGLONG [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef unsigned __int64 ULONGLONG;

/* HRESULT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LONG HRESULT;

/* NTSTATUS [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LONG NTSTATUS;

/* SIZE_T [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef ULONG_PTR SIZE_T;

/* SSIZE_T [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LONG_PTR SSIZE_T;

/* FARPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef INT_PTR (WINAPI *FARPROC)(void);

/* NEARPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef INT_PTR (WINAPI *NEARPROC)(void);

/* PROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef INT_PTR (WINAPI *PROC)(void);

/* SECURITY_ATTRIBUTES [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _SECURITY_ATTRIBUTES SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

/* FILETIME [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _FILETIME { DWORD dwLowDateTime; DWORD dwHighDateTime; } FILETIME, *PFILETIME, *LPFILETIME;

/* SYSTEMTIME [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _SYSTEMTIME { WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay; WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds; } SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;

/* CEOID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef DWORD CEOID;

/* PCEOID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef CEOID *PCEOID;

/* CEPROPID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef DWORD CEPROPID;

/* PPVOID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef PVOID *PPVOID;

/* LPTHREAD_START_ROUTINE [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef DWORD (WINAPI *LPTHREAD_START_ROUTINE)(LPVOID);

/* LARGE_INTEGER [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef union _LARGE_INTEGER { struct { DWORD LowPart; LONG HighPart; } u; LONGLONG QuadPart; } LARGE_INTEGER, *PLARGE_INTEGER;

/* PHYSICAL_ADDRESS [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;

/* CRITICAL_SECTION [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _CRITICAL_SECTION CRITICAL_SECTION, *PCRITICAL_SECTION, *LPCRITICAL_SECTION;

/* STARTUPINFOW [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _STARTUPINFOW STARTUPINFOW, *LPSTARTUPINFOW;

/* STARTUPINFO [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef STARTUPINFOW STARTUPINFO, *LPSTARTUPINFO;

/* PROCESS_INFORMATION [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _PROCESS_INFORMATION PROCESS_INFORMATION, *LPPROCESS_INFORMATION, *PPROCESS_INFORMATION;

/* BITMAPINFOHEADER [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER, *PBITMAPINFOHEADER, *LPBITMAPINFOHEADER;

/* BITMAPINFO [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagBITMAPINFO BITMAPINFO, *PBITMAPINFO, *LPBITMAPINFO;

/* CHOOSECOLOR [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagCHOOSECOLOR CHOOSECOLOR, *LPCHOOSECOLOR;

/* CHOOSEFONT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagCHOOSEFONT CHOOSEFONT, *LPCHOOSEFONT;

/* OPENFILENAME [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagOPENFILENAME OPENFILENAME, *LPOPENFILENAME;

/* DLGTEMPLATE [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagDLGTEMPLATE DLGTEMPLATE, *LPDLGTEMPLATE, *LPCDLGTEMPLATE;

/* LCID [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef DWORD LCID;

/* PDWORD [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef DWORD *PDWORD;

/* PUINT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef UINT *PUINT;

/* LPINT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef int *LPINT;

/* PINT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef int *PINT;

/* PUSHORT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef USHORT *PUSHORT;

/* PLONG [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LONG *PLONG;

/* PULONG [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef ULONG *PULONG;

/* SYSTEM_INFO [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _SYSTEM_INFO SYSTEM_INFO, *LPSYSTEM_INFO;

/* LPLOGFONT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagLOGFONT *PLOGFONT, *LPLOGFONT;

/* TEXTMETRIC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagTEXTMETRIC TEXTMETRIC, *PTEXTMETRIC, *LPTEXTMETRIC;

/* ENUMLOGFONT [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tagENUMLOGFONT ENUMLOGFONT, *PENUMLOGFONT, *LPENUMLOGFONT;

/* WAVEFORMATEX [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct tWAVEFORMATEX WAVEFORMATEX, *PWAVEFORMATEX, *LPWAVEFORMATEX;

/* ULARGE_INTEGER [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct ULARGE_INTEGER { ULONGLONG QuadPart; } ULARGE_INTEGER, *PULARGE_INTEGER;

/* LPABC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef struct _ABC *LPABC;

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

/* WNDPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef LRESULT (CALLBACK *WNDPROC)(HWND, UINT, WPARAM, LPARAM);

/* TIMERPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef void (CALLBACK *TIMERPROC)(HWND, UINT, UINT, DWORD);

/* DLGPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef INT_PTR (CALLBACK *DLGPROC)(HWND, UINT, WPARAM, LPARAM);

/* WNDENUMPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef BOOL (CALLBACK *WNDENUMPROC)(HWND, LPARAM);

/* WNDENUMPROCW [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef BOOL (CALLBACK *WNDENUMPROCW)(HWND, LPARAM);

/* FONTENUMPROC [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef int (CALLBACK *FONTENUMPROC)(ENUMLOGFONT FAR *, TEXTMETRIC FAR *, int, LPARAM);

/* FONTENUMPROCW [CE-SPECIFIC]
 * CE Unicode / 32-bit data-types row
 * source: win32/common/windows-data-types.md */
typedef int (CALLBACK *FONTENUMPROCW)(ENUMLOGFONT FAR *, TEXTMETRIC FAR *, int, LPARAM);

/* HCURSOR
 * source: win32/common/windows-data-types.md */
typedef HICON HCURSOR;

/* ==================================================================
 * derived forwards -- opaque types whose bodies
 * no corpus page prints; prototypes compile against
 * these (DERIVED, not quoted; data/derived-forward-
 * types.tsv)
 * ================================================================ */
/* DERIVED forward -- derived typedef: fundamental name no corpus page prints in a filed block */
typedef void VOID;
/* DERIVED forward -- derived typedef: OLE character; the pages print BSTR/LPOLESTR in terms of it */
typedef WCHAR OLECHAR;
/* DERIVED forward -- derived typedef: OLE string handle */
typedef OLECHAR *BSTR;
/* DERIVED forward -- derived typedef: OLE color */
typedef DWORD OLE_COLOR;
/* DERIVED forward -- derived typedef: OLE handle */
typedef DWORD_PTR OLE_HANDLE;
/* DERIVED forward -- derived typedef: OLE date */
typedef double DATE;
/* DERIVED forward -- derived typedef: media time */
typedef double REFTIME;
/* DERIVED forward -- derived typedef: OLE boolean */
typedef short VARIANT_BOOL;
/* DERIVED forward -- derived typedef: OLE status code */
typedef LONG SCODE;
/* DERIVED forward -- derived forward: tree-view handle; no corpus page prints the node struct */
typedef void *HTREEITEM;
/* DERIVED forward -- derived forward: CommCtrl handle; no corpus page prints the struct body */
typedef struct _HIMAGELIST *HIMAGELIST;
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
typedef struct _DDVIDEOPORTINFO *LPDDVIDEOPORTINFO;
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
typedef struct _DDDEVICEIDENTIFIER *LPDDDEVICEIDENTIFIER;
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
typedef struct _DDVIDEOPORTSTATUS *LPDDVIDEOPORTSTATUS;
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
typedef struct _DMUS_OBJECTDESC *LPDMUS_OBJECTDESC;
/* DERIVED forward -- derived forward: P- pointer typedef; no corpus page prints the struct body */
typedef struct _REPLSETUP *PREPLSETUP;
/* DERIVED forward -- derived forward: handle-style name; no corpus page prints the type body */
typedef void *hHREPLFLD;
/* DERIVED forward -- derived forward: reference-to-IID spelling printed by the page; no corpus page prints the typedef */
typedef const struct _GUID *REFIiD;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int TunerInputType;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int AMTunerModeType;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int ADDRESS_TYPE;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int ELEMENT_TAG_ID;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int ControlCloseStatus;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int ExtendedDisconnectReasonCode;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int DVD_POS_CODE;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int DVD_PROVIDER_ID;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DMO_MEDIA_TYPE DMO_MEDIA_TYPE;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DMUS_PMSG DMUS_PMSG;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DMUS_NOTIFICATION_PMSG DMUS_NOTIFICATION_PMSG;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DMO_OUTPUT_DATA_BUFFER DMO_OUTPUT_DATA_BUFFER;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct CEL_INT_DATA CEL_INT_DATA;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DVDUserGOPData DVDUserGOPData;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DVD_AUDIO_STREAM_ATTR DVD_AUDIO_STREAM_ATTR;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct DVD_ISRC DVD_ISRC;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IUnknown IUnknown;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IDispatch IDispatch;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IStorage IStorage;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IStream IStream;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IMoniker IMoniker;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IOleClientSite IOleClientSite;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IOleAdviseHolder IOleAdviseHolder;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IPersistStorage IPersistStorage;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct ILockBytes ILockBytes;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IEnumVARIANT IEnumVARIANT;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IMarkupPointer IMarkupPointer;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IMarkupContainer IMarkupContainer;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IDisplayPointer IDisplayPointer;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IHTMLElement IHTMLElement;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IHTMLEventObj IHTMLEventObj;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IXMLDOMElement IXMLDOMElement;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IXMLDOMNode IXMLDOMNode;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IWSDXMLContext IWSDXMLContext;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IRTCCollection IRTCCollection;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct ITravelLogEntry ITravelLogEntry;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IWMPMedia IWMPMedia;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IeXdi2EnumCpuRegs IeXdi2EnumCpuRegs;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct ICity ICity;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IFontDisp IFontDisp;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IDirectMusicBand IDirectMusicBand;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IDirectMusicLoader IDirectMusicLoader;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IDirectMusicObject IDirectMusicObject;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IEnumDVD_TEXT_LANGUAGE_UNIT IEnumDVD_TEXT_LANGUAGE_UNIT;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IEnumReplItem IEnumReplItem;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IFilterGraph IFilterGraph;
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
typedef struct IbaseFilter IbaseFilter;
/* DERIVED forward -- derived forward: no corpus page prints the union body */
typedef struct NodeDataUnion NodeDataUnion;
/* DERIVED forward -- derived forward: no corpus page prints the union body */
typedef struct SdpQueryUuidUnion SdpQueryUuidUnion;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct PTM_FIELD_DESC PTM_FIELD_DESC;
/* DERIVED forward -- derived forward: no corpus page prints the type body */
typedef struct PCONFINFO PCONFINFO;
/* DERIVED forward -- derived forward: no corpus page prints the type body */
typedef struct POBJNOTIFY POBJNOTIFY;
/* DERIVED forward -- derived forward: no corpus page prints the type body */
typedef struct POBJTYPEINFO POBJTYPEINFO;
/* DERIVED forward -- derived forward: no corpus page prints the type body */
typedef struct POBJUIDATA POBJUIDATA;
/* DERIVED forward -- derived forward: ATL map entry; body no corpus page prints */
typedef struct _ATL_INTMAP_ENTRY _ATL_INTMAP_ENTRY;
/* DERIVED forward -- derived forward: OLE variant; body no corpus page prints in one filed block */
typedef struct VARIANT VARIANT;
/* DERIVED forward -- derived typedef: OLE wide string */
typedef OLECHAR *LPOLESTR;
/* DERIVED forward -- derived typedef: const OLE wide string */
typedef const OLECHAR *LPCOLESTR;
/* DERIVED forward -- derived forward: GUID struct body not filed from any one page */
typedef struct _GUID GUID;
/* DERIVED forward -- derived typedef: class id */
typedef GUID CLSID;
/* DERIVED forward -- derived typedef: interface id */
typedef GUID IID;
/* DERIVED forward -- derived forward: OLE decimal; body no corpus page prints in one filed block */
typedef struct DECIMAL DECIMAL;
/* DERIVED forward -- derived forward: OLE window handle */
typedef void *OAHWND;
/* DERIVED forward -- derived forward: USB handle */
typedef void *USB_HANDLE;
/* DERIVED forward -- derived forward: USB transfer handle */
typedef void *USB_TRANSFER;
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
typedef struct _DDSURFACEDESC2 *LPDDSURFACEDESC2;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int INTERFACE_TYPE;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct AM_MEDIA_TYPE AM_MEDIA_TYPE;
/* DERIVED forward -- derived forward: outline only; no corpus page prints the union body */
typedef struct CY CY;
/* DERIVED forward -- derived forward: no corpus page prints the union body */
typedef struct STREAM_MediaType STREAM_MediaType;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int VVCR_EVENT_Type;
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
typedef int CEL_MAPFLUSH_TYPE;
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
typedef struct _FRAGNODE _FRAGNODE;
/* DERIVED forward -- derived forward: no corpus page prints the type body */
typedef struct __POSITION __POSITION;
/* DERIVED forward -- derived forward: MIDL [object] name leaked as a type; body no corpus page prints */
typedef struct object object;

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* HIBYTE  [macro; shared] */

/* HIWORD  [macro; shared] */

/* LOBYTE  [macro; shared] */

/* LOWORD  [macro; shared] */

/* MAKELONG  [macro; shared] */
#define MAKELONG(a, b) \
 ((LONG) (((WORD) (a)) | ((DWORD) ((WORD) (b))) << 16));

/* MAKEWORD  [macro; shared] */
#define MAKEWORD(a, b) \
 ((WORD) (((BYTE) (a)) | ((WORD) ((BYTE) (b))) << 8));

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* POINT  [struct, function, library; shared] */
#ifndef __WINCE_DEFINED_TAGPOINT
#define __WINCE_DEFINED_TAGPOINT
#ifndef __WINCE_DEFINED_POINT
#define __WINCE_DEFINED_POINT
typedef struct tagPOINT {
 LONG x;
 LONG y;
} POINT;
#endif /* __WINCE_DEFINED_POINT */
#endif /* __WINCE_DEFINED_TAGPOINT */
#ifndef __WINCE_DEFINED_PPOINT
#define __WINCE_DEFINED_PPOINT
typedef POINT *PPOINT, *LPPOINT;
#endif /* __WINCE_DEFINED_PPOINT */

/* POINTS  [struct; shared] */
#ifndef __WINCE_DEFINED_TAGPOINTS
#define __WINCE_DEFINED_TAGPOINTS
#ifndef __WINCE_DEFINED_POINTS
#define __WINCE_DEFINED_POINTS
typedef struct tagPOINTS {
 SHORT x;
 SHORT y;
} POINTS;
#endif /* __WINCE_DEFINED_POINTS */
#endif /* __WINCE_DEFINED_TAGPOINTS */
#ifndef __WINCE_DEFINED_PPOINTS
#define __WINCE_DEFINED_PPOINTS
typedef POINTS *PPOINTS, *LPPOINTS;
#endif /* __WINCE_DEFINED_PPOINTS */

/* RECT  [struct, library; shared] */
#ifndef __WINCE_DEFINED__RECT
#define __WINCE_DEFINED__RECT
#ifndef __WINCE_DEFINED_RECT
#define __WINCE_DEFINED_RECT
typedef struct _RECT {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECT;
#endif /* __WINCE_DEFINED_RECT */
#endif /* __WINCE_DEFINED__RECT */
#ifndef __WINCE_DEFINED_PRECT
#define __WINCE_DEFINED_PRECT
typedef RECT *PRECT, *LPRECT;
#endif /* __WINCE_DEFINED_PRECT */

/* RECTL  [struct; shared] */
#ifndef __WINCE_DEFINED__RECTL
#define __WINCE_DEFINED__RECTL
#ifndef __WINCE_DEFINED_RECTL
#define __WINCE_DEFINED_RECTL
typedef struct _RECTL {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECTL, *PRECTL;
#endif /* __WINCE_DEFINED_RECTL */
#endif /* __WINCE_DEFINED__RECTL */

/* SIZE  [struct, function, library; shared] */
#ifndef __WINCE_DEFINED_TAGSIZE
#define __WINCE_DEFINED_TAGSIZE
#ifndef __WINCE_DEFINED_SIZE
#define __WINCE_DEFINED_SIZE
typedef struct tagSIZE {
 LONG cx;
 LONG cy;
} SIZE;
#endif /* __WINCE_DEFINED_SIZE */
#endif /* __WINCE_DEFINED_TAGSIZE */
#ifndef __WINCE_DEFINED_PSIZE
#define __WINCE_DEFINED_PSIZE
typedef SIZE *PSIZE, *LPSIZE;
#endif /* __WINCE_DEFINED_PSIZE */
typedef RECT *PRECT, *LPRECT;
typedef CONST RECT *LPCRECT;
typedef POINT *PPOINT, *LPPOINT;
typedef SIZE *PSIZE, *LPSIZE;

#endif /* _WINDEF_ */
