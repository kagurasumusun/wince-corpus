/* Sockserv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 15 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SOCKSERV_
#define _SOCKSERV_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MEM_CAP_16BIT 0x0010
#define MEM_CAP_8BIT 0x0008
#define MEM_CAP_BASE_ALIGN 0x0020
#define MEM_CAP_ENABLE_WIN 0x0004
#define MEM_CAP_OFF_ALIGN 0x0080
#define MEM_CAP_PAGING_EN 0x0400
#define MEM_CAP_PAGING_HW 0x0100
#define MEM_CAP_PAGING_SH 0x0200
#define MEM_CAP_PRG_BASE 0x0001
#define MEM_CAP_PRG_SIZE 0x0002
#define MEM_CAP_WRITE_PROT 0x0800
#define WIN_CAP_ATTRIBUTE 0x02
#define WIN_CAP_COMMON 0x01
#define WIN_CAP_IO 0x04
#define WIN_CAP_WAIT 0x80

#endif /* _SOCKSERV_ */
