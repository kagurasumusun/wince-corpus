/* schannel.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SCHANNEL_
#define _SCHANNEL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define AUTHTYPE_CLIENT 1
#define AUTHTYPE_SERVER 2
#define SCHANNEL_CRED_VERSION 4
#define SCHANNEL_SHUTDOWN 1
#define SP_PROT_PCT1 (SP_PROT_PCT1_CLIENT|SP_PROT_PCT1_SERVER)
#define SP_PROT_SSL2 (SP_PROT_SSL2_CLIENT|SP_PROT_SSL2_SERVER)
#define SP_PROT_SSL3 (SP_PROT_SSL3_CLIENT|SP_PROT_SSL3_SERVER)
#define SP_PROT_TLS1 (SP_PROT_TLS1_CLIENT|SP_PROT_TLS1_SERVER)

#endif /* _SCHANNEL_ */
