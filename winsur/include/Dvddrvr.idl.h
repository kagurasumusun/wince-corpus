/* Dvddrvr.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 10 constants, 1 declarations, 6 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _DVDDRVR_IDL_
#define _DVDDRVR_IDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DVD_AUDIO_TYPE_AC3 2
#define DVD_AUDIOCAP_AC3 0x4000
#define DVD_AUDIOCAP_AC3_KARAOKE 0x0040
#define DVD_AUDIOCAP_DTS 0x0800
#define DVD_AUDIOCAP_DTS_KARAOKE 0x0008
#define DVD_AUDIOCAP_LPCM_KARAOKE 0x0080
#define DVD_AUDIOCAP_MPEG 0x1000
#define DVD_AUDIOCAP_MPEG_KARAOKE 0x0010
#define DVD_AUDIOCAP_SDDS 0x0400
#define DVD_AUDIOCAP_SDDS_KARAOKE 0x0004

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* EDVDAspectRatioMode  [enum; ce-only] */

/* EDVDAudioFreq  [enum; ce-only] */

/* EDVDAudioStreamType  [enum; ce-only] */

/* EDVDDisplayAspectRatio  [enum; ce-only] */

/* EDVDLpcmQuantization  [enum; ce-only] */

/* EDVDSyncEventType  [enum; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* EHighlightAction  [enum; ce-only] */
#ifndef __WINCE_DEFINED_EHIGHLIGHTACTION
#define __WINCE_DEFINED_EHIGHLIGHTACTION
typedef enum {
 HIGHLIGHT_SELECT = 1,
 UNHIGHLIGHT,
 ACTIVATE_BUTTON,
 ACTIVATE_SELECTED,
 SELECT_AUTO_ACTIVATED
} EHighlightAction;
#endif /* __WINCE_DEFINED_EHIGHLIGHTACTION */
#ifndef __WINCE_DEFINED_PEHIGHLIGHTACTION
#define __WINCE_DEFINED_PEHIGHLIGHTACTION
typedef EHighlightAction *PEHighlightAction, *LPEHighlightAction;
#endif /* __WINCE_DEFINED_PEHIGHLIGHTACTION */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AbortAllTransfers();
HRESULT GetAudioCaps(DWORD* pdwCaps);
HRESULT GetDMAChannelCount(DWORD* pdwChannels);
HRESULT GetHighlightedButton(BYTE* buttonNumber);
HRESULT GetMaxOutstandingTransfers(DWORD* pdwTransfers,DWORD* pdwMaxSize);
HRESULT GetPendingTransfersCount(DWORD* pdwPending);
HRESULT Highlight(BYTE buttonNumber, EHighlightAction action, BOOL bRelativeMode);
HRESULT OnDiscontinuity();
HRESULT RequestTransfer(PHYSICAL_ADDRESS physStart, DWORD dwSize, VOID* pva, DWORD* pdwPending);
HRESULT Scan(BOOL bForward, double dRate, double* dwActual, DWORD* bVobuSkip);
HRESULT SetAPS(DWORD apsType, DWORD* pdwCookie);
HRESULT SetAudioStreamNumber(int iDecodingNumber);
HRESULT SetBitstreamType(DWORD dwBitstreamType);
HRESULT SetDataNotificationThreshold(DWORD dwPendingThreshold);
HRESULT SetSubpictureStreamNumber(int iDecodingNumber);
HRESULT Slow(BOOL bForward, double dRate, double* dwActual);

#endif /* _DVDDRVR_IDL_ */
