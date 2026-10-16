/* Profiler.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _PROFILER_
#define _PROFILER_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OEMProfilerData  [struct; ce-only; CE 5.0..699] */
typedef struct OEMProfilerData {
 DWORD ra;
 DWORD dwBufSize;
 BYTE buf[0];
} OEMProfilerData;

/* ProfilerControl  [struct; ce-only; CE 5.0..699] */
typedef struct ProfilerControl {
 DWORD dwVersion;
 DWORD dwOptions;
 DWORD dwReserved;
 union {
 struct {
 DWORD dwUSecInterval;
 } Kernel;
 struct {
 DWORD dwProcessorType;
 DWORD dwControlSize;
 BYTE bHardwareSpecificSettings[0];
 } OEM;
 };
} ProfilerControl;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* GetEPC  [function; ce-only; CE 3.0..399, 5.0..699; Nkprof.lib, Nkstub.lib; heuristic-prefix] */
DWORD GetEPC (void);

/* ProfilerHit  [function; ce-only; CE 3.0..399, 5.0..699; Nkprof.lib, Nkstub.lib; heuristic-prefix] */
void ProfilerHit(
 DWORD ra
);

/* ProfileStart  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
VOID ProfileStart(
 DWORD dwUSecInterval,
 DWORD dwOptions
);

/* ProfileStop  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
VOID ProfileStop (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* OEMProfileTimerDisable  [function; ce-only; CE 3.0..699; Nkprof.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMProfileTimerDisable (void);

/* OEMProfileTimerEnable  [function; ce-only; CE 3.0..699; Nkprof.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void OEMProfileTimerEnable( 
 DWORD dwUSecInterval 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ProfileCaptureStatus  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
VOID ProfileCaptureStatus();

/* ProfilerHitEx  [function; ce-only; CE 5.0..699; Coredll.lib, Nkstub.lib] */
VOID ProfilerHitEx(
 OEMProfilerData* pData
);

/* ProfileStartEx  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
VOID ProfileStartEx(
 ProfilerControl* pControl
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct ProfilerControl {DWORDdwVersion;DWORDdwOptions;DWORDdwReserved; union { struct { DWORDdwUSecInterval; } Kernel;

#endif /* _PROFILER_ */
