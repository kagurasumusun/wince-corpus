/* Natedit.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _NATEDIT_
#define _NATEDIT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* IPRcvBuf  [struct; ce-only; Coredll.dll] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IP_NAT_DIRECTION  [enum; ce-only; Coredll.dll] */
enum IP_NAT_DIRECTION {
 NatInboundDirection,
 NatOutboundDirection
};

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum IP_NAT_DIRECTION {NatInboundDirection,NatOutboundDirection};

#endif /* _NATEDIT_ */
