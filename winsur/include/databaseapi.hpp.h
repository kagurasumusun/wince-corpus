/* databaseapi.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DATABASEAPI_HPP_
#define _DATABASEAPI_HPP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* PH_SPEEDDIAL_ENTRY  [struct; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED_TAGPH_SPEEDDIAL_ENTRY
#define __WINCE_DEFINED_TAGPH_SPEEDDIAL_ENTRY
#ifndef __WINCE_DEFINED_PH_SPEEDDIAL_ENTRY
#define __WINCE_DEFINED_PH_SPEEDDIAL_ENTRY
typedef struct tagPH_SPEEDDIAL_ENTRY
{
 DWORD StructSize;
 WCHAR pName[100];
 WCHAR pNumber[100];
} PH_SPEEDDIAL_ENTRY;
#endif /* __WINCE_DEFINED_PH_SPEEDDIAL_ENTRY */
#endif /* __WINCE_DEFINED_TAGPH_SPEEDDIAL_ENTRY */
#ifndef __WINCE_DEFINED_PPH_SPEEDDIAL_ENTRY
#define __WINCE_DEFINED_PPH_SPEEDDIAL_ENTRY
typedef PH_SPEEDDIAL_ENTRY *PPH_SPEEDDIAL_ENTRY, *LPPH_SPEEDDIAL_ENTRY;
#endif /* __WINCE_DEFINED_PPH_SPEEDDIAL_ENTRY */

#endif /* _DATABASEAPI_HPP_ */
