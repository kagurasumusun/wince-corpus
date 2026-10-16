/* Obex.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 31 extra decls
 */
#ifndef _OBEX_
#define _OBEX_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* INBOX_EVENT_DATA  [struct; ce-only] */
typedef struct _INBOX_EVENT_DATA {
 DWORD dwRequest;
 DWORD dwInboxEvent;
 LPCWSTR pszName;
 LPCWSTR pszInboxDestination;
 IHeaderCollection* pHeaderCol;
 IStream* pStream;
} INBOX_EVENT_DATA, *PINBOX_EVENT_DATA;

/* OBEX_EVENT  [enum; ce-only] */
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

/* OBEX_REQUEST  [struct; ce-only] */
typedef struct _OBEX_REQUEST {
 DWORD dwRequest;
 DWORD dwFlags;
 IHeaderCollection* pHeaderCol;
 BOOL fStream;
 IStream* pStream;
} OBEX_REQUEST, *POBEX_REQUEST;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

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
