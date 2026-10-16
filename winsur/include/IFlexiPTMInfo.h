/* IFlexiPTMInfo.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _IFLEXIPTMINFO_
#define _IFLEXIPTMINFO_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetDescriptionTables2( [out, size_is(, *pcProcField)] PTM_FIELD_DESC** ppfdProcDescTable, [out] DWORD* pcProcField, [out, size_is(, *pcThreadField)] PTM_FIELD_DESC** ppfdThreadDescTable, [out] DWORD* pcThreadField, [out, size_is(, *pcModField)] PTM_FIELD_DESC** ppfdModDescTable, [out] DWORD* pcModField, [out, size_is(, *pcCtxField)] PTM_FIELD_DESC **ppfdCtxDescTable, [out] DWORD *pcCtxField );

#endif /* _IFLEXIPTMINFO_ */
