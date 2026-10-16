/* Dmo.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 28 constants, 22 declarations, 7 outlines, 0 base types, 0 extra macros, 36 extra decls
 */
#ifndef _DMO_
#define _DMO_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DMO_E_INVALIDSTREAMINDEX 0x80040201
#define DMO_E_INVALIDTYPE 0x80040202
#define DMO_E_NO_MORE_ITEMS 0x80040206
#define DMO_E_NOTACCEPTING 0x80040204
#define DMO_E_TYPE_NOT_ACCEPTED 0x80040205
#define DMO_E_TYPE_NOT_SET 0x80040203
#define DMO_ENUMF_INCLUDE_KEYED 0x00000001
#define DMO_INPUT_DATA_BUFFERF_SYNCPOINT 0x00000001
#define DMO_INPUT_DATA_BUFFERF_TIME 0x00000002
#define DMO_INPUT_DATA_BUFFERF_TIMELENGTH 0x00000004
#define DMO_INPUT_STREAMF_FIXED_SAMPLE_SIZE 0x00000004
#define DMO_INPUT_STREAMF_HOLDS_BUFFERS 0x00000008
#define DMO_INPUT_STREAMF_SINGLE_SAMPLE_PER_BUFFER 0x00000002
#define DMO_INPUT_STREAMF_WHOLE_SAMPLES 0x00000001
#define DMO_OUTPUT_DATA_BUFFERF_INCOMPLETE 0x01000000
#define DMO_OUTPUT_DATA_BUFFERF_SYNCPOINT 0x00000001
#define DMO_OUTPUT_DATA_BUFFERF_TIME 0x00000002
#define DMO_OUTPUT_DATA_BUFFERF_TIMELENGTH 0x00000004
#define DMO_OUTPUT_STREAMF_DISCARDABLE 0x00000008
#define DMO_OUTPUT_STREAMF_FIXED_SAMPLE_SIZE 0x00000004
#define DMO_OUTPUT_STREAMF_OPTIONAL 0x00000010
#define DMO_OUTPUT_STREAMF_SINGLE_SAMPLE_PER_BUFFER 0x00000002
#define DMO_OUTPUT_STREAMF_WHOLE_SAMPLES 0x00000001
#define DMO_PROCESS_OUTPUT_DISCARD_WHEN_NO_BUFFER 0x00000001
#define DMO_REGISTERF_IS_KEYED 0x00000001
#define DMO_SET_TYPEF_CLEAR 0x00000002
#define DMO_SET_TYPEF_TEST_ONLY 0x00000001
#define DMO_VOSF_NEEDS_PREVIOUS_SAMPLE 0x00000001

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IDMOQualityControl  [interface; shared; CE 5.0..599; Dmoguid.lib] */

/* IDMOVideoOutputOptimizations  [interface; shared; CE 5.0..599; Dmoguid.lib] */

/* IEnumDMO  [interface; shared; CE 5.0..599; Dmoguid.lib] */

/* IMediaBuffer  [interface; shared; CE 5.0..599; Dmoguid.lib] */

/* IMediaObject  [interface; shared; CE 5.0..599; Dmoguid.lib] */

/* IMediaObjectInPlace  [interface; shared; CE 5.0..599; Dmoguid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DMO_MEDIA_TYPE  [struct, typedef; shared; Dmoguid.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   majortype */
/*   subtype */
/*   bFixedSizeSamples */
/*   bTemporalCompression */
/*   lSampleSize */
/*   formattype */
/*   pUnk */
/*   cbFormat */
/*   pbFormat */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DMOEnum  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT DMOEnum(
 REFGUID guidCategory,
 DWORD dwFlags,
 DWORD cInTypes,
 const DMO_PARTIAL_MEDIATYPE* pInTypes,
 DWORD cOutTypes,
 const DMO_PARTIAL_MEDIATYPE* pOutTypes,
 IEnumDMO** ppEnum
);

/* DMOGetName  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT DMOGetName(
 REFCLSID clsidDMO,
 WCHAR szName[]
);

/* DMOGetTypes  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT DMOGetTypes(
 REFCLSID clsidDMO,
 unsigned long ulInputTypesRequested,
 unsigned long* pulInputTypesSupplied,
 DMO_PARTIAL_MEDIATYPE* pInputTypes,
 unsigned long ulOutputTypesRequested,
 unsigned long* pulOutputTypesSupplied,
 DMO_PARTIAL_MEDIATYPE* pOutputTypes
);

/* DMOUnregister  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT DMOUnregister(
 REFCLSID clsidDMO,
 REFGUID guidCategory
);

/* MoCopyMediaType  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT MoCopyMediaType(
 DMO_MEDIA_TYPE* pmtDest, 
 const DMO_MEDIA_TYPE* pmtSrc
);

/* MoCreateMediaType  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT MoCreateMediaType(
 DMO_MEDIA_TYPE** ppmt, 
 DWORD cbFormat
);

/* MoDeleteMediaType  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT MoDeleteMediaType(
 DMO_MEDIA_TYPE* pmt
);

/* MoDuplicateMediaType  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT MoDuplicateMediaType(
 DMO_MEDIA_TYPE** ppmtDest, 
 const DMO_MEDIA_TYPE* pmtSrc
);

/* MoFreeMediaType  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT MoFreeMediaType(
 DMO_MEDIA_TYPE* pmt
);

/* MoInitMediaType  [function; shared; CE 4.0..699; Msdmo.lib, msdmo.lib] */
HRESULT MoInitMediaType(
 DMO_MEDIA_TYPE* pmt, 
 DWORD cbFormat
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DMOUnregisterFilter  [function; ce-only; CE 5.0..699; Msdmo.lib, msdmo.lib] */
HRESULT DMOUnregisterFilter(
 REFCLSID clsidAutoWrap,
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum _DMO_SET_TYPE_FLAGS { DMO_SET_TYPEF_TEST_ONLY = 0x00000001, DMO_SET_TYPEF_CLEAR = 0x00000002};
enum _DMO_INPUT_STREAM_INFO_FLAGS { DMO_INPUT_STREAMF_WHOLE_SAMPLES = 0x00000001, DMO_INPUT_STREAMF_SINGLE_SAMPLE_PER_BUFFER = 0x00000002, DMO_INPUT_STREAMF_FIXED_SAMPLE_SIZE = 0x00000004, DMO_INPUT_STREAMF_HOLDS_BUFFERS = 0x00000008};
enum _DMO_OUTPUT_STREAM_INFO_FLAGS { DMO_OUTPUT_STREAMF_WHOLE_SAMPLES = 0x00000001, DMO_OUTPUT_STREAMF_SINGLE_SAMPLE_PER_BUFFER = 0x00000002, DMO_OUTPUT_STREAMF_FIXED_SAMPLE_SIZE = 0x00000004, DMO_OUTPUT_STREAMF_DISCARDABLE = 0x00000008, DMO_OUTPUT_STREAMF_OPTIONAL = 0x00000010};
enum _DMO_OUTPUT_DATA_BUFFER_FLAGS { DMO_OUTPUT_DATA_BUFFERF_SYNCPOINT = 0x00000001, DMO_OUTPUT_DATA_BUFFERF_TIME = 0x00000002, DMO_OUTPUT_DATA_BUFFERF_TIMELENGTH = 0x00000004, DMO_OUTPUT_DATA_BUFFERF_INCOMPLETE = 0x01000000};

/* struct */
typedef struct _DMO_OUTPUT_DATA_BUFFER {IMediaBuffer* pBuffer;DWORDdwStatus;REFERENCE_TIMErtTimestamp;REFERENCE_TIMErtTimelength;} DMO_OUTPUT_DATA_BUFFER, *PDMO_OUTPUT_DATA_BUFFER;
typedef struct _DMO_PARTIAL_MEDIATYPE {GUIDtype;GUIDsubtype;} DMO_PARTIAL_MEDIATYPE, *PDMO_PARTIAL_MEDIATYPE;

/* function */
HRESULT AllocateStreamingResources(void);
HRESULT Discontinuity( DWORD dwInputStreamIndex );
HRESULT FreeStreamingResources(void);
HRESULT GetBufferAndLength( BYTE** ppBuffer, DWORD* pcbLength );
HRESULT GetCurrentOperationMode( ULONG ulOutputStreamIndex, DWORD* pdwEnabledFeatures );
HRESULT GetCurrentSampleRequirements( ULONG ulOutputStreamIndex, DWORD* pdwRequestedFeatures );
HRESULT GetInputCurrentType( DWORD dwInputStreamIndex, DMO_MEDIA_TYPE* pmt );
HRESULT GetInputMaxLatency( DWORD dwInputStreamIndex, REFERENCE_TIME* prtMaxLatency );
HRESULT GetInputSizeInfo( DWORD dwInputStreamIndex, DWORD* pcbSize, DWORD* pcbMaxLookahead, DWORD* pcbAlignment );
HRESULT GetInputStatus( DWORD dwInputStreamIndex, DWORD* dwFlags );
HRESULT GetInputStreamInfo( DWORD dwInputStreamIndex, DWORD* pdwFlags );
HRESULT GetInputType( DWORD dwInputStreamIndex, DWORD dwTypeIndex, DMO_MEDIA_TYPE* pmt );
HRESULT GetLatency( REFERENCE_TIME* pLatencyTime );
HRESULT GetMaxLength( DWORD* pcbMaxLength );
HRESULT GetOutputCurrentType( DWORD dwOutputStreamIndex, DMO_MEDIA_TYPE* pmt );
HRESULT GetOutputSizeInfo( DWORD dwOutputStreamIndex, DWORD* pcbSize, DWORD* pcbAlignment );
HRESULT GetOutputStreamInfo( DWORD dwOutputStreamIndex, DWORD* pdwFlags );
HRESULT GetOutputType( DWORD dwOutputStreamIndex, DWORD dwTypeIndex, DMO_MEDIA_TYPE* pmt );
HRESULT GetStreamCount( DWORD* pcInputStreams, DWORD* pcOutputStreams );
HRESULT Process( ULONG ulSize, BYTE* pData REFERENCE_TIME refTimeStart, DWORD dwFlags );
HRESULT ProcessInput( DWORD dwInputStreamIndex, IMediaBuffer* pBuffer, DWORD dwFlags, REFERENCE_TIME rtTimestamp, REFERENCE_TIME rtTimelength );
HRESULT ProcessOutput( DWORD dwFlags, DWORD cOutputBufferCount, DMO_OUTPUT_DATA_BUFFER* pOutputBuffers, DWORD* pdwStatus );
HRESULT QueryOperationModePreferences( ULONG ulOutputStreamIndex, DWORD* pdwRequestedCapabilities );
HRESULT SetInputMaxLatency( DWORD dwInputStreamIndex, REFERENCE_TIME rtMaxLatency );
HRESULT SetInputType( DWORD dwInputStreamIndex, const DMO_MEDIA_TYPE* pmt, DWORD dwFlags );
HRESULT SetLength( DWORD cbLength );
HRESULT SetNow( REFERENCE_TIME rtNow );
HRESULT SetOperationMode( ULONG ulOutputStreamIndex, DWORD dwEnabledFeatures );
HRESULT SetOutputType( DWORD dwOutputStreamIndex, const DMO_MEDIA_TYPE* pmt, DWORD dwFlags );
HRESULT SetStatus( DWORD dwFlags );

#endif /* _DMO_ */
