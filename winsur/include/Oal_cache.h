/* Oal_cache.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OAL_CACHE_
#define _OAL_CACHE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OAL_CACHE_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct {
 UINT32 L1Flags;
 UINT32 L1ISetsPerWay;
 UINT32 L1INumWays;
 UINT32 L1ILineSize;
 UINT32 L1ISize;
 UINT32 L1DSetsPerWay;
 UINT32 L1DNumWays;
 UINT32 L1DLineSize;
 UINT32 L1DSize;
 UINT32 L2Flags;
 UINT32 L2ISetsPerWay;
 UINT32 L2INumWays;
 UINT32 L2ILineSize;
 UINT32 L2ISize;
 UINT32 L2DSetsPerWay;
 UINT32 L2DNumWays;
 UINT32 L2DLineSize;
 UINT32 L2DSize;
} OAL_CACHE_INFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALCacheGlobalsInit  [function; ce-only; CE 5.0..699] */
VOID OALCacheGlobalsInit();

/* OALCleanDCache  [function; ce-only; CE 5.0..699] */
VOID OALCleanDCache();

/* OALCleanDCacheLines  [function; ce-only; CE 5.0..699] */
VOID OALCleanDCacheLines(
 VOID *pAddress,
 UINT32 size
);

/* OALClearDTLB  [function; ce-only; CE 5.0..699] */
VOID OALClearDTLB();

/* OALClearDTLBEntry  [function; ce-only; CE 5.0..699] */
VOID OALClearDTLBEntry(
 VOID *pAddress
);

/* OALClearITLB  [function; ce-only; CE 5.0..699] */
VOID OALClearITLB();

/* OALClearITLBEntry  [function; ce-only; CE 5.0..699] */
VOID OALClearITLBEntry(
 VOID *pAddress
);

/* OALClearTLB  [function; ce-only; CE 5.0..699] */
VOID OALClearTLB();

/* OALClearTLBEntry  [function; ce-only; CE 5.0..699] */
VOID OALClearTLBEntry(
 VOID *pAddress
);

/* OALFlushDCache  [function; ce-only; CE 5.0..699] */
VOID OALFlushDCache();

/* OALFlushDCacheLines  [function; ce-only; CE 5.0..699] */
VOID OALFlushDCacheLines(
 VOID *pAddress,
 UINT32 size
);

/* OALFlushICache  [function; ce-only; CE 5.0..699] */
VOID OALFlushICache();

/* OALFlushICacheLines  [function; ce-only; CE 5.0..699] */
VOID OALFlushICacheLines(
 VOID *pAddress,
 UINT32 size
);

/* OALIoCtlHalGetCacheInfo  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetCacheInfo(
 UINT32 code,
 VOID *pInBuffer,
 UINT32 inpSize,
 VOID *pOutBuffer,
 UINT32 outSize,
 UINT32 *pOutSize
);
#endif /* _WIN32_WCE */

#endif /* _OAL_CACHE_ */
