/* Oal_intr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 20 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OAL_INTR_
#define _OAL_INTR_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BSPIntrActiveIrq  [function; ce-only; CE 5.0..699] */
UINT32 BSPIntrActiveIrq(
 UINT32 irq
);

/* BSPIntrDisableIrq  [function; ce-only; CE 5.0..699] */
UINT32 BSPIntrDisableIrq(
 UINT32 irq
);

/* BSPIntrDoneIrq  [function; ce-only; CE 5.0..699] */
UINT32 BSPIntrDoneIrq(
 UINT32 irq
);

/* BSPIntrEnableIrq  [function; ce-only; CE 5.0..699] */
UINT32 BSPIntrEnableIrq(
 UINT32 irq
);

/* BSPIntrInit  [function; ce-only; CE 5.0..699] */
BOOL BSPIntrInit();

/* BSPIntrRequestIrqs  [function; ce-only; CE 5.0..699] */
BOOL BSPIntrRequestIrqs(
 DEVICE_LOCATION *pDevLoc,
 UINT32 *pCount,
 UINT32 *pIrqs
);

/* OALIntrDisableIrqs  [function; ce-only; CE 5.0..699] */
VOID OALIntrDisableIrqs(
 UINT32 count,
 const UINT32 *pIrqs
);

/* OALIntrDoneIrqs  [function; ce-only; CE 5.0..699] */
VOID OALIntrDoneIrqs(
 UINT32 count,
 const UINT32 *pIrqs
);

/* OALIntrEnableIrqs  [function; ce-only; CE 5.0..699] */
BOOL OALIntrEnableIrqs(
 UINT32 count,
 const UINT32 *pIrqs
);

/* OALIntrInit  [function; ce-only; CE 5.0..699] */
BOOL OALIntrInit();

/* OALIntrMapInit  [function; ce-only; CE 5.0..699] */
VOID OALIntrMapInit();

/* OALIntrReleaseSysIntr  [function; ce-only; CE 5.0..699] */
BOOL OALIntrReleaseSysIntr(
 UINT32 sysIntr
);

/* OALIntrRequestIrqs  [function; ce-only; CE 5.0..699] */
BOOL OALIntrRequestIrqs(
 DEVICE_LOCATION *pDevLoc,
 UINT32 *pCount,
 UINT32 *pIrqs
);

/* OALIntrRequestSysIntr  [function; ce-only; CE 5.0..699] */
UINT32 OALIntrRequestSysIntr(
 UINT32 count,
 const UINT32 *pIrqs,
 UINT32 flags
);

/* OALIntrStaticTranslate  [function; ce-only; CE 5.0..699] */
VOID OALIntrStaticTranslate(
 UINT32 sysIntr,
 UINT32 irq
);

/* OALIntrTranslateIrq  [function; ce-only; CE 5.0..699] */
UINT32 OALIntrTranslateIrq(
 UINT32 irq
);

/* OALIntrTranslateSysIntr  [function; ce-only; CE 5.0..699] */
BOOL OALIntrTranslateSysIntr(
 UINT32 sysIntr,
 UINT32 *pCount,
 const UINT32 **ppIrqs
);

/* OALIoCtlHalReleaseSysIntr  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalReleaseSysIntr(
 UINT32 dwIoControlCode,
 VOID *lpInBuf,
 UINT32 nInBufSize,
 VOID *lpOutBuf,
 UINT32 nOutBufSize,
 UINT32 *lpBytesReturned
);

/* OALIoCtlHalRequestIrq  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalRequestIrq(
 UINT32 dwIoControlCode,
 VOID *lpInBuf,
 UINT32 nInBufSize,
 VOID *lpOutBuf,
 UINT32 nOutBufSize,
 UINT32 *lpBytesReturned
);

/* OALIoCtlHalRequestSysIntr  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalRequestSysIntr(
 UINT32 dwIoControlCode,
 VOID *lpInBuf,
 UINT32 nInBufSize,
 VOID *lpOutBuf,
 UINT32 nOutBufSize,
 UINT32 *lpBytesReturned
);
#endif /* _WIN32_WCE */

#endif /* _OAL_INTR_ */
