/* Nkintr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 29 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _NKINTR_
#define _NKINTR_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 3.0..399 */

/* OEMParallelPortGetByte  [function; ce-only; CE 3.0..399] */
int OEMParallelPortGetByte (void);

/* OEMParallelPortSendByte  [function; ce-only; CE 3.0..399] */
void OEMParallelPortSendByte ( 
BYTE ch );

/* SetKernelCommDev  [function; ce-only; CE 3.0..399] */
BOOL SetKernelCommDev( 
UCHAR Service, 
UCHAR CommDevice );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* HookInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
BOOL HookInterrupt(
 int hwIntNumber,
 FARPROC pfnHandler
);

/* KCompareFileTime  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
LONG KCompareFileTime(
 LPFILETIME lpft1,
 LPFILETIME lpft2
);

/* OEMClearDebugCommError  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMClearDebugCommError (void);

/* OEMGetExtensionDRAM  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
BOOL OEMGetExtensionDRAM( 
 LPDWORD lpMemStart, 
 LPDWORD lpMemLen 
);

/* OEMInit  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMInit (void);

/* OEMInitDebugSerial  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMInitDebugSerial (void);

/* OEMInterruptDisable  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMInterruptDisable( 
 DWORD idInt 
);

/* OEMInterruptDone  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMInterruptDone( 
 DWORD idInt 
);

/* OEMInterruptEnable  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
BOOL OEMInterruptEnable(
 DWORD idInt, 
 LPVOID pvData, 
 DWORD cbData 
);

/* SetInterruptEvent  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, Nkstub.lib] */
BOOL SetInterruptEvent(
 DWORD idInt
);

/* UnhookInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, Nkstub.lib] */
BOOL UnhookInterrupt(
 INT hwInterruptNumber,
 FARPROC pfnHandler
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 3.0..699 */

/* OEMPowerOff  [function; ce-only; CE 3.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMPowerOff (void);

/* OEMReadDebugByte  [function; ce-only; CE 3.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
int OEMReadDebugByte (void);

/* OEMWriteDebugByte  [function; ce-only; CE 3.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMWriteDebugByte(
 BYTE ch 
);

/* OEMWriteDebugLED  [function; ce-only; CE 3.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMWriteDebugLED(
 WORD wIndex, 
 DWORD dwPattern 
);

/* OEMWriteDebugString  [function; ce-only; CE 3.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMWriteDebugString(
 unsigned short* str 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* CeSetPowerOnEvent  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeSetPowerOnEvent(
 HANDLE hEvt
);

/* NKCallIntChain  [function; ce-only; CE 5.0..699; Nk.lib, Nkstub.lib] */
DWORD NKCallIntChain(
 BYTE irq
);

/* NKIsSysIntrValid  [function; ce-only; CE 5.0..699; Nk.lib, Nkstub.lib] */
BOOL NKIsSysIntrValid( 
 DWORD idInt 
);
#endif /* _WIN32_WCE */

#endif /* _NKINTR_ */
