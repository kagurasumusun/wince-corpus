/* Fsioctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FSIOCTL_
#define _FSIOCTL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FSCTL_GET_COMPRESSION CTL_CODE(FILE_DEVICE_FILE_SYSTEM,15,METHOD_BUFFERED,FILE_ANY_ACCESS)
#define FSCTL_SET_COMPRESSION CTL_CODE(FILE_DEVICE_FILE_SYSTEM,16,METHOD_BUFFERED,FILE_READ_DATA|FILE_WRITE_DATA)
#define FSCTL_SET_SPARSE CTL_CODE(FILE_DEVICE_FILE_SYSTEM,

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CE_REGISTRY_INFO  [struct; ce-only] */
typedef struct _CE_REGISTRY_INFO{
 DWORD cbSize;
 HKEY hRootKey;
 DWORD dwFlags;
 TCHAR *pszFullKeyName;
 LPDWORD pdwKeyNameLen;
} CE_REGISTRY_INFO, *PCE_REGISTRY_INFO;

/* FILE_ALLOCATED_RANGE_BUFFER  [struct; shared] */
typedef struct _FILE_ALLOCATED_RANGE_BUFFER{
 LARGE_INTEGER FileOffset;
 LARGE_INTEGER Length;
} FILE_ALLOCATED_RANGE_BUFFER, *PFILE_ALLOCATED_RANGE_BUFFER;

/* FILE_ZERO_DATA_INFORMATION  [struct; shared] */
typedef struct _FILE_ZERO_DATA_INFORMATION{
 LARGE_INTEGER FileOffset;
 LARGE_INTEGER BeyondFinalZero;
} FILE_ZERO_DATA_INFORMATION, *PFILE_ZERO_DATA_INFORMATION;

#endif /* _FSIOCTL_ */
