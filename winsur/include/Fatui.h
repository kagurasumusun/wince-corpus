/* Fatui.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _FATUI_
#define _FATUI_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* UIPARAM  [struct; ce-only] */
#ifndef __WINCE_DEFINED__UIPARAM
#define __WINCE_DEFINED__UIPARAM
struct _UIPARAM {
DWORD dwType,
DWORD dwValue };
#endif /* __WINCE_DEFINED__UIPARAM */

/* FATUIDATA  [struct; ce-only] */
#ifndef __WINCE_DEFINED__FATUIDATA
#define __WINCE_DEFINED__FATUIDATA
struct _FATUIDATA {
DWORD dwSize;
DWORD dwFlags;
DWORD idsEvent;
DWORD idsEventCaption;
DWORD cuiParams;
UIPARAM auiParams[4]; };
typedef struct _FATUIDATA FATUIDATA, *PFATUIDATA;
#endif /* __WINCE_DEFINED__FATUIDATA */

/* dwValue  [extra struct] */
#ifndef __WINCE_DEFINED__UIPARAM
#define __WINCE_DEFINED__UIPARAM
struct _UIPARAM { DWORD dwType, DWORD dwValue };
#endif /* __WINCE_DEFINED__UIPARAM */

#endif /* _FATUI_ */
