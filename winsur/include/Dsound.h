/* Dsound.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 23 extra decls
 */
#ifndef _DSOUND_
#define _DSOUND_


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
