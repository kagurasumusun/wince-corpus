/* Oal_io.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 31 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OAL_IO_
#define _OAL_IO_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CLRPORT16  [macro; ce-only; CE 5.0..699] */

/* CLRPORT32  [macro; ce-only; CE 5.0..699] */

/* CLRPORT8  [macro; ce-only; CE 5.0..699] */

/* CLRREG16  [macro; ce-only; CE 5.0..699] */

/* CLRREG32  [macro; ce-only; CE 5.0..699] */

/* CLRREG8  [macro; ce-only; CE 5.0..699] */

/* INPORT16  [macro; ce-only; CE 5.0..699] */

/* INPORT32  [macro; ce-only; CE 5.0..699] */

/* INPORT8  [macro; ce-only; CE 5.0..699] */

/* INREG16  [macro; ce-only; CE 5.0..699] */

/* INREG32  [macro; ce-only; CE 5.0..699] */

/* INREG8  [macro; ce-only; CE 5.0..699] */

/* MASKPORT16  [macro; ce-only; CE 5.0..699] */

/* MASKPORT32  [macro; ce-only; CE 5.0..699] */

/* MASKPORT8  [macro; ce-only; CE 5.0..699] */

/* MASKREG16  [macro; ce-only; CE 5.0..699] */

/* MASKREG32  [macro; ce-only; CE 5.0..699] */

/* MASKREG8  [macro; ce-only; CE 5.0..699] */

/* OAL_DDK_PARAMS  [struct; ce-only; CE 5.0..699] */

/* OUTPORT16  [macro; ce-only; CE 5.0..699] */

/* OUTPORT32  [macro; ce-only; CE 5.0..699] */

/* OUTPORT8  [macro; ce-only; CE 5.0..699] */

/* OUTREG16  [macro; ce-only; CE 5.0..699] */

/* OUTREG32  [macro; ce-only; CE 5.0..699] */

/* OUTREG8  [macro; ce-only; CE 5.0..699] */

/* SETPORT16  [macro; ce-only; CE 5.0..699] */

/* SETPORT32  [macro; ce-only; CE 5.0..699] */

/* SETPORT8  [macro; ce-only; CE 5.0..699] */

/* SETREG16  [macro; ce-only; CE 5.0..699] */

/* SETREG32  [macro; ce-only; CE 5.0..699] */

/* SETREG8  [macro; ce-only; CE 5.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALIoCtlHalDdkCall  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalDdkCall(
 UINT32 dwIoControlCode,
 VOID *lpInBuf,
 UINT32 nInBufSize,
 VOID *lpOutBuf,
 UINT32 nOutBufSize,
 UINT32 *lpBytesReturned
);

/* OALIoReadBusData  [function; ce-only; CE 5.0..699] */
UINT32 OALIoReadBusData(
 DEVICE_LOCATION *pDevLoc,
 UINT32 address,
 UINT32 size,
 VOID *pData
);

/* OALIoWriteBusData  [function; ce-only; CE 5.0..699] */
UINT32 OALIoWriteBusData(
 DEVICE_LOCATION *pDevLoc,
 UINT32 address,
 UINT32 size,
 VOID *pData
);
#endif /* _WIN32_WCE */

#endif /* _OAL_IO_ */
