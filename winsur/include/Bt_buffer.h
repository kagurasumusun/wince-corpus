/* Bt_buffer.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _BT_BUFFER_
#define _BT_BUFFER_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct BD_BUFFER {int cSize;int cStart;int cEnd;BD_BUFFER_FREE pFree;int fMustCopy;unsigned char* pBuffer;};

#endif /* _BT_BUFFER_ */
