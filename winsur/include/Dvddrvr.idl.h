/* Dvddrvr.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 9 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 25 extra decls
 */
#ifndef _DVDDRVR_IDL_
#define _DVDDRVR_IDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
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
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* EDVDDisplayAspectRatio  [enum; ce-only] */
typedef enum {
 DVD_DISPLAY_ASPECT_4x3 = 0,
 DVD_DISPLAY_ASPECT_16x9 = 0x3
} EDVDDisplayAspectRatio;

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
