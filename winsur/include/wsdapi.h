/* wsdapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 89 declarations, 8 outlines, 0 base types, 0 extra macros, 88 extra decls
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

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* IWSDAttachment  [interface; shared; CE 6.0..699; wsdapi.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* WSD_DATETIME  [struct; shared; wsdapi.lib] */
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

/* WSD_DURATION  [struct; shared; wsdapi.lib] */
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

/* WSD_EVENTING_DELIVERY_MODE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_EVENTING_DELIVERY_MODE {
 const WCHAR* Mode;
 void* Data;
} WSD_EVENTING_DELIVERY_MODE;

/* WSD_EVENTING_EXPIRES  [struct; shared; wsdapi.lib] */
typedef struct _WSD_EVENTING_EXPIRES {
 WSD_DURATION* Duration;
 WSD_DATETIME* DateTime;
} WSD_EVENTING_EXPIRES;

/* WSD_EVENTING_FILTER  [struct; shared; wsdapi.lib] */
typedef struct _WSD_EVENTING_FILTER {
 const WCHAR* Dialect;
 void* Data;
} WSD_EVENTING_FILTER;

/* WSD_SYNCHRONOUS_RESPONSE_CONTEXT  [struct; shared; wsdapi.lib] */
typedef struct _WSD_SYNCHRONOUS_RESPONSE_CONTEXT {
 HRESULT hr;
 HANDLE eventHandle;
 IWSDMessageParameters* messageParameters;
 void* results;
} WSD_SYNCHRONOUS_RESPONSE_CONTEXT;

/* WSD_URI_LIST  [struct; shared; wsdapi.lib] */
typedef struct _WSD_URI_LIST {
 WSD_URI_LIST* Next;
 const WCHAR* Element;
} WSD_URI_LIST;

/* WSDUdpRetransmitParams  [struct; shared; wsdapi.lib] */
typedef struct _WSDUpdRetransmitParams {
 ULONG ulSendDelay;
 ULONG ulRepeat;
 ULONG ulRepeatMinDelay;
 ULONG ulRepeatMaxDelay;
 ULONG ulRepeatUpperDelay;
} WSDUdpRetransmitParams, *PWSDUdpRetransmitParams;

/* WSDXML_TYPE  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_TYPE {
 WCHAR* Uri;
 BYTE* Table;
} WSDXML_TYPE;

/* WSD_EVENTING_FILTER_ACTION  [struct; shared; wsdapi.lib] */
typedef struct _WSD_EVENTING_FILTER_ACTION {
 WSD_URI_LIST* Actions;
} WSD_EVENTING_FILTER_ACTION;

/* WSD_SCOPES  [struct; shared; wsdapi.lib] */
typedef struct _WSD_SCOPES {
 const WCHAR* MatchBy;
 WSD_URI_LIST* Scopes;
} WSD_SCOPES;

/* REQUESTBODY_GetStatus  [struct; shared; wsdapi.lib] */
typedef struct {
 WSDXML_ELEMENT* Any;
} REQUESTBODY_GetStatus;

/* REQUESTBODY_Renew  [struct; shared; wsdapi.lib] */
typedef struct {
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} REQUESTBODY_Renew;

/* REQUESTBODY_Subscribe  [struct; shared; wsdapi.lib] */
typedef struct {
 WSD_ENDPOINT_REFERENCE* EndTo;
 WSD_EVENTING_DELIVERY_MODE* Delivery;
 WSD_EVENTING_EXPIRES* Expires;
 WSD_EVENTING_FILTER* Filter;
 WSDXML_ELEMENT* Any;
} REQUESTBODY_Subscribe;

/* REQUESTBODY_Unsubscribe  [struct; shared; wsdapi.lib] */
typedef struct {
 WSDXML_ELEMENT* Any;
} REQUESTBODY_Unsubscribe;

/* RESPONSEBODY_GetMetadata  [struct; shared; wsdapi.lib] */
typedef struct {
 WSD_METADATA_SECTION_LIST* Metadata;
} RESPONSEBODY_GetMetadata;

/* RESPONSEBODY_GetStatus  [struct; shared; wsdapi.lib] */
typedef struct {
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_GetStatus;

/* RESPONSEBODY_Renew  [struct; shared; wsdapi.lib] */
typedef struct {
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_Renew;

/* RESPONSEBODY_Subscribe  [struct; shared; wsdapi.lib] */
typedef struct {
 WSD_ENDPOINT_REFERENCE* SubscriptionManager;
 WSD_EVENTING_EXPIRES* Expires;
 WSDXML_ELEMENT* Any;
} RESPONSEBODY_Subscribe;

/* WSD_BYE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_BYE {
 WSD_ENDPOINT_REFERENCE* EndpointReference;
 WSDXML_ELEMENT* Any;
} WSD_BYE;

/* WSD_ENDPOINT_REFERENCE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_ENDPOINT_REFERENCE {
 const WCHAR* Address;
 WSD_REFERENCE_PROPERTIES ReferenceProperties;
 WSD_REFERENCE_PARAMETERS ReferenceParameters;
 WSDXML_NAME* PortType;
 WSDXML_NAME* ServiceName;
 WSDXML_ELEMENT* Any;
} WSD_ENDPOINT_REFERENCE;

/* WSD_ENDPOINT_REFERENCE_LIST  [struct; shared; wsdapi.lib] */
typedef struct _WSD_ENDPOINT_REFERENCE_LIST {
 WSD_ENDPOINT_REFERENCE_LIST* Next;
 WSD_ENDPOINT_REFERENCE* Element;
} WSD_ENDPOINT_REFERENCE_LIST;

/* WSD_EVENTING_DELIVERY_MODE_PUSH  [struct; shared; wsdapi.lib] */
typedef struct _WSD_EVENTING_DELIVERY_MODE_PUSH {
 WSD_ENDPOINT_REFERENCE* NotifyTo;
} WSD_EVENTING_DELIVERY_MODE_PUSH;

/* WSD_HEADER_RELATESTO  [struct; shared; wsdapi.lib] */
typedef struct _WSD_HEADER_RELATESTO {
 WSDXML_NAME* RelationshipType;
 const WCHAR* MessageID;
} WSD_HEADER_RELATESTO;

/* WSD_HOST_METADATA  [struct; shared; wsdapi.lib] */
typedef struct _WSD_HOST_METADATA {
 WSD_SERVICE_METADATA* Host;
 WSD_SERVICE_METADATA_LIST* Hosted;
} WSD_HOST_METADATA;

/* WSD_METADATA_SECTION  [struct; shared; wsdapi.lib] */
typedef struct _WSD_METADATA_SECTION {
 const WCHAR* Dialect;
 const WCHAR* Identifier;
 void* Data;
 WSD_ENDPOINT_REFERENCE* MetadataReference;
 const WCHAR* Location;
 WSDXML_ELEMENT* Any;
} WSD_METADATA_SECTION;

/* WSD_METADATA_SECTION_LIST  [struct; shared; wsdapi.lib] */
typedef struct _WSD_METADATA_SECTION_LIST {
 WSD_METADATA_SECTION_LIST* Next;
 WSD_METADATA_SECTION* Element;
} WSD_METADATA_SECTION_LIST;

/* WSD_NAME_LIST  [struct; shared; wsdapi.lib] */
typedef struct _WSD_NAME_LIST {
 WSD_NAME_LIST* Next;
 WSDXML_NAME* Element;
} WSD_NAME_LIST;

/* WSD_PROBE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_PROBE {
 WSD_NAME_LIST* Types;
 WSD_SCOPES* Scopes;
 WSDXML_ELEMENT* Any;
} WSD_PROBE;

/* WSD_REFERENCE_PARAMETERS  [struct; shared; wsdapi.lib] */
typedef struct _WSD_REFERENCE_PARAMETERS {
 WSDXML_ELEMENT* Any;
} WSD_REFERENCE_PARAMETERS;

/* WSD_REFERENCE_PROPERTIES  [struct; shared; wsdapi.lib] */
typedef struct _WSD_REFERENCE_PROPERTIES {
 WSDXML_ELEMENT* Any;
} WSD_REFERENCE_PROPERTIES;

/* WSD_RELATIONSHIP_METADATA  [struct; shared; wsdapi.lib] */
typedef struct _WSD_RELATIONSHIP_METADATA {
 const WCHAR* Type;
 WSD_HOST_METADATA* Data;
 WSDXML_ELEMENT* Any;
} WSD_RELATIONSHIP_METADATA;

/* WSD_RESOLVE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_RESOLVE {
 WSD_ENDPOINT_REFERENCE* EndpointReference;
 WSDXML_ELEMENT* Any;
} WSD_RESOLVE;

/* WSD_SERVICE_METADATA  [struct; shared; wsdapi.lib] */
typedef struct _WSD_SERVICE_METADATA {
 WSD_ENDPOINT_REFERENCE_LIST* EndpointReference;
 WSD_NAME_LIST* Types;
 const WCHAR* ServiceId;
 WSDXML_ELEMENT* Any;
} WSD_SERVICE_METADATA;

/* WSD_SERVICE_METADATA_LIST  [struct; shared; wsdapi.lib] */
typedef struct _WSD_SERVICE_METADATA_LIST {
 WSD_SERVICE_METADATA_LIST* Next;
 WSD_SERVICE_METADATA* Element;
} WSD_SERVICE_METADATA_LIST;

/* WSD_SOAP_FAULT_CODE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_SOAP_FAULT_CODE {
 WSDXML_NAME* Value;
 WSD_SOAP_FAULT_SUBCODE* Subcode;
} WSD_SOAP_FAULT_CODE;

/* WSD_SOAP_FAULT_SUBCODE  [struct; shared; wsdapi.lib] */
typedef struct _WSD_SOAP_FAULT_SUBCODE {
 WSDXML_NAME* Value;
 WSD_SOAP_FAULT_SUBCODE* Subcode;
} WSD_SOAP_FAULT_SUBCODE;

/* WSD_UNKNOWN_LOOKUP  [struct; shared; wsdapi.lib] */
typedef struct _WSD_UNKNOWN_LOOKUP {
 WSDXML_ELEMENT* Any;
} WSD_UNKNOWN_LOOKUP;

/* WSDXML_ATTRIBUTE  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_ATTRIBUTE {
 WSDXML_ELEMENT* Element;
 WSDXML_ATTRIBUTE* Next;
 WSDXML_NAME* Name;
 WCHAR* Value;
} WSDXML_ATTRIBUTE;

/* WSDXML_ELEMENT  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_ELEMENT {
 WSDXML_NODE Node;
 WSDXML_NAME* Name;
 WSDXML_ATTRIBUTE* FirstAttribute;
 WSDXML_NODE* FirstChild;
 WSDXML_PREFIX_MAPPING* PrefixMappings;
} WSDXML_ELEMENT;

/* WSDXML_ELEMENT_LIST  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_ELEMENT_LIST {
 WSDXML_ELEMENT_LIST* Next;
 WSDXML_ELEMENT* Element;
} WSDXML_ELEMENT_LIST;

/* WSDXML_NAME  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_NAME {
 WSDXML_NAMESPACE* Space;
 WCHAR* LocalName;
} WSDXML_NAME;

/* WSDXML_NAMESPACE  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_NAMESPACE {
 const WCHAR* Uri;
 const WCHAR* PreferredPrefix;
 WSDXML_NAME* Names;
 WORD NamesCount;
 WORD Encoding;
} WSDXML_NAMESPACE;

/* WSDXML_NODE  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_NODE {
 enum {
 ElementType,
 TextType
 } Type;
 WSDXML_ELEMENT* Parent;
 WSDXML_NODE* Next;
} WSDXML_NODE;

/* WSDXML_PREFIX_MAPPING  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_PREFIX_MAPPING {
 DWORD Refs;
 WSDXML_PREFIX_MAPPING* Next;
 WSDXML_NAMESPACE* Space;
 WCHAR* Prefix;
} WSDXML_PREFIX_MAPPING;

/* WSDXML_TEXT  [struct; shared; wsdapi.lib] */
typedef struct _WSDXML_TEXT {
 WSDXML_NODE Node;
 WCHAR* Text;
} WSDXML_TEXT;

/* WSD_APP_SEQUENCE  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   InstanceId */
/*   SequenceId */
/*   MessageNumber */

/* WSD_EVENT  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   Hr */
/*   EventType */
/*   DispatchTag */
/*   HandlerContext */
/*   Soap */
/*   Operation */
/*   MessageParameters */

/* WSD_HANDLER_CONTEXT  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   Handler */
/*   PVoid */
/*   Unknown */

/* WSD_HELLO  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   EndpointReference */
/*   Types */
/*   Scopes */
/*   XAddrs */
/*   MetadataVersion */
/*   Any */

/* WSD_LOCALIZED_STRING  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   lang */
/*   String */

/* WSD_PROBE_MATCH  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   EndpointReference */
/*   Types */
/*   Scopes */
/*   XAddrs */
/*   MetadataVersion */
/*   Any */

/* WSD_RESOLVE_MATCH  [struct; shared; wsdapi.lib] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   EndpointReference */
/*   Types */
/*   Scopes */
/*   XAddrs */
/*   MetadataVersion */
/*   Any */

/* PWSDUdpRetransmitParams  [extra struct] */
typedef struct _WSDUpdRetransmitParams {
  ULONG ulSendDelay;
  ULONG ulRepeat;
  ULONG ulRepeatMinDelay;
  ULONG ulRepeatMaxDelay;
  ULONG ulRepeatUpperDelay;
} WSDUdpRetransmitParams, *PWSDUdpRetransmitParams;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

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

/* WSDDetachLinkedMemory  [function; shared; CE 6.0..699; wsdapi.lib] */
void WSDDetachLinkedMemory(
 void* pVoid
);

/* WSDFreeLinkedMemory  [function; shared; CE 6.0..699; wsdapi.lib] */
void WSDFreeLinkedMemory(
 void* pVoid
);

/* WSDRegisterNamespaces  [function; ce-only; CE 6.0..699; wsdapi.lib] */
void WSDRegisterNamespaces(
 IWSDXMLContext* pContext
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AbortAsyncOperation( IWSDAsyncResult* pAsyncResult );
HRESULT AddNameToNamespace( const LPCWSTR* pszUri, const LPCWSTR* pszName, WSDXML_NAME** ppName );
HRESULT AddNamespace( const LPCWSTR* pszUri, const LPCWSTR* pszSuggestedPrefix, WSDXML_NAMESPACE** ppNamespace );
HRESULT BeginGetMetadata( IWSDAsyncResult** ppResult );
HRESULT Deserialize( LPCWSTR pszBuffer );
HRESULT Detach();
HRESULT EndGetMetadata( IWSDAsyncResult* pResult );
HRESULT FaultRequest( WSD_SOAP_HEADER* pRequestHeader, IWSDMessageParameters* pMessageParameters, WSD_SOAP_FAULT* pFault );
HRESULT GetAllMetadata( WSD_METADATA_SECTION_LIST** ppMetadata );
HRESULT GetEndpointProxy( IWSDEndpointProxy** ppEndpoint );
HRESULT* GetEndpointReference( WSD_ENDPOINT_REFERENCE** ppEndPointReference );
HRESULT GetExclusive();
HRESULT GetExtendedDiscoXML( WSDXML_ELEMENT** ppHeaderAny, WSDXML_ELEMENT** ppBodyAny );
HRESULT GetFaultInfo( WSD_SOAP_FAULT** ppFault );
HRESULT GetHostMetadata( WSD_HOST_METADATA** ppHostMetadata );
HRESULT GetID( LPCWSTR* ppszId );
HRESULT GetInboundHttpHeaders( LPCWSTR* ppszHeaders );
HRESULT GetLocalAddress( IWSDAddress** ppAddress );
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
HRESULT SetAddressFamily( DWORD dwAddressFamily );
HRESULT SetExclusive( BOOL fExclusive );
HRESULT SetID( LPCWSTR pszId );
HRESULT SetInboundHttpHeaders( LPCWSTR pszHeaders );
HRESULT SetLocalAddress( IWSDAddress* pAddress );
HRESULT SetMessageType( WSDUdpMessageType messageType );
HRESULT SetMetadata( const WSD_THIS_MODEL_METADATA* pThisModelMetadata, const WSD_THIS_DEVICE_METADATA* pThisDeviceMetadata, const WSD_HOST_METADATA* pHostMetadata, const WSD_METADATA_SECTION_LIST* pCustomMetadata );
HRESULT SetOutboundHttpHeaders( LPCWSTR pszHeaders );
HRESULT SetPort( WORD wPort );
HRESULT SetRemoteAddress( IWSDAddress* pAddress );
HRESULT SetRetransmitParams( WSDUdpRetransmitParams* pParams );
HRESULT SetSecure( BOOL fSecure );
HRESULT SetServiceDiscoverable( const WCHAR* pszServiceId, BOOL fDiscoverable );
HRESULT SetTTL( DWORD dwTTL );
HRESULT SetTransportAddress( LPCWSTR pszAddress );
HRESULT SetWaitHandle( HANDLE hWaitHandle );
HRESULT SignalEvent( LPCWSTR pszServiceId, const void* pBody, const WSD_OPERATION* pOperation );
void SubscriptionEnded( LPCWSTR pszSubscriptionAction );
void SubscriptionRenewalFailed( LPCWSTR pszSubscriptionAction, HRESULT hr );
void SubscriptionRenewed( LPCWSTR pszSubscriptionAction );
HRESULT UnRegisterNotificationSink( IWSDiscoveryPublisherNotify* pSink );
HRESULT UnRegisterScopeMatchingRule( IWSDScopeMatchingRule* pScopeMatchingRule );
HRESULT UnsubscribeToOperation( const WSD_OPERATION* pOperation );

#endif /* _WSDAPI_ */
