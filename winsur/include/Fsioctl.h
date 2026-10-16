/* Fsioctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 1 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _FSIOCTL_
#define _FSIOCTL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FILE_COPY_EXTERNAL  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _CE_REGISTRY_INFO{DWORD cbSize;HKEY hRootKey; DWORD dwFlags; TCHAR *pszFullKeyName; LPDWORD pdwKeyNameLen;} CE_REGISTRY_INFO, *PCE_REGISTRY_INFO;
typedef struct _FILE_ALLOCATED_RANGE_BUFFER{LARGE_INTEGER FileOffset;LARGE_INTEGER Length;} FILE_ALLOCATED_RANGE_BUFFER, *PFILE_ALLOCATED_RANGE_BUFFER;
typedef struct _FILE_COPY_EXTERNAL {DWORDcbSize;DWORDdwDirection;PVOIDpUserData; DWORDcbUserDataSize;TCHARszCancelEventName[MAX_PATH];} FILE_COPY_EXTERNAL, *PFILE_COPY_EXTERNAL;
typedef struct _FILE_ZERO_DATA_INFORMATION{LARGE_INTEGER FileOffset;LARGE_INTEGER BeyondFinalZero;} FILE_ZERO_DATA_INFORMATION, *PFILE_ZERO_DATA_INFORMATION;

#endif /* _FSIOCTL_ */
