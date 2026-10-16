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
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
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
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* FW_RULE_MASKS  [enum; ce-only; CE 4.0..699] */
typedef enum _FW_RULE_MASKS {
 FWM_PRIVATE_HOST = 0x01,
 FWM_PUBLIC_HOST = 0x02,
 FWM_PORT = 0x04,
 FWM_TYPE = 0x08,
 FWM_CODE = 0x10,
 FWM_PROTOCOL = 0x20
 FWM_ACTION = 0x40,
 FWM_TIME_OF_DAY = 0x80,
 FWM_DAY_OF_WEEK = 0x100,
 FWM_DAY = 0x200,
 FWM_MONTH = 0x400,
 FWM_PUBLIC_HOST_MASK= 0x800,
 FWM_PUBLIC_HOST_PREFIX = 0x1000
} FW_RULE_MASKS;
#endif /* _WIN32_WCE */

#endif /* _RULES_ */
