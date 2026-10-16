/* wsdapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 220 declarations, 5 outlines, 0 base types, 0 extra macros, 94 extra decls
 */
#ifndef _WSDAPI_
#define _WSDAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WSDAPI_OPTION_MAX_INBOUND_MESSAGE_SIZE 0x0001
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define ONE_WAY 0
#define TWO_WAY 1
#define WSD_PT_ALL 0xff
#define WSD_PT_HTTP 0x02
#define WSD_PT_HTTPS 0x04
#define WSD_PT_NONE 0x00
#define WSD_PT_UDP 0x01
#define WSDET_INCOMING_FAULT 2
#define WSDET_INCOMING_MESSAGE 1
#define WSDET_NONE 0
#define WSDET_RESPONSE_TIMEOUTWSDET_RESPONSE_TIMEOUT 4
#define WSDET_TRANSMISSION_FAILURE 3
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IWSDAttachment  [interface; shared; CE 6.0..699; wsdapi.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PWSD_SOAP_MESSAGE_HANDLER  [callback; shared; CE 6.0..699; wsdapi.lib] */
typedef HRESULT ( *PWSD_SOAP_MESSAGE_HANDLER )(
 IUnknown* thisUnknown,
 WSD_EVENT* event
);

/* REQUESTBODY_GetStatus  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSDXML_ELEMENT* Any;
} REQUESTBODY_GetStatus;

/* REQUESTBODY_Renew  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} REQUESTBODY_Renew;

/* REQUESTBODY_Subscribe  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_ENDPOINT_REFERENCE* EndTo;
 WSD_EVENTING_DELIVERY_MODE* Delivery;
 WSD_EVENTING_EXPIRES* Expires;
 WSD_EVENTING_FILTER* Filter;
 WSDXML_ELEMENT* Any;
} REQUESTBODY_Subscribe;

/* REQUESTBODY_Unsubscribe  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSDXML_ELEMENT* Any;
} REQUESTBODY_Unsubscribe;

/* RESPONSEBODY_GetMetadata  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_METADATA_SECTION_LIST* Metadata;
} RESPONSEBODY_GetMetadata;

/* RESPONSEBODY_GetStatus  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_GetStatus;

/* RESPONSEBODY_Renew  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_Renew;

/* RESPONSEBODY_Subscribe  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_ENDPOINT_REFERENCE* SubscriptionManager;
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_Subscribe;

/* RESPONSEBODY_SubscriptionEnd  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct {
 WSD_ENDPOINT_REFERENCE* SubscriptionManager;
 const WCHAR* Status;
 WSD_LOCALIZED_STRING* Reason;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_SubscriptionEnd;

/* WSD_APP_SEQUENCE  [struct; shared; CE 6.0..699; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   InstanceId */
/*   SequenceId */
/*   MessageNumber */

/* WSD_BYE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_BYE {
 WSD_ENDPOINT_REFERENCE* EndpointReference;
 WSDXML_ELEMENT* Any;
} WSD_BYE;

/* WSD_DATETIME  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_DATETIME {
 BOOL isPositive;
 ULONG year;
 UCHAR month;
 UCHAR day;
 UCHAR hour;
 UCHAR minute;
 UCHAR second;
 UINT millisecond;
 BOOL TZIsLocal;
 BOOL TZIsPositive;
 UCHAR TZHour;
 UCHAR TZMinute;
} WSD_DATETIME;

/* WSD_DURATION  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_DURATION {
 BOOL isPositive;
 ULONG year;
 ULONG month;
 ULONG day;
 ULONG hour;
 ULONG minute;
 ULONG second;
 ULONG millisecond;
} WSD_DURATION;

/* WSD_ENDPOINT_REFERENCE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_ENDPOINT_REFERENCE {
 const WCHAR* Address;
 WSD_REFERENCE_PROPERTIES ReferenceProperties;
 WSD_REFERENCE_PARAMETERS ReferenceParameters;
 WSDXML_NAME* PortType;
 WSDXML_NAME* ServiceName;
 WSDXML_ELEMENT* Any;
} WSD_ENDPOINT_REFERENCE;

/* WSD_ENDPOINT_REFERENCE_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_ENDPOINT_REFERENCE_LIST {
 WSD_ENDPOINT_REFERENCE_LIST* Next;
 WSD_ENDPOINT_REFERENCE* Element;
} WSD_ENDPOINT_REFERENCE_LIST;

/* WSD_EVENT  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_EVENT {
 HRESULT Hr;
 DWORD EventType;
 WCHAR* DispatchTag;
 WSD_HANDLER_CONTEXT HandlerContext;
 WSD_SOAP_MESSAGE* Soap;
 WSD_OPERATION* Operation;
 IUnknown* MessageParameters;
} WSD_EVENT;

/* WSD_EVENTING_DELIVERY_MODE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_EVENTING_DELIVERY_MODE {
 const WCHAR* Mode;
 void* Data;
} WSD_EVENTING_DELIVERY_MODE;

/* WSD_EVENTING_DELIVERY_MODE_PUSH  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_EVENTING_DELIVERY_MODE_PUSH {
 WSD_ENDPOINT_REFERENCE* NotifyTo;
} WSD_EVENTING_DELIVERY_MODE_PUSH;

/* WSD_EVENTING_EXPIRES  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_EVENTING_EXPIRES {
 WSD_DURATION* Duration;
 WSD_DATETIME* DateTime;
} WSD_EVENTING_EXPIRES;

/* WSD_EVENTING_FILTER  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_EVENTING_FILTER {
 const WCHAR* Dialect;
 void* Data;
} WSD_EVENTING_FILTER;

/* WSD_EVENTING_FILTER_ACTION  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_EVENTING_FILTER_ACTION {
 WSD_URI_LIST* Actions;
} WSD_EVENTING_FILTER_ACTION;

/* WSD_HANDLER_CONTEXT  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_HANDLER_CONTEXT {
 PWSD_SOAP_MESSAGE_HANDLER Handler;
 void* PVoid;
 IUnknown* Unknown;
} WSD_HANDLER_CONTEXT;

/* WSD_HEADER_RELATESTO  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_HEADER_RELATESTO {
 WSDXML_NAME* RelationshipType;
 const WCHAR* MessageID;
} WSD_HEADER_RELATESTO;

/* WSD_HELLO  [struct; shared; CE 6.0..699; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   EndpointReference */
/*   Types */
/*   Scopes */
/*   XAddrs */
/*   MetadataVersion */
/*   Any */

/* WSD_HOST_METADATA  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_HOST_METADATA {
 WSD_SERVICE_METADATA* Host;
 WSD_SERVICE_METADATA_LIST* Hosted;
} WSD_HOST_METADATA;

/* WSD_LOCALIZED_STRING  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_LOCALIZED_STRING {
 const WCHAR* Lang;
 const WCHAR* String;
} WSD_LOCALIZED_STRING;

/* WSD_LOCALIZED_STRING_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_LOCALIZED_STRING_LIST {
 WSD_LOCALIZED_STRING_LIST* Next;
 WSD_LOCALIZED_STRING* Element;
} WSD_LOCALIZED_STRING_LIST;

/* WSD_METADATA_SECTION  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_METADATA_SECTION {
 const WCHAR* Dialect;
 const WCHAR* Identifier;
 void* Data;
 WSD_ENDPOINT_REFERENCE* MetadataReference;
 const WCHAR* Location;
 WSDXML_ELEMENT* Any;
} WSD_METADATA_SECTION;

/* WSD_METADATA_SECTION_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_METADATA_SECTION_LIST {
 WSD_METADATA_SECTION_LIST* Next;
 WSD_METADATA_SECTION* Element;
} WSD_METADATA_SECTION_LIST;

/* WSD_NAME_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_NAME_LIST {
 WSD_NAME_LIST* Next;
 WSDXML_NAME* Element;
} WSD_NAME_LIST;

/* WSD_OPERATION  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_OPERATION {
 WSDXML_TYPE* RequestType;
 WSDXML_TYPE* ResponseType;
 WSD_STUB_FUNCTION RequestStubFunction;
} WSD_OPERATION;

/* WSD_PORT_TYPE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_PORT_TYPE {
 DWORD EncodedName;
 DWORD OperationCount;
 WSD_OPERATION* Operations;
 WSD_PROTOCOL_TYPE ProtocolType;
} WSD_PORT_TYPE;

/* WSD_PROBE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_PROBE {
 WSD_NAME_LIST* Types;
 WSD_SCOPES* Scopes;
 WSDXML_ELEMENT* Any;
} WSD_PROBE;

/* WSD_PROBE_MATCH  [struct; shared; CE 6.0..699; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   EndpointReference */
/*   Types */
/*   Scopes */
/*   XAddrs */
/*   MetadataVersion */
/*   Any */

/* WSD_PROBE_MATCH_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_PROBE_MATCH_LIST {
 WSD_PROBE_MATCH_LIST* Next;
 WSD_PROBE_MATCH* Element;
} WSD_PROBE_MATCH_LIST;

/* WSD_PROBE_MATCHES  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_PROBE_MATCHES {
 WSD_PROBE_MATCH_LIST* ProbeMatch;
 WSDXML_ELEMENT* Any;
} WSD_PROBE_MATCHES;

/* WSD_PROTOCOL_TYPE  [enum; shared; CE 6.0..699; wsdapi.lib] */
typedef enum _WSD_PROTOCOL_TYPE
{
 WSD_PT_NONE = 0x00,
 WSD_PT_UDP = 0x01,
 WSD_PT_HTTP = 0x02,
 WSD_PT_HTTPS = 0x04,
 WSD_PT_ALL = 0xff
}WSD_PROTOCOL_TYPE;

/* WSD_REFERENCE_PARAMETERS  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_REFERENCE_PARAMETERS {
 WSDXML_ELEMENT* Any;
} WSD_REFERENCE_PARAMETERS;

/* WSD_REFERENCE_PROPERTIES  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_REFERENCE_PROPERTIES {
 WSDXML_ELEMENT* Any;
} WSD_REFERENCE_PROPERTIES;

/* WSD_RELATIONSHIP_METADATA  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_RELATIONSHIP_METADATA {
 const WCHAR* Type;
 WSD_HOST_METADATA* Data;
 WSDXML_ELEMENT* Any;
} WSD_RELATIONSHIP_METADATA;

/* WSD_RESOLVE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_RESOLVE {
 WSD_ENDPOINT_REFERENCE* EndpointReference;
 WSDXML_ELEMENT* Any;
} WSD_RESOLVE;

/* WSD_RESOLVE_MATCH  [struct; shared; CE 6.0..699; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   EndpointReference */
/*   Types */
/*   Scopes */
/*   XAddrs */
/*   MetadataVersion */
/*   Any */

/* WSD_RESOLVE_MATCHES  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_RESOLVE_MATCHES {
 WSD_RESOLVE_MATCH* ResolveMatch;
 WSDXML_ELEMENT* Any;
} WSD_RESOLVE_MATCHES;

/* WSD_SCOPES  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SCOPES {
 const WCHAR* MatchBy;
 WSD_URI_LIST* Scopes;
} WSD_SCOPES;

/* WSD_SERVICE_METADATA  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SERVICE_METADATA {
 WSD_ENDPOINT_REFERENCE_LIST* EndpointReference;
 WSD_NAME_LIST* Types;
 const WCHAR* ServiceId;
 WSDXML_ELEMENT* Any;
} WSD_SERVICE_METADATA;

/* WSD_SERVICE_METADATA_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SERVICE_METADATA_LIST {
 WSD_SERVICE_METADATA_LIST* Next;
 WSD_SERVICE_METADATA* Element;
} WSD_SERVICE_METADATA_LIST;

/* WSD_SOAP_FAULT  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SOAP_FAULT {
 WSD_SOAP_FAULT_CODE* Code;
 WSD_SOAP_FAULT_REASON* Reason;
 const WCHAR* Node;
 const WCHAR* Role;
 WSDXML_ELEMENT* Detail;
} WSD_SOAP_FAULT;

/* WSD_SOAP_FAULT_CODE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SOAP_FAULT_CODE {
 WSDXML_NAME* Value;
 WSD_SOAP_FAULT_SUBCODE* Subcode;
} WSD_SOAP_FAULT_CODE;

/* WSD_SOAP_FAULT_REASON  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SOAP_FAULT_REASON {
 WSD_LOCALIZED_STRING_LIST* Text;
} WSD_SOAP_FAULT_REASON;

/* WSD_SOAP_FAULT_SUBCODE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SOAP_FAULT_SUBCODE {
 WSDXML_NAME* Value;
 WSD_SOAP_FAULT_SUBCODE* Subcode;
} WSD_SOAP_FAULT_SUBCODE;

/* WSD_SOAP_HEADER  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SOAP_HEADER {
 const WCHAR* To;
 const WCHAR* Action;
 const WCHAR* MessageID;
 WSD_HEADER_RELATESTO RelatesTo;
 WSD_ENDPOINT_REFERENCE* ReplyTo;
 WSD_ENDPOINT_REFERENCE* From;
 WSD_ENDPOINT_REFERENCE* FaultTo;
 WSD_APP_SEQUENCE* AppSequence;
 WSDXML_ELEMENT* AnyHeaders;
} WSD_SOAP_HEADER;

/* WSD_SOAP_MESSAGE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SOAP_MESSAGE {
 WSD_SOAP_HEADER Header;
 void* Body;
 WSDXML_TYPE* BodyType;
} WSD_SOAP_MESSAGE;

/* WSD_STUB_FUNCTION  [callback; shared; CE 6.0..699; wsdapi.lib] */
typedef HRESULT ( *WSD_STUB_FUNCTION )(
 IUnknown* server,
 IWSDServiceMessaging* session,
 WSD_EVENT* event
);

/* WSD_SYNCHRONOUS_RESPONSE_CONTEXT  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_SYNCHRONOUS_RESPONSE_CONTEXT {
 HRESULT hr;
 HANDLE eventHandle;
 IWSDMessageParameters* messageParameters;
 void* results;
} WSD_SYNCHRONOUS_RESPONSE_CONTEXT;

/* WSD_THIS_DEVICE_METADATA  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_THIS_DEVICE_METADATA {
 WSD_LOCALIZED_STRING_LIST* FriendlyName;
 const WCHAR* FirmwareVersion;
 const WCHAR* SerialNumber;
 WSDXML_ELEMENT* Any;
} WSD_THIS_DEVICE_METADATA;

/* WSD_THIS_MODEL_METADATA  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_THIS_MODEL_METADATA {
 WSD_LOCALIZED_STRING_LIST* Manufacturer;
 const WCHAR* ManufacturerUrl;
 WSD_LOCALIZED_STRING_LIST* ModelName;
 const WCHAR* ModelNumber;
 const WCHAR* ModelUrl;
 const WCHAR* PresentationUrl;
 WSDXML_ELEMENT* Any;
} WSD_THIS_MODEL_METADATA;

/* WSD_UNKNOWN_LOOKUP  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_UNKNOWN_LOOKUP {
 WSDXML_ELEMENT* Any;
} WSD_UNKNOWN_LOOKUP;

/* WSD_URI_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSD_URI_LIST {
 WSD_URI_LIST* Next;
 const WCHAR* Element;
} WSD_URI_LIST;

/* WSDEventType  [enum; shared; CE 6.0..699; wsdapi.lib] */
typedef enum _WSDEventType
{
 WSDET_NONE = 0,
 WSDET_INCOMING_MESSAGE = 1,
 WSDET_INCOMING_FAULT = 2,
 WSDET_TRANSMISSION_FAILURE = 3,
 WSDET_RESPONSE_TIMEOUTWSDET_RESPONSE_TIMEOUT = 4
}WSDEventType;

/* WSDUdpMessageType  [enum; shared; CE 6.0..699; wsdapi.lib] */
typedef enum _WSDUdpMessageType
{
 ONE_WAY = 0,
 TWO_WAY = 1
}WSDUdpMessageType;

/* WSDUdpRetransmitParams  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDUpdRetransmitParams {
 ULONG ulSendDelay;
 ULONG ulRepeat;
 ULONG ulRepeatMinDelay;
 ULONG ulRepeatMaxDelay;
 ULONG ulRepeatUpperDelay;
} WSDUdpRetransmitParams, *PWSDUdpRetransmitParams;

/* WSDXML_ATTRIBUTE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_ATTRIBUTE {
 WSDXML_ELEMENT* Element;
 WSDXML_ATTRIBUTE* Next;
 WSDXML_NAME* Name;
 WCHAR* Value;
} WSDXML_ATTRIBUTE;

/* WSDXML_ELEMENT  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_ELEMENT {
 WSDXML_NODE Node;
 WSDXML_NAME* Name;
 WSDXML_ATTRIBUTE* FirstAttribute;
 WSDXML_NODE* FirstChild;
 WSDXML_PREFIX_MAPPING* PrefixMappings;
} WSDXML_ELEMENT;

/* WSDXML_ELEMENT_LIST  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_ELEMENT_LIST {
 WSDXML_ELEMENT_LIST* Next;
 WSDXML_ELEMENT* Element;
} WSDXML_ELEMENT_LIST;

/* WSDXML_NAME  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_NAME {
 WSDXML_NAMESPACE* Space;
 WCHAR* LocalName;
} WSDXML_NAME;

/* WSDXML_NAMESPACE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_NAMESPACE {
 const WCHAR* Uri;
 const WCHAR* PreferredPrefix;
 WSDXML_NAME* Names;
 WORD NamesCount;
 WORD Encoding;
} WSDXML_NAMESPACE;

/* WSDXML_NODE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_NODE {
 enum {
 ElementType,
 TextType
 } Type;
 WSDXML_ELEMENT* Parent;
 WSDXML_NODE* Next;
} WSDXML_NODE;

/* WSDXML_PREFIX_MAPPING  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_PREFIX_MAPPING {
 DWORD Refs;
 WSDXML_PREFIX_MAPPING* Next;
 WSDXML_NAMESPACE* Space;
 WCHAR* Prefix;
} WSDXML_PREFIX_MAPPING;

/* WSDXML_TEXT  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_TEXT {
 WSDXML_NODE Node;
 WCHAR* Text;
} WSDXML_TEXT;

/* WSDXML_TYPE  [struct; shared; CE 6.0..699; wsdapi.lib] */
typedef struct _WSDXML_TYPE {
 WCHAR* Uri;
 BYTE* Table;
} WSDXML_TYPE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IWSDAddress::Deserialize  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Deserialize(
 LPCWSTR pszBuffer
);

/* IWSDAddress::Serialize  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Serialize(
 LPWSTR pszBuffer,
 DWORD cchLength,
 BOOL fSafe
);

/* IWSDAsyncCallback::AsyncOperationComplete  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT AsyncOperationComplete(
 IWSDAsyncResult* pAsyncResult,
 IUnknown* pAsyncState
);

/* IWSDAsyncResult::Abort  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Abort();

/* IWSDAsyncResult::GetAsyncState  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetAsyncState(
 IUnknown** ppAsyncState
);

/* IWSDAsyncResult::GetEndpointProxy  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetEndpointProxy(
 IWSDEndpointProxy** ppEndpoint
);

/* IWSDAsyncResult::GetEvent  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetEvent(
 WSD_EVENT* pEvent
);

/* IWSDAsyncResult::HasCompleted  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT HasCompleted();

/* IWSDAsyncResult::SetCallback  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetCallback(
 IWSDAsyncCallback* pCallback,
 IUnknown* pAsyncState
);

/* IWSDAsyncResult::SetWaitHandle  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetWaitHandle(
 HANDLE hWaitHandle
);

/* IWSDDeviceHost::AddDynamicService  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT AddDynamicService(
 LPCWSTR pszServiceId,
 LPCWSTR pszEndpointAddress,
 const WSD_PORT_TYPE* pPortType,
 const WSDXML_NAME* pPortName,
 const WSDXML_ELEMENT* pAny,
 IUnknown* pService
);

/* IWSDDeviceHost::Init  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Init(
 LPCWSTR pszLocalId,
 IWSDXMLContext* pContext,
 IWSDAddress** ppHostAddresses,
 DWORD dwHostAddressCount
);

/* IWSDDeviceHost::RegisterPortType  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT RegisterPortType(
 const WSD_PORT_TYPE* pPortType
);

/* IWSDDeviceHost::RegisterService  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT RegisterService(
 LPCWSTR pszServiceId,
 IUnknown* pService
);

/* IWSDDeviceHost::RemoveDynamicService  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT RemoveDynamicService(
 LPCWSTR pszServiceId
);

/* IWSDDeviceHost::RetireService  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT RetireService(
 LPCWSTR pszServiceId
);

/* IWSDDeviceHost::SetMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetMetadata(
 const WSD_THIS_MODEL_METADATA* pThisModelMetadata,
 const WSD_THIS_DEVICE_METADATA* pThisDeviceMetadata,
 const WSD_HOST_METADATA* pHostMetadata,
 const WSD_METADATA_SECTION_LIST* pCustomMetadata
);

/* IWSDDeviceHost::SetServiceDiscoverable  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetServiceDiscoverable(
 const WCHAR* pszServiceId,
 BOOL fDiscoverable
);

/* IWSDDeviceHost::SignalEvent  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SignalEvent(
 LPCWSTR pszServiceId,
 const void* pBody,
 const WSD_OPERATION* pOperation
);

/* IWSDDeviceHost::Stop  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Stop();

/* IWSDDeviceHost::Terminate  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Terminate();

/* IWSDDeviceHostNotify::GetService  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetService(
 LPCWSTR pszServiceId,
 IUnknown** ppService
);

/* IWSDDeviceProxy::BeginGetMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT BeginGetMetadata(
 IWSDAsyncResult** ppResult
);

/* IWSDDeviceProxy::EndGetMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT EndGetMetadata(
 IWSDAsyncResult* pResult
);

/* IWSDDeviceProxy::GetAllMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetAllMetadata(
 WSD_METADATA_SECTION_LIST** ppMetadata
);

/* IWSDDeviceProxy::GetEndpointProxy  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetEndpointProxy(
 IWSDEndpointProxy** ppProxy
);

/* IWSDDeviceProxy::GetHostMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetHostMetadata(
 WSD_HOST_METADATA** ppHostMetadata
);

/* IWSDDeviceProxy::GetServiceProxyById  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetServiceProxyById(
 LPCWSTR pszServiceId,
 IWSDServiceProxy** ppServiceProxy
);

/* IWSDDeviceProxy::GetServiceProxyByType  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetServiceProxyByType(
 const WSDXML_NAME* pType,
 IWSDServiceProxy** ppServiceProxy
);

/* IWSDDeviceProxy::GetThisDeviceMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetThisDeviceMetadata(
 WSD_THIS_DEVICE_METADATA** ppThisDeviceMetadata
);

/* IWSDDeviceProxy::GetThisModelMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetThisModelMetadata(
 WSD_THIS_MODEL_METADATA** ppManufacturerMetadata
);

/* IWSDDeviceProxy::Init  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Init(
 LPCWSTR pszDeviceId,
 IWSDAddress* pDeviceAddress,
 LPCWSTR pszLocalId,
 IWSDXMLContext* pContext,
 IWSDDeviceProxy* pSponsor
);

/* IWSDEndpointProxy::AbortAsyncOperation  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT AbortAsyncOperation(
 IWSDAsyncResult* pAsyncResult
);

/* IWSDEndpointProxy::GetErrorInfo  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetErrorInfo(
 const LPCWSTR* ppszErrorInfo
);

/* IWSDEndpointProxy::GetFaultInfo  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetFaultInfo(
 WSD_SOAP_FAULT** ppFault
);

/* IWSDEndpointProxy::ProcessFault  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT ProcessFault(
 const WSD_SOAP_FAULT* pFault
);

/* IWSDEndpointProxy::SendOneWayRequest  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SendOneWayRequest(
 const void* pBody,
 const WSD_OPERATION* pOperation
);

/* IWSDEndpointProxy::SendTwoWayRequest  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SendTwoWayRequest(
 const void* pBody,
 const WSD_OPERATION* pOperation,
 WSD_SYNCHRONOUS_RESPONSE_CONTEXT* pResponseContext
);

/* IWSDEndpointProxy::SendTwoWayRequestAsync  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SendTwoWayRequestAsync(
 const void* pBody,
 const WSD_OPERATION* pOperation,
 IUnknown* pAsyncState,
 IWSDAsyncCallback* pCallback,
 IWSDAsyncResult** pResult
);

/* IWSDEventingStatus::SubscriptionEnded  [function; shared; CE 6.0..699; wsdapi.lib] */
void SubscriptionEnded(
 LPCWSTR pszSubscriptionAction
);

/* IWSDEventingStatus::SubscriptionRenewalFailed  [function; shared; CE 6.0..699; wsdapi.lib] */
void SubscriptionRenewalFailed(
 LPCWSTR pszSubscriptionAction,
 HRESULT hr
);

/* IWSDEventingStatus::SubscriptionRenewed  [function; shared; CE 6.0..699; wsdapi.lib] */
void SubscriptionRenewed(
 LPCWSTR pszSubscriptionAction
);

/* IWSDHttpAddress::GetPath  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetPath(
 LPCWSTR* ppszPath
);

/* IWSDHttpAddress::GetSecure  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetSecure();

/* IWSDHttpAddress::SetPath  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetPath(
 LPCWSTR pszPath
);

/* IWSDHttpAddress::SetSecure  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetSecure(
 BOOL fSecure
);

/* IWSDHttpMessageParameters::Clear  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Clear();

/* IWSDHttpMessageParameters::GetContext  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetContext(
 IUnknown** ppContext
);

/* IWSDHttpMessageParameters::GetID  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetID(
 LPCWSTR* ppszId
);

/* IWSDHttpMessageParameters::GetInboundHttpHeaders  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetInboundHttpHeaders(
 LPCWSTR* ppszHeaders
);

/* IWSDHttpMessageParameters::GetOutboundHttpHeaders  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetOutboundHttpHeaders(
 LPCWSTR* ppszHeaders
);

/* IWSDHttpMessageParameters::SetContext  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetContext(
 IUnknown* pContext
);

/* IWSDHttpMessageParameters::SetID  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetID(
 LPCWSTR pszId
);

/* IWSDHttpMessageParameters::SetInboundHttpHeaders  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetInboundHttpHeaders(
 LPCWSTR pszHeaders
);

/* IWSDHttpMessageParameters::SetOutboundHttpHeaders  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetOutboundHttpHeaders(
 LPCWSTR pszHeaders
);

/* IWSDInboundAttachment::Close  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Close();

/* IWSDInboundAttachment::Read  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Read(
 BYTE* pBuffer,
 DWORD dwBytesToRead,
 LPDWORD pdwNumberofBytesRead
);

/* IWSDiscoveredService::GetEndpointReference  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT* GetEndpointReference(
 WSD_ENDPOINT_REFERENCE** ppEndPointReference
);

/* IWSDiscoveredService::GetExtendedDiscoXML  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetExtendedDiscoXML(
 WSDXML_ELEMENT** ppHeaderAny,
 WSDXML_ELEMENT** ppBodyAny
);

/* IWSDiscoveredService::GetLocalInterfaceGUID  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetLocalInterfaceGUID(
 GUID* pGuid
);

/* IWSDiscoveredService::GetLocalTransportAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetLocalTransportAddress(
 LPCWSTR* ppszLocalTransportAddress
);

/* IWSDiscoveredService::GetProbeResolveTag  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetProbeResolveTag(
 LPCWSTR* ppszTag
);

/* IWSDiscoveredService::GetRemoteTransportAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetRemoteTransportAddress(
 LPCWSTR* ppszRemoteTransportAddress
);

/* IWSDiscoveredService::GetScopes  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetScopes(
 WSD_URI_LIST** ppScopesList
);

/* IWSDiscoveredService::GetTypes  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetTypes(
 WSD_NAME_LIST** ppTypesList
);

/* IWSDiscoveredService::GetXAddrs  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetXAddrs(
 WSD_URI_LIST** ppXAddrsList
);

/* IWSDiscoveryProvider::Attach  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Attach(
 IWSDiscoveryProviderNotify* pSink
);

/* IWSDiscoveryProvider::Detach  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Detach();

/* IWSDiscoveryProvider::GetXMLContext  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetXMLContext(
 IWSDXMLContext** ppContext
);

/* IWSDiscoveryProvider::SearchByAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SearchByAddress(
 LPCWSTR pszAddress,
 LPCWSTR pszTag
);

/* IWSDiscoveryProvider::SearchById  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SearchById(
 LPCWSTR pszId,
 LPCWSTR pszTag
);

/* IWSDiscoveryProvider::SearchByType  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SearchByType(
 WSD_NAME_LIST* pTypesList,
 WSD_URI_LIST* pScopesList,
 LPCWSTR pszMatchBy,
 LPCWSTR pszTag
);

/* IWSDiscoveryProvider::SetAddressFamily  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetAddressFamily(
 DWORD dwAddressFamily
);

/* IWSDiscoveryProviderNotify::Add  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Add(
 IWSDiscoveredService* pService
);

/* IWSDiscoveryProviderNotify::Remove  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Remove(
 IWSDiscoveredService* pService
);

/* IWSDiscoveryProviderNotify::SearchComplete  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SearchComplete(
 LPCWSTR pszTag
);

/* IWSDiscoveryProviderNotify::SearchFailed  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SearchFailed(
 HRESULT hr,
 LPCWSTR pszTag
);

/* IWSDiscoveryPublisher::GetXMLContext  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetXMLContext(
 IWSDXMLContext** ppContext
);

/* IWSDiscoveryPublisher::RegisterNotificationSink  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT RegisterNotificationSink(
 IWSDiscoveryPublisherNotify* pSink
);

/* IWSDiscoveryPublisher::RegisterScopeMatchingRule  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT RegisterScopeMatchingRule(
 IWSDScopeMatchingRule* pScopeMatchingRule
);

/* IWSDiscoveryPublisher::SetAddressFamily  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetAddressFamily(
 DWORD dwAddressFamily
);

/* IWSDiscoveryPublisher::UnRegisterNotificationSink  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT UnRegisterNotificationSink(
 IWSDiscoveryPublisherNotify* pSink
);

/* IWSDiscoveryPublisher::UnRegisterScopeMatchingRule  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT UnRegisterScopeMatchingRule(
 IWSDScopeMatchingRule* pScopeMatchingRule
);

/* IWSDiscoveryPublisherNotify::ProbeHandler  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT ProbeHandler(
 const WSD_SOAP_MESSAGE* pSoap,
 IWSDMessageParameters* pMessageParameters
);

/* IWSDiscoveryPublisherNotify::ResolveHandler  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT ResolveHandler(
 const WSD_SOAP_MESSAGE* pSoap,
 IWSDMessageParameters* pMessageParameters
);

/* IWSDMessageParameters::GetLocalAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetLocalAddress(
 IWSDAddress** ppAddress
);

/* IWSDMessageParameters::GetLowerParameters  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetLowerParameters(
 IWSDMessageParameters** ppTxParams
);

/* IWSDMessageParameters::GetRemoteAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetRemoteAddress(
 IWSDAddress** ppAddress
);

/* IWSDMessageParameters::SetLocalAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetLocalAddress(
 IWSDAddress* pAddress
);

/* IWSDMessageParameters::SetRemoteAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetRemoteAddress(
 IWSDAddress* pAddress
);

/* IWSDMetadataExchange::GetMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetMetadata(
 WSD_METADATA_SECTION_LIST** MetadataOut
);

/* IWSDOutboundAttachment::Abort  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Abort();

/* IWSDOutboundAttachment::Close  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Close();

/* IWSDOutboundAttachment::Write  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT Write(
 const BYTE* pBuffer,
 DWORD dwBytesToWrite,
 LPDWORD pdwNumberofBytesWritten
);

/* IWSDScopeMatchingRule::GetScopeRule  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetScopeRule(
 LPCWSTR* ppszScopeMatchingRule
);

/* IWSDScopeMatchingRule::MatchScopes  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT MatchScopes(
 LPCWSTR pszScope1,
 LPCWSTR pszScope2,
 BOOL* pfMatch
);

/* IWSDServiceMessaging::FaultRequest  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT FaultRequest(
 WSD_SOAP_HEADER* pRequestHeader,
 IWSDMessageParameters* pMessageParameters,
 WSD_SOAP_FAULT* pFault
);

/* IWSDServiceMessaging::SendResponse  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SendResponse(
 void* pBody,
 WSD_OPERATION* pOperation,
 IWSDMessageParameters* pMessageParameters
);

/* IWSDServiceProxy::BeginGetMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT BeginGetMetadata(
 IWSDAsyncResult** ppResult
);

/* IWSDServiceProxy::EndGetMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT EndGetMetadata(
 IWSDAsyncResult* pResult,
 WSD_METADATA_SECTION_LIST** ppMetadata
);

/* IWSDServiceProxy::GetEndpointProxy  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetEndpointProxy(
 IWSDEndpointProxy** ppProxy
);

/* IWSDServiceProxy::GetServiceMetadata  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetServiceMetadata(
 WSD_SERVICE_METADATA** ppServiceMetadata
);

/* IWSDServiceProxy::SetEventingStatusCallback  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetEventingStatusCallback(
 IWSDEventingStatus* pStatus
);

/* IWSDServiceProxy::SubscribeToOperation  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SubscribeToOperation(
 const WSD_OPERATION* pOperation,
 IUnknown* pUnknown,
 const WSDXML_ELEMENT* pAny,
 WSDXML_ELEMENT** ppAny
);

/* IWSDServiceProxy::UnsubscribeToOperation  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT UnsubscribeToOperation(
 const WSD_OPERATION* pOperation
);

/* IWSDTransportAddress::GetPort  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetPort(
 WORD* pwPort
);

/* IWSDTransportAddress::GetTransportAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetTransportAddress(
 LPCWSTR* ppszAddress
);

/* IWSDTransportAddress::GetTransportAddressEx  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetTransportAddressEx(
 BOOL fSafe,
 LPCWSTR* ppszAddress
);

/* IWSDTransportAddress::SetPort  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetPort(
 WORD wPort
);

/* IWSDTransportAddress::SetTransportAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetTransportAddress(
 LPCWSTR pszAddress
);

/* IWSDUdpAddress::GetAlias  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetAlias(
 GUID* pAlias
);

/* IWSDUdpAddress::GetExclusive  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetExclusive();

/* IWSDUdpAddress::GetMessageType  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetMessageType(
 WSDUdpMessageType* pMessageType
);

/* IWSDUdpAddress::GetSockaddr  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT* GetSockaddr(
 SOCKADDR_STORAGE* pSockAddr
);

/* IWSDUdpAddress::GetTTL  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetTTL(
 DWORD* pdwTTL
);

/* IWSDUdpAddress::SetAlias  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetAlias(
 const GUID* pAlias
);

/* IWSDUdpAddress::SetExclusive  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetExclusive(
 BOOL fExclusive
);

/* IWSDUdpAddress::SetMessageType  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetMessageType(
 WSDUdpMessageType messageType
);

/* IWSDUdpAddress::SetSockaddr  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetSockaddr(
 const SOCKADDR_STORAGE* pSockAddr
);

/* IWSDUdpAddress::SetTTL  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetTTL(
 DWORD dwTTL
);

/* IWSDUdpMessageParameters::GetRetransmitParams  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT GetRetransmitParams(
 WSDUdpRetransmitParams* pParams
);

/* IWSDUdpMessageParameters::SetRetransmitParams  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetRetransmitParams(
 WSDUdpRetransmitParams* pParams
);

/* IWSDXMLContext::AddNamespace  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT AddNamespace(
 const LPCWSTR* pszUri,
 const LPCWSTR* pszSuggestedPrefix,
 WSDXML_NAMESPACE** ppNamespace
);

/* IWSDXMLContext::AddNameToNamespace  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT AddNameToNamespace(
 const LPCWSTR* pszUri,
 const LPCWSTR* pszName,
 WSDXML_NAME** ppName
);

/* IWSDXMLContext::SetNamespaces  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetNamespaces(
 const PCWSDXML_NAMESPACE* pNamespaces,
 WORD wNamespacesCount,
 BYTE bLayerNumber
);

/* IWSDXMLContext::SetTypes  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT SetTypes(
 const PCWSDXML_TYPE* pTypes,
 DWORD dwTypesCount,
 BYTE bLayerNumber
);

/* WSDAllocateLinkedMemory  [function; shared; CE 6.0..699; wsdapi.lib] */
void* WSDAllocateLinkedMemory(
 void* pParent,
 size_t cbSize
);

/* WSDAttachLinkedMemory  [function; shared; CE 6.0..699; wsdapi.lib] */
void WSDAttachLinkedMemory (
 void* pParent,
 void* pChild
);

/* WSDCreateDeviceHost  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateDeviceHost(
 const WCHAR* pszLocalId,
 IWSDXMLContext* pContext,
 IWSDDeviceHost** ppDeviceHost
);

/* WSDCreateDeviceHostAdvanced  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateDeviceHostAdvanced(
 const WCHAR* pszLocalId,
 IWSDXMLContext* pContext,
 IWSDAddress** ppHostAddresses,
 DWORD dwHostAddressCount,
 IWSDDeviceHost** ppDeviceHost
);

/* WSDCreateDeviceProxy  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateDeviceProxy(
 const WCHAR* pszDeviceId,
 const WCHAR* pszLocalId,
 IWSDXMLContext* pContext,
 IWSDDeviceProxy** ppDeviceProxy
);

/* WSDCreateDeviceProxyAdvanced  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateDeviceProxy(
 const WCHAR* pszDeviceId,
 IWSDAddress* pDeviceAddress,
 const WCHAR* pszLocalId,
 IWSDXMLContext* pContext,
 IWSDDeviceProxy** ppDeviceProxy
);

/* WSDCreateDiscoveryProvider  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateDiscoveryProvider(
 IWSDXMLContext* pContext,
 IWSDiscoveryProvider** ppProvider
);

/* WSDCreateDiscoveryPublisher  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateDiscoveryPublisher(
 IWSDXMLContext* pContext,
 IWSDiscoveryPublisher** ppPublisher
);

/* WSDCreateHttpAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateHttpAddress(
 IWSDHttpAddress** ppAddress
);

/* WSDCreateHttpMessageParameters  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateHttpMessageParameters(
 IWSDHttpMessageParameters** ppTxParams
);

/* WSDCreateOutboundAttachment  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDCreateOutboundAttachment (
 IWSDOutboundAttachment** attachmentOut
);

/* WSDCreateUdpAddress  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDCreateUdpAddress(
 IWSDUdpAddress** ppAddress
);

/* WSDCreateUdpMessageParameters  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDCreateUdpMessageParameters(
 IWSDUdpMessageParameters** ppTxParams
);

/* WSDDetachLinkedMemory  [function; shared; CE 6.0..699; wsdapi.lib] */
void WSDDetachLinkedMemory(
 void* pVoid
);

/* WSDFreeLinkedMemory  [function; shared; CE 6.0..699; wsdapi.lib] */
void WSDFreeLinkedMemory(
 void* pVoid
);

/* WSDGenerateFault  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDGenerateFault(
 const LPCWSTR* pszCode,
 const LPCWSTR* pszSubCode,
 const LPCWSTR* pszReason,
 const LPCWSTR* pszDetail,
 IWSDXMLContext* pContext,
 WSD_SOAP_FAULT** ppFault
);

/* WSDGenerateFaultEx  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WSDGenerateFaultEx(
 WSDXML_NAME* pCode,
 WSDXML_NAME* pSubCode,
 WSD_LOCALIZED_STRING_LIST* pReasons,
 const LPCWSTR* pszDetail,
 WSD_SOAP_FAULT** ppFault
);

/* WSDGetConfigurationOption  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDGetConfigurationOption(
 DWORD dwOption,
 LPVOID pVoid,
 DWORD cbOutBuffer
);

/* WSDRegisterNamespaces  [function; ce-only; CE 6.0..699; wsdapi.lib] */
void WSDRegisterNamespaces(
 IWSDXMLContext* pContext
);

/* WSDSetConfigurationOption  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDSetConfigurationOption(
 DWORD dwOption,
 LPVOID pVoid,
 DWORD cbInBuffer
);

/* WSDXMLAddChild  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT STDAPI WSDXMLAddChild(
 WSDXML_ELEMENT* pParent,
 WSDXML_ELEMENT* pChild
);

/* WSDXMLAddSibling  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT STDAPI WSDXMLAddSibling(
 WSDXML_ELEMENT* pFirst,
 WSDXML_ELEMENT* pSecond
);

/* WSDXMLBuildAnyForSingleElement  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT STDAPI WSDXMLBuildAnyForSingleElement(
 WSDXML_NAME* pElementName,
 const LPCWSTR* pszText,
 WSDXML_ELEMENT** ppAny
);

/* WSDXMLCleanupElement  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDXMLCleanupElement(
 WSDXML_ELEMENT* pAny
);

/* WSDXMLCreateContext  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDXMLCreateContext(
 IWSDXMLContext** ppContext
);

/* WSDXMLGetNameFromBuiltinNamespace  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT WINAPI WSDXMLGetNameFromBuiltinNamespace(
 LPCWSTR pszNamespace,
 LPCWSTR pszName,
 WSDXML_NAME** ppName
);

/* WSDXMLGetValueFromAny  [function; shared; CE 6.0..699; wsdapi.lib] */
HRESULT STDAPI WSDXMLGetValueFromAny(
 const WCHAR* pszNamespace,
 const WCHAR* pszName,
 WSDXML_ELEMENT* pAny,
 const LPCWSTR** ppszValue
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _WSDUpdRetransmitParams {
  ULONG ulSendDelay;
  ULONG ulRepeat;
  ULONG ulRepeatMinDelay;
  ULONG ulRepeatMaxDelay;
  ULONG ulRepeatUpperDelay;
} WSDUdpRetransmitParams, *PWSDUdpRetransmitParams;

/* function */
HRESULT AbortAsyncOperation( IWSDAsyncResult* pAsyncResult );
HRESULT AddDynamicService( LPCWSTR pszServiceId, LPCWSTR pszEndpointAddress, const WSD_PORT_TYPE* pPortType, const WSDXML_NAME* pPortName, const WSDXML_ELEMENT* pAny, IUnknown* pService );
HRESULT AddNameToNamespace( const LPCWSTR* pszUri, const LPCWSTR* pszName, WSDXML_NAME** ppName );
HRESULT AddNamespace( const LPCWSTR* pszUri, const LPCWSTR* pszSuggestedPrefix, WSDXML_NAMESPACE** ppNamespace );
HRESULT AsyncOperationComplete( IWSDAsyncResult* pAsyncResult, IUnknown* pAsyncState );
HRESULT BeginGetMetadata( IWSDAsyncResult** ppResult );
HRESULT Deserialize( LPCWSTR pszBuffer );
HRESULT Detach();
HRESULT EndGetMetadata( IWSDAsyncResult* pResult );
HRESULT FaultRequest( WSD_SOAP_HEADER* pRequestHeader, IWSDMessageParameters* pMessageParameters, WSD_SOAP_FAULT* pFault );
HRESULT GetAllMetadata( WSD_METADATA_SECTION_LIST** ppMetadata );
HRESULT GetAsyncState( IUnknown** ppAsyncState );
HRESULT GetEndpointProxy( IWSDEndpointProxy** ppEndpoint );
HRESULT* GetEndpointReference( WSD_ENDPOINT_REFERENCE** ppEndPointReference );
HRESULT GetExclusive();
HRESULT GetExtendedDiscoXML( WSDXML_ELEMENT** ppHeaderAny, WSDXML_ELEMENT** ppBodyAny );
HRESULT GetFaultInfo( WSD_SOAP_FAULT** ppFault );
HRESULT GetHostMetadata( WSD_HOST_METADATA** ppHostMetadata );
HRESULT GetID( LPCWSTR* ppszId );
HRESULT GetInboundHttpHeaders( LPCWSTR* ppszHeaders );
HRESULT GetLocalAddress( IWSDAddress** ppAddress );
HRESULT GetLocalInterfaceGUID( GUID* pGuid );
HRESULT GetLocalTransportAddress( LPCWSTR* ppszLocalTransportAddress );
HRESULT GetLowerParameters( IWSDMessageParameters** ppTxParams );
HRESULT GetMetadata( WSD_METADATA_SECTION_LIST** MetadataOut );
HRESULT GetOutboundHttpHeaders( LPCWSTR* ppszHeaders );
HRESULT GetPort( WORD* pwPort );
HRESULT GetProbeResolveTag( LPCWSTR* ppszTag );
HRESULT GetRemoteAddress( IWSDAddress** ppAddress );
HRESULT GetRemoteTransportAddress( LPCWSTR* ppszRemoteTransportAddress );
HRESULT GetRetransmitParams( WSDUdpRetransmitParams* pParams );
HRESULT GetScopeRule( LPCWSTR* ppszScopeMatchingRule );
HRESULT GetScopes( WSD_URI_LIST** ppScopesList );
HRESULT GetSecure();
HRESULT GetServiceMetadata( WSD_SERVICE_METADATA** ppServiceMetadata );
HRESULT GetServiceProxyById( LPCWSTR pszServiceId, IWSDServiceProxy** ppServiceProxy );
HRESULT GetServiceProxyByType( const WSDXML_NAME* pType, IWSDServiceProxy** ppServiceProxy );
HRESULT* GetSockaddr( SOCKADDR_STORAGE* pSockAddr );
HRESULT GetTTL( DWORD* pdwTTL );
HRESULT GetThisDeviceMetadata( WSD_THIS_DEVICE_METADATA** ppThisDeviceMetadata );
HRESULT GetThisModelMetadata( WSD_THIS_MODEL_METADATA** ppManufacturerMetadata );
HRESULT GetTransportAddress( LPCWSTR* ppszAddress );
HRESULT GetTransportAddressEx( BOOL fSafe, LPCWSTR* ppszAddress );
HRESULT GetTypes( WSD_NAME_LIST** ppTypesList );
HRESULT GetXAddrs( WSD_URI_LIST** ppXAddrsList );
HRESULT GetXMLContext( IWSDXMLContext** ppContext );
HRESULT HasCompleted();
HRESULT MatchScopes( LPCWSTR pszScope1, LPCWSTR pszScope2, BOOL* pfMatch );
HRESULT ProbeHandler( const WSD_SOAP_MESSAGE* pSoap, IWSDMessageParameters* pMessageParameters );
HRESULT ProcessFault( const WSD_SOAP_FAULT* pFault );
HRESULT RegisterNotificationSink( IWSDiscoveryPublisherNotify* pSink );
HRESULT RegisterPortType( const WSD_PORT_TYPE* pPortType );
HRESULT RegisterScopeMatchingRule( IWSDScopeMatchingRule* pScopeMatchingRule );
HRESULT RemoveDynamicService( LPCWSTR pszServiceId );
HRESULT ResolveHandler( const WSD_SOAP_MESSAGE* pSoap, IWSDMessageParameters* pMessageParameters );
HRESULT RetireService( LPCWSTR pszServiceId );
HRESULT SearchByAddress( LPCWSTR pszAddress, LPCWSTR pszTag );
HRESULT SearchById( LPCWSTR pszId, LPCWSTR pszTag );
HRESULT SearchByType( WSD_NAME_LIST* pTypesList, WSD_URI_LIST* pScopesList, LPCWSTR pszMatchBy, LPCWSTR pszTag );
HRESULT SearchFailed( HRESULT hr, LPCWSTR pszTag );
HRESULT SendOneWayRequest( const void* pBody, const WSD_OPERATION* pOperation );
HRESULT SendResponse( void* pBody, WSD_OPERATION* pOperation, IWSDMessageParameters* pMessageParameters );
HRESULT SendTwoWayRequest( const void* pBody, const WSD_OPERATION* pOperation, WSD_SYNCHRONOUS_RESPONSE_CONTEXT* pResponseContext );
HRESULT SendTwoWayRequestAsync( const void* pBody, const WSD_OPERATION* pOperation, IUnknown* pAsyncState, IWSDAsyncCallback* pCallback, IWSDAsyncResult** pResult );
HRESULT SetAddressFamily( DWORD dwAddressFamily );
HRESULT SetAlias( const GUID* pAlias );
HRESULT SetCallback( IWSDAsyncCallback* pCallback, IUnknown* pAsyncState );
HRESULT SetExclusive( BOOL fExclusive );
HRESULT SetID( LPCWSTR pszId );
HRESULT SetInboundHttpHeaders( LPCWSTR pszHeaders );
HRESULT SetLocalAddress( IWSDAddress* pAddress );
HRESULT SetMessageType( WSDUdpMessageType messageType );
HRESULT SetMetadata( const WSD_THIS_MODEL_METADATA* pThisModelMetadata, const WSD_THIS_DEVICE_METADATA* pThisDeviceMetadata, const WSD_HOST_METADATA* pHostMetadata, const WSD_METADATA_SECTION_LIST* pCustomMetadata );
HRESULT SetNamespaces( const PCWSDXML_NAMESPACE* pNamespaces, WORD wNamespacesCount, BYTE bLayerNumber );
HRESULT SetOutboundHttpHeaders( LPCWSTR pszHeaders );
HRESULT SetPort( WORD wPort );
HRESULT SetRemoteAddress( IWSDAddress* pAddress );
HRESULT SetRetransmitParams( WSDUdpRetransmitParams* pParams );
HRESULT SetSecure( BOOL fSecure );
HRESULT SetServiceDiscoverable( const WCHAR* pszServiceId, BOOL fDiscoverable );
HRESULT SetSockaddr( const SOCKADDR_STORAGE* pSockAddr );
HRESULT SetTTL( DWORD dwTTL );
HRESULT SetTransportAddress( LPCWSTR pszAddress );
HRESULT SetTypes( const PCWSDXML_TYPE* pTypes, DWORD dwTypesCount, BYTE bLayerNumber );
HRESULT SetWaitHandle( HANDLE hWaitHandle );
HRESULT SignalEvent( LPCWSTR pszServiceId, const void* pBody, const WSD_OPERATION* pOperation );
HRESULT SubscribeToOperation( const WSD_OPERATION* pOperation, IUnknown* pUnknown, const WSDXML_ELEMENT* pAny, WSDXML_ELEMENT** ppAny );
void SubscriptionEnded( LPCWSTR pszSubscriptionAction );
void SubscriptionRenewalFailed( LPCWSTR pszSubscriptionAction, HRESULT hr );
void SubscriptionRenewed( LPCWSTR pszSubscriptionAction );
HRESULT UnRegisterNotificationSink( IWSDiscoveryPublisherNotify* pSink );
HRESULT UnRegisterScopeMatchingRule( IWSDScopeMatchingRule* pScopeMatchingRule );
HRESULT UnsubscribeToOperation( const WSD_OPERATION* pOperation );

#endif /* _WSDAPI_ */
