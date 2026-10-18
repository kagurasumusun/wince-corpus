/* Obex.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 2 outlines, 0 base types, 0 extra macros, 23 extra decls
 */
#ifndef _OBEX_
#define _OBEX_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* INBOX_EVENT_DATA  [struct; ce-only] */

/* OBEX_REQUEST  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* OBEX_EVENT  [enum; ce-only] */
#ifndef __WINCE_DEFINED__OBEX_EVENT
#define __WINCE_DEFINED__OBEX_EVENT
#ifndef __WINCE_DEFINED_OBEX_EVENT
#define __WINCE_DEFINED_OBEX_EVENT
#ifndef __WINCE_DEFINED_LPOBEX_EVENT
#define __WINCE_DEFINED_LPOBEX_EVENT
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
#endif /* __WINCE_DEFINED_LPOBEX_EVENT */
#endif /* __WINCE_DEFINED_OBEX_EVENT */
#endif /* __WINCE_DEFINED__OBEX_EVENT */

/* OBEX_HEADER  [struct; ce-only] */
#ifndef __WINCE_DEFINED__OBEX_HEADER
#define __WINCE_DEFINED__OBEX_HEADER
#ifndef __WINCE_DEFINED_OBEX_HEADER
#define __WINCE_DEFINED_OBEX_HEADER
typedef struct _OBEX_HEADER {
 byte bId;

 union {

 LPWSTR pszData;

 DWORD dwData;

 byte bData;

 struct {
 DWORD dwSize;
 byte* pbaData;
 } ba;
 } value;
} OBEX_HEADER;
#endif /* __WINCE_DEFINED_OBEX_HEADER */
#endif /* __WINCE_DEFINED__OBEX_HEADER */
#ifndef __WINCE_DEFINED_POBEX_HEADER
#define __WINCE_DEFINED_POBEX_HEADER
typedef OBEX_HEADER *POBEX_HEADER, *LPOBEX_HEADER;
#endif /* __WINCE_DEFINED_POBEX_HEADER */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddAppParams(unsigned long ulSize, byte* pData);
HRESULT AddBody(unsigned long ulSize, byte* pData);
HRESULT AddByte(byte Id, byte* pData);
HRESULT AddByteArray(byte Id, unsigned long ulSize, byte* pData);
HRESULT AddConnectionId(unsigned long ulConnectionId);
HRESULT AddCount(unsigned long ulCount);
HRESULT AddDescription(LPCWSTR pszDescription);
HRESULT AddEndOfBody(unsigned long ulSize, byte* pData);
HRESULT AddHTTP(unsigned long ulSize, byte* pData);
HRESULT AddLength(unsigned long ulLength);
HRESULT AddLong(byte Id, unsigned long ulData);
HRESULT AddName(LPCWSTR pszName);
HRESULT AddObjectClass(unsigned long ulSize, byte* pData);
HRESULT AddTarget(unsigned long ulSize, byte* pData);
HRESULT AddTime(FILETIME* pFiletime);
HRESULT AddTimeOld(unsigned long ulTime);
HRESULT AddType(unsigned long ulSize, byte* pData);
HRESULT AddUnicodeString(byte Id, LPCWSTR pszData);
HRESULT AddWho(unsigned long ulSize, byte* pData);
HRESULT GetLastResponseCode(BYTE *pResponseCode);
HRESULT Shutdown();
HRESULT StartDeviceEnum();
HRESULT StopDeviceEnum();

#endif /* _OBEX_ */
