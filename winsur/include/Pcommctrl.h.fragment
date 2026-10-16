/* Pcommctrl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PCOMMCTRL_
#define _PCOMMCTRL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ListView_GetNumberOfWorkAreas  [macro, function; shared; CE 5.0..699] */
#define ListView_GetNumberOfWorkAreas(hwnd, pnWorkAreas) \
 (BOOL)SNDMSG((hwnd), LVM_GETNUMBEROFWORKAREAS, 0, \
 (LPARAM)(UINT *)(pnWorkAreas))

/* ListView_GetWorkAreas  [macro, function; shared; CE 5.0..699] */
#define ListView_GetWorkAreas(hwnd, nWorkAreas, prc) \
 (BOOL)SNDMSG((hwnd), LVM_GETWORKAREAS, (WPARAM)(int)nWorkAreas, \
 (LPARAM)(RECT FAR*)(prc))

/* ListView_SetWorkAreas  [macro, function; shared; CE 5.0..699] */
#define ListView_SetWorkAreas(hwnd, nWorkAreas, prc) \
 (BOOL)SNDMSG((hwnd), LVM_SETWORKAREAS, (WPARAM)(int)nWorkAreas, \
 (LPARAM)(RECT FAR*)(prc))
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DPA  [struct; ce-only; CE 4.0..699] */
typedef struct _DPA {
 int cp;
 void FAR* FAR* pp;
 HANDLE hheap;
 int cpAlloc;
 int cpGrow;
} DPA;
#endif /* _WIN32_WCE */

#endif /* _PCOMMCTRL_ */
