/* Obex.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 54 declarations, 0 outlines, 0 base types, 0 extra macros, 33 extra decls
 */
#ifndef _OBEX_
#define _OBEX_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define OE_QUERY_PASSWORD 0

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* INBOX_EVENT_DATA  [struct; ce-only; CE 4.0..699] */
typedef struct _INBOX_EVENT_DATA {
 DWORD dwRequest;
 DWORD dwInboxEvent;
 LPCWSTR pszName;
 LPCWSTR pszInboxDestination;
 IHeaderCollection* pHeaderCol;
 IStream* pStream;
} INBOX_EVENT_DATA, *PINBOX_EVENT_DATA;

/* OBEX_EVENT  [enum; ce-only; CE 4.0..699] */
typedef enum _OBEX_EVENT {
 OE_QUERY_PASSWORD = 0,
 OE_NEW_CONNECTION = OE_QUERY_PASSWORD + 1,
 OE_NEW_COMMAND = OE_NEW_CONNECTION + 1,
 OE_ABORT = OE_NEW_COMMAND + 1,
 OE_DISCONNECT = OE_ABORT + 1,
 OE_DEVICE_ARRIVAL = OE_DISCONNECT + 1,
 OE_DEVICE_DEPARTURE = OE_DEVICE_ARRIVAL + 1,
 OE_DEVICE_UPDATE = OE_DEVICE_DEPARTURE + 1
} OBEX_EVENT, *LPOBEX_EVENT;

/* OBEX_HEADER  [struct; ce-only; CE 4.0..699] */
typedef struct _OBEX_HEADER {
 byte bId;
 [switch_is(bId & OBEX_HEADER_4BYTE)]
 union {
 [case(OBEX_HEADER_UNICODE)]
 [string] LPWSTR pszData;
 [case(OBEX_HEADER_4BYTE)]
 DWORD dwData;
 [case(OBEX_HEADER_1BYTE)]
 byte bData;
 [case(OBEX_HEADER_STREAM)]
 struct {
 DWORD dwSize; 
 [size_is(dwSize)] byte* pbaData;
 } ba;
 } value;
} OBEX_HEADER;

/* OBEX_REQUEST  [struct; ce-only; CE 4.0..699] */
typedef struct _OBEX_REQUEST {
 DWORD dwRequest;
 DWORD dwFlags;
 IHeaderCollection* pHeaderCol;
 BOOL fStream;
 IStream* pStream;
} OBEX_REQUEST, *POBEX_REQUEST;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IDeviceEnum::Next  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt,
 IObexDevice** rgelt,
 ULONG* pceltFetched
);

/* IDeviceEnum::Reset  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Reset ();

/* IDeviceEnum::Skip  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG celt
);

/* IHeaderCollection::AddAppParams  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddAppParams(
 unsigned long ulSize,
 byte* pData
);

/* IHeaderCollection::AddBody  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddBody(
 unsigned long ulSize, 
 byte* pData
);

/* IHeaderCollection::AddByte  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddByte(
 byte Id, 
 byte* pData
);

/* IHeaderCollection::AddByteArray  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddByteArray(
 byte Id, 
 unsigned long ulSize,
 byte* pData
);

/* IHeaderCollection::AddConnectionId  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddConnectionId(
 unsigned long ulConnectionId
);

/* IHeaderCollection::AddCount  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddCount(
 unsigned long ulCount 
);

/* IHeaderCollection::AddDescription  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddDescription(
 LPCWSTR pszDescription
);

/* IHeaderCollection::AddEndOfBody  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddEndOfBody(
 unsigned long ulSize, 
 byte* pData
);

/* IHeaderCollection::AddHTTP  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddHTTP(
 unsigned long ulSize, 
 byte* pData
);

/* IHeaderCollection::AddLength  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddLength(
 unsigned long ulLength
);

/* IHeaderCollection::AddLong  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddLong(
 byte Id, 
 unsigned long ulData
);

/* IHeaderCollection::AddName  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddName(
 LPCWSTR pszName
);

/* IHeaderCollection::AddObjectClass  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddObjectClass(
 unsigned long ulSize, 
 byte* pData
);

/* IHeaderCollection::AddTarget  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddTarget(
 unsigned long ulSize, 
 byte* pData
);

/* IHeaderCollection::AddTime  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddTime(
 FILETIME* pFiletime
);

/* IHeaderCollection::AddTimeOld  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddTimeOld(
 unsigned long ulTime 
);

/* IHeaderCollection::AddType  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddType(
 unsigned long ulSize, 
 byte* pData
);

/* IHeaderCollection::AddUnicodeString  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddUnicodeString(
 byte Id, 
 LPCWSTR pszData
);

/* IHeaderCollection::AddWho  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT AddWho(
 unsigned long ulSize,
 byte* pData
);

/* IHeaderCollection::EnumHeaders  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT EnumHeaders(
 IHeaderEnum** pHeaderEnum
);

/* IHeaderCollection::Remove  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Remove(
 byte Id
);

/* IHeaderCollection::RemoveAll  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT RemoveAll();

/* IHeaderEnum::Clone  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Clone(
 IHeaderEnum** ppenum
);

/* IHeaderEnum::Next  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt,
 OBEX_HEADER** rgelt,
 ULONG* pceltFetched
);

/* IHeaderEnum::Reset  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Reset ();

/* IObex::BindToDevice  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT BindToDevice(
 IPropertyBag* pPropertyBag, 
 IObexDevice** ppDevice
);

/* IObex::EnumDevices  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT EnumDevices(
 IDeviceEnum** ppDeviceEnum, 
 REFCLSID uuidTransport
);

/* IObex::EnumTransports  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT EnumTransports(
 IPropertyBagEnum** ppTransportEnum
);

/* IObex::Initialize  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Initialize();

/* IObex::Shutdown  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Shutdown();

/* IObex::StartDeviceEnum  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT StartDeviceEnum();

/* IObex::StopDeviceEnum  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT StopDeviceEnum();

/* IObexDevice::Abort  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Abort(
 IHeaderCollection* pHeaders
);

/* IObexDevice::Connect  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Connect(
 LPCWSTR pszPassword,
 DWORD dwCapability,
 IHeaderCollection* pHeaders
);

/* IObexDevice::Disconnect  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Disconnect(
 IHeaderCollection* pHeaders
);

/* IObexDevice::EnumProperties  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT EnumProperties(
 REFIID riid, 
 void** ppv
);

/* IObexDevice::Get  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Get(
 IHeaderCollection* pHeaders, 
 IStream** ppStream
);

/* IObexDevice::Put  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Put(
 IHeaderCollection* pHeaders, 
 IStream** ppStream
);

/* IObexDevice::SetPassword  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT SetPassword(
 LPCWSTR pszPassword
);

/* IObexDevice::SetPath  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT SetPath(
 LPCWSTR pszName,
 DWORD dwFlags,
 IHeaderCollection* pHeaders
);

/* IObexSink::Notify  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Notify(
 OBEX_EVENT Event,
 IUnknown* pUnk1,
 IUnknown* pUnk2
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IDeviceEnum::Clone  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Clone(
 IDeviceEnum * ppenum
);

/* IPropertyBagEnum::Clone  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Clone(
 IPropertyBagEnum * ppenum
);

/* IPropertyBagEnum::Next  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Next( 
 ULONG celt,
 LPPROPERTYBAG2 * rgelt,
 ULONG * pceltFetched 
);

/* IPropertyBagEnum::Reset  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Reset( void );

/* IPropertyBagEnum::Skip  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Skip( 
 ULONG celt 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IObexResponse::GetLastResponseCode  [function; ce-only; CE 6.0..699; Uuid.lib] */
HRESULT GetLastResponseCode(
 BYTE *pResponseCode
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum _OBEX_EVENT {OE_QUERY_PASSWORD = 0,OE_NEW_CONNECTION = OE_QUERY_PASSWORD + 1,OE_NEW_COMMAND = OE_NEW_CONNECTION + 1,OE_ABORT = OE_NEW_COMMAND + 1,OE_DISCONNECT = OE_ABORT + 1,OE_DEVICE_ARRIVAL = OE_DISCONNECT + 1,OE_DEVICE_DEPARTURE = OE_DEVICE_ARRIVAL + 1,OE_DEVICE_UPDATE = OE_DEVICE_DEPARTURE + 1 } OBEX_EVENT, *LPOBEX_EVENT;

/* struct */
typedef struct _INBOX_EVENT_DATA {DWORDdwRequest;DWORDdwInboxEvent;LPCWSTRpszName;LPCWSTRpszInboxDestination;IHeaderCollection* pHeaderCol;IStream* pStream;} INBOX_EVENT_DATA, *PINBOX_EVENT_DATA;
typedef struct _OBEX_REQUEST {DWORD dwRequest;DWORD dwFlags;IHeaderCollection* pHeaderCol;BOOL fStream;IStream* pStream;} OBEX_REQUEST, *POBEX_REQUEST;
typedef struct _OBEX_HEADER { byte bId; [switch_is(bId & OBEX_HEADER_4BYTE)] union { [case(OBEX_HEADER_UNICODE)] [string] LPWSTR pszData; [case(OBEX_HEADER_4BYTE)] DWORD dwData; [case(OBEX_HEADER_1BYTE)] byte bData; [case(OBEX_HEADER_STREAM)] struct { DWORD dwSize; [size_is(dwSize)] byte* pbaData; } ba;

/* function */
HRESULT Abort( IHeaderCollection* pHeaders );
HRESULT AddAppParams( unsigned long ulSize, byte* pData );
HRESULT AddBody( unsigned long ulSize, byte* pData );
HRESULT AddByte( byte Id, byte* pData );
HRESULT AddByteArray( byte Id, unsigned long ulSize, byte* pData );
HRESULT AddConnectionId( unsigned long ulConnectionId );
HRESULT AddCount( unsigned long ulCount );
HRESULT AddDescription( LPCWSTR pszDescription );
HRESULT AddEndOfBody( unsigned long ulSize, byte* pData );
HRESULT AddHTTP( unsigned long ulSize, byte* pData );
HRESULT AddLength( unsigned long ulLength );
HRESULT AddLong( byte Id, unsigned long ulData );
HRESULT AddName( LPCWSTR pszName );
HRESULT AddObjectClass( unsigned long ulSize, byte* pData );
HRESULT AddTarget( unsigned long ulSize, byte* pData );
HRESULT AddTime( FILETIME* pFiletime );
HRESULT AddTimeOld( unsigned long ulTime );
HRESULT AddType( unsigned long ulSize, byte* pData );
HRESULT AddUnicodeString( byte Id, LPCWSTR pszData );
HRESULT AddWho( unsigned long ulSize, byte* pData );
HRESULT BindToDevice( IPropertyBag* pPropertyBag, IObexDevice** ppDevice );
HRESULT EnumHeaders( IHeaderEnum** pHeaderEnum );
HRESULT Get( IHeaderCollection* pHeaders, IStream** ppStream );
HRESULT GetLastResponseCode( BYTE *pResponseCode );
HRESULT Put( IHeaderCollection* pHeaders, IStream** ppStream );
HRESULT SetPath( LPCWSTR pszName, DWORD dwFlags, IHeaderCollection* pHeaders );
HRESULT Shutdown();
HRESULT StartDeviceEnum();
HRESULT StopDeviceEnum();

#endif /* _OBEX_ */
