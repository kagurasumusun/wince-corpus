/* sdhcd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SDHCD_
#define _SDHCD_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* SDHCDAllocateContext  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
SD_API_STATUS SDHCDAllocateContext(
 DWORD cSlots,
 PSDCARD_HC_CONTEXT *ppHostContext
);

/* SDHCDDeinitializeHCLib  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
SD_API_STATUS SDHCDDeinitializeHCLib();

/* SDHCDDeleteContext  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
VOID SDHCDDeleteContext(
 PSDCARD_HC_CONTEXT pHCContext
);

/* SDHCDDeregisterHostController  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
SD_API_STATUS SDHCDDeregisterHostController(
 PSDCARD_HC_CONTEXT pHCContext
);

/* SDHCDGetAndLockCurrentRequest  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
PSD_BUS_REQUEST SDHCDGetAndLockCurrentRequest(
 PSDCARD_HC_CONTEXT pHCContext,
 DWORD SlotIndex
);

/* SDHCDIndicateBusRequestComplete  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
VOID SDHCDIndicateBusREquestComplete(
 PSDCARD_HC_CONTEXT pHCContext
 PSD_BUS_REQUEST pRequest,
 SD_API_STATUS Status
);

/* SDHCDIndicateSlotStateChange  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
VOID SDHCDIndicateSlotStateChange(
 PSDCARD_HC_CONTEXT pHCContext,
 DWORD SlotNumber,
 SD_SLOT_EVENT Event
);

/* SDHCDInitializeHCLib  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
SD_API_STATUS SDHCDInitializeHCLib();

/* SDHCDPowerUpDown  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
VOID SDHCDPowerUpDown(
 PSDCARD_HC_CONTEXT pHCContext,
 BOOL PowerUp,
 BOOL SlotKeepPower,
 DWORD SlotIndex,
);

/* SDHCDRegisterHostController  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
SD_API_STATUS SDHCDRegisterHostController(
 PSDCARD_HC_CONTEXT pHCContext
);

/* SDHCDUnlockRequest  [function; ce-only; CE 6.0..699; SDHCLib.lib] */
VOID SDHCDUnlockRequest(
 PSDCARD_HC_CONTEXT pHCContext,
 PSD_BUS_REQUEST pRequest
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
VOID SDHCDIndicateBusREquestComplete( PSDCARD_HC_CONTEXT pHCContext PSD_BUS_REQUEST pRequest, SD_API_STATUS Status );

#endif /* _SDHCD_ */
