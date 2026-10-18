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
#ifndef __WINCE_DEFINED_VOID
#define __WINCE_DEFINED_VOID
typedef void VOID;
#endif /* __WINCE_DEFINED_VOID */
/* DERIVED forward -- derived typedef: OLE character; the pages print BSTR/LPOLESTR in terms of it */
#ifndef __WINCE_DEFINED_OLECHAR
#define __WINCE_DEFINED_OLECHAR
typedef WCHAR OLECHAR;
#endif /* __WINCE_DEFINED_OLECHAR */
/* DERIVED forward -- derived typedef: OLE string handle */
#ifndef __WINCE_DEFINED_BSTR
#define __WINCE_DEFINED_BSTR
typedef OLECHAR *BSTR;
#endif /* __WINCE_DEFINED_BSTR */
/* DERIVED forward -- derived typedef: OLE color */
#ifndef __WINCE_DEFINED_OLE_COLOR
#define __WINCE_DEFINED_OLE_COLOR
typedef DWORD OLE_COLOR;
#endif /* __WINCE_DEFINED_OLE_COLOR */
/* DERIVED forward -- derived typedef: OLE handle */
#ifndef __WINCE_DEFINED_OLE_HANDLE
#define __WINCE_DEFINED_OLE_HANDLE
typedef DWORD_PTR OLE_HANDLE;
#endif /* __WINCE_DEFINED_OLE_HANDLE */
/* DERIVED forward -- derived typedef: OLE date */
#ifndef __WINCE_DEFINED_DATE
#define __WINCE_DEFINED_DATE
typedef double DATE;
#endif /* __WINCE_DEFINED_DATE */
/* DERIVED forward -- derived typedef: media time */
#ifndef __WINCE_DEFINED_REFTIME
#define __WINCE_DEFINED_REFTIME
typedef double REFTIME;
#endif /* __WINCE_DEFINED_REFTIME */
/* DERIVED forward -- derived typedef: OLE boolean */
#ifndef __WINCE_DEFINED_VARIANT_BOOL
#define __WINCE_DEFINED_VARIANT_BOOL
typedef short VARIANT_BOOL;
#endif /* __WINCE_DEFINED_VARIANT_BOOL */
/* DERIVED forward -- derived typedef: OLE status code */
#ifndef __WINCE_DEFINED_SCODE
#define __WINCE_DEFINED_SCODE
typedef LONG SCODE;
#endif /* __WINCE_DEFINED_SCODE */
/* DERIVED forward -- derived forward: tree-view handle; no corpus page prints the node struct */
#ifndef __WINCE_DEFINED_HTREEITEM
#define __WINCE_DEFINED_HTREEITEM
typedef void *HTREEITEM;
#endif /* __WINCE_DEFINED_HTREEITEM */
/* DERIVED forward -- derived forward: CommCtrl handle; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_HIMAGELIST
#define __WINCE_DEFINED_HIMAGELIST
typedef struct _HIMAGELIST *HIMAGELIST;
#endif /* __WINCE_DEFINED_HIMAGELIST */
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_LPDDVIDEOPORTINFO
#define __WINCE_DEFINED_LPDDVIDEOPORTINFO
typedef struct _DDVIDEOPORTINFO *LPDDVIDEOPORTINFO;
#endif /* __WINCE_DEFINED_LPDDVIDEOPORTINFO */
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_LPDDDEVICEIDENTIFIER
#define __WINCE_DEFINED_LPDDDEVICEIDENTIFIER
typedef struct _DDDEVICEIDENTIFIER *LPDDDEVICEIDENTIFIER;
#endif /* __WINCE_DEFINED_LPDDDEVICEIDENTIFIER */
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_LPDDVIDEOPORTSTATUS
#define __WINCE_DEFINED_LPDDVIDEOPORTSTATUS
typedef struct _DDVIDEOPORTSTATUS *LPDDVIDEOPORTSTATUS;
#endif /* __WINCE_DEFINED_LPDDVIDEOPORTSTATUS */
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_LPDMUS_OBJECTDESC
#define __WINCE_DEFINED_LPDMUS_OBJECTDESC
typedef struct _DMUS_OBJECTDESC *LPDMUS_OBJECTDESC;
#endif /* __WINCE_DEFINED_LPDMUS_OBJECTDESC */
/* DERIVED forward -- derived forward: P- pointer typedef; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_PREPLSETUP
#define __WINCE_DEFINED_PREPLSETUP
typedef struct _REPLSETUP *PREPLSETUP;
#endif /* __WINCE_DEFINED_PREPLSETUP */
/* DERIVED forward -- derived forward: handle-style name; no corpus page prints the type body */
#ifndef __WINCE_DEFINED_HHREPLFLD
#define __WINCE_DEFINED_HHREPLFLD
typedef void *hHREPLFLD;
#endif /* __WINCE_DEFINED_HHREPLFLD */
/* DERIVED forward -- derived forward: reference-to-IID spelling printed by the page; no corpus page prints the typedef */
#ifndef __WINCE_DEFINED_REFIID
#define __WINCE_DEFINED_REFIID
typedef const struct _GUID *REFIiD;
#endif /* __WINCE_DEFINED_REFIID */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_TUNERINPUTTYPE
#define __WINCE_DEFINED_TUNERINPUTTYPE
typedef int TunerInputType;
#endif /* __WINCE_DEFINED_TUNERINPUTTYPE */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_AMTUNERMODETYPE
#define __WINCE_DEFINED_AMTUNERMODETYPE
typedef int AMTunerModeType;
#endif /* __WINCE_DEFINED_AMTUNERMODETYPE */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_ADDRESS_TYPE
#define __WINCE_DEFINED_ADDRESS_TYPE
typedef int ADDRESS_TYPE;
#endif /* __WINCE_DEFINED_ADDRESS_TYPE */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_CONTROLCLOSESTATUS
#define __WINCE_DEFINED_CONTROLCLOSESTATUS
typedef int ControlCloseStatus;
#endif /* __WINCE_DEFINED_CONTROLCLOSESTATUS */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_EXTENDEDDISCONNECTREASONCODE
#define __WINCE_DEFINED_EXTENDEDDISCONNECTREASONCODE
typedef int ExtendedDisconnectReasonCode;
#endif /* __WINCE_DEFINED_EXTENDEDDISCONNECTREASONCODE */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_DVD_POS_CODE
#define __WINCE_DEFINED_DVD_POS_CODE
typedef int DVD_POS_CODE;
#endif /* __WINCE_DEFINED_DVD_POS_CODE */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_DVD_PROVIDER_ID
#define __WINCE_DEFINED_DVD_PROVIDER_ID
typedef int DVD_PROVIDER_ID;
#endif /* __WINCE_DEFINED_DVD_PROVIDER_ID */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DMO_MEDIA_TYPE
#define __WINCE_DEFINED_DMO_MEDIA_TYPE
typedef struct DMO_MEDIA_TYPE DMO_MEDIA_TYPE;
#endif /* __WINCE_DEFINED_DMO_MEDIA_TYPE */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DMUS_PMSG
#define __WINCE_DEFINED_DMUS_PMSG
typedef struct DMUS_PMSG DMUS_PMSG;
#endif /* __WINCE_DEFINED_DMUS_PMSG */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DMUS_NOTIFICATION_PMSG
#define __WINCE_DEFINED_DMUS_NOTIFICATION_PMSG
typedef struct DMUS_NOTIFICATION_PMSG DMUS_NOTIFICATION_PMSG;
#endif /* __WINCE_DEFINED_DMUS_NOTIFICATION_PMSG */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DMO_OUTPUT_DATA_BUFFER
#define __WINCE_DEFINED_DMO_OUTPUT_DATA_BUFFER
typedef struct DMO_OUTPUT_DATA_BUFFER DMO_OUTPUT_DATA_BUFFER;
#endif /* __WINCE_DEFINED_DMO_OUTPUT_DATA_BUFFER */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DVDUSERGOPDATA
#define __WINCE_DEFINED_DVDUSERGOPDATA
typedef struct DVDUserGOPData DVDUserGOPData;
#endif /* __WINCE_DEFINED_DVDUSERGOPDATA */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DVD_AUDIO_STREAM_ATTR
#define __WINCE_DEFINED_DVD_AUDIO_STREAM_ATTR
typedef struct DVD_AUDIO_STREAM_ATTR DVD_AUDIO_STREAM_ATTR;
#endif /* __WINCE_DEFINED_DVD_AUDIO_STREAM_ATTR */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_DVD_ISRC
#define __WINCE_DEFINED_DVD_ISRC
typedef struct DVD_ISRC DVD_ISRC;
#endif /* __WINCE_DEFINED_DVD_ISRC */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IUNKNOWN
#define __WINCE_DEFINED_IUNKNOWN
typedef struct IUnknown IUnknown;
#endif /* __WINCE_DEFINED_IUNKNOWN */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IDISPATCH
#define __WINCE_DEFINED_IDISPATCH
typedef struct IDispatch IDispatch;
#endif /* __WINCE_DEFINED_IDISPATCH */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_ISTORAGE
#define __WINCE_DEFINED_ISTORAGE
typedef struct IStorage IStorage;
#endif /* __WINCE_DEFINED_ISTORAGE */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_ISTREAM
#define __WINCE_DEFINED_ISTREAM
typedef struct IStream IStream;
#endif /* __WINCE_DEFINED_ISTREAM */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IMONIKER
#define __WINCE_DEFINED_IMONIKER
typedef struct IMoniker IMoniker;
#endif /* __WINCE_DEFINED_IMONIKER */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IOLECLIENTSITE
#define __WINCE_DEFINED_IOLECLIENTSITE
typedef struct IOleClientSite IOleClientSite;
#endif /* __WINCE_DEFINED_IOLECLIENTSITE */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IOLEADVISEHOLDER
#define __WINCE_DEFINED_IOLEADVISEHOLDER
typedef struct IOleAdviseHolder IOleAdviseHolder;
#endif /* __WINCE_DEFINED_IOLEADVISEHOLDER */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IPERSISTSTORAGE
#define __WINCE_DEFINED_IPERSISTSTORAGE
typedef struct IPersistStorage IPersistStorage;
#endif /* __WINCE_DEFINED_IPERSISTSTORAGE */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_ILOCKBYTES
#define __WINCE_DEFINED_ILOCKBYTES
typedef struct ILockBytes ILockBytes;
#endif /* __WINCE_DEFINED_ILOCKBYTES */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IENUMVARIANT
#define __WINCE_DEFINED_IENUMVARIANT
typedef struct IEnumVARIANT IEnumVARIANT;
#endif /* __WINCE_DEFINED_IENUMVARIANT */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IMARKUPPOINTER
#define __WINCE_DEFINED_IMARKUPPOINTER
typedef struct IMarkupPointer IMarkupPointer;
#endif /* __WINCE_DEFINED_IMARKUPPOINTER */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IMARKUPCONTAINER
#define __WINCE_DEFINED_IMARKUPCONTAINER
typedef struct IMarkupContainer IMarkupContainer;
#endif /* __WINCE_DEFINED_IMARKUPCONTAINER */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IDISPLAYPOINTER
#define __WINCE_DEFINED_IDISPLAYPOINTER
typedef struct IDisplayPointer IDisplayPointer;
#endif /* __WINCE_DEFINED_IDISPLAYPOINTER */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IHTMLELEMENT
#define __WINCE_DEFINED_IHTMLELEMENT
typedef struct IHTMLElement IHTMLElement;
#endif /* __WINCE_DEFINED_IHTMLELEMENT */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IHTMLEVENTOBJ
#define __WINCE_DEFINED_IHTMLEVENTOBJ
typedef struct IHTMLEventObj IHTMLEventObj;
#endif /* __WINCE_DEFINED_IHTMLEVENTOBJ */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IXMLDOMELEMENT
#define __WINCE_DEFINED_IXMLDOMELEMENT
typedef struct IXMLDOMElement IXMLDOMElement;
#endif /* __WINCE_DEFINED_IXMLDOMELEMENT */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IXMLDOMNODE
#define __WINCE_DEFINED_IXMLDOMNODE
typedef struct IXMLDOMNode IXMLDOMNode;
#endif /* __WINCE_DEFINED_IXMLDOMNODE */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IWSDXMLCONTEXT
#define __WINCE_DEFINED_IWSDXMLCONTEXT
typedef struct IWSDXMLContext IWSDXMLContext;
#endif /* __WINCE_DEFINED_IWSDXMLCONTEXT */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IRTCCOLLECTION
#define __WINCE_DEFINED_IRTCCOLLECTION
typedef struct IRTCCollection IRTCCollection;
#endif /* __WINCE_DEFINED_IRTCCOLLECTION */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_ITRAVELLOGENTRY
#define __WINCE_DEFINED_ITRAVELLOGENTRY
typedef struct ITravelLogEntry ITravelLogEntry;
#endif /* __WINCE_DEFINED_ITRAVELLOGENTRY */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IWMPMEDIA
#define __WINCE_DEFINED_IWMPMEDIA
typedef struct IWMPMedia IWMPMedia;
#endif /* __WINCE_DEFINED_IWMPMEDIA */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IEXDI2ENUMCPUREGS
#define __WINCE_DEFINED_IEXDI2ENUMCPUREGS
typedef struct IeXdi2EnumCpuRegs IeXdi2EnumCpuRegs;
#endif /* __WINCE_DEFINED_IEXDI2ENUMCPUREGS */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_ICITY
#define __WINCE_DEFINED_ICITY
typedef struct ICity ICity;
#endif /* __WINCE_DEFINED_ICITY */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IFONTDISP
#define __WINCE_DEFINED_IFONTDISP
typedef struct IFontDisp IFontDisp;
#endif /* __WINCE_DEFINED_IFONTDISP */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IDIRECTMUSICBAND
#define __WINCE_DEFINED_IDIRECTMUSICBAND
typedef struct IDirectMusicBand IDirectMusicBand;
#endif /* __WINCE_DEFINED_IDIRECTMUSICBAND */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IDIRECTMUSICLOADER
#define __WINCE_DEFINED_IDIRECTMUSICLOADER
typedef struct IDirectMusicLoader IDirectMusicLoader;
#endif /* __WINCE_DEFINED_IDIRECTMUSICLOADER */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IDIRECTMUSICOBJECT
#define __WINCE_DEFINED_IDIRECTMUSICOBJECT
typedef struct IDirectMusicObject IDirectMusicObject;
#endif /* __WINCE_DEFINED_IDIRECTMUSICOBJECT */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IENUMDVD_TEXT_LANGUAGE_UNIT
#define __WINCE_DEFINED_IENUMDVD_TEXT_LANGUAGE_UNIT
typedef struct IEnumDVD_TEXT_LANGUAGE_UNIT IEnumDVD_TEXT_LANGUAGE_UNIT;
#endif /* __WINCE_DEFINED_IENUMDVD_TEXT_LANGUAGE_UNIT */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IENUMREPLITEM
#define __WINCE_DEFINED_IENUMREPLITEM
typedef struct IEnumReplItem IEnumReplItem;
#endif /* __WINCE_DEFINED_IENUMREPLITEM */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IFILTERGRAPH
#define __WINCE_DEFINED_IFILTERGRAPH
typedef struct IFilterGraph IFilterGraph;
#endif /* __WINCE_DEFINED_IFILTERGRAPH */
/* DERIVED forward -- derived forward: interface pointer type; body no corpus page prints */
#ifndef __WINCE_DEFINED_IBASEFILTER
#define __WINCE_DEFINED_IBASEFILTER
typedef struct IbaseFilter IbaseFilter;
#endif /* __WINCE_DEFINED_IBASEFILTER */
/* DERIVED forward -- derived forward: no corpus page prints the union body */
#ifndef __WINCE_DEFINED_NODEDATAUNION
#define __WINCE_DEFINED_NODEDATAUNION
typedef struct NodeDataUnion NodeDataUnion;
#endif /* __WINCE_DEFINED_NODEDATAUNION */
/* DERIVED forward -- derived forward: no corpus page prints the union body */
#ifndef __WINCE_DEFINED_SDPQUERYUUIDUNION
#define __WINCE_DEFINED_SDPQUERYUUIDUNION
typedef struct SdpQueryUuidUnion SdpQueryUuidUnion;
#endif /* __WINCE_DEFINED_SDPQUERYUUIDUNION */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_PTM_FIELD_DESC
#define __WINCE_DEFINED_PTM_FIELD_DESC
typedef struct PTM_FIELD_DESC PTM_FIELD_DESC;
#endif /* __WINCE_DEFINED_PTM_FIELD_DESC */
/* DERIVED forward -- derived forward: no corpus page prints the type body */
#ifndef __WINCE_DEFINED_PCONFINFO
#define __WINCE_DEFINED_PCONFINFO
typedef struct PCONFINFO PCONFINFO;
#endif /* __WINCE_DEFINED_PCONFINFO */
/* DERIVED forward -- derived forward: no corpus page prints the type body */
#ifndef __WINCE_DEFINED_POBJNOTIFY
#define __WINCE_DEFINED_POBJNOTIFY
typedef struct POBJNOTIFY POBJNOTIFY;
#endif /* __WINCE_DEFINED_POBJNOTIFY */
/* DERIVED forward -- derived forward: no corpus page prints the type body */
#ifndef __WINCE_DEFINED_POBJTYPEINFO
#define __WINCE_DEFINED_POBJTYPEINFO
typedef struct POBJTYPEINFO POBJTYPEINFO;
#endif /* __WINCE_DEFINED_POBJTYPEINFO */
/* DERIVED forward -- derived forward: no corpus page prints the type body */
#ifndef __WINCE_DEFINED_POBJUIDATA
#define __WINCE_DEFINED_POBJUIDATA
typedef struct POBJUIDATA POBJUIDATA;
#endif /* __WINCE_DEFINED_POBJUIDATA */
/* DERIVED forward -- derived forward: ATL map entry; body no corpus page prints */
#ifndef __WINCE_DEFINED__ATL_INTMAP_ENTRY
#define __WINCE_DEFINED__ATL_INTMAP_ENTRY
typedef struct _ATL_INTMAP_ENTRY _ATL_INTMAP_ENTRY;
#endif /* __WINCE_DEFINED__ATL_INTMAP_ENTRY */
/* DERIVED forward -- derived forward: OLE variant; body no corpus page prints in one filed block */
#ifndef __WINCE_DEFINED_VARIANT
#define __WINCE_DEFINED_VARIANT
typedef struct VARIANT VARIANT;
#endif /* __WINCE_DEFINED_VARIANT */
/* DERIVED forward -- derived typedef: OLE wide string */
#ifndef __WINCE_DEFINED_LPOLESTR
#define __WINCE_DEFINED_LPOLESTR
typedef OLECHAR *LPOLESTR;
#endif /* __WINCE_DEFINED_LPOLESTR */
/* DERIVED forward -- derived typedef: const OLE wide string */
#ifndef __WINCE_DEFINED_LPCOLESTR
#define __WINCE_DEFINED_LPCOLESTR
typedef const OLECHAR *LPCOLESTR;
#endif /* __WINCE_DEFINED_LPCOLESTR */
/* DERIVED forward -- derived forward: GUID struct body not filed from any one page */
#ifndef __WINCE_DEFINED_GUID
#define __WINCE_DEFINED_GUID
typedef struct _GUID GUID;
#endif /* __WINCE_DEFINED_GUID */
/* DERIVED forward -- derived typedef: class id */
#ifndef __WINCE_DEFINED_CLSID
#define __WINCE_DEFINED_CLSID
typedef GUID CLSID;
#endif /* __WINCE_DEFINED_CLSID */
/* DERIVED forward -- derived typedef: interface id */
#ifndef __WINCE_DEFINED_IID
#define __WINCE_DEFINED_IID
typedef GUID IID;
#endif /* __WINCE_DEFINED_IID */
/* DERIVED forward -- derived forward: OLE window handle */
#ifndef __WINCE_DEFINED_OAHWND
#define __WINCE_DEFINED_OAHWND
typedef void *OAHWND;
#endif /* __WINCE_DEFINED_OAHWND */
/* DERIVED forward -- derived forward: USB handle */
#ifndef __WINCE_DEFINED_USB_HANDLE
#define __WINCE_DEFINED_USB_HANDLE
typedef void *USB_HANDLE;
#endif /* __WINCE_DEFINED_USB_HANDLE */
/* DERIVED forward -- derived forward: USB transfer handle */
#ifndef __WINCE_DEFINED_USB_TRANSFER
#define __WINCE_DEFINED_USB_TRANSFER
typedef void *USB_TRANSFER;
#endif /* __WINCE_DEFINED_USB_TRANSFER */
/* DERIVED forward -- derived forward: LP- pointer typedef; no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_LPDDSURFACEDESC2
#define __WINCE_DEFINED_LPDDSURFACEDESC2
typedef struct _DDSURFACEDESC2 *LPDDSURFACEDESC2;
#endif /* __WINCE_DEFINED_LPDDSURFACEDESC2 */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_INTERFACE_TYPE
#define __WINCE_DEFINED_INTERFACE_TYPE
typedef int INTERFACE_TYPE;
#endif /* __WINCE_DEFINED_INTERFACE_TYPE */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_AM_MEDIA_TYPE
#define __WINCE_DEFINED_AM_MEDIA_TYPE
typedef struct AM_MEDIA_TYPE AM_MEDIA_TYPE;
#endif /* __WINCE_DEFINED_AM_MEDIA_TYPE */
/* DERIVED forward -- derived placeholder: enumeration body no corpus page prints */
#ifndef __WINCE_DEFINED_CEL_MAPFLUSH_TYPE
#define __WINCE_DEFINED_CEL_MAPFLUSH_TYPE
typedef int CEL_MAPFLUSH_TYPE;
#endif /* __WINCE_DEFINED_CEL_MAPFLUSH_TYPE */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED__FRAGNODE
#define __WINCE_DEFINED__FRAGNODE
typedef struct _FRAGNODE _FRAGNODE;
#endif /* __WINCE_DEFINED__FRAGNODE */
/* DERIVED forward -- derived forward: no corpus page prints the type body */
#ifndef __WINCE_DEFINED___POSITION
#define __WINCE_DEFINED___POSITION
typedef struct __POSITION __POSITION;
#endif /* __WINCE_DEFINED___POSITION */
/* DERIVED forward -- derived forward: MIDL [object] name leaked as a type; body no corpus page prints */
#ifndef __WINCE_DEFINED_OBJECT
#define __WINCE_DEFINED_OBJECT
typedef struct object object;
#endif /* __WINCE_DEFINED_OBJECT */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_FILEVERIFYINFO
#define __WINCE_DEFINED_FILEVERIFYINFO
typedef struct FileVerifyInfo FileVerifyInfo;
#endif /* __WINCE_DEFINED_FILEVERIFYINFO */
/* DERIVED forward -- derived forward: no corpus page prints the struct body */
#ifndef __WINCE_DEFINED_FILEVERIFYREFERENCE
#define __WINCE_DEFINED_FILEVERIFYREFERENCE
typedef struct FileVerifyReference FileVerifyReference;
#endif /* __WINCE_DEFINED_FILEVERIFYREFERENCE */
/* DERIVED forward -- derived forward (matching the printed tag): placed before the printed body so the printed uses compile */
#ifndef __WINCE_DEFINED_SAFEARRAYBOUND
#define __WINCE_DEFINED_SAFEARRAYBOUND
typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;
#endif /* __WINCE_DEFINED_SAFEARRAYBOUND */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IPIN
#define __WINCE_DEFINED_IPIN
typedef struct IPin IPin;
#endif /* __WINCE_DEFINED_IPIN */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_HPACKET
#define __WINCE_DEFINED_HPACKET
typedef struct HPACKET HPACKET;
#endif /* __WINCE_DEFINED_HPACKET */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICSEGMENT
#define __WINCE_DEFINED_IDIRECTMUSICSEGMENT
typedef struct IDirectMusicSegment IDirectMusicSegment;
#endif /* __WINCE_DEFINED_IDIRECTMUSICSEGMENT */
/* DERIVED forward -- printed spelling variant of IEnumVARIANT */
#ifndef __WINCE_DEFINED_IENUMVARIANT
#define __WINCE_DEFINED_IENUMVARIANT
typedef IEnumVARIANT IEnumVariant;
#endif /* __WINCE_DEFINED_IENUMVARIANT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IBINDCTX
#define __WINCE_DEFINED_IBINDCTX
typedef struct IBindCtx IBindCtx;
#endif /* __WINCE_DEFINED_IBINDCTX */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILESURFACE
#define __WINCE_DEFINED_IDIRECT3DMOBILESURFACE
typedef struct IDirect3DMobileSurface IDirect3DMobileSurface;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILESURFACE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMEDIASAMPLE
#define __WINCE_DEFINED_IMEDIASAMPLE
typedef struct IMediaSample IMediaSample;
#endif /* __WINCE_DEFINED_IMEDIASAMPLE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_CUSTDATA
#define __WINCE_DEFINED_CUSTDATA
typedef struct CUSTDATA CUSTDATA;
#endif /* __WINCE_DEFINED_CUSTDATA */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICCHORDMAP
#define __WINCE_DEFINED_IDIRECTMUSICCHORDMAP
typedef struct IDirectMusicChordMap IDirectMusicChordMap;
#endif /* __WINCE_DEFINED_IDIRECTMUSICCHORDMAP */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IIMAGE
#define __WINCE_DEFINED_IIMAGE
typedef struct IImage IImage;
#endif /* __WINCE_DEFINED_IIMAGE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPOBJECTTOKEN
#define __WINCE_DEFINED_ISPOBJECTTOKEN
typedef struct ISpObjectToken ISpObjectToken;
#endif /* __WINCE_DEFINED_ISPOBJECTTOKEN */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PPCI_RSRC
#define __WINCE_DEFINED_PPCI_RSRC
typedef struct _PCI_RSRC *PPCI_RSRC;
#endif /* __WINCE_DEFINED_PPCI_RSRC */
/* DERIVED forward -- printed spelling variant of IbaseFilter */
#ifndef __WINCE_DEFINED_IBASEFILTER
#define __WINCE_DEFINED_IBASEFILTER
typedef IbaseFilter IBaseFilter;
#endif /* __WINCE_DEFINED_IBASEFILTER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICPORT
#define __WINCE_DEFINED_IDIRECTMUSICPORT
typedef struct IDirectMusicPort IDirectMusicPort;
#endif /* __WINCE_DEFINED_IDIRECTMUSICPORT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICSEGMENTSTATE
#define __WINCE_DEFINED_IDIRECTMUSICSEGMENTSTATE
typedef struct IDirectMusicSegmentState IDirectMusicSegmentState;
#endif /* __WINCE_DEFINED_IDIRECTMUSICSEGMENTSTATE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMFORMATETC
#define __WINCE_DEFINED_IENUMFORMATETC
typedef struct IEnumFORMATETC IEnumFORMATETC;
#endif /* __WINCE_DEFINED_IENUMFORMATETC */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMEMALLOCATOR
#define __WINCE_DEFINED_IMEMALLOCATOR
typedef struct IMemAllocator IMemAllocator;
#endif /* __WINCE_DEFINED_IMEMALLOCATOR */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOSAXSPROCESS
#define __WINCE_DEFINED_IOSAXSPROCESS
typedef struct IOsAxsProcess IOsAxsProcess;
#endif /* __WINCE_DEFINED_IOSAXSPROCESS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPDATAKEY
#define __WINCE_DEFINED_ISPDATAKEY
typedef struct ISpDataKey ISpDataKey;
#endif /* __WINCE_DEFINED_ISPDATAKEY */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPSTREAMFORMAT
#define __WINCE_DEFINED_ISPSTREAMFORMAT
typedef struct ISpStreamFormat ISpStreamFormat;
#endif /* __WINCE_DEFINED_ISPSTREAMFORMAT */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_MEMBERID
#define __WINCE_DEFINED_MEMBERID
typedef struct MEMBERID MEMBERID;
#endif /* __WINCE_DEFINED_MEMBERID */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PPCI_DEV_INFO
#define __WINCE_DEFINED_PPCI_DEV_INFO
typedef struct _PCI_DEV_INFO *PPCI_DEV_INFO;
#endif /* __WINCE_DEFINED_PPCI_DEV_INFO */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PIXELFORMATID
#define __WINCE_DEFINED_PIXELFORMATID
typedef struct PixelFormatID PixelFormatID;
#endif /* __WINCE_DEFINED_PIXELFORMATID */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PROPERTYITEM
#define __WINCE_DEFINED_PROPERTYITEM
typedef struct PropertyItem PropertyItem;
#endif /* __WINCE_DEFINED_PROPERTYITEM */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_FUNCDESC
#define __WINCE_DEFINED_FUNCDESC
typedef struct FUNCDESC FUNCDESC;
#endif /* __WINCE_DEFINED_FUNCDESC */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICCSERVICE
#define __WINCE_DEFINED_ICCSERVICE
typedef struct ICcService ICcService;
#endif /* __WINCE_DEFINED_ICCSERVICE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDATAOBJECT
#define __WINCE_DEFINED_IDATAOBJECT
typedef struct IDataObject IDataObject;
#endif /* __WINCE_DEFINED_IDATAOBJECT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMMONIKER
#define __WINCE_DEFINED_IENUMMONIKER
typedef struct IEnumMoniker IEnumMoniker;
#endif /* __WINCE_DEFINED_IENUMMONIKER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISTREAMSAMPLE
#define __WINCE_DEFINED_ISTREAMSAMPLE
typedef struct IStreamSample IStreamSample;
#endif /* __WINCE_DEFINED_ISTREAMSAMPLE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ITYPEINFO
#define __WINCE_DEFINED_ITYPEINFO
typedef struct ITypeInfo ITypeInfo;
#endif /* __WINCE_DEFINED_ITYPEINFO */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_IMAGECODECINFO
#define __WINCE_DEFINED_IMAGECODECINFO
typedef struct ImageCodecInfo ImageCodecInfo;
#endif /* __WINCE_DEFINED_IMAGECODECINFO */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_MULTI_QI
#define __WINCE_DEFINED_MULTI_QI
typedef struct MULTI_QI MULTI_QI;
#endif /* __WINCE_DEFINED_MULTI_QI */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PVCMDNAME
#define __WINCE_DEFINED_PVCMDNAME
typedef struct _VCMDNAME *PVCMDNAME;
#endif /* __WINCE_DEFINED_PVCMDNAME */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_VARDESC
#define __WINCE_DEFINED_VARDESC
typedef struct VARDESC VARDESC;
#endif /* __WINCE_DEFINED_VARDESC */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_VIDEOINFOHEADER
#define __WINCE_DEFINED_VIDEOINFOHEADER
typedef struct VIDEOINFOHEADER VIDEOINFOHEADER;
#endif /* __WINCE_DEFINED_VIDEOINFOHEADER */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_WSDXML_ELEMENT
#define __WINCE_DEFINED_WSDXML_ELEMENT
typedef struct WSDXML_ELEMENT WSDXML_ELEMENT;
#endif /* __WINCE_DEFINED_WSDXML_ELEMENT */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_CATID
#define __WINCE_DEFINED_CATID
typedef struct CATID CATID;
#endif /* __WINCE_DEFINED_CATID */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_ENCODERPARAMETERS
#define __WINCE_DEFINED_ENCODERPARAMETERS
typedef struct EncoderParameters EncoderParameters;
#endif /* __WINCE_DEFINED_ENCODERPARAMETERS */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_FORMATETC
#define __WINCE_DEFINED_FORMATETC
typedef struct FORMATETC FORMATETC;
#endif /* __WINCE_DEFINED_FORMATETC */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IADVISESINK
#define __WINCE_DEFINED_IADVISESINK
typedef struct IAdviseSink IAdviseSink;
#endif /* __WINCE_DEFINED_IADVISESINK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IBINDSTATUSCALLBACK
#define __WINCE_DEFINED_IBINDSTATUSCALLBACK
typedef struct IBindStatusCallback IBindStatusCallback;
#endif /* __WINCE_DEFINED_IBINDSTATUSCALLBACK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IBITMAPIMAGE
#define __WINCE_DEFINED_IBITMAPIMAGE
typedef struct IBitmapImage IBitmapImage;
#endif /* __WINCE_DEFINED_IBITMAPIMAGE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILEINDEXBUFFER
#define __WINCE_DEFINED_IDIRECT3DMOBILEINDEXBUFFER
typedef struct IDirect3DMobileIndexBuffer IDirect3DMobileIndexBuffer;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILEINDEXBUFFER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILEVERTEXBUFFER
#define __WINCE_DEFINED_IDIRECT3DMOBILEVERTEXBUFFER
typedef struct IDirect3DMobileVertexBuffer IDirect3DMobileVertexBuffer;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILEVERTEXBUFFER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICINSTRUMENT
#define __WINCE_DEFINED_IDIRECTMUSICINSTRUMENT
typedef struct IDirectMusicInstrument IDirectMusicInstrument;
#endif /* __WINCE_DEFINED_IDIRECTMUSICINSTRUMENT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICSTYLE
#define __WINCE_DEFINED_IDIRECTMUSICSTYLE
typedef struct IDirectMusicStyle IDirectMusicStyle;
#endif /* __WINCE_DEFINED_IDIRECTMUSICSTYLE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICTOOL
#define __WINCE_DEFINED_IDIRECTMUSICTOOL
typedef struct IDirectMusicTool IDirectMusicTool;
#endif /* __WINCE_DEFINED_IDIRECTMUSICTOOL */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMCATID
#define __WINCE_DEFINED_IENUMCATID
typedef struct IEnumCATID IEnumCATID;
#endif /* __WINCE_DEFINED_IENUMCATID */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMSPOBJECTTOKENS
#define __WINCE_DEFINED_IENUMSPOBJECTTOKENS
typedef struct IEnumSpObjectTokens IEnumSpObjectTokens;
#endif /* __WINCE_DEFINED_IENUMSPOBJECTTOKENS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMSTRING
#define __WINCE_DEFINED_IENUMSTRING
typedef struct IEnumString IEnumString;
#endif /* __WINCE_DEFINED_IENUMSTRING */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IHEADERCOLLECTION
#define __WINCE_DEFINED_IHEADERCOLLECTION
typedef struct IHeaderCollection IHeaderCollection;
#endif /* __WINCE_DEFINED_IHEADERCOLLECTION */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IIMAGESINK
#define __WINCE_DEFINED_IIMAGESINK
typedef struct IImageSink IImageSink;
#endif /* __WINCE_DEFINED_IIMAGESINK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMEDIASTREAM
#define __WINCE_DEFINED_IMEDIASTREAM
typedef struct IMediaStream IMediaStream;
#endif /* __WINCE_DEFINED_IMEDIASTREAM */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOSAXSENUMMODULE
#define __WINCE_DEFINED_IOSAXSENUMMODULE
typedef struct IOsAxsEnumModule IOsAxsEnumModule;
#endif /* __WINCE_DEFINED_IOSAXSENUMMODULE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOSAXSENUMTHREAD
#define __WINCE_DEFINED_IOSAXSENUMTHREAD
typedef struct IOsAxsEnumThread IOsAxsEnumThread;
#endif /* __WINCE_DEFINED_IOSAXSENUMTHREAD */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IPMCPU
#define __WINCE_DEFINED_IPMCPU
typedef struct IPMCPU IPMCPU;
#endif /* __WINCE_DEFINED_IPMCPU */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IPMOS
#define __WINCE_DEFINED_IPMOS
typedef struct IPMOS IPMOS;
#endif /* __WINCE_DEFINED_IPMOS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IRECURRENCEPATTERN
#define __WINCE_DEFINED_IRECURRENCEPATTERN
typedef struct IRecurrencePattern IRecurrencePattern;
#endif /* __WINCE_DEFINED_IRECURRENCEPATTERN */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IREFERENCECLOCK
#define __WINCE_DEFINED_IREFERENCECLOCK
typedef struct IReferenceClock IReferenceClock;
#endif /* __WINCE_DEFINED_IREFERENCECLOCK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IREMOTEDEVICE
#define __WINCE_DEFINED_IREMOTEDEVICE
typedef struct IRemoteDevice IRemoteDevice;
#endif /* __WINCE_DEFINED_IREMOTEDEVICE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPPHRASE
#define __WINCE_DEFINED_ISPPHRASE
typedef struct ISpPhrase ISpPhrase;
#endif /* __WINCE_DEFINED_ISPPHRASE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPRECOCONTEXT
#define __WINCE_DEFINED_ISPRECOCONTEXT
typedef struct ISpRecoContext ISpRecoContext;
#endif /* __WINCE_DEFINED_ISPRECOCONTEXT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IVOIPCALLERINFORECORD
#define __WINCE_DEFINED_IVOIPCALLERINFORECORD
typedef struct IVoIPCallerInfoRecord IVoIPCallerInfoRecord;
#endif /* __WINCE_DEFINED_IVOIPCALLERINFORECORD */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IVOIPCURRENTCALL
#define __WINCE_DEFINED_IVOIPCURRENTCALL
typedef struct IVoIPCurrentCall IVoIPCurrentCall;
#endif /* __WINCE_DEFINED_IVOIPCURRENTCALL */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_IMAGEINFO
#define __WINCE_DEFINED_IMAGEINFO
typedef struct ImageInfo ImageInfo;
#endif /* __WINCE_DEFINED_IMAGEINFO */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_INT
#define __WINCE_DEFINED_INT
typedef struct Int Int;
#endif /* __WINCE_DEFINED_INT */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPDIRECTDRAWCLIPPER
#define __WINCE_DEFINED_LPDIRECTDRAWCLIPPER
typedef struct _DIRECTDRAWCLIPPER *LPDIRECTDRAWCLIPPER;
#endif /* __WINCE_DEFINED_LPDIRECTDRAWCLIPPER */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_MUSIC_TIME
#define __WINCE_DEFINED_MUSIC_TIME
typedef struct MUSIC_TIME MUSIC_TIME;
#endif /* __WINCE_DEFINED_MUSIC_TIME */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_KEYBD_EVENT_CALLBACK
#define __WINCE_DEFINED_PFN_KEYBD_EVENT_CALLBACK
typedef void *PFN_KEYBD_EVENT_CALLBACK;
#endif /* __WINCE_DEFINED_PFN_KEYBD_EVENT_CALLBACK */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_POINTL
#define __WINCE_DEFINED_POINTL
typedef struct _OINTL *POINTL;
#endif /* __WINCE_DEFINED_POINTL */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PSS_WINDOW_STATE
#define __WINCE_DEFINED_PSS_WINDOW_STATE
typedef struct _SS_WINDOW_STATE *PSS_WINDOW_STATE;
#endif /* __WINCE_DEFINED_PSS_WINDOW_STATE */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_RPC_AUTH_IDENTITY_HANDLE
#define __WINCE_DEFINED_RPC_AUTH_IDENTITY_HANDLE
typedef void *RPC_AUTH_IDENTITY_HANDLE;
#endif /* __WINCE_DEFINED_RPC_AUTH_IDENTITY_HANDLE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_SPPHRASE
#define __WINCE_DEFINED_SPPHRASE
typedef struct SPPHRASE SPPHRASE;
#endif /* __WINCE_DEFINED_SPPHRASE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_SPWORDLIST
#define __WINCE_DEFINED_SPWORDLIST
typedef struct SPWORDLIST SPWORDLIST;
#endif /* __WINCE_DEFINED_SPWORDLIST */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_TLIBATTR
#define __WINCE_DEFINED_TLIBATTR
typedef struct TLIBATTR TLIBATTR;
#endif /* __WINCE_DEFINED_TLIBATTR */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_TYPEATTR
#define __WINCE_DEFINED_TYPEATTR
typedef struct TYPEATTR TYPEATTR;
#endif /* __WINCE_DEFINED_TYPEATTR */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_WSDXML_NAME
#define __WINCE_DEFINED_WSDXML_NAME
typedef struct WSDXML_NAME WSDXML_NAME;
#endif /* __WINCE_DEFINED_WSDXML_NAME */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_BD_BUFFER
#define __WINCE_DEFINED_BD_BUFFER
typedef struct BD_BUFFER BD_BUFFER;
#endif /* __WINCE_DEFINED_BD_BUFFER */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_BITMAPDATA
#define __WINCE_DEFINED_BITMAPDATA
typedef struct BitmapData BitmapData;
#endif /* __WINCE_DEFINED_BITMAPDATA */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_CRYPT_HASH_BLOB
#define __WINCE_DEFINED_CRYPT_HASH_BLOB
typedef struct CRYPT_HASH_BLOB CRYPT_HASH_BLOB;
#endif /* __WINCE_DEFINED_CRYPT_HASH_BLOB */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_HEVENT
#define __WINCE_DEFINED_HEVENT
typedef struct HEVENT HEVENT;
#endif /* __WINCE_DEFINED_HEVENT */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_HSEMAPHORE
#define __WINCE_DEFINED_HSEMAPHORE
typedef struct HSEMAPHORE HSEMAPHORE;
#endif /* __WINCE_DEFINED_HSEMAPHORE */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_HANDLE
#define __WINCE_DEFINED_HANDLE
typedef void *Handle;
#endif /* __WINCE_DEFINED_HANDLE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IAPPOINTMENTITEM
#define __WINCE_DEFINED_IAPPOINTMENTITEM
typedef struct IAppointmentItem IAppointmentItem;
#endif /* __WINCE_DEFINED_IAPPOINTMENTITEM */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICCCOLLECTION
#define __WINCE_DEFINED_ICCCOLLECTION
typedef struct ICcCollection ICcCollection;
#endif /* __WINCE_DEFINED_ICCCOLLECTION */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICCCONNECTION
#define __WINCE_DEFINED_ICCCONNECTION
typedef struct ICcConnection ICcConnection;
#endif /* __WINCE_DEFINED_ICCCONNECTION */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICCDATASTORE
#define __WINCE_DEFINED_ICCDATASTORE
typedef struct ICcDatastore ICcDatastore;
#endif /* __WINCE_DEFINED_ICCDATASTORE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICCOBJECT
#define __WINCE_DEFINED_ICCOBJECT
typedef struct ICcObject ICcObject;
#endif /* __WINCE_DEFINED_ICCOBJECT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICCSERVICEINFO
#define __WINCE_DEFINED_ICCSERVICEINFO
typedef struct ICcServiceInfo ICcServiceInfo;
#endif /* __WINCE_DEFINED_ICCSERVICEINFO */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICONNECTIONPOINT
#define __WINCE_DEFINED_ICONNECTIONPOINT
typedef struct IConnectionPoint IConnectionPoint;
#endif /* __WINCE_DEFINED_ICONNECTIONPOINT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICONNECTIONPOINTCONTAINER
#define __WINCE_DEFINED_ICONNECTIONPOINTCONTAINER
typedef struct IConnectionPointContainer IConnectionPointContainer;
#endif /* __WINCE_DEFINED_ICONNECTIONPOINTCONTAINER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICONTENTDIRECTORY
#define __WINCE_DEFINED_ICONTENTDIRECTORY
typedef struct IContentDirectory IContentDirectory;
#endif /* __WINCE_DEFINED_ICONTENTDIRECTORY */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICREATEERRORINFO
#define __WINCE_DEFINED_ICREATEERRORINFO
typedef struct ICreateErrorInfo ICreateErrorInfo;
#endif /* __WINCE_DEFINED_ICREATEERRORINFO */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ICREATETYPELIB2
#define __WINCE_DEFINED_ICREATETYPELIB2
typedef struct ICreateTypeLib2 ICreateTypeLib2;
#endif /* __WINCE_DEFINED_ICREATETYPELIB2 */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDSDRIVERBUFFER
#define __WINCE_DEFINED_IDSDRIVERBUFFER
typedef struct IDSDRIVERBUFFER IDSDRIVERBUFFER;
#endif /* __WINCE_DEFINED_IDSDRIVERBUFFER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDVDROM
#define __WINCE_DEFINED_IDVDROM
typedef struct IDVDROM IDVDROM;
#endif /* __WINCE_DEFINED_IDVDROM */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILE
#define __WINCE_DEFINED_IDIRECT3DMOBILE
typedef struct IDirect3DMobile IDirect3DMobile;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILEBASETEXTURE
#define __WINCE_DEFINED_IDIRECT3DMOBILEBASETEXTURE
typedef struct IDirect3DMobileBaseTexture IDirect3DMobileBaseTexture;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILEBASETEXTURE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILEDEVICE
#define __WINCE_DEFINED_IDIRECT3DMOBILEDEVICE
typedef struct IDirect3DMobileDevice IDirect3DMobileDevice;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILEDEVICE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILESWAPCHAIN
#define __WINCE_DEFINED_IDIRECT3DMOBILESWAPCHAIN
typedef struct IDirect3DMobileSwapChain IDirect3DMobileSwapChain;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILESWAPCHAIN */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECT3DMOBILETEXTURE
#define __WINCE_DEFINED_IDIRECT3DMOBILETEXTURE
typedef struct IDirect3DMobileTexture IDirect3DMobileTexture;
#endif /* __WINCE_DEFINED_IDIRECT3DMOBILETEXTURE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICDOWNLOAD
#define __WINCE_DEFINED_IDIRECTMUSICDOWNLOAD
typedef struct IDirectMusicDownload IDirectMusicDownload;
#endif /* __WINCE_DEFINED_IDIRECTMUSICDOWNLOAD */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICDOWNLOADEDINSTRUMENT
#define __WINCE_DEFINED_IDIRECTMUSICDOWNLOADEDINSTRUMENT
typedef struct IDirectMusicDownloadedInstrument IDirectMusicDownloadedInstrument;
#endif /* __WINCE_DEFINED_IDIRECTMUSICDOWNLOADEDINSTRUMENT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICGRAPH
#define __WINCE_DEFINED_IDIRECTMUSICGRAPH
typedef struct IDirectMusicGraph IDirectMusicGraph;
#endif /* __WINCE_DEFINED_IDIRECTMUSICGRAPH */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IDIRECTMUSICPERFORMANCE
#define __WINCE_DEFINED_IDIRECTMUSICPERFORMANCE
typedef struct IDirectMusicPerformance IDirectMusicPerformance;
#endif /* __WINCE_DEFINED_IDIRECTMUSICPERFORMANCE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMIDLIST
#define __WINCE_DEFINED_IENUMIDLIST
typedef struct IENUMIDLIST IENUMIDLIST;
#endif /* __WINCE_DEFINED_IENUMIDLIST */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMCATEGORYINFO
#define __WINCE_DEFINED_IENUMCATEGORYINFO
typedef struct IEnumCATEGORYINFO IEnumCATEGORYINFO;
#endif /* __WINCE_DEFINED_IENUMCATEGORYINFO */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMCLSID
#define __WINCE_DEFINED_IENUMCLSID
typedef struct IEnumCLSID IEnumCLSID;
#endif /* __WINCE_DEFINED_IENUMCLSID */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMCODEPAGE
#define __WINCE_DEFINED_IENUMCODEPAGE
typedef struct IEnumCodePage IEnumCodePage;
#endif /* __WINCE_DEFINED_IENUMCODEPAGE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMCONNECTIONPOINTS
#define __WINCE_DEFINED_IENUMCONNECTIONPOINTS
typedef struct IEnumConnectionPoints IEnumConnectionPoints;
#endif /* __WINCE_DEFINED_IENUMCONNECTIONPOINTS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMCONNECTIONS
#define __WINCE_DEFINED_IENUMCONNECTIONS
typedef struct IEnumConnections IEnumConnections;
#endif /* __WINCE_DEFINED_IENUMCONNECTIONS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMFILTERS
#define __WINCE_DEFINED_IENUMFILTERS
typedef struct IEnumFilters IEnumFilters;
#endif /* __WINCE_DEFINED_IENUMFILTERS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMMEDIATYPES
#define __WINCE_DEFINED_IENUMMEDIATYPES
typedef struct IEnumMediaTypes IEnumMediaTypes;
#endif /* __WINCE_DEFINED_IENUMMEDIATYPES */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMOLEVERB
#define __WINCE_DEFINED_IENUMOLEVERB
typedef struct IEnumOleVerb IEnumOleVerb;
#endif /* __WINCE_DEFINED_IENUMOLEVERB */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMPINS
#define __WINCE_DEFINED_IENUMPINS
typedef struct IEnumPins IEnumPins;
#endif /* __WINCE_DEFINED_IENUMPINS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMRFC1766
#define __WINCE_DEFINED_IENUMRFC1766
typedef struct IEnumRfc1766 IEnumRfc1766;
#endif /* __WINCE_DEFINED_IENUMRFC1766 */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMSTATDATA
#define __WINCE_DEFINED_IENUMSTATDATA
typedef struct IEnumSTATDATA IEnumSTATDATA;
#endif /* __WINCE_DEFINED_IENUMSTATDATA */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMSTATSTG
#define __WINCE_DEFINED_IENUMSTATSTG
typedef struct IEnumSTATSTG IEnumSTATSTG;
#endif /* __WINCE_DEFINED_IENUMSTATSTG */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMSCRIPT
#define __WINCE_DEFINED_IENUMSCRIPT
typedef struct IEnumScript IEnumScript;
#endif /* __WINCE_DEFINED_IENUMSCRIPT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMWSDLOPERATIONS
#define __WINCE_DEFINED_IENUMWSDLOPERATIONS
typedef struct IEnumWSDLOperations IEnumWSDLOperations;
#endif /* __WINCE_DEFINED_IENUMWSDLOPERATIONS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMWSDLPORTS
#define __WINCE_DEFINED_IENUMWSDLPORTS
typedef struct IEnumWSDLPorts IEnumWSDLPorts;
#endif /* __WINCE_DEFINED_IENUMWSDLPORTS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMWSDLSERVICE
#define __WINCE_DEFINED_IENUMWSDLSERVICE
typedef struct IEnumWSDLService IEnumWSDLService;
#endif /* __WINCE_DEFINED_IENUMWSDLSERVICE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IEXCEPTION
#define __WINCE_DEFINED_IEXCEPTION
typedef struct IException IException;
#endif /* __WINCE_DEFINED_IEXCEPTION */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IEXCHANGECLIENTDATAITEMARRAY
#define __WINCE_DEFINED_IEXCHANGECLIENTDATAITEMARRAY
typedef struct IExchangeClientDataItemArray IExchangeClientDataItemArray;
#endif /* __WINCE_DEFINED_IEXCHANGECLIENTDATAITEMARRAY */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IEXCHANGECLIENTREQUEST
#define __WINCE_DEFINED_IEXCHANGECLIENTREQUEST
typedef struct IExchangeClientRequest IExchangeClientRequest;
#endif /* __WINCE_DEFINED_IEXCHANGECLIENTREQUEST */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IFOLDER
#define __WINCE_DEFINED_IFOLDER
typedef struct IFolder IFolder;
#endif /* __WINCE_DEFINED_IFOLDER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IGRAPHBUILDER
#define __WINCE_DEFINED_IGRAPHBUILDER
typedef struct IGraphBuilder IGraphBuilder;
#endif /* __WINCE_DEFINED_IGRAPHBUILDER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IHEADERENUM
#define __WINCE_DEFINED_IHEADERENUM
typedef struct IHeaderEnum IHeaderEnum;
#endif /* __WINCE_DEFINED_IHEADERENUM */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IIMAGEDECODER
#define __WINCE_DEFINED_IIMAGEDECODER
typedef struct IImageDecoder IImageDecoder;
#endif /* __WINCE_DEFINED_IIMAGEDECODER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IINTERNETSECURITYMANAGER
#define __WINCE_DEFINED_IINTERNETSECURITYMANAGER
typedef struct IInternetSecurityManager IInternetSecurityManager;
#endif /* __WINCE_DEFINED_IINTERNETSECURITYMANAGER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IINTERNETSECURITYMGRSITE
#define __WINCE_DEFINED_IINTERNETSECURITYMGRSITE
typedef struct IInternetSecurityMgrSite IInternetSecurityMgrSite;
#endif /* __WINCE_DEFINED_IINTERNETSECURITYMGRSITE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IINTERNETSESSION
#define __WINCE_DEFINED_IINTERNETSESSION
typedef struct IInternetSession IInternetSession;
#endif /* __WINCE_DEFINED_IINTERNETSESSION */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMAGELISTDRAWPARAMS
#define __WINCE_DEFINED_IMAGELISTDRAWPARAMS
typedef struct IMAGELISTDRAWPARAMS IMAGELISTDRAWPARAMS;
#endif /* __WINCE_DEFINED_IMAGELISTDRAWPARAMS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMINFO
#define __WINCE_DEFINED_IMINFO
typedef struct IMINFO IMINFO;
#endif /* __WINCE_DEFINED_IMINFO */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMEMINPUTPIN
#define __WINCE_DEFINED_IMEMINPUTPIN
typedef struct IMemInputPin IMemInputPin;
#endif /* __WINCE_DEFINED_IMEMINPUTPIN */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IMULTIMEDIASTREAM
#define __WINCE_DEFINED_IMULTIMEDIASTREAM
typedef struct IMultiMediaStream IMultiMediaStream;
#endif /* __WINCE_DEFINED_IMULTIMEDIASTREAM */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_INVOKEKIND
#define __WINCE_DEFINED_INVOKEKIND
typedef struct INVOKEKIND INVOKEKIND;
#endif /* __WINCE_DEFINED_INVOKEKIND */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOBEXDEVICE
#define __WINCE_DEFINED_IOBEXDEVICE
typedef struct IObexDevice IObexDevice;
#endif /* __WINCE_DEFINED_IOBEXDEVICE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOLEINPLACEFRAME
#define __WINCE_DEFINED_IOLEINPLACEFRAME
typedef struct IOleInPlaceFrame IOleInPlaceFrame;
#endif /* __WINCE_DEFINED_IOLEINPLACEFRAME */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOLEINPLACEUIWINDOW
#define __WINCE_DEFINED_IOLEINPLACEUIWINDOW
typedef struct IOleInPlaceUIWindow IOleInPlaceUIWindow;
#endif /* __WINCE_DEFINED_IOLEINPLACEUIWINDOW */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOSAXSENUMPROCESS
#define __WINCE_DEFINED_IOSAXSENUMPROCESS
typedef struct IOsAxsEnumProcess IOsAxsEnumProcess;
#endif /* __WINCE_DEFINED_IOSAXSENUMPROCESS */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IOSAXSTHREAD
#define __WINCE_DEFINED_IOSAXSTHREAD
typedef struct IOsAxsThread IOsAxsThread;
#endif /* __WINCE_DEFINED_IOSAXSTHREAD */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IPROPERTYBAG
#define __WINCE_DEFINED_IPROPERTYBAG
typedef struct IPropertyBag IPropertyBag;
#endif /* __WINCE_DEFINED_IPROPERTYBAG */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IPROPERTYSETSTORAGE
#define __WINCE_DEFINED_IPROPERTYSETSTORAGE
typedef struct IPropertySetStorage IPropertySetStorage;
#endif /* __WINCE_DEFINED_IPROPERTYSETSTORAGE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IREPLNOTIFY
#define __WINCE_DEFINED_IREPLNOTIFY
typedef struct IReplNotify IReplNotify;
#endif /* __WINCE_DEFINED_IREPLNOTIFY */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_IREPLOBJHANDLER
#define __WINCE_DEFINED_IREPLOBJHANDLER
typedef void *IReplObjHandler;
#endif /* __WINCE_DEFINED_IREPLOBJHANDLER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISERVICEPROVIDER
#define __WINCE_DEFINED_ISERVICEPROVIDER
typedef struct IServiceProvider IServiceProvider;
#endif /* __WINCE_DEFINED_ISERVICEPROVIDER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISHELLBROWSER
#define __WINCE_DEFINED_ISHELLBROWSER
typedef struct IShellBrowser IShellBrowser;
#endif /* __WINCE_DEFINED_ISHELLBROWSER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISHELLVIEW
#define __WINCE_DEFINED_ISHELLVIEW
typedef struct IShellView IShellView;
#endif /* __WINCE_DEFINED_ISHELLVIEW */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISOAPREADER
#define __WINCE_DEFINED_ISOAPREADER
typedef struct ISoapReader ISoapReader;
#endif /* __WINCE_DEFINED_ISOAPREADER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISOAPSERIALIZER
#define __WINCE_DEFINED_ISOAPSERIALIZER
typedef struct ISoapSerializer ISoapSerializer;
#endif /* __WINCE_DEFINED_ISOAPSERIALIZER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPCFGINTERPRETERSITE
#define __WINCE_DEFINED_ISPCFGINTERPRETERSITE
typedef struct ISpCFGInterpreterSite ISpCFGInterpreterSite;
#endif /* __WINCE_DEFINED_ISPCFGINTERPRETERSITE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPERRORLOG
#define __WINCE_DEFINED_ISPERRORLOG
typedef struct ISpErrorLog ISpErrorLog;
#endif /* __WINCE_DEFINED_ISPERRORLOG */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPLEXICON
#define __WINCE_DEFINED_ISPLEXICON
typedef struct ISpLexicon ISpLexicon;
#endif /* __WINCE_DEFINED_ISPLEXICON */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPNOTIFYCALLBACK
#define __WINCE_DEFINED_ISPNOTIFYCALLBACK
typedef struct ISpNotifyCallback ISpNotifyCallback;
#endif /* __WINCE_DEFINED_ISPNOTIFYCALLBACK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPNOTIFYSINK
#define __WINCE_DEFINED_ISPNOTIFYSINK
typedef struct ISpNotifySink ISpNotifySink;
#endif /* __WINCE_DEFINED_ISPNOTIFYSINK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPPHRASEALT
#define __WINCE_DEFINED_ISPPHRASEALT
typedef struct ISpPhraseAlt ISpPhraseAlt;
#endif /* __WINCE_DEFINED_ISPPHRASEALT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPPHRASEBUILDER
#define __WINCE_DEFINED_ISPPHRASEBUILDER
typedef struct ISpPhraseBuilder ISpPhraseBuilder;
#endif /* __WINCE_DEFINED_ISPPHRASEBUILDER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPRECOGRAMMAR
#define __WINCE_DEFINED_ISPRECOGRAMMAR
typedef struct ISpRecoGrammar ISpRecoGrammar;
#endif /* __WINCE_DEFINED_ISPRECOGRAMMAR */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPRECORESULT
#define __WINCE_DEFINED_ISPRECORESULT
typedef struct ISpRecoResult ISpRecoResult;
#endif /* __WINCE_DEFINED_ISPRECORESULT */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPRECOGNIZER
#define __WINCE_DEFINED_ISPRECOGNIZER
typedef struct ISpRecognizer ISpRecognizer;
#endif /* __WINCE_DEFINED_ISPRECOGNIZER */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPTASK
#define __WINCE_DEFINED_ISPTASK
typedef struct ISpTask ISpTask;
#endif /* __WINCE_DEFINED_ISPTASK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPTHREADCONTROL
#define __WINCE_DEFINED_ISPTHREADCONTROL
typedef struct ISpThreadControl ISpThreadControl;
#endif /* __WINCE_DEFINED_ISPTHREADCONTROL */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPTHREADTASK
#define __WINCE_DEFINED_ISPTHREADTASK
typedef struct ISpThreadTask ISpThreadTask;
#endif /* __WINCE_DEFINED_ISPTHREADTASK */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISPVOICE
#define __WINCE_DEFINED_ISPVOICE
typedef struct ISpVoice ISpVoice;
#endif /* __WINCE_DEFINED_ISPVOICE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ISURROGATE
#define __WINCE_DEFINED_ISURROGATE
typedef struct ISurrogate ISurrogate;
#endif /* __WINCE_DEFINED_ISURROGATE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ITEMTYPE
#define __WINCE_DEFINED_ITEMTYPE
typedef struct ITEMTYPE ITEMTYPE;
#endif /* __WINCE_DEFINED_ITEMTYPE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ITIMEZONE
#define __WINCE_DEFINED_ITIMEZONE
typedef struct ITimeZone ITimeZone;
#endif /* __WINCE_DEFINED_ITIMEZONE */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ITRANSPORTCONNECTION
#define __WINCE_DEFINED_ITRANSPORTCONNECTION
typedef struct ITransportConnection ITransportConnection;
#endif /* __WINCE_DEFINED_ITRANSPORTCONNECTION */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ITYPECOMP
#define __WINCE_DEFINED_ITYPECOMP
typedef struct ITypeComp ITypeComp;
#endif /* __WINCE_DEFINED_ITYPECOMP */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_ITYPELIB
#define __WINCE_DEFINED_ITYPELIB
typedef struct ITypeLib ITypeLib;
#endif /* __WINCE_DEFINED_ITYPELIB */
/* DERIVED forward -- interface; body prints only as a C++ interface (or not at all) -- opaque C forward */
#ifndef __WINCE_DEFINED_IVOIPCALLRECORD
#define __WINCE_DEFINED_IVOIPCALLRECORD
typedef struct IVoIPCallRecord IVoIPCallRecord;
#endif /* __WINCE_DEFINED_IVOIPCALLRECORD */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_IENUMSOAPMAPPERS
#define __WINCE_DEFINED_IENUMSOAPMAPPERS
typedef struct IenumSoapMappers IenumSoapMappers;
#endif /* __WINCE_DEFINED_IENUMSOAPMAPPERS */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_KEY_STATE_FLAGS
#define __WINCE_DEFINED_KEY_STATE_FLAGS
typedef struct KEY_STATE_FLAGS KEY_STATE_FLAGS;
#endif /* __WINCE_DEFINED_KEY_STATE_FLAGS */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_L2CAP_CALLBACKS
#define __WINCE_DEFINED_L2CAP_CALLBACKS
typedef struct L2CAP_CALLBACKS L2CAP_CALLBACKS;
#endif /* __WINCE_DEFINED_L2CAP_CALLBACKS */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_L2CAP_EVENT_INDICATION
#define __WINCE_DEFINED_L2CAP_EVENT_INDICATION
typedef struct L2CAP_EVENT_INDICATION L2CAP_EVENT_INDICATION;
#endif /* __WINCE_DEFINED_L2CAP_EVENT_INDICATION */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_L2CAP_INTERFACE
#define __WINCE_DEFINED_L2CAP_INTERFACE
typedef struct L2CAP_INTERFACE L2CAP_INTERFACE;
#endif /* __WINCE_DEFINED_L2CAP_INTERFACE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_LAYER_CALLBACKS
#define __WINCE_DEFINED_LAYER_CALLBACKS
typedef struct LAYER_CALLBACKS LAYER_CALLBACKS;
#endif /* __WINCE_DEFINED_LAYER_CALLBACKS */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_LAYER_EVENT_INDICATION
#define __WINCE_DEFINED_LAYER_EVENT_INDICATION
typedef struct LAYER_EVENT_INDICATION LAYER_EVENT_INDICATION;
#endif /* __WINCE_DEFINED_LAYER_EVENT_INDICATION */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_LAYER_INTERFACE
#define __WINCE_DEFINED_LAYER_INTERFACE
typedef struct LAYER_INTERFACE LAYER_INTERFACE;
#endif /* __WINCE_DEFINED_LAYER_INTERFACE */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPCFOLDERSETTINGS
#define __WINCE_DEFINED_LPCFOLDERSETTINGS
typedef struct _CFOLDERSETTINGS *LPCFOLDERSETTINGS;
#endif /* __WINCE_DEFINED_LPCFOLDERSETTINGS */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPDDRAWI_DDRAWSURFACE_LCL
#define __WINCE_DEFINED_LPDDRAWI_DDRAWSURFACE_LCL
typedef struct _DDRAWI_DDRAWSURFACE_LCL *LPDDRAWI_DDRAWSURFACE_LCL;
#endif /* __WINCE_DEFINED_LPDDRAWI_DDRAWSURFACE_LCL */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPDIRECTDRAW
#define __WINCE_DEFINED_LPDIRECTDRAW
typedef struct _DIRECTDRAW *LPDIRECTDRAW;
#endif /* __WINCE_DEFINED_LPDIRECTDRAW */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPMARSHAL
#define __WINCE_DEFINED_LPMARSHAL
typedef struct _MARSHAL *LPMARSHAL;
#endif /* __WINCE_DEFINED_LPMARSHAL */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPOLEINPLACEFRAMEINFO
#define __WINCE_DEFINED_LPOLEINPLACEFRAMEINFO
typedef struct _OLEINPLACEFRAMEINFO *LPOLEINPLACEFRAMEINFO;
#endif /* __WINCE_DEFINED_LPOLEINPLACEFRAMEINFO */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPPROPPAGEINFO
#define __WINCE_DEFINED_LPPROPPAGEINFO
typedef struct _PROPPAGEINFO *LPPROPPAGEINFO;
#endif /* __WINCE_DEFINED_LPPROPPAGEINFO */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_LPUNKNOWN
#define __WINCE_DEFINED_LPUNKNOWN
typedef struct _UNKNOWN *LPUNKNOWN;
#endif /* __WINCE_DEFINED_LPUNKNOWN */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_MEMID
#define __WINCE_DEFINED_MEMID
typedef struct MEMID MEMID;
#endif /* __WINCE_DEFINED_MEMID */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_MYINT
#define __WINCE_DEFINED_MYINT
typedef struct MyInt MyInt;
#endif /* __WINCE_DEFINED_MYINT */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PDSDRIVERCAPS
#define __WINCE_DEFINED_PDSDRIVERCAPS
typedef struct _DSDRIVERCAPS *PDSDRIVERCAPS;
#endif /* __WINCE_DEFINED_PDSDRIVERCAPS */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PDSDRIVERDESC
#define __WINCE_DEFINED_PDSDRIVERDESC
typedef struct _DSDRIVERDESC *PDSDRIVERDESC;
#endif /* __WINCE_DEFINED_PDSDRIVERDESC */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_ALLOCHEAPMEM
#define __WINCE_DEFINED_PFN_ALLOCHEAPMEM
typedef void *PFN_AllocHeapMem;
#endif /* __WINCE_DEFINED_PFN_ALLOCHEAPMEM */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_CERT_ENUM_PHYSICAL_STORE
#define __WINCE_DEFINED_PFN_CERT_ENUM_PHYSICAL_STORE
typedef void *PFN_CERT_ENUM_PHYSICAL_STORE;
#endif /* __WINCE_DEFINED_PFN_CERT_ENUM_PHYSICAL_STORE */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_CERT_ENUM_SYSTEM_STORE
#define __WINCE_DEFINED_PFN_CERT_ENUM_SYSTEM_STORE
typedef void *PFN_CERT_ENUM_SYSTEM_STORE;
#endif /* __WINCE_DEFINED_PFN_CERT_ENUM_SYSTEM_STORE */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_CERT_ENUM_SYSTEM_STORE_LOCATION
#define __WINCE_DEFINED_PFN_CERT_ENUM_SYSTEM_STORE_LOCATION
typedef void *PFN_CERT_ENUM_SYSTEM_STORE_LOCATION;
#endif /* __WINCE_DEFINED_PFN_CERT_ENUM_SYSTEM_STORE_LOCATION */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_CRYPT_ENUM_KEYID_PROP
#define __WINCE_DEFINED_PFN_CRYPT_ENUM_KEYID_PROP
typedef void *PFN_CRYPT_ENUM_KEYID_PROP;
#endif /* __WINCE_DEFINED_PFN_CRYPT_ENUM_KEYID_PROP */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_CRYPT_ENUM_OID_INFO
#define __WINCE_DEFINED_PFN_CRYPT_ENUM_OID_INFO
typedef void *PFN_CRYPT_ENUM_OID_INFO;
#endif /* __WINCE_DEFINED_PFN_CRYPT_ENUM_OID_INFO */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_FREEHEAPMEM
#define __WINCE_DEFINED_PFN_FREEHEAPMEM
typedef void *PFN_FreeHeapMem;
#endif /* __WINCE_DEFINED_PFN_FREEHEAPMEM */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_PHONEEXTSERVICECALLBACK
#define __WINCE_DEFINED_PFN_PHONEEXTSERVICECALLBACK
typedef void *PFN_PhoneExtServiceCallback;
#endif /* __WINCE_DEFINED_PFN_PHONEEXTSERVICECALLBACK */
/* DERIVED forward -- derived opaque pointer: body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PFN_SENDATCOMMAND
#define __WINCE_DEFINED_PFN_SENDATCOMMAND
typedef void *PFN_SendATCommand;
#endif /* __WINCE_DEFINED_PFN_SENDATCOMMAND */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PKEYBD_IST
#define __WINCE_DEFINED_PKEYBD_IST
typedef struct _KEYBD_IST *PKEYBD_IST;
#endif /* __WINCE_DEFINED_PKEYBD_IST */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PROPID
#define __WINCE_DEFINED_PROPID
typedef struct _ROPID *PROPID;
#endif /* __WINCE_DEFINED_PROPID */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PSDATA
#define __WINCE_DEFINED_PSDATA
typedef struct _SDATA *PSDATA;
#endif /* __WINCE_DEFINED_PSDATA */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PRIVATEKEYDEF
#define __WINCE_DEFINED_PRIVATEKEYDEF
typedef struct PrivateKeyDef PrivateKeyDef;
#endif /* __WINCE_DEFINED_PRIVATEKEYDEF */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_QUALITY
#define __WINCE_DEFINED_QUALITY
typedef struct Quality Quality;
#endif /* __WINCE_DEFINED_QUALITY */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_REFMSPID
#define __WINCE_DEFINED_REFMSPID
typedef struct REFMSPID REFMSPID;
#endif /* __WINCE_DEFINED_REFMSPID */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_REGPINMEDIUM
#define __WINCE_DEFINED_REGPINMEDIUM
typedef struct REGPINMEDIUM REGPINMEDIUM;
#endif /* __WINCE_DEFINED_REGPINMEDIUM */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_SHCONTF
#define __WINCE_DEFINED_SHCONTF
typedef struct SHCONTF SHCONTF;
#endif /* __WINCE_DEFINED_SHCONTF */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_SNB
#define __WINCE_DEFINED_SNB
typedef struct SNB SNB;
#endif /* __WINCE_DEFINED_SNB */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_SPPHRASEELEMENT
#define __WINCE_DEFINED_SPPHRASEELEMENT
typedef struct SPPHRASEELEMENT SPPHRASEELEMENT;
#endif /* __WINCE_DEFINED_SPPHRASEELEMENT */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_TYPEDESC
#define __WINCE_DEFINED_TYPEDESC
typedef struct TYPEDESC TYPEDESC;
#endif /* __WINCE_DEFINED_TYPEDESC */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_UNIT
#define __WINCE_DEFINED_UNIT
typedef struct UNIT UNIT;
#endif /* __WINCE_DEFINED_UNIT */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_UNIT16
#define __WINCE_DEFINED_UNIT16
typedef struct UNIT16 UNIT16;
#endif /* __WINCE_DEFINED_UNIT16 */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_USB_PIPE
#define __WINCE_DEFINED_USB_PIPE
typedef struct USB_PIPE USB_PIPE;
#endif /* __WINCE_DEFINED_USB_PIPE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_WSDXML_NAMESPACE
#define __WINCE_DEFINED_WSDXML_NAMESPACE
typedef struct WSDXML_NAMESPACE WSDXML_NAMESPACE;
#endif /* __WINCE_DEFINED_WSDXML_NAMESPACE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_WSD_PORT_TYPE
#define __WINCE_DEFINED_WSD_PORT_TYPE
typedef struct WSD_PORT_TYPE WSD_PORT_TYPE;
#endif /* __WINCE_DEFINED_WSD_PORT_TYPE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_BOOLEAN
#define __WINCE_DEFINED_BOOLEAN
typedef struct boolean boolean;
#endif /* __WINCE_DEFINED_BOOLEAN */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_FILTERS
#define __WINCE_DEFINED_FILTERS
typedef struct filters filters;
#endif /* __WINCE_DEFINED_FILTERS */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_HPNDEVICE
#define __WINCE_DEFINED_HPNDEVICE
typedef struct hPNDevice hPNDevice;
#endif /* __WINCE_DEFINED_HPNDEVICE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_OUT
#define __WINCE_DEFINED_OUT
typedef struct out out;
#endif /* __WINCE_DEFINED_OUT */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PPNDEVICE
#define __WINCE_DEFINED_PPNDEVICE
typedef struct pPNDEVICE pPNDEVICE;
#endif /* __WINCE_DEFINED_PPNDEVICE */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PPNPOSLLA
#define __WINCE_DEFINED_PPNPOSLLA
typedef struct pPNPOSLLA pPNPOSLLA;
#endif /* __WINCE_DEFINED_PPNPOSLLA */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PPNVELBEAR
#define __WINCE_DEFINED_PPNVELBEAR
typedef struct pPNVELBEAR pPNVELBEAR;
#endif /* __WINCE_DEFINED_PPNVELBEAR */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_PPNVELENU
#define __WINCE_DEFINED_PPNVELENU
typedef struct pPNVELENU pPNVELENU;
#endif /* __WINCE_DEFINED_PPNVELENU */
/* DERIVED forward -- struct body no corpus page prints as one block -- opaque C forward */
#ifndef __WINCE_DEFINED_SDATA
#define __WINCE_DEFINED_SDATA
typedef struct SDATA SDATA;
#endif /* __WINCE_DEFINED_SDATA */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PIVCMDMENU
#define __WINCE_DEFINED_PIVCMDMENU
typedef struct _IVCMDMENU *PIVCMDMENU;
#endif /* __WINCE_DEFINED_PIVCMDMENU */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PLANGUAGE
#define __WINCE_DEFINED_PLANGUAGE
typedef struct _LANGUAGE *PLANGUAGE;
#endif /* __WINCE_DEFINED_PLANGUAGE */
/* DERIVED forward -- derived forward: outline only; no corpus page prints the union body */
#ifndef __WINCE_DEFINED_CY
#define __WINCE_DEFINED_CY
typedef struct CY CY;
#endif /* __WINCE_DEFINED_CY */
/* DERIVED forward -- derived pointer forward: pointee body no corpus page prints as one block */
#ifndef __WINCE_DEFINED_PIVCMDENUM
#define __WINCE_DEFINED_PIVCMDENUM
typedef struct _IVCMDENUM *PIVCMDENUM;
#endif /* __WINCE_DEFINED_PIVCMDENUM */

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
#ifndef __WINCE_DEFINED_PRECTL
#define __WINCE_DEFINED_PRECTL
typedef struct _RECTL {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECTL, *PRECTL;
#endif /* __WINCE_DEFINED_PRECTL */
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
