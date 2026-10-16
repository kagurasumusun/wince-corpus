/* Dmusicc.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 1 outlines, 0 base types, 0 extra macros, 31 extra decls
 */
#ifndef _DMUSICC_
#define _DMUSICC_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMUS_PORTCAPS  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DMUS_WAVES_REVERB_PARAMS  [struct; ce-only] */
typedef struct _DMUS_WAVES_REVERB_PARAMS {
 float fInGain;
 float fReverbMix;
 float fReverbTime;
 float fHighFreqRTRatio;
} DMUS_WAVES_REVERB_PARAMS;

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
