/* BaseTsd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 111 declarations, 18 outlines, 21 base types, 0 extra macros, 0 extra decls
 */
#ifndef _BASETSD_
#define _BASETSD_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ADDRESS_TAG_BIT 0x40000000000UI64
#define APIENTRY WINAPI
#define CALLBACK __stdcall
#define MAXHALF_PTR ((HALF_PTR)(MAXUHALF_PTR
#define MAXINT_PTR ((INT_PTR)(MAXUINT_PTR
#define MAXLONG_PTR ((LONG_PTR)(MAXULONG_PTR
#define MAXUHALF_PTR ((UHALF_PTR)~0)
#define MAXUINT_PTR (~((UINT_PTR)0))
#define MAXULONG_PTR (~((ULONG_PTR)0))
#define MINHALF_PTR (~MAXHALF_PTR)
#define MININT_PTR (~MAXINT_PTR)
#define MINLONG_PTR (~MAXLONG_PTR)
#define VOID void
#define WINAPI __stdcall

/* ==================================================================
 * base types -- fundamental Windows type definitions
 * CE-specific types are marked; verify sizes for your platform
 * ================================================================ */

/* DWORD32
 * source: win32/common/windows-data-types.md */
typedef unsigned int DWORD32;

/* DWORDLONG
 * source: win32/common/windows-data-types.md */
typedef unsigned __int64 DWORDLONG;

/* HACCEL
 * source: win32/common/windows-data-types.md */
typedef HANDLE HACCEL;

/* INT16
 * source: win32/common/windows-data-types.md */
typedef signed short INT16;

/* INT32
 * source: win32/common/windows-data-types.md */
typedef signed int INT32;

/* INT8
 * source: win32/common/windows-data-types.md */
typedef signed char INT8;

/* INT_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef long INT_PTR;

/* LONG32
 * source: win32/common/windows-data-types.md */
typedef signed int LONG32;

/* LONGLONG
 * source: win32/common/windows-data-types.md */
typedef __int64 LONGLONG;

/* LONG_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef long LONG_PTR;

/* SHORT
 * source: win32/common/windows-data-types.md */
typedef short SHORT;

/* UCHAR
 * source: win32/common/windows-data-types.md */
typedef unsigned char UCHAR;

/* UINT16
 * source: win32/common/windows-data-types.md */
typedef unsigned  short UINT16;

/* UINT32
 * source: win32/common/windows-data-types.md */
typedef unsigned int UINT32;

/* UINT8
 * source: win32/common/windows-data-types.md */
typedef unsigned  char UINT8;

/* UINT_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned long UINT_PTR;

/* ULONG32
 * source: win32/common/windows-data-types.md */
typedef unsigned int ULONG32;

/* ULONGLONG
 * source: win32/common/windows-data-types.md */
typedef unsigned __int64 ULONGLONG;

/* ULONG_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned long ULONG_PTR;

/* DWORD_PTR
 * CE is 32-bit: pointer-sized integer
 * source: win32/common/windows-data-types.md */
typedef unsigned long DWORD_PTR;

/* SIZE_T [CE-SPECIFIC]
 * Size type for memory operations
 * Pointer-sized (32-bit on 32-bit CE platforms)
 * source: win32/common/windows-data-types.md */
typedef ULONG_PTR SIZE_T;

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CALLBACK  [typedef, macro; shared; entity-headers] */

/* CONST  [struct, typedef, macro; shared; entity-headers] */

/* DWORD  [typedef, macro; shared; entity-headers; win32-reference] */
typedef unsigned long DWORD;

/* HWINSTA  [typedef; shared; entity-headers] */

/* INT  [typedef, function; shared; entity-headers] */

/* POINTER_32  [typedef, macro; shared; entity-headers] */

/* POINTER_64  [typedef, macro; shared; entity-headers] */

/* TBYTE  [typedef; shared; entity-headers] */

/* VOID  [typedef, macro; shared; entity-headers] */

/* WINAPI  [typedef, macro; shared; entity-headers] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BOOL  [typedef; shared; entity-headers; win32-reference] */
typedef int BOOL;

/* BYTE  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned char BYTE;

/* CHAR  [typedef; shared; entity-headers; win32-reference] */
typedef char CHAR;

/* DWORD64  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned __int64 DWORD64;

/* FLOAT  [typedef; shared; entity-headers; win32-reference] */
typedef float FLOAT;

/* HFILE  [typedef; shared; entity-headers; win32-reference] */
typedef int HFILE;

/* INT64  [typedef; shared; entity-headers; win32-reference] */
typedef signed __int64 INT64;

/* LCTYPE  [typedef; shared; entity-headers; win32-reference] */
typedef DWORD LCTYPE;

/* LONG  [typedef; shared; entity-headers; win32-reference] */
typedef long LONG;

/* LONG64  [typedef; shared; entity-headers; win32-reference] */
typedef __int64 LONG64;

/* LPARAM  [typedef; shared; entity-headers; win32-reference] */
typedef LONG_PTR LPARAM;

/* LPBOOL  [typedef; shared; entity-headers; win32-reference] */
typedef BOOL far *LPBOOL;

/* LPBYTE  [typedef; shared; entity-headers; win32-reference] */
typedef BYTE far *LPBYTE;

/* LPCOLORREF  [typedef; shared; entity-headers; win32-reference] */
typedef DWORD *LPCOLORREF;

/* LPDWORD  [typedef; shared; entity-headers; win32-reference] */
typedef DWORD *LPDWORD;

/* LPLONG  [typedef; shared; entity-headers; win32-reference] */
typedef long *LPLONG;

/* LRESULT  [typedef; shared; entity-headers; win32-reference] */
typedef LONG_PTR LRESULT;

/* PBOOL  [typedef; shared; entity-headers; win32-reference] */
typedef BOOL *PBOOL;

/* PBYTE  [typedef; shared; entity-headers; win32-reference] */
typedef BYTE *PBYTE;

/* PCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef CHAR *PCHAR;

/* PCSTR  [typedef; shared; entity-headers; win32-reference] */
typedef CONST CHAR *PCSTR;

/* PFLOAT  [typedef; shared; entity-headers; win32-reference] */
typedef FLOAT *PFLOAT;

/* PLCID  [typedef; shared; entity-headers; win32-reference] */
typedef PDWORD PLCID;

/* PSHORT  [typedef; shared; entity-headers; win32-reference] */
typedef SHORT *PSHORT;

/* PSTR  [typedef; shared; entity-headers; win32-reference] */
typedef CHAR *PSTR;

/* PTCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef TCHAR *PTCHAR;

/* SC_LOCK  [typedef; shared; entity-headers; win32-reference] */
typedef LPVOID SC_LOCK;

/* UINT  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned int UINT;

/* UINT64  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned __int64 UINT64;

/* ULONG  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned long ULONG;

/* ULONG64  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned __int64 ULONG64;

/* WCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef wchar_t WCHAR;

/* WORD  [typedef; shared; entity-headers; win32-reference] */
typedef unsigned short WORD;

/* WPARAM  [typedef; shared; entity-headers; win32-reference] */
typedef UINT_PTR WPARAM;

/* ATOM  [typedef; shared; entity-headers; win32-reference] */
typedef WORD ATOM;

/* BOOLEAN  [typedef; shared; entity-headers; win32-reference] */
typedef BYTE BOOLEAN;

/* HANDLE  [typedef; shared; entity-headers; win32-reference] */
typedef PVOID HANDLE;

/* HBITMAP  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HBITMAP;

/* HBRUSH  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HBRUSH;

/* HCONV  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HCONV;

/* HCONVLIST  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HCONVLIST;

/* HDC  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HDC;

/* HDDEDATA  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HDDEDATA;

/* HDESK  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HDESK;

/* HDROP  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HDROP;

/* HDWP  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HDWP;

/* HENHMETAFILE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HENHMETAFILE;

/* HFONT  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HFONT;

/* HGDIOBJ  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HGDIOBJ;

/* HGLOBAL  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HGLOBAL;

/* HHOOK  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HHOOK;

/* HICON  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HICON;

/* HINSTANCE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HINSTANCE;

/* HKEY  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HKEY;

/* HKL  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HKL;

/* HLOCAL  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HLOCAL;

/* HMENU  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HMENU;

/* HMETAFILE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HMETAFILE;

/* HMODULE  [typedef; shared; entity-headers; win32-reference] */
typedef HINSTANCE HMODULE;

/* HMONITOR  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HMONITOR;

/* HPALETTE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HPALETTE;

/* HPEN  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HPEN;

/* HRGN  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HRGN;

/* HRSRC  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HRSRC;

/* HSZ  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HSZ;

/* HWND  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE HWND;

/* LANGID  [typedef; shared; entity-headers; win32-reference] */
typedef WORD LANGID;

/* LPCWSTR  [typedef; shared; entity-headers; win32-reference] */
typedef CONST WCHAR *LPCWSTR;

/* LPHANDLE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE *LPHANDLE;

/* LPWORD  [typedef; shared; entity-headers; win32-reference] */
typedef WORD *LPWORD;

/* LPWSTR  [typedef; shared; entity-headers; win32-reference] */
typedef WCHAR *LPWSTR;

/* PBOOLEAN  [typedef; shared; entity-headers; win32-reference] */
typedef BOOLEAN *PBOOLEAN;

/* PCWSTR  [typedef; shared; entity-headers; win32-reference] */
typedef CONST WCHAR *PCWSTR;

/* PHANDLE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE *PHANDLE;

/* PHKEY  [typedef; shared; entity-headers; win32-reference] */
typedef HKEY *PHKEY;

/* PUCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef UCHAR *PUCHAR;

/* PWCHAR  [typedef; shared; entity-headers; win32-reference] */
typedef WCHAR *PWCHAR;

/* PWORD  [typedef; shared; entity-headers; win32-reference] */
typedef WORD *PWORD;

/* PWSTR  [typedef, struct; shared; entity-headers; win32-reference] */
typedef WCHAR *PWSTR;

/* SC_HANDLE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE SC_HANDLE;

/* SERVICE_STATUS_HANDLE  [typedef; shared; entity-headers; win32-reference] */
typedef HANDLE SERVICE_STATUS_HANDLE;

/* HCURSOR  [typedef; shared; entity-headers; win32-reference] */
typedef HICON HCURSOR;

#endif /* _BASETSD_ */
