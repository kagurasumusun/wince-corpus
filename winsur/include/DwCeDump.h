/* DwCeDump.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 1 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _DWCEDUMP_
#define _DWCEDUMP_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* _CEDUMP_SYSTEM_INFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* _MINIDUMP_STREAM_TYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED__MINIDUMP_STREAM_TYPE
#define __WINCE_DEFINED__MINIDUMP_STREAM_TYPE
#ifndef __WINCE_DEFINED_MINIDUMP_STREAM_TYPE
#define __WINCE_DEFINED_MINIDUMP_STREAM_TYPE
typedef enum _MINIDUMP_STREAM_TYPE {
 UnusedStream = 0,
 ceStreamNull = 0x8000,
 ceStreamSystemInfo = 0x8001,
 ceStreamException = 0x8002,
 ceStreamModuleList = 0x8003,
 ceStreamProcessList = 0x8004,
 ceStreamThreadList = 0x8005,
 ceStreamThreadContextList = 0x8006,
 ceStreamThreadCallStackList = 0x8007,
 ceStreamMemoryVirtualList = 0x8008,
 ceStreamMemoryPhysicalList = 0x8009,
 ceStreamBucketParameters = 0x800A,
 LastReservedStream = 0xffff
} MINIDUMP_STREAM_TYPE;
#endif /* __WINCE_DEFINED_MINIDUMP_STREAM_TYPE */
#endif /* __WINCE_DEFINED__MINIDUMP_STREAM_TYPE */

#endif /* _DWCEDUMP_ */
