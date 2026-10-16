/* Replfilt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 2 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _REPLFILT_
#define _REPLFILT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 0x200) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 1.0..199, 3.0..399, 5.0..599 */

/* IPegasusFileFilter  [interface; ce-only; CE 1.0..199, 3.0..399, 5.0..599; Coredll.lib] */

/* IPegasusFileFilterSite  [interface; ce-only; CE 1.0..199, 3.0..399, 5.0..599; Coredll.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CFF_CONVERTINFO  [struct; ce-only] */
typedef struct tagCFF_CONVERTINFO {
 BOOL bImport;
 HWND hwndParent;
 BOOL bYesToAll;
 ICeFileFilterSite* pffs;
} CFF_CONVERTINFO;

/* CFF_CONVERTOPTIONS  [struct; ce-only] */
typedef struct tagCFF_CONVERTOPTIONS {
 ULONG cbSize;
 BOOL bNoModalUI;
} CFF_CONVERTOPTIONS;

/* CFF_DESTINATIONFILE  [struct; ce-only] */
typedef struct tagCFF_DESTINATIONFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_FNAME];
} CFF_DESTINATIONFILE;

/* CFF_SOURCEFILE  [struct; ce-only] */
typedef struct tagCFF_SOURCEFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_EXT];
 DWORD cbSize;
 FILETIME ftCreated;
 FILETIME ftModified;
} CFF_SOURCEFILE;

/* PFF_CONVERTINFO  [struct; ce-only] */
typedef struct tagPFF_CONVERTINFO {
 BOOL bImport;
 HWND hwndParent;
 BOOL bYesToAll;
 IPegasusFileFilterSite* pffs;
} PFF_CONVERTINFO;

/* PFF_DESTINATIONFILE  [struct; ce-only] */
typedef struct tagPFF_DESTINATIONFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_EXT];
} PFF_DESTINATIONFILE;

/* PFF_SOURCEFILE  [struct; ce-only] */
typedef struct tagPFF_SOURCEFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_EXT];
 DWORD cbSize;
 FILETIME ftCreated;
 FILETIME ftModified;
} PFF_SOURCEFILE;

#endif /* _REPLFILT_ */
