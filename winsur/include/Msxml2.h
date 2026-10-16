/* Msxml2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 39 constants, 110 declarations, 0 outlines, 0 base types, 0 extra macros, 19 extra decls
 */
#ifndef _MSXML2_
#define _MSXML2_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define COMPLETED 4
#define INTERACTIVE 3
#define LOADED 2
#define LOADING 1
#define NODE_ATTRIBUTE 2
#define NODE_CDATA_SECTION 4
#define NODE_COMMENT 8
#define NODE_DOCUMENT 9
#define NODE_DOCUMENT_FRAGMENT 11
#define NODE_DOCUMENT_TYPE 10
#define NODE_ELEMENT 1
#define NODE_ENTITY 6
#define NODE_ENTITY_REFERENCE 5
#define NODE_NOTATION 12
#define NODE_PROCESSING_INSTRUCTION 7
#define NODE_TEXT 3
#define XML_ATTRIBUTE_FIXED 0xC00CE016L
#define XML_ATTRIBUTE_NOT_DEFINED 0xC00CE015L
#define XML_ATTRIBUTE_VALUE 0xC00CE017L
#define XML_DTD_EXPECTING 0xC00CE026L
#define XML_E_NODTD 0xC00CE224
#define XML_E_NOTWF 0xC00CE223
#define XML_ELEMENT_ID_NOT_FOUND 0xC00CE00EL
#define XML_ELEMENT_NOT_COMPLETE 0xC00CE012L
#define XML_ELEMENT_UNDECLARED 0xC00CE00DL
#define XML_ELEMENT_UNDEFINED 0xC00CE01CL
#define XML_EMPTY_NOT_ALLOWED 0xC00CE011L
#define XML_ENTITY_UNDEFINED 0xC00CE002L
#define XML_EXTENT_IN_ATTR 0xC00CE007L
#define XML_ILLEGAL_TEXT 0xC00CE018L
#define XML_INFINITE_ENTITY_LOOP 0xC00CE003L
#define XML_INVALID_CONTENT 0xC00CE014L
#define XML_MULTI_FIXED_VALUES 0xC00CE019L
#define XML_NDATA_INVALID_PE 0xC00CE004L
#define XML_NDATA_INVALID_REF 0xC00CE006L
#define XML_REQUIRED_ATTRIBUTE_MISSING 0xC00CE020L
#define XML_REQUIRED_NDATA 0xC00CE005L
#define XML_ROOT_NAME_MISMATCH 0xC00CE013L
#define XML_XMLNS_FIXED 0xC00CE01E
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ISAXXMLReader::putBaseURL  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putBaseURL(
 const wchar_t* pwchBaseUrl
);

/* ISAXXMLReader::putContentHandler  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putContentHandler(
 ISAXContentHandler* pHandler
);

/* ISAXXMLReader::putDTDHandler  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putDTDHandler(
 ISAXDTDHandler* pHandler
);

/* ISAXXMLReader::putEntityResolver  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putEntityResolver(
 ISAXEntityResolver* pResolver
);

/* ISAXXMLReader::putErrorHandler  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putErrorHandler(
 ISAXErrorHandler* pHandler
);

/* ISAXXMLReader::putFeature  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putFeature(
 const wchar_t* pwchName,
 VARIANT_BOOL* vfValue
);

/* ISAXXMLReader::putProperty  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putProperty(
 const wchar_t* pwchName,
 VARIANT* varValue
);

/* ISAXXMLReader::putSecureBaseURL  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
HRESULT putSecureBaseURL (
 const wchar_t* pwchSecureBaseUrl
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* ISAXDeclHandler  [function; ce-only; CE 5.0..599; Uuid.lib] */
... SAXXMLReader * r = ...
SAXDeclHandler * dh = new SAXDeclHandler();
r->putProperty("http://xml.org/sax/properties/declaration-handler",dh);

/* ISAXLexicalHandler  [function; ce-only; CE 5.0..599; Uuid.lib] */
... SAXXMLReader * r = ...
SAXLexicalHandler * lh = new SAXLexicalHandler ();
r->putProperty("http://xml.org/sax/properties/lexical-handler",lh);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DOMDocument::abort  [function; ce-only; CE 5.0..699; Uuid.lib] */
HRESULT abort( void );

/* DOMDocument::getElementsByTagName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getElementsByTagName(
 BSTR tagName,
 IXMLDOMNodeList** resultList
);

/* DOMDocument::onreadystatechange  [function; ce-only; CE 5.0..699] */
HRESULT put_onreadystatechange(
 VARIANT readystatechangeSink
);

/* DOMDocument::readyState  [function; ce-only; CE 5.0..699] */
HRESULT get_readyState(
 long* value
);

/* DOMDocument::url  [function; ce-only; CE 5.0..699] */
HRESULT get_url(
 BSTR* urlString
);

/* ISAXAttributes::getIndexFromName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getIndexFromName(
 const wchar_t* pwchUri, 
 int cchUri, 
 const wchar_t* pwchLocalName, 
 int cchLocalName,
 int* pnIndex
);

/* ISAXAttributes::getIndexFromQName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getIndexFromQName(
 const wchar_t* pwchQName, 
 int cchQName, 
 int* pnIndex
);

/* ISAXAttributes::getLength  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getLength(
 int* pnLength
);

/* ISAXAttributes::getLocalName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getLocalName(
 int nIndex, 
 const wchar_t** ppwchLocalName, 
 int* pcchLocalName
);

/* ISAXAttributes::getName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getName(
 int nIndex, 
 const wchar_t** ppwchUri, 
 int* pcchUri,
 const wchar_t** ppwchLocalName,
 int* pcchLocalName,
 const wchar_t** ppwchQName,
 int* pcchQName
);

/* ISAXAttributes::getQName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getQName(
 int nIndex, 
 const wchar_t** ppwchQName, 
 int* ppchQName
);

/* ISAXAttributes::getType  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getType(
 int nIndex, 
 const wchar_t** ppwchType,
 int* pcchType
);

/* ISAXAttributes::getTypeFromName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getTypeFromName(
 const wchar_t* pwchUri, 
 int cchUri,
 const wchar_t* pwchLocalName, 
 int cchLocalName, 
 const wchar_t** ppwchType,
 int* pcchType
);

/* ISAXAttributes::getTypeFromQName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getTypeFromQName(
 const wchar_t* pwchQName, 
 int cchQName,
 const wchar_t** ppwchType,
 int* pcchType
);

/* ISAXAttributes::getURI  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getURI(
 int nIndex, 
 const wchar_t** ppwchUri,
 int* pcchUri
);

/* ISAXAttributes::getValue  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getValue(
 int nIndex, 
 const wchar_t** ppwchValue, 
 int* pcchValue
);

/* ISAXAttributes::getValueFromName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getValueFromName(
 const wchar_t* pwchUri, 
 int cchUri, 
 const wchar_t* pwchLocalName,
 int cchLocalName,
 const wchar_t** ppwchValue,
 int* pcchValue
);

/* ISAXAttributes::getValueFromQName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getValueFromQName(
 const wchar_t* pwchQName, 
 int cchQName, 
 const wchar_t** pwchValue,
 int* pcchValue
);

/* ISAXContentHandler::characters  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT characters(
 const wchar_t* pwchChars,
 int cchChars
);

/* ISAXContentHandler::endDocument  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT endDocument();

/* ISAXContentHandler::endElement  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT endElement(
 const wchar_t* pwchNamespaceUri, 
 int cchNamespaceUri, 
 const wchar_t* pwchLocalName, 
 int cchLocalName,
 const wchar_t* pwchQName,
 int cchQName
);

/* ISAXContentHandler::endPrefixMapping  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT endPrefixMapping(
 const wchar_t* pwchPrefix,
 int cchPrefix
);

/* ISAXContentHandler::ignorableWhitespace  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT ignorableWhitespace(
 const wchar_t* pwchChars,
 int cchChars
);

/* ISAXContentHandler::processingInstruction  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT processingInstruction(
 const wchar_t* pwchTarget,
 int cchTarget,
 const wchar_t* pwchData,
 int cchData
);

/* ISAXContentHandler::putDocumentLocator  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT putDocumentLocator(
 ISAXLocator* pLocator
);

/* ISAXContentHandler::skippedEntity  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT skippedEntity(
 const wchar_t* pwchName,
 int cchName
);

/* ISAXContentHandler::startDocument  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT startDocument();

/* ISAXContentHandler::startElement  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT startElement(
 const wchar_t* pwchNamespaceUri, 
 int cchNamespaceUri, 
 const wchar_t* pwchLocalName, 
 int cchLocalName,
 const wchar_t* pwchQName,
 int cchQName,
 ISAXAttributes* pAttributes
);

/* ISAXContentHandler::startPrefixMapping  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT startPrefixMapping(
 const wchar_t* pwchPrefix, 
 int cchPrefix, 
 const wchar_t* pwchUri,
 int cchUri
);

/* ISAXDeclHandler::attributeDecl  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT attributeDecl(
 const wchar_t* pwchElementName,
 int cchElementName,
 const wchar_t* pwchAttributeName,
 int cchAttributeName,
 const wchar_t* pwchType,
 int cchType,
 const wchar_t* pwchValueDefault,
 int cchValueDefault,
 const wchar_t* pwchValue,
 int cchValue
);

/* ISAXDeclHandler::elementDecl  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT elementDecl(
 const wchar_t* pwchName,
 int cchName,
 const wchar_t* pwchModel,
 int cchModel
);

/* ISAXDeclHandler::externalEntityDecl  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT externalEntityDecl(
 const wchar_t* pwchName,
 int cchName,
 const wchar_t* pwchPublicId,
 int cchPublicId,
 const wchar_t pwchSystemId,
 int cchSystemId
);

/* ISAXDeclHandler::internalEntityDecl  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT internalEntityDecl(
 const wchar_t* pwchName,
 int cchName,
 const wchar_t* pwchValue,
 int cchValue
);

/* ISAXDTDHandler::notationDecl  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT notationDecl(
 const wchar_t* pwchName, 
 int cchName, 
 const wchar_t* pwchPublicId, 
 int cchPublicId,
 const wchar_t* pwchSystemId,
 int cchSystemId
);

/* ISAXDTDHandler::unparsedEntityDecl  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT unparsedEntityDecl(
 const wchar_t* pwchName, 
 int cchName, 
 const wchar_t* pwchPublicId, 
 int cchPublicId,
 const wchar_t* pwchSystemId,
 int cchSystemId,
 const wchar_t* pwchNotationName,
 int cchNotationName
);

/* ISAXEntityResolver::resolveEntity  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT resolveEntity(
 const wchar_t* pwchPublicId,
 const wchar_t* pwchSystemId,
 VARIANT* pvarInput
);

/* ISAXErrorHandler::error  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT error(
 ISAXLocator* pLocator, 
 const wchar_t* pwchErrorMessage,
 HRESULT hrErrorCode
);

/* ISAXErrorHandler::fatalError  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT fatalError(
 ISAXLocator* pLocator, 
 const wchar_t* pwchErrorMessage,
 HRESULT hrErrorCode
);

/* ISAXErrorHandler::ignorableWarning  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT ignorableWarning(
 ISAXLocator* pLocator, 
 const wchar_t* pwchErrorMessage,
 HRESULT hrErrorCode
);

/* ISAXLexicalHandler::comment  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
CHRESULT comment(
 const wchar_t* pwchChars,
 int cchChars
);

/* ISAXLexicalHandler::endCDATA  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT endCDATA();

/* ISAXLexicalHandler::endDTD  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT endDTD();

/* ISAXLexicalHandler::endEntity  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT EndEntity(
 const wchar_t* pwchName, 
 int cchName
);

/* ISAXLexicalHandler::startCDATA  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT startCDATA();

/* ISAXLexicalHandler::startDTD  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT startDTD(
 const wchar_t* pwchName,
 int cchName,
 const wchar_t* pwchPublicId,
 int cchPublicId,
 const wchar_t* pwchSystemId,
 int cchSystemId
);

/* ISAXLexicalHandler::startEntity  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT startEntity(
 const wchar_t* pwchName, 
 int cchName
);

/* ISAXLocator::getColumnNumber  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getColumnNumber(
 int* pnColumn
);

/* ISAXLocator::getLineNumber  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getLineNumber(
 int* pnLine
);

/* ISAXLocator::getPublicId  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getPublicId(
 const wchar_t** ppwchPublicId
);

/* ISAXLocator::getSystemId  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getSystemId(
 const wchar_t** ppwchSystemId
);

/* ISAXXMLFilter::getParent  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getParent(
 ISAXXMLReader** ppReader
);

/* ISAXXMLFilter::putParent  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT putParent(
 ISAXXMLReader* pReader
);

/* ISAXXMLReader::getBaseURL  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getBaseURL(
 const wchar_t** ppwchBaseUrl
);

/* ISAXXMLReader::getContentHandler  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getContentHandler(
 ISAXContentHandler** ppHandler
);

/* ISAXXMLReader::getDTDHandler  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getDTDHandler(
 ISAXDTDHandler** ppHandler
);

/* ISAXXMLReader::getEntityResolver  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getEntityResolver(
 ISAXEntityResolver** ppResolver
);

/* ISAXXMLReader::getErrorHandler  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getErrorHandler(
 ISAXErrorHandler** ppHandler
);

/* ISAXXMLReader::getFeature  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getFeature(
 const wchar_t* pwchName,
 VARIANT_BOOL* pvfValue
);

/* ISAXXMLReader::getProperty  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getProperty(
 const wchar_t* pwchName,
 VARIANT* pvarValue
);

/* ISAXXMLReader::getSecureBaseURL  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getSecureBaseURL(
 const wchar_t** ppwchSecureBaseUrl
);

/* ISAXXMLReader::parse  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT parse(
 VARIANT varInput
);

/* ISAXXMLReader::parseURL  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT ParseURL(
 const wchar_t* pwchUrl
);

/* IXMLDOMAttribute::name  [function; ce-only; CE 5.0..699] */
HRESULT get_name(
 BSTR* attributeName
);

/* IXMLDOMCharacterData::data  [function; ce-only; CE 5.0..699] */
HRESULT get_data(
 BSTR* data
);
HRESULT put_data(
 BSTR data
);

/* IXMLDOMCharacterData::length  [function; ce-only; CE 5.0..699] */
HRESULT get_length(
 long* dataLength
);

/* IXMLDOMDocument2::getProperty  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getProperty(
 BSTR name,
 VARIANT* value
);

/* IXMLDOMDocumentType::name  [function; ce-only; CE 5.0..699] */
HRESULT get_name(
 BSTR* rootName
);

/* IXMLDOMElement::getElementsByTagName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getElementsByTagName(
 BSTR tagName,
 IXMLDOMNodeList** resultList
);

/* IXMLDOMEntity::publicId  [function; ce-only; CE 5.0..699] */
HRESULT get_publicId(
 BSTR* publicID
);

/* IXMLDOMEntity::systemId  [function; ce-only; CE 5.0..699] */
HRESULT get_systemId(
 VARIANT* systemID
);

/* IXMLDOMNamedNodeMap::item  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT item(
 long index,
 IXMLDOMNode** listItem
);

/* IXMLDOMNamedNodeMap::length  [function; ce-only; CE 5.0..699] */
HRESULT length(
 long* listLength
);

/* IXMLDOMNamedNodeMap::nextNode  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT nextNode(
 IXMLDOMNode** nextItem
);

/* IXMLDOMNamedNodeMap::reset  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT reset( void );

/* IXMLDOMNode::namespaceURI  [function; ce-only; CE 5.0..699] */
HRESULT get_namespaceURI(
 BSTR* namespaceURI
);

/* IXMLDOMNodeList::item  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT item(
 long index,
 IXMLDOMNode** listItem
);

/* IXMLDOMNodeList::length  [function; ce-only; CE 5.0..699] */
HRESULT get_length(
 long* listLength
);

/* IXMLDOMNodeList::nextNode  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT nextNode(
 IXMLDOMNode** nextItem
);

/* IXMLDOMNodeList::reset  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT reset( void );

/* IXMLDOMNotation::publicId  [function; ce-only; CE 5.0..699] */
HRESULT get_publicId(
 VARIANT* publicID
);

/* IXMLDOMNotation::systemId  [function; ce-only; CE 5.0..699] */
HRESULT get_systemId(
 VARIANT* systemID
);

/* IXMLDOMParseError::url  [function; ce-only; CE 5.0..699] */
HRESULT get_url(
 BSTR* urlString
);

/* IXMLDOMProcessingInstruction::data  [function; ce-only; CE 5.0..699] */
HRESULT get_data(
 BSTR* value
);
HRESULT put_data(
 BSTR value
);

/* IXMLDOMSelection::getProperty  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getProperty(
 BSTR name,
 VARIANT* value
);

/* IXMLHTTPRequest::abort  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT abort(
 void
);

/* IXMLHTTPRequest::getAllResponseHeaders  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getAllResponseHeaders(
 BSTR* pbstrHeaders
);

/* IXMLHTTPRequest::getResponseHeader  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT getResponseHeader(
 BSTR bstrHeader, 
 BSTR* pbstrValue
);

/* IXMLHTTPRequest::onreadystatechange  [function; ce-only; CE 5.0..699] */
HRESULT put_onreadystatechange(
 Idispatch* pReadyStateSink
);

/* IXMLHTTPRequest::open  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT open(
 BSTR bstrMethod, 
 BSTR bstrUrl, 
 VARIANT varAsync,
 VARIANT bstrUser, 
 VARIANT bstrPassword
);

/* IXMLHTTPRequest::readyState  [function; ce-only; CE 5.0..699] */
HRESULT get_readyState(
 long* plState
);

/* IXMLHTTPRequest::responseBody  [function; ce-only; CE 5.0..699] */
HRESULT get_responseBody(
 VARIANT* pvarBody
);

/* IXMLHTTPRequest::responseStream  [function; ce-only; CE 5.0..699] */
HRESULT get_responseStream(
 VARIANT* pvarBody
);

/* IXMLHTTPRequest::responseText  [function; ce-only; CE 5.0..699] */
HRESULT get_responseText(
 BSTR* pbstrBody
);

/* IXMLHTTPRequest::responseXML  [function; ce-only; CE 5.0..699] */
HRESULT get_responseXML(
 Idispatch** ppBody
);

/* IXMLHTTPRequest::send  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT send(
 VARIANT varBody
);

/* IXMLHTTPRequest::setRequestHeader  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT setRequestHeader(
 BSTR bstrHeader, 
 BSTR bstrValue
);

/* IXMLHTTPRequest::status  [function; ce-only; CE 5.0..699] */
HRESULT get_status(
 long* plStatus
);

/* IXMLHTTPRequest::statusText  [function; ce-only; CE 5.0..699] */
HRESULT get_statusText(
 BSTR* pbstrStatus
);

/* XMLSchemaCache/IXMLSchemaCollection::length  [function; ce-only; CE 5.0..699] */
HRESULT length(
 long* length
);

/* XMLSchemaCache/IXMLSchemaCollection::namespaceURI  [function; ce-only; CE 5.0..699] */
HRESULT get_namespaceURI(
 long index,
 BSTR* length
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT EndEntity(const wchar_t* pwchName,intcchName);
HRESULT ParseURL(const wchar_t* pwchUrl);
... SAXXMLReader * r = ... SAXDeclHandler * dh = new SAXDeclHandler(); r->putProperty("http://xml.org/sax/properties/declaration-handler",dh);
... SAXXMLReader * r = ... SAXLexicalHandler * lh = new SAXLexicalHandler (); r->putProperty("http://xml.org/sax/properties/lexical-handler",lh);
HRESULT get_data(BSTR* data);
HRESULT get_length(long* dataLength);
HRESULT get_namespaceURI(BSTR* namespaceURI);
HRESULT get_publicId(BSTR* publicID);
HRESULT get_readyState(long* value);
HRESULT get_responseBody(VARIANT* pvarBody);
HRESULT get_responseStream(VARIANT* pvarBody);
HRESULT get_responseText(BSTR* pbstrBody);
HRESULT get_responseXML(Idispatch** ppBody);
HRESULT get_status(long* plStatus);
HRESULT get_statusText(BSTR* pbstrStatus);
HRESULT get_systemId(VARIANT* systemID);
HRESULT get_url(BSTR* urlString);
HRESULT put_data(BSTRdata);
HRESULT put_onreadystatechange(VARIANT readystatechangeSink);

#endif /* _MSXML2_ */
