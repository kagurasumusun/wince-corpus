/* commandapi.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _COMMANDAPI_HPP_
#define _COMMANDAPI_HPP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* PH_APPLICATION  [enum; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED__PH_APPLICATION
#define __WINCE_DEFINED__PH_APPLICATION
#ifndef __WINCE_DEFINED_PH_APPLICATION
#define __WINCE_DEFINED_PH_APPLICATION
typedef enum _PH_APPLICATION
{
 phaPhoneApp = 0,
 phaHomeScreenApp,
 phaSettingsApp,
 phaContactsApp,
 phaLast,
} PH_APPLICATION;
#endif /* __WINCE_DEFINED_PH_APPLICATION */
#endif /* __WINCE_DEFINED__PH_APPLICATION */
#ifndef __WINCE_DEFINED_PPH_APPLICATION
#define __WINCE_DEFINED_PPH_APPLICATION
typedef PH_APPLICATION *PPH_APPLICATION, *LPPH_APPLICATION;
#endif /* __WINCE_DEFINED_PPH_APPLICATION */

#endif /* _COMMANDAPI_HPP_ */
