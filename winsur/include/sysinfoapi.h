/* sysinfoapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _SYSINFOAPI_
#define _SYSINFOAPI_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _SYSTEM_INFO {union {DWORD dwOemId;struct { WORD wProcessorArchitecture; WORD wReserved; };};DWORD dwPageSize;LPVOID lpMinimumApplicationAddress;LPVOID lpMaximumApplicationAddress;DWORD dwActiveProcessorMask;DWORD dwNumberOfProcessors;DWORD dwProcessorType;DWORD dwAllocationGranularity;WORD wProcessorLevel;WORD wProcessorRevision;} SYSTEM_INFO, *LPSYSTEM_INFO;
typedef struct _SYSTEM_INFO { union { DWORD dwOemId; struct { WORD wProcessorArchitecture; WORD wReserved; };

#endif /* _SYSINFOAPI_ */
