/* Serhw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 35 declarations, 2 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SERHW_
#define _SERHW_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* HW_VTBL  [struct; ce-only] */

/* HWOBJ  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 2.11..2.12, 3.0..399 */

/* HWGetBytes  [function; ce-only; CE 2.11..2.12, 3.0..399] */
ULONG HWGetBytes( 
PVOID pContext, 
PUCHAR pTargetBuffer, 
PULONG pByteNumber );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 2.11..2.12, 3.0..699 */

/* HWClearBreak  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWClearBreak(
 PVOID pContext 
);

/* HWClearDTR  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWClearDTR(
 PVOID pContext 
);

/* HWClearRTS  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWClearRTS(
 PVOID pContext 
);

/* HWClose  [function; ce-only; CE 2.11..2.12, 3.0..699] */
ULONG HWClose(
 PVOID pContext 
);

/* HWDeinit  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWDeinit(
 PVOID pContext 
);

/* HWDisableIR  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWDisableIR(
 PVOID pContext 
);

/* HWEnableIR  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWEnableIR(
 PVOID pContext,
 ULONG BaudRate 
);

/* HWGetModemStatus  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWGetModemStatus(
 PVOID pContext,
 PULONG pModemStatus 
);

/* HWGetRxBufferSize  [function; ce-only; CE 2.11..2.12, 3.0..699] */
ULONG HWGetRxBufferSize(
 PVOID pContext 
);

/* HWGetRxStart  [function; ce-only; CE 2.11..2.12, 3.0..699] */
PVOID HWGetRxStart(
 PVOID pContext 
);

/* HWOpen  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWOpen(
 PVOID pContext 
);

/* HWPowerOff  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWPowerOff(
 PVOID pContext 
);

/* HWPowerOn  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWPowerOn(
 PVOID pContext 
);

/* HWPurgeComm  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWPurgeComm(
 PVOID pContext,
 DWORD fdwAction 
);

/* HWPutBytes  [function; ce-only; CE 2.11..2.12, 3.0..699] */
ULONG HWPutBytes(
 PVOID pContext,
 PUCHAR pSrc,
 ULONG NumberOfBytes,
 PULONG pBytesSent 
);

/* HWReset  [function; ce-only; CE 2.11..2.12, 3.0..699] */
void HWReset(
 PVOID pContext 
);

/* HWSetBreak  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWSetBreak(
 PVOID pContext 
);

/* HWSetDCB  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWSetDCB(
 PVOID pContext,
 LPDCB pDCB 
);

/* HWSetDTR  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWSetDTR(
 PVOID pContext 
);

/* HWSetRTS  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWSetRTS(
 PVOID pContext 
);

/* HWTxIntrHandler  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID HWTxIntrHandler(
 PVOID pContext, 
 PUCHAR pSourceBuffer, 
 PULONG pByteNumber 
);

/* HWXmitComChar  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL HWXmitComChar(
 PVOID pContext,
 UCHAR ComChar 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 3.0..699 */

/* HWLineIntrHandler  [function; ce-only; CE 3.0..699] */
VOID HWLineIntrHandler(
 PVOID pContext
);

/* HWModemIntrHandler  [function; ce-only; CE 3.0..699] */
VOID HWModemIntrHandler(
 PVOID pContext
);

/* HWOtherIntrHandler  [function; ce-only; CE 3.0..699] */
VOID HWOtherHandler(
 PVOID pContext
);

/* HWPostInit  [function; ce-only; CE 3.0..699] */
BOOL HWPostInit(
 PVOID pContext 
);

/* HWRxIntrHandler  [function; ce-only; CE 3.0..699] */
ULONG HWRxIntrHandler(
 PVOID pContext,
 PUCHAR pTargetBuffer,
 PULONG pByteNumber 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
VOID HWOtherHandler(PVOID pContext);

#endif /* _SERHW_ */
