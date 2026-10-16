/* mmstream.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 20 declarations, 0 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _MMSTREAM_
#define _MMSTREAM_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define COMPSTAT_ABORT 0x04
#define COMPSTAT_NOUPDATEOK 0x01
#define COMPSTAT_WAIT 0x02
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IMediaStream::AllocateSample  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT AllocateSample(
 DWORD dwFlags,
 IStreamSample** ppSample
);

/* IMediaStream::CreateSharedSample  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT CreateSharedSample(
 IStreamSample* pExistingSample,
 DWORD dwFlags,
 IStreamSample** ppNewSample
);

/* IMediaStream::GetInformation  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetInformation(
 MSPID* pPurposeId,
 STREAM_TYPE* pType
);

/* IMediaStream::GetMultiMediaStream  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetMultiMediaStream(
 IMultiMediaStream** ppMultiMediaStream
);

/* IMediaStream::SendEndOfStream  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SendEndOfStream(
 DWORD dwFlags
);

/* IMediaStream::SetSameFormat  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetSameFormat(
 IMediaStream* pStreamThatHasDesiredFormat,
 DWORD dwFlags
);

/* IMultiMediaStream::EnumMediaStreams  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT EnumMediaStreams(
 long Index,
 IMediaStream** ppMediaStream
);

/* IMultiMediaStream::GetDuration  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetDuration(
 STREAM_TIME* pDuration
);

/* IMultiMediaStream::GetEndOfStreamEventHandle  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetEndOfStreamEventHandle(
 HANDLE* phEOS
);

/* IMultiMediaStream::GetInformation  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetInformation(
 DWORD* pdwFlags,
 STREAM_TYPE* pStreamType
);

/* IMultiMediaStream::GetMediaStream  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetMediaStream(
 REFMSPID idPurpose,
 IMediaStream** ppMediaStream
);

/* IMultiMediaStream::GetState  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetState(
 STREAM_STATE* pCurrentState
);

/* IMultiMediaStream::GetTime  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetTime(
 STREAM_TIME* pCurrentTime
);

/* IMultiMediaStream::Seek  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Seek(
 STREAM_TIME SeekTime
);

/* IMultiMediaStream::SetState  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetState(
 STREAM_STATE NewState
);

/* IStreamSample::CompletionStatus  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT CompletionStatus(
 DWORD dwFlags,
 DWORD dwMilliseconds
);

/* IStreamSample::GetMediaStream  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetMediaStream(
 IMediaStream** ppMediaStream
);

/* IStreamSample::GetSampleTimes  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetSampleTimes(
 STREAM_TIME* pStartTime,
 STREAM_TIME* pEndTime,
 STREAM_TIME* pCurrentTime
);

/* IStreamSample::SetSampleTimes  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT SetSampleTimes(
 const STREAM_TIME* pStartTime,
 const STREAM_TIME* pEndTime
);

/* IStreamSample::Update  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Update(
 DWORD dwFlags,
 HANDLE hEvent,
 PAPCFUNC pfnAPC,
 DWORD dwAPCData
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AllocateSample( DWORD dwFlags, IStreamSample **ppSample);
HRESULT CompletionStatus( DWORD dwFlags, DWORD dwMilliseconds);
HRESULT CreateSharedSample( IStreamSample *pExistingSample, DWORD dwFlags, IStreamSample **ppNewSample);
HRESULT EnumMediaStreams( long Index, IMediaStream **ppMediaStream);
HRESULT GetEndOfStreamEventHandle( HANDLE *phEOS);
HRESULT GetInformation( MSPID *pPurposeId, STREAM_TYPE *pType);
HRESULT GetMediaStream( REFMSPID idPurpose, IMediaStream **ppMediaStream);
HRESULT GetMultiMediaStream( IMultiMediaStream **ppMultiMediaStream);
HRESULT SetSameFormat( IMediaStream *pStreamThatHasDesiredFormat, DWORD dwFlags);
HRESULT SetSampleTimes( const STREAM_TIME *pStartTime, const STREAM_TIME *pEndTime);
HRESULT SetState( STREAM_STATE NewState);

#endif /* _MMSTREAM_ */
