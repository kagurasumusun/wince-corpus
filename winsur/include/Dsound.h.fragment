/* Dsound.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 58 declarations, 0 outlines, 0 base types, 0 extra macros, 23 extra decls
 */
#ifndef _DSOUND_
#define _DSOUND_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 3.0..499 */

/* DSBCAPS  [struct; ce-only; CE 3.0..499] */
typedef struct { 
 DWORD dwSize; 
 DWORD dwFlags; 
 DWORD dwBufferBytes; 
 DWORD dwUnlockTransferRate; 
 DWORD dwPlayCpuOverhead; 
} DSBCAPS, *LPDSBCAPS; 
typedef const DSBCAPS *LPCDSBCAPS;

/* DSBPOSITIONNOTIFY  [struct; ce-only; CE 3.0..499] */
typedef struct {
 DWORD dwOffset;
 HANDLE hEventNotify;
} DSBPOSITIONNOTIFY, *LPDSBPOSITIONNOTIFY;
typedef const DSBPOSITIONNOTIFY *LPCDSBPOSITIONNOTIFY;

/* DSBUFFERDESC  [struct; ce-only; CE 3.0..499] */
typedef struct { 
 DWORD dwSize; 
 DWORD dwFlags; 
 DWORD dwBufferBytes; 
 DWORD dwReserved; 
 LPWAVEFORMATEX lpwfxFormat; 
} DSBUFFERDESC, *LPDSBUFFERDESC; 
typedef const DSBUFFERDESC *LPCDSBUFFERDESC;

/* DSCAPS  [typedef; ce-only; CE 3.0..499] */
typedef { 
 DWORD dwSize; 
 DWORD dwFlags; 
 DWORD dwMinSecondarySampleRate; 
 DWORD dwMaxSecondarySampleRate; 
 DWORD dwPrimaryBuffers; 
 DWORD dwMaxHwMixingAllBuffers; 
 DWORD dwMaxHwMixingStaticBuffers; 
 DWORD dwMaxHwMixingStreamingBuffers; 
 DWORD dwFreeHwMixingAllBuffers; 
 DWORD dwFreeHwMixingStaticBuffers; 
 DWORD dwFreeHwMixingStreamingBuffers; 
 DWORD dwMaxHw3DAllBuffers; 
 DWORD dwMaxHw3DStaticBuffers; 
 DWORD dwMaxHw3DStreamingBuffers; 
 DWORD dwFreeHw3DAllBuffers; 
 DWORD dwFreeHw3DStaticBuffers; 
 DWORD dwFreeHw3DStreamingBuffers; 
 DWORD dwTotalHwMemBytes; 
 DWORD dwFreeHwMemBytes; 
 DWORD dwMaxContigFreeHwMemBytes; 
 DWORD dwUnlockTransferRateHwBuffers; 
 DWORD dwPlayCpuOverheadSwBuffers; 
 DWORD dwReserved1; 
 DWORD dwReserved2; 
} DSCAPS, *LPDSCAPS; 
typedef const DSCAPS *LPCDSCAPS;

/* DSCBCAPS  [struct; ce-only; CE 3.0..499] */
typedef struct {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwBufferBytes;
 DWORD dwReserved;
} DSCBCAPS, *LPDSCBCAPS;
typedef const DSCBCAPS *LPCDSCBCAPS;

/* DSCBUFFERDESC  [struct; ce-only; CE 3.0..499] */
typedef struct {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwBufferBytes;
 DWORD dwReserved;
 LPWAVEFORMATEX lpwfxFormat;
} DSCBUFFERDESC, *LPDSCBUFFERDESC;
typedef const DSCBUFFERDESC *LPCDSCBUFFERDESC;

/* DSCCAPS  [struct; ce-only; CE 3.0..499] */
typedef struct {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwFormats;
 DWORD dwChannels;
} DSCCAPS, *LPDSCCAPS;
typedef const DSCCAPS *LPCDSCCAPS;

/* IDirectSound  [struct; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
typedef struct IDirectSound *LPDIRECTSOUND;

/* IDirectSoundBuffer  [struct; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
typedef struct IDirectSoundBuffer *LPDIRECTSOUNDBUFFER;

/* IDirectSoundCapture  [struct; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
typedef struct IDirectSoundCapture *LPDIRECTSOUNDCAPTURE;

/* IDirectSoundCaptureBuffer  [struct; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
typedef struct IDirectSoundCaptureBuffer *LPDIRECTSOUNDCAPTUREBUFFER;

/* IDirectSoundNotify  [struct; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
typedef struct IDirectSoundNotify *LPDIRECTSOUNDNOTIFY;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* IKsPropertySet  [struct; ce-only; CE 4.0..499; Dsound.lib] */
typedef struct IKsPropertySet *LPKSPROPERTYSET;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 3.0..499 */

/* DirectSoundCaptureCreate  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT WINAPI DirectSoundCaptureCreate( 
 LPGUID lpGUID, 
 LPDIRECTSOUNDCAPTURE* lplpDSC, 
 LPUNKNOWN pUnkOuter 
);

/* DirectSoundCaptureEnumerate  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT WINAPI DirectSoundCaptureEnumerate( 
 LPDSENUMCALLBACK lpDSEnumCallback, 
 LPVOID lpContext 
);

/* DirectSoundCreate  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT WINAPI DirectSoundCreate(
 LPGUID lpGuid, 
 LPDIRECTSOUND* ppDS, 
 LPUNKNOWN pUnkOuter 
);

/* DirectSoundEnumerate  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT WINAPI DirectSoundEnumerate( 
 LPDSENUMCALLBACK lpDSEnumCallback, 
 LPVOID lpContext 
);

/* DSEnumCallback  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
BOOL CALLBACK DSEnumCallback( 
 LPGUID lpGuid, 
 LPCSTR lpcstrDescription, 
 LPCSTR lpcstrModule, 
 LPVOID lpContext 
);

/* IDirectSound::Compact  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Compact();

/* IDirectSound::CreateSoundBuffer  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT CreateSoundBuffer( 
 LPCDSBUFFERDESC lpcDSBufferDesc, 
 LPLPDIRECTSOUNDBUFFER lplpDirectSoundBuffer, 
 IUnknown FAR* pUnkOuter 
);

/* IDirectSound::DuplicateSoundBuffer  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT DuplicateSoundBuffer( 
 LPDIRECTSOUNDBUFFER lpDsbOriginal, 
 LPLPDIRECTSOUNDBUFFER lplpDsbDuplicate 
);

/* IDirectSound::GetCaps  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetCaps( 
 LPDSCAPS lpDSCaps 
);

/* IDirectSound::Initialize  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Initialize( 
 LPGUID lpGuid 
);

/* IDirectSound::SetCooperativeLevel  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetCooperativeLevel( 
 HWND hwnd, 
 DWORD dwLevel 
);

/* IDirectSoundBuffer::GetCaps  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetCaps( 
 LPDSBCAPS lpDSBufferCaps 
);

/* IDirectSoundBuffer::GetCurrentPosition  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetCurrentPosition( 
 LPDWORD lpdwCurrentPlayCursor, 
 LPDWORD lpdwCurrentWriteCursor 
);

/* IDirectSoundBuffer::GetFormat  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetFormat( 
 LPWAVEFORMATEX lpwfxFormat, 
 DWORD dwSizeAllocated, 
 LPDWORD lpdwSizeWritten 
);

/* IDirectSoundBuffer::GetFrequency  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetFrequency( 
 LPDWORD lpdwFrequency 
);

/* IDirectSoundBuffer::GetPan  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetPan( 
 LPLONG lplPan 
);

/* IDirectSoundBuffer::GetStatus  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetStatus( 
 LPDWORD lpdwStatus 
);

/* IDirectSoundBuffer::GetVolume  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetVolume( 
 LPLONG lplVolume 
);

/* IDirectSoundBuffer::Initialize  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Initialize( 
 LPDIRECTSOUND lpDirectSound, 
 LPCDSBUFFERDESC lpcDSBufferDesc 
);

/* IDirectSoundBuffer::Lock  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Lock( 
 DWORD dwWriteCursor, 
 DWORD dwWriteBytes, 
 LPVOID lplpvAudioPtr1, 
 LPDWORD lpdwAudioBytes1, 
 LPVOID lplpvAudioPtr2, 
 LPDWORD lpdwAudioBytes2, 
 DWORD dwFlags 
);

/* IDirectSoundBuffer::Play  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Play( 
 DWORD dwReserved1, 
 DWORD dwReserved2, 
 DWORD dwFlags 
);

/* IDirectSoundBuffer::Restore  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Restore();

/* IDirectSoundBuffer::SetCurrentPosition  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetCurrentPosition( 
 DWORD dwNewPosition 
);

/* IDirectSoundBuffer::SetFormat  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetFormat( 
 LPCWAVEFORMATEX lpcfxFormat 
);

/* IDirectSoundBuffer::SetFrequency  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetFrequency( 
 DWORD dwFrequency 
);

/* IDirectSoundBuffer::SetPan  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetPan( 
 LONG lPan 
);

/* IDirectSoundBuffer::SetVolume  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetVolume( 
 LONG lVolume 
);

/* IDirectSoundBuffer::Stop  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Stop();

/* IDirectSoundBuffer::Unlock  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Unlock( 
 LPVOID lpvAudioPtr1, 
 DWORD dwAudioBytes1, 
 LPVOID lpvAudioPtr2, 
 DWORD dwAudioBytes2 
);

/* IDirectSoundCapture::CreateCaptureBuffer  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT CreateCaptureBuffer( 
 LPDSCBUFFERDESC lpDSCBufferDesc, 
 LPLPDIRECTSOUNDCAPTUREBUFFER lplpDirectSoundCaptureBuffer, 
 LPUNKNOWN pUnkOuter 
);

/* IDirectSoundCapture::GetCaps  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetCaps( 
 LPDSCCAPS lpDSCCaps 
);

/* IDirectSoundCapture::Initialize  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Initialize( 
 LPGUID lpGuid 
);

/* IDirectSoundCaptureBuffer::GetCaps  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetCaps( 
 LPDSCBCAPS lpDSCBCaps 
);

/* IDirectSoundCaptureBuffer::GetCurrentPosition  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetCurrentPosition( 
 LPDWORD lpdwCapturePosition, 
 LPDWORD lpdwReadPosition 
);

/* IDirectSoundCaptureBuffer::GetFormat  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetFormat( 
 LPWAVEFORMATEX lpwfxFormat, 
 DWORD dwSizeAllocated, 
 LPDWORD lpdwSizeWritten 
);

/* IDirectSoundCaptureBuffer::GetStatus  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT GetStatus( 
 DWORD* lpdwStatus 
);

/* IDirectSoundCaptureBuffer::Initialize  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Initialize( 
 LPDIRECTSOUNDCAPTURE lpDirectSoundCapture, 
 LPCDSBUFFERDESC lpcDSBufferDesc 
);

/* IDirectSoundCaptureBuffer::Lock  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Lock( 
 DWORD dwReadCursor, 
 DWORD dwReadBytes, 
 LPVOID* lplpvAudioPtr1, 
 LPDWORD lpdwAudioBytes1, 
 LPVOID* lplpvAudioPtr2, 
 LPDWORD lpdwAudioBytes2, 
 DWORD dwFlags 
);

/* IDirectSoundCaptureBuffer::Start  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Start( 
 DWORD dwFlags 
);

/* IDirectSoundCaptureBuffer::Stop  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Stop();

/* IDirectSoundCaptureBuffer::Unlock  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT Unlock( 
 LPVOID lpvAudioPtr1, 
 DWORD dwAudioBytes1, 
 LPVOID lpvAudioPtr2, 
 DWORD dwAudioBytes2 
);

/* IDirectSoundNotify::SetNotificationPositions  [function; ce-only; CE 3.0..499; Dsound.lib, dsound.lib] */
HRESULT SetNotificationPositions( 
 DWORD cPositionNotifies, 
 LPCDSBPOSITIONNOTIFY lpcPositionNotifies 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* IKsPropertySet::QuerySupport  [function; ce-only; CE 4.0..499; Dsound.lib] */
HRESULT QuerySupport(
 REFGUID PropertySetId, 
 ULONG PropertyId, 
 PULONG pSupport 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IKsPropertySet::Get  [function; ce-only; CE 4.0..699; Dsound.lib] */
HRESULT Get(
 REFGUID guidPropSet,
 DWORD dwPropID,
 LPVOID pInstanceData,
 DWORD cbInstanceData,
 LPVOID pPropData,
 DWORD cbPropData,
 DWORD* pcbReturned
);

/* IKsPropertySet::Set  [function; ce-only; CE 4.0..699; Dsound.lib] */
HRESULT Set(
 REFGUID guidPropSet,
 DWORD dwPropID,
 LPVOID pInstanceData,
 DWORD cbInstanceData,
 LPVOID pPropData,
 DWORD cbPropData
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef const DSBCAPS *LPCDSBCAPS;
typedef const DSBPOSITIONNOTIFY *LPCDSBPOSITIONNOTIFY;
typedef const DSBUFFERDESC *LPCDSBUFFERDESC;
typedef const DSCAPS *LPCDSCAPS;
typedef const DSCBCAPS *LPCDSCBCAPS;
typedef const DSCBUFFERDESC *LPCDSCBUFFERDESC;
typedef const DSCCAPS *LPCDSCCAPS;
typedef { DWORD dwSize;

/* struct */
typedef struct IDirectSound *LPDIRECTSOUND;
typedef struct IDirectSoundBuffer *LPDIRECTSOUNDBUFFER;
typedef struct IDirectSoundCapture *LPDIRECTSOUNDCAPTURE;
typedef struct IDirectSoundCaptureBuffer *LPDIRECTSOUNDCAPTUREBUFFER;
typedef struct IDirectSoundNotify *LPDIRECTSOUNDNOTIFY;
typedef struct IKsPropertySet *LPKSPROPERTYSET;

/* function */
HRESULT GetFormat( LPWAVEFORMATEX lpwfxFormat, DWORD dwSizeAllocated, LPDWORD lpdwSizeWritten );
HRESULT GetFrequency( LPDWORD lpdwFrequency );
HRESULT GetPan( LPLONG lplPan );
HRESULT GetVolume( LPLONG lplVolume );
HRESULT QuerySupport( REFGUID PropertySetId, ULONG PropertyId, PULONG pSupport );
HRESULT SetCurrentPosition( DWORD dwNewPosition );
HRESULT SetNotificationPositions( DWORD cPositionNotifies, LPCDSBPOSITIONNOTIFY lpcPositionNotifies );
HRESULT SetPan( LONG lPan );
HRESULT SetVolume( LONG lVolume );

#endif /* _DSOUND_ */
