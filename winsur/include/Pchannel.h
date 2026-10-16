/* Pchannel.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _PCHANNEL_
#define _PCHANNEL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagCHANNEL_PDU_HEADER {UINT32length; UINT32flags; } CHANNEL_PDU_HEADER, *PCHANNEL_PDU_HEADER;
typedef struct tagCHANNEL_DEF {charname[CHANNEL_NAME_LEN + 1];ULONGoptions;} CHANNEL_DEF, *PCHANNEL_DEF, **PPCHANNEL_DEF;

#endif /* _PCHANNEL_ */
