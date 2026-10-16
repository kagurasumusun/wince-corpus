/* Fsdmgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 80 declarations, 1 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _FSDMGR_
#define _FSDMGR_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FDI_CHS_UNCERTAIN 0x00000002
#define FDI_MBR 0x00000001
#define FDI_PAGEABLE 0x00000008
#define FDI_READONLY 0x00000010
#define FDI_RESERVED 0xffffffe0
#define FDI_UNFORMATTED 0x00000004
#define FSD_FLAG_LOCKFILE_SUPPORTED 0x8
#define FSD_FLAG_NETWORK 0x10
#define FSD_FLAG_TRANSACT_WRITES 0x2
#define FSD_FLAG_TRANSACTION_SAFE 0x1
#define FSD_FLAG_WFSC_SUPPORTED 0x4

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* FSD_VOLUME_INFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* CachedRead  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD CachedRead(
 DWORD dwCacheId, 
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwReadFlags
);

/* CachedWrite  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD CachedWrite(
 DWORD dwCacheId, 
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwWriteFlags
);

/* CreateCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD CreateCache(
 HANDLE hDsk, 
 DWORD dwStart,
 DWORD dwEnd,
 DWORD dwCacheSize,
 DWORD dwBlockSize,
 DWORD dwCreateFlags
);

/* DeleteCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD DeleteCache(
 DWORD dwCacheId 
);

/* ResizeCache  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
DWORD ResizeCache(
 DWORD dwCacheId, 
 DWORD dwSize,
 DWORD dwResizeFlags
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* FSDMGR_CachedRead  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_CachedRead(
 DWORD dwCacheId,
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwReadFlags
);

/* FSDMGR_CachedWrite  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_CachedWrite(
 DWORD dwCacheId,
 DWORD dwBlockNum,
 DWORD dwNumBlocks,
 PVOID pBuffer,
 DWORD dwWriteFlags
);

/* FSDMGR_DeleteCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_DeleteCache(
 DWORD dwCacheId
);

/* FSDMGR_ResizeCache  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
DWORD FSDMGR_ResizeCache(
 DWORD dwCacheId,
 DWORD dwSize,
 DWORD dwResizeFlags
);
#endif /* _WIN32_WCE */

#endif /* _FSDMGR_ */
