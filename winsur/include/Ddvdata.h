/* Ddvdata.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _DDVDATA_
#define _DDVDATA_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _structDVD_AUDIO_MU_ATTR {UINT8atr1[8];struct {UINT8alpha;UINT8beta;}atr2[8];} DVD_AUDIO_MU_ATTR, *PDVD_AUDIO_MU_ATTR;

#endif /* _DDVDATA_ */
