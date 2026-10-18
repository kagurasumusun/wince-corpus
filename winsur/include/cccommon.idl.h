/* cccommon.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 2 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CCCOMMON_IDL_
#define _CCCOMMON_IDL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FileVerifyInfo  [struct; ce-only] */

/* FileVerifyReference  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* FileCustomAction  [enum; ce-only] */
#ifndef __WINCE_DEFINED_TAGFILECUSTOMACTION
#define __WINCE_DEFINED_TAGFILECUSTOMACTION
#ifndef __WINCE_DEFINED_FILECUSTOMACTION
#define __WINCE_DEFINED_FILECUSTOMACTION
#ifndef __WINCE_DEFINED_FILEACTION
#define __WINCE_DEFINED_FILEACTION
typedef enum tagFileCustomAction{
 FileCustomAction_None = 0x0000,
 FileCustomAction_COM = 0x0001,
} FileAction;
#endif /* __WINCE_DEFINED_FILEACTION */
#endif /* __WINCE_DEFINED_FILECUSTOMACTION */
#endif /* __WINCE_DEFINED_TAGFILECUSTOMACTION */

/* FileInfo  [struct; ce-only; coredll.lib] */
#ifndef __WINCE_DEFINED_TAGFILEINFO
#define __WINCE_DEFINED_TAGFILEINFO
#ifndef __WINCE_DEFINED_FILEINFO
#define __WINCE_DEFINED_FILEINFO
typedef struct tagFileInfo{
 LONG m_FileAttribues;
 LONGLONG m_FileSize;
 FILETIME m_CreationTime;
 FILETIME m_LastAccessTime;
 FILETIME m_LastWriteTime;
} FileInfo;
#endif /* __WINCE_DEFINED_FILEINFO */
#endif /* __WINCE_DEFINED_TAGFILEINFO */
#ifndef __WINCE_DEFINED_PFILEINFO
#define __WINCE_DEFINED_PFILEINFO
typedef FileInfo *PFileInfo, *LPFileInfo;
#endif /* __WINCE_DEFINED_PFILEINFO */

/* FileVerifyResult  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGFILEVERIFYRESULT
#define __WINCE_DEFINED_TAGFILEVERIFYRESULT
#ifndef __WINCE_DEFINED_FILEVERIFYRESULT
#define __WINCE_DEFINED_FILEVERIFYRESULT
typedef struct tagFileVerifyResult{
 DWORD m_Version;
 FileVerifyInfo _Info;
} FileVerifyResult;
#endif /* __WINCE_DEFINED_FILEVERIFYRESULT */
#endif /* __WINCE_DEFINED_TAGFILEVERIFYRESULT */
#ifndef __WINCE_DEFINED_PFILEVERIFYRESULT
#define __WINCE_DEFINED_PFILEVERIFYRESULT
typedef FileVerifyResult *PFileVerifyResult, *LPFileVerifyResult;
#endif /* __WINCE_DEFINED_PFILEVERIFYRESULT */

/* FileVerifyVersion  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGFILEVERIFYVERSION
#define __WINCE_DEFINED_TAGFILEVERIFYVERSION
#ifndef __WINCE_DEFINED_FILEVERIFYVERSION
#define __WINCE_DEFINED_FILEVERIFYVERSION
typedef struct tagFileVerifyVersion{
 DWORD m_Major;
 DWORD m_Minor;
 DWORD m_Build;
 DWORD m_Revision;
} FileVerifyVersion;
#endif /* __WINCE_DEFINED_FILEVERIFYVERSION */
#endif /* __WINCE_DEFINED_TAGFILEVERIFYVERSION */
#ifndef __WINCE_DEFINED_PFILEVERIFYVERSION
#define __WINCE_DEFINED_PFILEVERIFYVERSION
typedef FileVerifyVersion *PFileVerifyVersion, *LPFileVerifyVersion;
#endif /* __WINCE_DEFINED_PFILEVERIFYVERSION */

/* SystemInfo  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGPLATFORMINFO
#define __WINCE_DEFINED_TAGPLATFORMINFO
#ifndef __WINCE_DEFINED_SYSTEMINFO
#define __WINCE_DEFINED_SYSTEMINFO
typedef struct tagPlatformInfo{
 DWORD m_OSMajor;
 DWORD m_OSMinor;
 DWORD m_BuildNo;
 DWORD m_ProcessorArchitecture;
 DWORD m_InstructionSet;
} SystemInfo;
#endif /* __WINCE_DEFINED_SYSTEMINFO */
#endif /* __WINCE_DEFINED_TAGPLATFORMINFO */
#ifndef __WINCE_DEFINED_PSYSTEMINFO
#define __WINCE_DEFINED_PSYSTEMINFO
typedef SystemInfo *PSystemInfo, *LPSystemInfo;
#endif /* __WINCE_DEFINED_PSYSTEMINFO */

#endif /* _CCCOMMON_IDL_ */
