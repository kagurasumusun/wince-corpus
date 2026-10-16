/* Dmusicc.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 44 declarations, 0 outlines, 0 base types, 0 extra macros, 31 extra decls
 */
#ifndef _DMUSICC_
#define _DMUSICC_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* DMUS_PORTCAPS  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_PORTCAPS {
 DWORD dwSize;
 DWORD dwFlags;
 GUID guidPort;
 DWORD dwClass;
 DWORD dwType;
 DWORD dwMemorySize;
 DWORD dwMaxChannelGroups;
 DWORD dwMaxVoices;
 DWORD dwMaxAudioChannels;
 DWORD dwEffectFlags;
 WCHAR wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_PORTCAPS, *LPDMUS_PORTCAPS;

/* DMUS_PORTPARAMS  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_PORTPARAMS {
 DWORD dwSize;
 DWORD dwValidParams;
 DWORD dwVoices;
 DWORD dwChannelGroups;
 DWORD dwAudioChannels;
 DWORD dwSampleRate;
 DWORD dwEffectFlags;
 DWORD fShare;
} DMUS_PORTPARAMS, *LPDMUS_PORTPARAMS;

/* DMUS_WAVES_REVERB_PARAMS  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_WAVES_REVERB_PARAMS {
 float fInGain;
 float fReverbMix;
 float fReverbTime;
 float fHighFreqRTRatio;
} DMUS_WAVES_REVERB_PARAMS;

/* IDirectMusicBuffer  [typedef; ce-only; CE 4.0..499; Dmusic.lib] */
typedef IDirectMusicBuffer *LPDIRECTMUSICBUFFER;

/* IDirectMusicPort  [typedef; ce-only; CE 4.0..499; Dmusic.lib] */
typedef IDirectMusicPort *LPDIRECTMUSICPORT;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* IDirectMusicBuffer::Flush  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Flush();

/* IDirectMusicBuffer::GetBufferFormat  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetBufferFormat(
 LPGUID pGuidFormat
);

/* IDirectMusicBuffer::GetMaxBytes  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetMaxBytes(
 LPDWORD pcb
);

/* IDirectMusicBuffer::GetNextEvent  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetNextEvent(
 LPREFERENCE_TIME prt, 
 LPDWORD pdwChannelGroup, 
 LPDWORD pdwLength, 
 LPBYTE* ppData
);

/* IDirectMusicBuffer::GetRawBufferPtr  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetRawBufferPtr(
 LPBYTE* ppData
);

/* IDirectMusicBuffer::GetStartTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetStartTime(
 LPREFERENCE_TIME prt
);

/* IDirectMusicBuffer::GetUsedBytes  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetUsedBytes(
 LPDWORD pcb
);

/* IDirectMusicBuffer::PackStructured  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT PackStructured(
 REFERENCE_TIME rt,
 DWORD dwChannelGroup,
 DWORD dwChannelMessage
);

/* IDirectMusicBuffer::PackUnstructured  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT PackUnstructured(
 REFERENCE_TIME rt,
 DWORD dwChannelGroup,
 DWORD cb,
 LPBYTE lpb
);

/* IDirectMusicBuffer::ResetReadPtr  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ResetReadPtr()

/* IDirectMusicBuffer::SetStartTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetStartTime(
 REFERENCE_TIME rt
);

/* IDirectMusicBuffer::SetUsedBytes  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetUsedBytes(
 DWORD cb
);

/* IDirectMusicBuffer::TotalTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT TotalTime(
 LPREFERENCE_TIME prtTime
);

/* IDirectMusicCollection::EnumInstrument  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT EnumInstrument(
 DWORD dwIndex,
 DWORD* pdwPatch,
 LPWSTR pwszName,
 DWORD dwNameLen
);

/* IDirectMusicCollection::GetInstrument  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetInstrument(
 DWORD dwPatch,
 IDirectMusicInstrument** ppInstrument
);

/* IDirectMusicDownload::GetBuffer  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetBuffer(
 void** ppvBuffer,
 DWORD* pdwSize
);

/* IDirectMusicInstrument::SetPatch  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetPatch(
 DWORD dwPatch
);

/* IDirectMusicPort::Activate  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Activate(
 BOOL fActive
);

/* IDirectMusicPort::Compact  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Compact();

/* IDirectMusicPort::DeviceIoControl  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT DeviceIoControl(
 DWORD dwIoControlCode,
 LPVOID lpInBuffer,
 DWORD nInBufferSize,
 LPVOID lpOutBuffer,
 DWORD nOutBufferSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);

/* IDirectMusicPort::DownloadInstrument  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT DownloadInstrument(
 IDirectMusicInstrument* pInstrument,
 IDirectMusicDownloadedInstrument** ppDownloadedInstrument,
 DMUS_NOTERANGE* pNoteRanges,
 DWORD dwNumNoteRanges;
);

/* IDirectMusicPort::GetCaps  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetCaps(
 LPDMUS_PORTCAPS pPortCaps
);

/* IDirectMusicPort::GetChannelPriority  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetChannelPriority(
 DWORD dwChannelGroup,
 DWORD dwChannel,
 LPDWORD pdwPriority
);

/* IDirectMusicPort::GetFormat  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetFormat(
 LPWAVEFORMATEX pWaveFormatEx,
 LPDWORD pdwWaveFormatExSize,
 LPDWORD pdwBufferSize
);

/* IDirectMusicPort::GetLatencyClock  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetLatencyClock(
 IReferenceClock** ppClock
);

/* IDirectMusicPort::GetRunningStats  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetRunningStats(
 LPDMUS_SYNTHSTATS pStats
);

/* IDirectMusicPort::PlayBuffer  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT PlayBuffer(
 IDIRECTMUSICBUFFER* pBuffer
);

/* IDirectMusicPort::Read  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Read(
 IDirectMusicBuffer* pBuffer
);

/* IDirectMusicPort::SetChannelPriority  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetChannelPriority(
 DWORD dwChannelGroup,
 DWORD dwChannel,
 DWORD dwPriority
);

/* IDirectMusicPort::SetDirectSound  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetDirectSound(
 LPDIRECTSOUND pDirectSound,
 LPDIRECTSOUNDBUFFER pDirectSoundBuffer
);

/* IDirectMusicPort::SetNumChannelGroups  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetNumChannelGroups(
 DWORD dwChannelGroups
);

/* IDirectMusicPort::SetReadNotificationHandle  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetReadNotificationHandle(
 HANDLE hEvent
);

/* IDirectMusicPort::UnloadInstrument  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT UnloadInstrument(
 IDirectMusicDownloadedInstrument* pDownloadedInstrument
);

/* IDirectMusicPortDownload::AllocateBuffer  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AllocateBuffer(
 DWORD dwSize,
 IDirectMusicDownload** ppIDMDownload
);

/* IDirectMusicPortDownload::Download  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Download(
 IDirectMusicDownload* pIDMDownload
);

/* IDirectMusicPortDownload::GetAppend  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetAppend(
 DWORD* pdwAppend
);

/* IDirectMusicPortDownload::GetBuffer  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetBuffer(
 DWORD dwDLId,
 IDirectMusicDownload** ppIDMDownload
);

/* IDirectMusicPortDownload::GetDLId  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetDLId(
 DWORD* pdwStartDLId,
 DWORD dwCount
);

/* IDirectMusicPortDownload::Unload  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Unload(
 IDirectMusicDownload* pIDMDownload
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef IDirectMusicBuffer *LPDIRECTMUSICBUFFER;
typedef IDirectMusicPort *LPDIRECTMUSICPORT;

/* struct */
typedef struct _DMUS_PORTCAPS {
  DWORD dwSize;
  DWORD dwFlags;
  GUID guidPort;
  DWORD dwClass;
  DWORD dwType;
  DWORD dwMemorySize;
  DWORD dwMaxChannelGroups;
  DWORD dwMaxVoices;
  DWORD dwMaxAudioChannels;
  DWORD dwEffectFlags;
  WCHAR wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_PORTCAPS, *LPDMUS_PORTCAPS;
typedef struct _DMUS_PORTPARAMS {
  DWORD dwSize;
  DWORD dwValidParams;
  DWORD dwVoices;
  DWORD dwChannelGroups;
  DWORD dwAudioChannels;
  DWORD dwSampleRate;
  DWORD dwEffectFlags;
  DWORD fShare;
} DMUS_PORTPARAMS, *LPDMUS_PORTPARAMS;

/* function */
HRESULT AllocateBuffer( DWORD dwSize, IDirectMusicDownload** ppIDMDownload );
HRESULT EnumInstrument( DWORD dwIndex, DWORD* pdwPatch, LPWSTR pwszName, DWORD dwNameLen );
HRESULT GetAppend( DWORD* pdwAppend );
HRESULT GetBufferFormat( LPGUID pGuidFormat );
HRESULT GetChannelPriority( DWORD dwChannelGroup, DWORD dwChannel, LPDWORD pdwPriority );
HRESULT GetDLId( DWORD* pdwStartDLId, DWORD dwCount );
HRESULT GetInstrument( DWORD dwPatch, IDirectMusicInstrument** ppInstrument );
HRESULT GetLatencyClock( IReferenceClock** ppClock );
HRESULT GetMaxBytes( LPDWORD pcb );
HRESULT GetNextEvent( LPREFERENCE_TIME prt, LPDWORD pdwChannelGroup, LPDWORD pdwLength, LPBYTE* ppData );
HRESULT GetRawBufferPtr( LPBYTE* ppData );
HRESULT GetRunningStats( LPDMUS_SYNTHSTATS pStats );
HRESULT GetStartTime( LPREFERENCE_TIME prt );
HRESULT GetUsedBytes( LPDWORD pcb );
HRESULT PackStructured( REFERENCE_TIME rt, DWORD dwChannelGroup, DWORD dwChannelMessage );
HRESULT PackUnstructured( REFERENCE_TIME rt, DWORD dwChannelGroup, DWORD cb, LPBYTE lpb );
HRESULT PlayBuffer( IDIRECTMUSICBUFFER* pBuffer );
HRESULT ResetReadPtr()
HRESULT SetChannelPriority( DWORD dwChannelGroup, DWORD dwChannel, DWORD dwPriority );
HRESULT SetDirectSound( LPDIRECTSOUND pDirectSound, LPDIRECTSOUNDBUFFER pDirectSoundBuffer );
HRESULT SetNumChannelGroups( DWORD dwChannelGroups );
HRESULT SetPatch( DWORD dwPatch );
HRESULT SetReadNotificationHandle( HANDLE hEvent );
HRESULT SetStartTime( REFERENCE_TIME rt );
HRESULT SetUsedBytes( DWORD cb );
HRESULT TotalTime( LPREFERENCE_TIME prtTime );
HRESULT UnloadInstrument( IDirectMusicDownloadedInstrument* pDownloadedInstrument );

#endif /* _DMUSICC_ */
