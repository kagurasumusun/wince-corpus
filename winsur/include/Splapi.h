/* Splapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SPLAPI_
#define _SPLAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SPL_LIMIT_ADD 0x35
#define SPL_LIMIT_ADD_DOUBLE_CONSONANT 0x14
#define SPL_LIMIT_ADD_DOUBLE_VOWEL 0x16
#define SPL_LIMIT_CAPITAL 0x1
#define SPL_LIMIT_DROP 0x31
#define SPL_LIMIT_DROP_DOUBLE_CONSONANT 0x14
#define SPL_LIMIT_DROP_DOUBLE_VOWEL 0x16
#define SPL_LIMIT_NONE 0x0
#define SPL_LIMIT_SUBSTITUTE 0x43
#define SPL_LIMIT_SUBSTITUTE_CONSONANT 0x41
#define SPL_LIMIT_SUBSTITUTE_VOWEL 0x21
#define SPL_LIMIT_TRANSPOSE 0x19
#define SPL_LIMIT_TRANSPOSE_CONSONANT 0x18
#define SPL_LIMIT_TRANSPOSE_VOWEL 0x15

#endif /* _SPLAPI_ */
