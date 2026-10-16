/* oal_timer.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_TIMER_
#define _OAL_TIMER_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALCPUIdle  [function; ce-only; CE 5.0..699] */
VOID OALCPUIdle();

/* OALGetTickCount  [function; ce-only; CE 5.0..699] */
UINT32 OALGetTickCount();

/* OALStall  [function; ce-only; CE 5.0..699] */
VOID OALStall(
 UINT32 uSecs
);

/* OALTimerCountsSinceSysTick  [function; ce-only; CE 5.0..699] */
INT32 OALTimerCountsSinceSysTick();

/* OALTimerGetCompare  [function; ce-only; CE 5.0..699] */
UINT32 OALTimerGetCompare();

/* OALTimerInit  [function; ce-only; CE 5.0..699] */
BOOL OALTimerInit(
 UINT32 msecPerSysTick,
 UINT32 countsPerMSec,
 UINT32 margin
);

/* OALTimerInitCount  [function; ce-only; CE 5.0..699] */
VOID OALTimerInitCount(
 UINT32 period
);

/* OALTimerIntrHandler  [function; ce-only; CE 5.0..699] */
UINT32 OALTimerIntrHandler();

/* OALTimerRecharge  [function; ce-only; CE 5.0..699] */
VOID OALTimerRecharge(
 UINT32 period,
 UINT32 margin
);

/* OALTimerSetCompare  [function; ce-only; CE 5.0..699] */
VOID OALTimerSetCompare(
 UINT32 compare
);

/* OALTimerUpdate  [function; ce-only; CE 5.0..699] */
UINT32 OALTimerUpdate(
 UINT32 period,
 UINT32 margin
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* OALTimerQueryPerformanceCounter  [function; ce-only; CE 6.0..699] */
BOOL OALTimerQueryPerformanceCounter(
 LARGE_INTEGER *pCounter
);

/* OALTimerQueryPerformanceFrequency  [function; ce-only; CE 6.0..699] */
BOOL OALTimerQueryPerformanceFrequency(
 LARGE_INTEGER *pFrequency
);

/* OALTimerUpdateRescheduleTime  [function; ce-only; CE 6.0..699] */
VOID OALTimerUpdateRescheduleTime(DWORD time);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct { UINT32 countsPerMSec; UINT32 countsMargin; UINT32 maxPeriodMSec; UINT32 msecPerSysTick; UINT32 countsPerSysTick; UINT32 actualMSecPerSysTick; UINT32 actualCountsPerSysTick; volatile UINT64 curCounts;} OAL_TIMER_STATE, *POAL_TIMER_STATE;

#endif /* _OAL_TIMER_ */
