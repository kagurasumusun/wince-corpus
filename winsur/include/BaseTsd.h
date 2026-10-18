/* BaseTsd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 111 declarations, 31 outlines, 21 base types, 0 extra macros, 1 extra decls
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

/* EDITSTREAM  [macro, typedef; ce-only; heuristic-prefix] */

/* EM_CANPASTE  [macro, typedef; ce-only; heuristic-prefix] */

/* HIMAGELIST  [typedef; ce-only; heuristic-prefix] */

/* HIMC  [typedef; ce-only; heuristic-prefix] */

/* HWINSTA  [typedef; shared; entity-headers] */

/* INT  [typedef, function; shared; entity-headers] */

/* LPCRITICAL_SECTION  [typedef; ce-only; heuristic-prefix] */

/* LUID  [typedef; ce-only; heuristic-prefix] */

/* PCRITICAL_SECTION  [typedef; ce-only; heuristic-prefix] */

/* PCWCH  [typedef; ce-only; heuristic-prefix] */

/* PLUID  [typedef; ce-only; heuristic-prefix] */

/* POINTER_32  [typedef, macro; shared; entity-headers] */

/* POINTER_64  [typedef, macro; shared; entity-headers] */

/* REGSAM  [typedef; ce-only; heuristic-prefix] */

/* TBYTE  [typedef; shared; entity-headers] */

/* UNSIGNED  [typedef; ce-only; heuristic-prefix] */

/* VIEWATTRIBUTES  [macro, typedef; ce-only; heuristic-prefix] */

/* VOID  [typedef, macro; shared; entity-headers] */

/* WINAPI  [typedef, macro; shared; entity-headers] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BOOL  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_BOOL
#define __WINCE_DEFINED_BOOL
typedef int BOOL;
#endif /* __WINCE_DEFINED_BOOL */

/* BYTE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_BYTE
#define __WINCE_DEFINED_BYTE
typedef unsigned char BYTE;
#endif /* __WINCE_DEFINED_BYTE */

/* CHAR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_CHAR
#define __WINCE_DEFINED_CHAR
typedef char CHAR;
#endif /* __WINCE_DEFINED_CHAR */

/* DWORD64  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_DWORD64
#define __WINCE_DEFINED_DWORD64
typedef unsigned __int64 DWORD64;
#endif /* __WINCE_DEFINED_DWORD64 */

/* FLOAT  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_FLOAT
#define __WINCE_DEFINED_FLOAT
typedef float FLOAT;
#endif /* __WINCE_DEFINED_FLOAT */

/* HFILE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HFILE
#define __WINCE_DEFINED_HFILE
typedef int HFILE;
#endif /* __WINCE_DEFINED_HFILE */

/* INT64  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_INT64
#define __WINCE_DEFINED_INT64
typedef signed __int64 INT64;
#endif /* __WINCE_DEFINED_INT64 */

/* LCTYPE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LCTYPE
#define __WINCE_DEFINED_LCTYPE
typedef DWORD LCTYPE;
#endif /* __WINCE_DEFINED_LCTYPE */

/* LONG  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LONG
#define __WINCE_DEFINED_LONG
typedef long LONG;
#endif /* __WINCE_DEFINED_LONG */

/* LONG64  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LONG64
#define __WINCE_DEFINED_LONG64
typedef __int64 LONG64;
#endif /* __WINCE_DEFINED_LONG64 */

/* LPARAM  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPARAM
#define __WINCE_DEFINED_LPARAM
typedef LONG_PTR LPARAM;
#endif /* __WINCE_DEFINED_LPARAM */

/* LPBOOL  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPBOOL
#define __WINCE_DEFINED_LPBOOL
typedef BOOL far *LPBOOL;
#endif /* __WINCE_DEFINED_LPBOOL */

/* LPBYTE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPBYTE
#define __WINCE_DEFINED_LPBYTE
typedef BYTE far *LPBYTE;
#endif /* __WINCE_DEFINED_LPBYTE */

/* LPCOLORREF  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPCOLORREF
#define __WINCE_DEFINED_LPCOLORREF
typedef DWORD *LPCOLORREF;
#endif /* __WINCE_DEFINED_LPCOLORREF */

/* LPDWORD  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPDWORD
#define __WINCE_DEFINED_LPDWORD
typedef DWORD *LPDWORD;
#endif /* __WINCE_DEFINED_LPDWORD */

/* LPLONG  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPLONG
#define __WINCE_DEFINED_LPLONG
typedef long *LPLONG;
#endif /* __WINCE_DEFINED_LPLONG */

/* LRESULT  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LRESULT
#define __WINCE_DEFINED_LRESULT
typedef LONG_PTR LRESULT;
#endif /* __WINCE_DEFINED_LRESULT */

/* PBOOL  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PBOOL
#define __WINCE_DEFINED_PBOOL
typedef BOOL *PBOOL;
#endif /* __WINCE_DEFINED_PBOOL */

/* PBYTE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PBYTE
#define __WINCE_DEFINED_PBYTE
typedef BYTE *PBYTE;
#endif /* __WINCE_DEFINED_PBYTE */

/* PCHAR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PCHAR
#define __WINCE_DEFINED_PCHAR
typedef CHAR *PCHAR;
#endif /* __WINCE_DEFINED_PCHAR */

/* PCSTR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PCSTR
#define __WINCE_DEFINED_PCSTR
typedef CONST CHAR *PCSTR;
#endif /* __WINCE_DEFINED_PCSTR */

/* PFLOAT  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PFLOAT
#define __WINCE_DEFINED_PFLOAT
typedef FLOAT *PFLOAT;
#endif /* __WINCE_DEFINED_PFLOAT */

/* PLCID  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PLCID
#define __WINCE_DEFINED_PLCID
typedef PDWORD PLCID;
#endif /* __WINCE_DEFINED_PLCID */

/* PSTR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PSTR
#define __WINCE_DEFINED_PSTR
typedef CHAR *PSTR;
#endif /* __WINCE_DEFINED_PSTR */

/* PTCHAR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PTCHAR
#define __WINCE_DEFINED_PTCHAR
typedef TCHAR *PTCHAR;
#endif /* __WINCE_DEFINED_PTCHAR */

/* SC_LOCK  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_SC_LOCK
#define __WINCE_DEFINED_SC_LOCK
typedef LPVOID SC_LOCK;
#endif /* __WINCE_DEFINED_SC_LOCK */

/* UINT  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_UINT
#define __WINCE_DEFINED_UINT
typedef unsigned int UINT;
#endif /* __WINCE_DEFINED_UINT */

/* UINT64  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_UINT64
#define __WINCE_DEFINED_UINT64
typedef unsigned __int64 UINT64;
#endif /* __WINCE_DEFINED_UINT64 */

/* ULONG  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_ULONG
#define __WINCE_DEFINED_ULONG
typedef unsigned long ULONG;
#endif /* __WINCE_DEFINED_ULONG */

/* ULONG64  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_ULONG64
#define __WINCE_DEFINED_ULONG64
typedef unsigned __int64 ULONG64;
#endif /* __WINCE_DEFINED_ULONG64 */

/* WCHAR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_WCHAR
#define __WINCE_DEFINED_WCHAR
typedef wchar_t WCHAR;
#endif /* __WINCE_DEFINED_WCHAR */

/* WORD  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_WORD
#define __WINCE_DEFINED_WORD
typedef unsigned short WORD;
#endif /* __WINCE_DEFINED_WORD */

/* WPARAM  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_WPARAM
#define __WINCE_DEFINED_WPARAM
typedef UINT_PTR WPARAM;
#endif /* __WINCE_DEFINED_WPARAM */

/* ATOM  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_ATOM
#define __WINCE_DEFINED_ATOM
typedef WORD ATOM;
#endif /* __WINCE_DEFINED_ATOM */

/* BOOLEAN  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_BOOLEAN
#define __WINCE_DEFINED_BOOLEAN
typedef BYTE BOOLEAN;
#endif /* __WINCE_DEFINED_BOOLEAN */

/* HANDLE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HANDLE
#define __WINCE_DEFINED_HANDLE
typedef PVOID HANDLE;
#endif /* __WINCE_DEFINED_HANDLE */

/* HBITMAP  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HBITMAP
#define __WINCE_DEFINED_HBITMAP
typedef HANDLE HBITMAP;
#endif /* __WINCE_DEFINED_HBITMAP */

/* HBRUSH  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HBRUSH
#define __WINCE_DEFINED_HBRUSH
typedef HANDLE HBRUSH;
#endif /* __WINCE_DEFINED_HBRUSH */

/* HCONV  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HCONV
#define __WINCE_DEFINED_HCONV
typedef HANDLE HCONV;
#endif /* __WINCE_DEFINED_HCONV */

/* HCONVLIST  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HCONVLIST
#define __WINCE_DEFINED_HCONVLIST
typedef HANDLE HCONVLIST;
#endif /* __WINCE_DEFINED_HCONVLIST */

/* HDC  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HDC
#define __WINCE_DEFINED_HDC
typedef HANDLE HDC;
#endif /* __WINCE_DEFINED_HDC */

/* HDDEDATA  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HDDEDATA
#define __WINCE_DEFINED_HDDEDATA
typedef HANDLE HDDEDATA;
#endif /* __WINCE_DEFINED_HDDEDATA */

/* HDESK  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HDESK
#define __WINCE_DEFINED_HDESK
typedef HANDLE HDESK;
#endif /* __WINCE_DEFINED_HDESK */

/* HDROP  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HDROP
#define __WINCE_DEFINED_HDROP
typedef HANDLE HDROP;
#endif /* __WINCE_DEFINED_HDROP */

/* HDWP  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HDWP
#define __WINCE_DEFINED_HDWP
typedef HANDLE HDWP;
#endif /* __WINCE_DEFINED_HDWP */

/* HENHMETAFILE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HENHMETAFILE
#define __WINCE_DEFINED_HENHMETAFILE
typedef HANDLE HENHMETAFILE;
#endif /* __WINCE_DEFINED_HENHMETAFILE */

/* HFONT  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HFONT
#define __WINCE_DEFINED_HFONT
typedef HANDLE HFONT;
#endif /* __WINCE_DEFINED_HFONT */

/* HGDIOBJ  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HGDIOBJ
#define __WINCE_DEFINED_HGDIOBJ
typedef HANDLE HGDIOBJ;
#endif /* __WINCE_DEFINED_HGDIOBJ */

/* HGLOBAL  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HGLOBAL
#define __WINCE_DEFINED_HGLOBAL
typedef HANDLE HGLOBAL;
#endif /* __WINCE_DEFINED_HGLOBAL */

/* HHOOK  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HHOOK
#define __WINCE_DEFINED_HHOOK
typedef HANDLE HHOOK;
#endif /* __WINCE_DEFINED_HHOOK */

/* HICON  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HICON
#define __WINCE_DEFINED_HICON
typedef HANDLE HICON;
#endif /* __WINCE_DEFINED_HICON */

/* HINSTANCE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HINSTANCE
#define __WINCE_DEFINED_HINSTANCE
typedef HANDLE HINSTANCE;
#endif /* __WINCE_DEFINED_HINSTANCE */

/* HKEY  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HKEY
#define __WINCE_DEFINED_HKEY
typedef HANDLE HKEY;
#endif /* __WINCE_DEFINED_HKEY */

/* HKL  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HKL
#define __WINCE_DEFINED_HKL
typedef HANDLE HKL;
#endif /* __WINCE_DEFINED_HKL */

/* HLOCAL  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HLOCAL
#define __WINCE_DEFINED_HLOCAL
typedef HANDLE HLOCAL;
#endif /* __WINCE_DEFINED_HLOCAL */

/* HMENU  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HMENU
#define __WINCE_DEFINED_HMENU
typedef HANDLE HMENU;
#endif /* __WINCE_DEFINED_HMENU */

/* HMETAFILE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HMETAFILE
#define __WINCE_DEFINED_HMETAFILE
typedef HANDLE HMETAFILE;
#endif /* __WINCE_DEFINED_HMETAFILE */

/* HMODULE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HMODULE
#define __WINCE_DEFINED_HMODULE
typedef HINSTANCE HMODULE;
#endif /* __WINCE_DEFINED_HMODULE */

/* HMONITOR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HMONITOR
#define __WINCE_DEFINED_HMONITOR
typedef HANDLE HMONITOR;
#endif /* __WINCE_DEFINED_HMONITOR */

/* HPALETTE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HPALETTE
#define __WINCE_DEFINED_HPALETTE
typedef HANDLE HPALETTE;
#endif /* __WINCE_DEFINED_HPALETTE */

/* HPEN  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HPEN
#define __WINCE_DEFINED_HPEN
typedef HANDLE HPEN;
#endif /* __WINCE_DEFINED_HPEN */

/* HRGN  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HRGN
#define __WINCE_DEFINED_HRGN
typedef HANDLE HRGN;
#endif /* __WINCE_DEFINED_HRGN */

/* HRSRC  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HRSRC
#define __WINCE_DEFINED_HRSRC
typedef HANDLE HRSRC;
#endif /* __WINCE_DEFINED_HRSRC */

/* HSZ  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HSZ
#define __WINCE_DEFINED_HSZ
typedef HANDLE HSZ;
#endif /* __WINCE_DEFINED_HSZ */

/* HWND  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HWND
#define __WINCE_DEFINED_HWND
typedef HANDLE HWND;
#endif /* __WINCE_DEFINED_HWND */

/* LANGID  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LANGID
#define __WINCE_DEFINED_LANGID
typedef WORD LANGID;
#endif /* __WINCE_DEFINED_LANGID */

/* LPCWSTR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPCWSTR
#define __WINCE_DEFINED_LPCWSTR
typedef CONST WCHAR *LPCWSTR;
#endif /* __WINCE_DEFINED_LPCWSTR */

/* LPHANDLE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPHANDLE
#define __WINCE_DEFINED_LPHANDLE
typedef HANDLE *LPHANDLE;
#endif /* __WINCE_DEFINED_LPHANDLE */

/* LPWORD  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPWORD
#define __WINCE_DEFINED_LPWORD
typedef WORD *LPWORD;
#endif /* __WINCE_DEFINED_LPWORD */

/* LPWSTR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_LPWSTR
#define __WINCE_DEFINED_LPWSTR
typedef WCHAR *LPWSTR;
#endif /* __WINCE_DEFINED_LPWSTR */

/* PBOOLEAN  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PBOOLEAN
#define __WINCE_DEFINED_PBOOLEAN
typedef BOOLEAN *PBOOLEAN;
#endif /* __WINCE_DEFINED_PBOOLEAN */

/* PCWSTR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PCWSTR
#define __WINCE_DEFINED_PCWSTR
typedef CONST WCHAR *PCWSTR;
#endif /* __WINCE_DEFINED_PCWSTR */

/* PHANDLE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PHANDLE
#define __WINCE_DEFINED_PHANDLE
typedef HANDLE *PHANDLE;
#endif /* __WINCE_DEFINED_PHANDLE */

/* PHKEY  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PHKEY
#define __WINCE_DEFINED_PHKEY
typedef HKEY *PHKEY;
#endif /* __WINCE_DEFINED_PHKEY */

/* PSHORT  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PSHORT
#define __WINCE_DEFINED_PSHORT
typedef SHORT *PSHORT;
#endif /* __WINCE_DEFINED_PSHORT */

/* PUCHAR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PUCHAR
#define __WINCE_DEFINED_PUCHAR
typedef UCHAR *PUCHAR;
#endif /* __WINCE_DEFINED_PUCHAR */

/* PWCHAR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PWCHAR
#define __WINCE_DEFINED_PWCHAR
typedef WCHAR *PWCHAR;
#endif /* __WINCE_DEFINED_PWCHAR */

/* PWORD  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PWORD
#define __WINCE_DEFINED_PWORD
typedef WORD *PWORD;
#endif /* __WINCE_DEFINED_PWORD */

/* PWSTR  [typedef, struct; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_PWSTR
#define __WINCE_DEFINED_PWSTR
typedef WCHAR *PWSTR;
#endif /* __WINCE_DEFINED_PWSTR */

/* SC_HANDLE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_SC_HANDLE
#define __WINCE_DEFINED_SC_HANDLE
typedef HANDLE SC_HANDLE;
#endif /* __WINCE_DEFINED_SC_HANDLE */

/* SERVICE_STATUS_HANDLE  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_SERVICE_STATUS_HANDLE
#define __WINCE_DEFINED_SERVICE_STATUS_HANDLE
typedef HANDLE SERVICE_STATUS_HANDLE;
#endif /* __WINCE_DEFINED_SERVICE_STATUS_HANDLE */

/* HCURSOR  [typedef; shared; entity-headers; win32-reference] */
#ifndef __WINCE_DEFINED_HCURSOR
#define __WINCE_DEFINED_HCURSOR
typedef HICON HCURSOR;
#endif /* __WINCE_DEFINED_HCURSOR */

/* HRESULT  [extra typedef] */
#ifndef __WINCE_DEFINED_HRESULT
#define __WINCE_DEFINED_HRESULT
typedef long HRESULT;
#endif /* __WINCE_DEFINED_HRESULT */

#endif /* _BASETSD_ */
