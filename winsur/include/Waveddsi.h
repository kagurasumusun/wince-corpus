/* Waveddsi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WAVEDDSI_
#define _WAVEDDSI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* PDD_AudioDeinitialize  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID PDD_AudioDeinitialize(void);

/* PDD_AudioGetInterruptType  [function; ce-only; CE 2.11..2.12, 3.0..699] */
AUDIO_STATE PDD_AudioGetInterruptType(void);

/* PDD_AudioInitialize  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL PDD_AudioInitialize(
 DWORD dwIndex 
);

/* PDD_AudioMessage  [function; ce-only; CE 2.11..2.12, 3.0..699] */
DWORD PDD_AudioMessage(
 UINT uMsg,
 DWORD dwParam1,
 DWORD dwParam2 
);

/* PDD_AudioPowerHandler  [function; ce-only; CE 2.11..2.12, 3.0..699] */
VOID PDD_AudioPowerHandler(
 BOOL power_down 
);

/* PDD_WaveProc  [function; ce-only; CE 2.11..2.12, 3.0..699] */
MMRESULT PDD_WaveProc(
 WAPI_INOUT apidir,
 DWORD dwCode,
 DWORD dwParam1,
 DWORD dwParam2 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PDD_IoControl  [function; ce-only; CE 5.0..699] */
BOOL PDD_IoControl(
 PDWORD pdwOpenData,
 DWORD dwCode,
 PBYTE pBufIn,
 DWORD dwLenIn,
 PBYTE pBufOut,
 DWORD dwLenOut,
 PDWORD pdwActualOut
);
#endif /* _WIN32_WCE */

#endif /* _WAVEDDSI_ */
