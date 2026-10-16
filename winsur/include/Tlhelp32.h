/* Tlhelp32.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 20 constants, 16 declarations, 2 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _TLHELP32_
#define _TLHELP32_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define HF32_DEFAULT 1
#define HF32_SHARED 2
#define LF32_FIXED 0x1
#define LF32_FREE 0x2
#define LF32_MOVEABLE 0x4
#define LPMODULEENTRY32 LPMODULEENTRY32W
#define LPPROCESSENTRY32 LPPROCESSENTRY32W
#define MAX_MODULE_NAME32 255
#define MODULEENTRY32 MODULEENTRY32W
#define PMODULEENTRY32 PMODULEENTRY32W
#define PPROCESSENTRY32 PPROCESSENTRY32W
#define PROCESSENTRY32 PROCESSENTRY32W
#define TH32CS_GETALLMODS 0x80000000
#define TH32CS_INHERIT 0x80000000
#define TH32CS_SNAPALL (TH32CS_SNAPHEAPLIST|TH32CS_SNAPPROCESS|TH32CS_SNAPTHREAD|TH32CS_SNAPMODULE)
#define TH32CS_SNAPHEAPLIST 0x00000001
#define TH32CS_SNAPMODULE 0x00000008
#define TH32CS_SNAPMODULE32 0x00000010
#define TH32CS_SNAPPROCESS 0x00000002
#define TH32CS_SNAPTHREAD 0x00000004

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MODULEENTRY32  [struct; shared; A/W MODULEENTRY32W (CE is W-side)] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwSize */
/*   th32ModuleID */
/*   th32ProcessID */
/*   GlblcntUsage */
/*   ProccntUsage */
/*   modBaseAddr */
/*   modBaseSize */
/*   hModule */
/*   szModule */
/*   szExePath */

/* PROCESSENTRY32  [struct; shared; A/W PROCESSENTRY32W (CE is W-side)] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwSize */
/*   cntUsage */
/*   th32ProcessID */
/*   th32DefaultHeapID */
/*   th32ModuleID */
/*   cntThreads */
/*   th32ParentProcessID */
/*   pcPriClassBase */
/*   dwFlags */
/*   szExeFile */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* CloseToolhelp32Snapshot  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI CloseToolhelp32Snapshot(
 HANDLE hSnapshot
);

/* CreateToolhelp32Snapshot  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
HANDLE WINAPI CreateToolhelp32Snapshot(
 DWORD dwFlags,
 DWORD th32ProcessID
);

/* Heap32First  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Heap32First(
 HANDLE hSnapshot,
 LPHEAPENTRY32 lphe,
 DWORD th32ProcessID,
 DWORD th32HeapID
);

/* Heap32ListFirst  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Heap32ListFirst(
 HANDLE hSnapshot,
 LPHEAPLIST32 lphl
);

/* Heap32ListNext  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Heap32ListNext(
 HANDLE hSnapshot,
 LPHEAPLIST32 lphl
);

/* Heap32Next  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Heap32Next(
 HANDLE hSnapshot,
 LPHEAPENTRY32 lphe
);

/* Module32First  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib; A/W Module32FirstW (CE is W-side)] */
BOOL WINAPI Module32First(
 HANDLE hSnapshot,
 LPMODULEENTRY32 lpme
);

/* Module32Next  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib; A/W Module32NextW (CE is W-side)] */
BOOL WINAPI Module32Next(
 HANDLE hSnapshot,
 LPMODULEENTRY32 lpme
);

/* Process32First  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib; A/W Process32FirstW (CE is W-side)] */
BOOL WINAPI Process32First(
 HANDLE hSnapshot,
 LPPROCESSENTRY32 lppe
);

/* Process32Next  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib; A/W Process32NextW (CE is W-side)] */
BOOL WINAPI Process32Next(
 HANDLE hSnapshot,
 LPPROCESSENTRY32 lppe
);

/* Thread32First  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Thread32First(
 HANDLE hSnapshot,
 LPTHREADENTRY32 lpte
);

/* Thread32Next  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Thread32Next(
 HANDLE hSnapshot,
 LPTHREADENTRY32 lpte
);

/* Toolhelp32ReadProcessMemory  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Toolhelp.lib, toolhelp.lib] */
BOOL WINAPI Toolhelp32ReadProcessMemory(
 DWORD th32ProcessID,
 LPCVOID lpBaseAddress,
 LPVOID lpBuffer,
 DWORD cbRead,
 LPDWORD lpNumberOfBytesRead
);
#endif /* _WIN32_WCE */

#endif /* _TLHELP32_ */
