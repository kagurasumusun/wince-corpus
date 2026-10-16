/* VoiceCtl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _VOICECTL_
#define _VOICECTL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213)) /* CE 2.11..2.12 */

/* VoiceRecorder_Create  [function; ce-only; CE 2.11..2.12] */
HWND VoiceRecorder_Create(CM_VOICE_RECORDER * lpCMVR);
#endif /* _WIN32_WCE */

#endif /* _VOICECTL_ */
