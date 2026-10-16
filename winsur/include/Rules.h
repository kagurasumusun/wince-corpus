/* Rules.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _RULES_
#define _RULES_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FWM_ACTION 0x40
#define FWM_CODE 0x10
#define FWM_DAY 0x200
#define FWM_DAY_OF_WEEK 0x100
#define FWM_MONTH 0x400
#define FWM_PORT 0x04
#define FWM_PRIVATE_HOST 0x01
#define FWM_PROTOCOL 0x20
#define FWM_PUBLIC_HOST 0x02
#define FWM_PUBLIC_HOST_MASK 0x800
#define FWM_PUBLIC_HOST_PREFIX 0x1000
#define FWM_TIME_OF_DAY 0x80
#define FWM_TYPE 0x08

#endif /* _RULES_ */
