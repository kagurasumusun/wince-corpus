/* Lt2pcfg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _LT2PCFG_
#define _LT2PCFG_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define L2TP_IPSEC_AUTH_PRESHAREDKEY 0x2
#define L2TP_IPSEC_AUTH_SIGNATURE 0x1
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* L2TP_CONFIG_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _L2TP_CONFIG_DATA{
 DWORD dwVersion;
 DWORD dwAuthType;
 DWORD dwFlags; 
 DWORD cbKey;
 DWORD dwOffsetKey;
 DWORD cMyCerts;
 DWORD cRootCerts;
 DWORD dwOffsetCertHashes;
} L2TP_CONFIG_DATA, *PL2TP_CONFIG_DATA;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _L2TP_CONFIG_DATA{ DWORDdwVersion;DWORDdwAuthType;DWORDdwFlags;DWORDcbKey;DWORDdwOffsetKey;DWORDcMyCerts;DWORDcRootCerts;DWORDdwOffsetCertHashes;} L2TP_CONFIG_DATA, *PL2TP_CONFIG_DATA;

#endif /* _LT2PCFG_ */
