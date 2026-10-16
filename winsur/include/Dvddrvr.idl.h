/* Dvddrvr.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 39 declarations, 0 outlines, 0 base types, 0 extra macros, 25 extra decls
 */
#ifndef _DVDDRVR_IDL_
#define _DVDDRVR_IDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */
#define DVD_AUDIO_TYPE_AC3 2
#define DVD_DISPLAY_ASPECT_16x9 0x3
#define DVD_DISPLAY_ASPECT_4x3 0
#define HIGHLIGHT_SELECT 1
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define DVD_AUDIOCAP_AC3 0x4000
#define DVD_AUDIOCAP_AC3_KARAOKE 0x0040
#define DVD_AUDIOCAP_DTS 0x0800
#define DVD_AUDIOCAP_DTS_KARAOKE 0x0008
#define DVD_AUDIOCAP_LPCM_KARAOKE 0x0080
#define DVD_AUDIOCAP_MPEG 0x1000
#define DVD_AUDIOCAP_MPEG_KARAOKE 0x0010
#define DVD_AUDIOCAP_SDDS 0x0400
#define DVD_AUDIOCAP_SDDS_KARAOKE 0x0004
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* EDVDAspectRatioMode  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_ASPECT_RATIO_MODE_LETTERBOX,
 DVD_ASPECT_RATIO_MODE_PANSCAN
} EDVDAspectRatioMode;

/* EDVDAudioFreq  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_AUDIO_FREQ_48KHZ,
 DVD_AUDIO_FREQ_96KHZ
} EDVDAudioFreq;

/* EDVDAudioStreamType  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_AUDIO_TYPE_AC3 = 2,
 DVD_AUDIO_TYPE_MPEG,
 DVD_AUDIO_TYPE_LPCM,
 DVD_AUDIO_TYPE_DTS,
 DVD_AUDIO_TYPE_SDDS
} EDVDAudioStreamType;

/* EDVDDisplayAspectRatio  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_DISPLAY_ASPECT_4x3 = 0,
 DVD_DISPLAY_ASPECT_16x9 = 0x3
} EDVDDisplayAspectRatio;

/* EDVDLpcmQuantization  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_LPCM_16,
 DVD_LPCM_20,
 DVD_LPCM_24
} EDVDLpcmQuantization;

/* EDVDSyncEventType  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_NAV_PACK_EVENT,
 DVD_HIGHLIGHT_EVENT,
 DVD_PLAYBACK_EVENT,
 DVD_CC_DATA_EVENT
} EDVDSyncEventType;

/* EHighlightAction  [enum; ce-only; CE 4.0..699] */
typedef enum {
 HIGHLIGHT_SELECT = 1,
 UNHIGHLIGHT,
 ACTIVATE_BUTTON,
 ACTIVATE_SELECTED,
 SELECT_AUTO_ACTIVATED
} EHighlightAction;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IBitstreamProcessor::GetDMAChannel  [function; ce-only; CE 4.0..699] */
HRESULT GetDMAChannel(
 DWORD dwIndex,
 IDMAChannel** ppChannel
);

/* IBitstreamProcessor::GetDMAChannelCount  [function; ce-only; CE 4.0..699] */
HRESULT GetDMAChannelCount(
 DWORD* pdwChannels
);

/* IBitstreamProcessor::GetLabeledDMAChannel  [function; ce-only; CE 4.0..699] */
HRESULT GetLabeledDMAChannel(
 REFGUID guidLabelSystem,
 WCHAR* plabelBuf,
 IDMAChannel** ppDMAChannel
);

/* IBitstreamProcessor::Init  [function; ce-only; CE 4.0..699] */
HRESULT Init();

/* IBitstreamProcessor::SetBitstreamType  [function; ce-only; CE 4.0..699] */
HRESULT SetBitstreamType(
 DWORD dwBitstreamType
);

/* IDMAChannel::AbortAllTransfers  [function; ce-only; CE 4.0..699] */
HRESULT AbortAllTransfers();

/* IDMAChannel::GetLabel  [function; ce-only; CE 4.0..699] */
HRESULT GetLabel(
 GUID* puuidLabelSystem,
 WCHAR* labelBuf,
 DWORD LabelBufSz
);

/* IDMAChannel::GetMaxOutstandingTransfers  [function; ce-only; CE 4.0..699] */
HRESULT GetMaxOutstandingTransfers(
 DWORD* pdwTransfers,
 DWORD* pdwMaxSize
);

/* IDMAChannel::GetPendingTransferCount  [function; ce-only; CE 4.0..699] */
HRESULT GetPendingTransfersCount(
 DWORD* pdwPending
);

/* IDMAChannel::OnDiscontinuity  [function; ce-only; CE 4.0..699] */
HRESULT OnDiscontinuity();

/* IDMAChannel::RequestTransfer  [function; ce-only; CE 4.0..699] */
HRESULT RequestTransfer(
 PHYSICAL_ADDRESS physStart,
 DWORD dwSize, 
 VOID* pva,
 DWORD* pdwPending
);

/* IDMAChannel::SetDataNotificationThreshold  [function; ce-only; CE 4.0..699] */
HRESULT SetDataNotificationThreshold(
 DWORD dwPendingThreshold
);

/* IDMAChannel::SetThresholdCallback  [function; ce-only; CE 4.0..699] */
HRESULT SetThresholdCallback(
 PNOTIFICATION_CALLBACK pProc,
 DWORD arg
);

/* IDVDRenderer::Abort  [function; ce-only; CE 4.0..699] */
HRESULT Abort();

/* IDVDRenderer::GetAudioCaps  [function; ce-only; CE 4.0..699] */
HRESULT GetAudioCaps(
 DWORD* pdwCaps
);

/* IDVDRenderer::GetHighlightedButton  [function; ce-only; CE 4.0..699] */
HRESULT GetHighlightedButton(
 BYTE* buttonNumber
);

/* IDVDRenderer::GetScanCaps  [function; ce-only; CE 4.0..699] */
HRESULT GetScanCaps(
 DWORD* pdwCaps
);

/* IDVDRenderer::Highlight  [function; ce-only; CE 4.0..699] */
HRESULT Highlight(
 BYTE buttonNumber,
 EHighlightAction action,
 BOOL bRelativeMode
);

/* IDVDRenderer::Play  [function; ce-only; CE 4.0..699] */
HRESULT Play();

/* IDVDRenderer::RegisterSyncEvent  [function; ce-only; CE 4.0..699] */
HRESULT RegisterSyncEvent(
 EDVDSyncEventType eType,
 HANDLE h,
 void* pDataLock,
 DWORD dwMaxDataSize,
 void* pEventData
);

/* IDVDRenderer::Scan  [function; ce-only; CE 4.0..699] */
HRESULT Scan(
 BOOL bForward,
 double dRate,
 double* dwActual,
 DWORD* bVobuSkip
);

/* IDVDRenderer::SetAPS  [function; ce-only; CE 4.0..699] */
HRESULT SetAPS(
 DWORD apsType,
 DWORD* pdwCookie
);

/* IDVDRenderer::SetAspectRatioMode  [function; ce-only; CE 4.0..699] */
HRESULT SetAspectRatioMode(
 EDVDAspectRatioMode enumAspectRatioMode
);

/* IDVDRenderer::SetAudioStreamNumber  [function; ce-only; CE 4.0..699] */
HRESULT SetAudioStreamNumber(
 int iDecodingNumber
);

/* IDVDRenderer::SetAudioStreamType  [function; ce-only; CE 4.0..699] */
HRESULT SetAudioStreamType(
 EDVDAudioStreamType dwSelectedDecoder
);

/* IDVDRenderer::SetContentAspectRatio  [function; ce-only; CE 4.0..699] */
HRESULT SetContentAspectRatio(
 EDVDDisplayAspectRatio enumDisplayAspectRatio
);

/* IDVDRenderer::SetDisplayAspectRatio  [function; ce-only; CE 4.0..699] */
HRESULT SetDisplayAspectRatio(
 EDVDDisplayAspectRatio enumDisplayAspectRatio
);

/* IDVDRenderer::SetPalette  [function; ce-only; CE 4.0..699] */
HRESULT SetPalette(
 DWORD* pPalette
);

/* IDVDRenderer::SetSubpictureStreamNumber  [function; ce-only; CE 4.0..699] */
HRESULT SetSubpictureStreamNumber(
 int iDecodingNumber,
 BOOL bDisplay
);

/* IDVDRenderer::Slow  [function; ce-only; CE 4.0..699] */
HRESULT Slow(
 BOOL bForward,
 double dRate,
 double* dwActual
);

/* IDVDRenderer::Step  [function; ce-only; CE 4.0..699] */
HRESULT Slow(
 BOOL bForward
);

/* IDVDRenderer::UnregisterSyncEvent  [function; ce-only; CE 4.0..699] */
HRESULT UnregisterSyncEvent(
 EDVDSyncEventType etype,
 HANDLE h
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AbortAllTransfers();
HRESULT GetAudioCaps(DWORD* pdwCaps);
HRESULT GetDMAChannel(DWORDdwIndex,IDMAChannel** ppChannel);
HRESULT GetDMAChannelCount(DWORD* pdwChannels);
HRESULT GetHighlightedButton(BYTE* buttonNumber);
HRESULT GetLabeledDMAChannel(REFGUIDguidLabelSystem,WCHAR* plabelBuf,IDMAChannel** ppDMAChannel);
HRESULT GetMaxOutstandingTransfers(DWORD* pdwTransfers,DWORD* pdwMaxSize);
HRESULT GetPendingTransfersCount(DWORD* pdwPending);
HRESULT Highlight(BYTE buttonNumber,EHighlightActionaction,BOOLbRelativeMode);
HRESULT OnDiscontinuity();
HRESULT RegisterSyncEvent(EDVDSyncEventTypeeType,HANDLEh,void* pDataLock,DWORDdwMaxDataSize,void* pEventData);
HRESULT RequestTransfer(PHYSICAL_ADDRESSphysStart,DWORDdwSize,VOID*pva, DWORD* pdwPending);
HRESULT Scan(BOOLbForward,doubledRate,double* dwActual,DWORD* bVobuSkip);
HRESULT SetAPS(DWORDapsType,DWORD* pdwCookie);
HRESULT SetAspectRatioMode(EDVDAspectRatioModeenumAspectRatioMode);
HRESULT SetAudioStreamNumber(intiDecodingNumber);
HRESULT SetAudioStreamType(EDVDAudioStreamTypedwSelectedDecoder);
HRESULT SetBitstreamType(DWORDdwBitstreamType);
HRESULT SetContentAspectRatio(EDVDDisplayAspectRatioenumDisplayAspectRatio);
HRESULT SetDataNotificationThreshold(DWORDdwPendingThreshold);
HRESULT SetDisplayAspectRatio(EDVDDisplayAspectRatioenumDisplayAspectRatio);
HRESULT SetSubpictureStreamNumber(intiDecodingNumber,BOOL bDisplay);
HRESULT SetThresholdCallback(PNOTIFICATION_CALLBACKpProc,DWORDarg);
HRESULT Slow(BOOLbForward,doubledRate,double* dwActual);
HRESULT UnregisterSyncEvent(EDVDSyncEventTypeetype,HANDLEh);

#endif /* _DVDDRVR_IDL_ */
