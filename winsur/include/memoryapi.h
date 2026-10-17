/* memoryapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MEMORYAPI_
#define _MEMORYAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define PAGE_EXECUTE_READ 0x20
#define PAGE_EXECUTE_READWRITE 0x40
#define PAGE_EXECUTE_WRITECOPY 0x80
#define PAGE_READONLY 0x02
#define PAGE_READWRITE 0x04
#define PAGE_WRITECOPY 0x08
#define SEC_COMMIT 0x8000000
#define SEC_IMAGE 0x1000000
#define SEC_IMAGE_NO_EXECUTE 0x11000000
#define SEC_LARGE_PAGES 0x80000000
#define SEC_NOCACHE 0x10000000
#define SEC_RESERVE 0x4000000
#define SEC_WRITECOMBINE 0x40000000

#endif /* _MEMORYAPI_ */
