/* Newmenu.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _NEWMENU_
#define _NEWMENU_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NMNEWMENU  [struct; ce-only; CE 5.0..699] */
typedef struct tagNMNEWMENU {
 NMHDR hdr;
 TCHAR szReg[80];
 HMENU hMenu;
 CLSID clsid;
 IpropertyBag ** pppropbag;
} NMNEWMENU, * PNMNEWMENU;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagNMNEWMENU { NMHDR hdr; TCHAR szReg[80]; HMENU hMenu; CLSID clsid; IpropertyBag ** pppropbag;} NMNEWMENU, * PNMNEWMENU;

#endif /* _NEWMENU_ */
