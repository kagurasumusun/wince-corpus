/* Ipexport.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 2 declarations, 1 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _IPEXPORT_
#define _IPEXPORT_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ANY_SIZE 1
#define IP_ADDR_DELETED (IP_STATUS_BASE
#define IP_MTU_CHANGE (IP_STATUS_BASE
#define IP_OPT_ROUTER_ALERT 0x94
#define IP_PENDING (IP_STATUS_BASE
#define IP_SPEC_MTU_CHANGE (IP_STATUS_BASE
#define IP_STATUS_BASE 11000
#define IP_UNLOAD (IP_STATUS_BASE
#define MAX_ADAPTER_NAME 128
#define MAX_IP_STATUS IP_GENERAL_FAILURE
#define MAX_OPT_SIZE 40

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IP_UNIDIRECTIONAL_ADAPTER_ADDRESS  [struct; shared] */
typedef struct _IP_UNIDIRECTIONAL_ADAPTER_ADDRESS {
 ULONG NumAdapters;
 IPAddr Address[1];
} IP_UNIDIRECTIONAL_ADAPTER_ADDRESS*, PIP_UNIDIRECTIONAL_ADAPTER_ADDRESS;

/* IP_ADAPTER_INDEX_MAP  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   Index */
/*   Name */

#endif /* _IPEXPORT_ */
