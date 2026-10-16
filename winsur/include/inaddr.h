/* inaddr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _INADDR_
#define _INADDR_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct in_addr {union {struct { u_char s_b1,s_b2,s_b3,s_b4; } S_un_b;struct { u_short s_w1,s_w2; } S_un_w;u_long S_addr;} S_un;};

#endif /* _INADDR_ */
