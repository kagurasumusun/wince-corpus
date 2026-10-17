/* dde.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DDE_
#define _DDE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WM_DDE_ACK 0x03E4
#define WM_DDE_ADVISE 0x03E2
#define WM_DDE_DATA 0x03E05
#define WM_DDE_EXECUTE 0x03E8
#define WM_DDE_FIRST 0x03E0
#define WM_DDE_INITIATE 0x03E0
#define WM_DDE_LAST (WM_DDE_FIRST+8)
#define WM_DDE_POKE 0x03E7
#define WM_DDE_REQUEST 0x03E6
#define WM_DDE_TERMINATE 0x03E1
#define WM_DDE_UNADVISE 0x03E3

#endif /* _DDE_ */
