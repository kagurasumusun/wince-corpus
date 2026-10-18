/* Qnetwork.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 7 constants, 0 declarations, 1 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _QNETWORK_
#define _QNETWORK_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define AM_EXSEEK_BUFFERING 32
#define AM_EXSEEK_CANSCAN 2
#define AM_EXSEEK_CANSEEK 1
#define AM_EXSEEK_MARKERSEEK 4
#define AM_EXSEEK_NOSTANDARDREPAINT 16
#define AM_EXSEEK_SCANWITHOUTCLOCK 8
#define AM_EXSEEK_SENDS_VIDEOFRAMEREADY 64

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* AMExtendedSeekingCapabilities  [enum; shared; entity-headers] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetMarkerTime(long MarkerNum, double* pMarkerTime);
HRESULT get_CurrentMarker(long* pCurrentMarker);
HRESULT get_ExSeekCapabilities(long* pExCapabilities);
HRESULT get_MarkerCount(long* pMarkerCount);
HRESULT get_PlaybackSpeed(double* pSpeed);
HRESULT put_PlaybackSpeed(double Speed);

#endif /* _QNETWORK_ */
