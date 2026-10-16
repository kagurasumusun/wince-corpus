/* Mssoap.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 47 constants, 48 declarations, 3 outlines, 0 base types, 0 extra macros, 14 extra decls
 */
#ifndef _MSSOAP_
#define _MSSOAP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define EnXSDanyType 47
#define EnXSDarray 46
#define EnXSDbinary 8
#define EnXSDboolean 2
#define EnXSDbyte 29
#define EnXSDcdata 14
#define EnXSDcentury 43
#define EnXSDdate 40
#define EnXSDdecimal 5
#define EnXSDDouble 4
#define EnXSDentities 18
#define EnXSDentity 12
#define EnXSDfloat 3
#define EnXSDid 10
#define EnXSDidRef 11
#define EnXSDidRefs 17
#define EnXSDint 27
#define EnXSDinteger 24
#define EnXSDlanguage 16
#define EnXSDlong 26
#define EnXSDmonth 41
#define EnXSDname 21
#define EnXSDncname 22
#define enXSDnegativeInteger 31
#define EnXSDnmtoken 19
#define EnXSDnmtokens 20
#define enXSDnonNegativeInteger 30
#define enXSDnonpositiveInteger 25
#define EnXSDnotation 23
#define enXSDpositiveInteger 36
#define EnXSDQName 13
#define enXSDrecurringDate 44
#define enXSDrecurringDay 45
#define enXSDrecurringDuration 7
#define EnXSDshort 28
#define EnXSDstring 1
#define EnXSDtime 38
#define enXSDtimeDuration 6
#define EnXSDtimeInstant 37
#define EnXSDtimePeriod 39
#define EnXSDtoken 15
#define enXSDunsignedByte 35
#define EnXSDunsignedInt 33
#define enXSDunsignedLong 32
#define enXSDunsignedShort 34
#define enXSDuriReference 9
#define EnXSDyear 42
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* Database  [typedef; ce-only; heuristic-prefix] */

/* Record  [typedef; ce-only; heuristic-prefix] */

/* Volume  [typedef; ce-only; heuristic-prefix] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* EnumWSDLService::Next  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Next(
 long celt, 
 IWSDLService** ppWSDLService, 
 long* pulFetched
);

/* EnumWSDLService::reset  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT reset(void);

/* EnumWSDLService::Skip  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT Skip(
 long celt
);

/* ISoapConnector::reset  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT reset(void);

/* ISoapReader::loadXML  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT loadXML(
 BSTR bstrXML,
 VARIANT_BOOL* isSuccessful 
);

/* ISoapReader::soapAction  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT get_soapAction( 
 BSTR* pbstrSoapAction 
);

/* Property  [function, typedef; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
[propget] HRESULT Property(
 BSTR pPropertyName, 
 VARIANT* pPropertyValue 
);
[propput] HRESULT Property( 
 BSTR pPropertyName, 
 VARIANT pPropertyValue 
);

/* SoapMapper::save  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT save(
 ISoapSerializer* pISoapSerializer, 
 BSTR bstrEncoding, 
 enEncodingStyle enStyle,
 BSTR bstrMessageNS, 
 long lFlags 
);

/* WSDLOperation::load  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT load(
 ISoapReader* pISoapReader, 
 VARIANT_BOOL vbInput
);

/* WSDLOperation::name  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT get_name(
 BSTR* pbstrOperationName
);

/* WSDLOperation::save  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT save(
 ISoapSerializer* pISoapSerializer,
 VARIANT_BOOL vbInput
);

/* WSDLOperation::soapAction  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT get_soapAction(
 BSTR* pbstrSoapAction
);

/* WSDLPort::name  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT get_name(
 BSTR* pbstrPortName
);

/* WSDLReader::load  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT load(
 BSTR WSDLFileSpec, 
 BSTR WSMLFileSpec
);

/* WSDLReader::setProperty  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT setProperty(
 BSTR bstrPropertyName, 
 VARIANT varPropValue
);

/* WSDLService::name  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT get_name(
 BSTR* bstrServiceName 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* EnumWSDLService::Find  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Find(
 BSTR bstrServiceToFind, 
 IWSDLService** ppWSDLService
);

/* ISoapClient::detail  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_detail(
 BSTR* bstrDetail
);

/* ISoapClient::faultactor  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_faultactor( 
 BSTR* bstrActor
);

/* ISoapClient::faultcode  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_faultcode( 
 BSTR* bstrFaultcode 
);

/* ISoapClient::faultstring  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_faultstring( 
 BSTR* bstrFaultstring 
);

/* ISoapConnector::Connect  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Connect(void);

/* ISOAPError::detail  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_detail( 
 BSTR* bstrDetail 
);

/* ISOAPError::faultactor  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_faultactor( 
 BSTR* bstrActor 
);

/* ISOAPError::faultcode  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_faultcode( 
 BSTR* bstrFaultcode
);

/* ISOAPError::faultstring  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_faultstring( 
 BSTR* bstrFaultstring 
);

/* ISoapReader::Fault  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_Fault(
 IXMLDOMElement** ppElement 
);

/* ISoapReader::FaultActor  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_FaultActor(
 IXMLDOMElement** ppElement 
);

/* ISoapReader::FaultCode  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_FaultCode( 
 IXMLDOMElement** ppElement 
);

/* ISoapReader::FaultString  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_FaultString( 
 IXMLDOMElement** ppElement 
);

/* ISoapReader::load  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT load(
 VARIANT xmlSource, 
 BSTR bstrSoapAction, 
 VARIANT_BOOL* isSuccessful 
);

/* ISoapSerializer::Init  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Init( 
 VARIANT vDestination 
);

/* ISoapServer::Init  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Init(
 BSTR bstrWSDLFileName,
 BSTR bstrWSMLFileSpec
);

/* ISoapTypeMapper::Init  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Init(
 ISoapTypeMapperFactory* pFactory,
 IXMLDOMNode* pSchema,
 enXSDType xsdType
);

/* SoapMapper::elementName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_elementName(
 BSTR* pbstrElementName
);

/* SoapMapper::encoding  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT get_encoding(
 BSTR* pbstrEncodingStyle
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* EnumSoapMappers::Find  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Find(
 BSTR bstrServiceToFind, 
 IWSDLService** ppWSDLService
);

/* EnumSoapMappers::Next  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Next(
 long celt, 
 IWSDLService** ppWSDLService, 
 long* pulFetched
);

/* EnumSoapMappers::reset  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT reset(void);

/* EnumSoapMappers::Skip  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Skip(
 long celt
);

/* EnumWSDLOperations::Find  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Find(
 BSTR bstrServiceToFind, 
 IWSDLService** ppWSDLService
);

/* EnumWSDLOperations::Next  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Next(
 long celt, 
 IWSDLService** ppWSDLService, 
 long* pulFetched
);

/* EnumWSDLOperations::reset  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT reset(void);

/* EnumWSDLOperations::Skip  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Skip(
 long celt
);

/* EnumWSDLPorts::Find  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Find(
 BSTR bstrServiceToFind, 
 IWSDLService** ppWSDLService
);

/* EnumWSDLPorts::Next  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Next(
 long celt, 
 IWSDLService** ppWSDLService, 
 long* pulFetched
);

/* EnumWSDLPorts::reset  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT reset(void);

/* EnumWSDLPorts::Skip  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Skip(
 long celt
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT get_Fault( IXMLDOMElement** ppElement );
HRESULT get_FaultActor( IXMLDOMElement** ppElement );
HRESULT get_FaultCode( IXMLDOMElement** ppElement );
HRESULT get_FaultString( IXMLDOMElement** ppElement );
HRESULT get_Property( BSTR pPropertyName, VARIANT* pPropertyValue );
HRESULT get_detail( BSTR* bstrDetail );
HRESULT get_elementName( BSTR* pbstrElementName );
HRESULT get_encoding( BSTR* pbstrEncodingStyle );
HRESULT get_faultactor( BSTR* bstrActor );
HRESULT get_faultcode( BSTR* bstrFaultcode );
HRESULT get_faultstring( BSTR* bstrFaultstring );
HRESULT get_name( BSTR* pbstrOperationName );
HRESULT get_soapAction( BSTR* pbstrSoapAction );
HRESULT put_Property( BSTR pPropertyName, VARIANT PropertyValue );

#endif /* _MSSOAP_ */
