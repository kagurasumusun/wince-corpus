/* Oal_memory.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_MEMORY_
#define _OAL_MEMORY_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALCAtoUA  [function; ce-only; CE 5.0..699] */
VOID* OALCAtoUA(
 VOID *ca
);

/* OALPAtoCA  [function; ce-only; CE 5.0..699] */
VOID* OALPAtoCA(
 UINT32 pa
);

/* OALPAtoUA  [function; ce-only; CE 5.0..699] */
VOID* OALPAtoUA(
 UINT32 pa
);

/* OALPAtoVA  [function; ce-only; CE 5.0..699] */
VOID* OALPAtoVA(
 UINT32 pa,
 BOOL cached
);

/* OALUAtoCA  [function; ce-only; CE 5.0..699] */
VOID* OALUAtoCA(
 VOID *ua
);

/* OALVAtoPA  [function; ce-only; CE 5.0..699] */
UINT32 OALVAtoPA(
 VOID *va
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct { UINT32 CA; UINT32 PA; UINT32 size;} OAL_ADDRESS_TABLE, *POAL_ADDRESS_TABLE;

#endif /* _OAL_MEMORY_ */
