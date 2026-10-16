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

/* ListView_GetNumberOfWorkAreas  [macro, function; shared] */
#define ListView_GetNumberOfWorkAreas(hwnd, pnWorkAreas) \
 (BOOL)SNDMSG((hwnd), LVM_GETNUMBEROFWORKAREAS, 0, \
 (LPARAM)(UINT *)(pnWorkAreas))

/* ListView_GetWorkAreas  [macro, function; shared] */
#define ListView_GetWorkAreas(hwnd, nWorkAreas, prc) \
 (BOOL)SNDMSG((hwnd), LVM_GETWORKAREAS, (WPARAM)(int)nWorkAreas, \
 (LPARAM)(RECT FAR*)(prc))

/* ListView_SetWorkAreas  [macro, function; shared] */
#define ListView_SetWorkAreas(hwnd, nWorkAreas, prc) \
 (BOOL)SNDMSG((hwnd), LVM_SETWORKAREAS, (WPARAM)(int)nWorkAreas, \
 (LPARAM)(RECT FAR*)(prc))

#endif /* _PCOMMCTRL_ */
