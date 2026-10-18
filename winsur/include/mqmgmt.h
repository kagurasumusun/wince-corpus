/* mqmgmt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 5 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MQMGMT_
#define _MQMGMT_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MQ_ERROR_ACCESS_DENIED 0xC00E0025
#define MQ_ERROR_ILLEGAL_FORMATNAME 0xC00E001E
#define MQ_ERROR_ILLEGAL_PROPERTY_VT 0xC00E0019
#define MQ_ERROR_SERVICE_NOT_AVAILABLE 0xC00E000B
#define MQ_INFORMATION_UNSUPPORTED_PROPERTY 0x400E0004

#endif /* _MQMGMT_ */
