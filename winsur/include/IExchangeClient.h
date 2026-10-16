/* IExchangeClient.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 38 declarations, 0 outlines, 0 base types, 0 extra macros, 32 extra decls
 */
#ifndef _IEXCHANGECLIENT_
#define _IEXCHANGECLIENT_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define e_ecrsPending 0
#define e_ecrtInvalid 0
#define OWAEC_E_ALREADYINITIALIZED 0x80bb0006
#define OWAEC_E_INVALIDSEARCH 0x80bb0004
#define OWAEC_E_NODATA 0x80bb0005
#define OWAEC_E_NOSERVER 0x80bb0002
#define OWAEC_E_NOTINITIALIZED 0x80bb0001
#define OWAEC_E_NOUSER 0x80bb0003
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ContactsSearchCriteria  [struct; ce-only; CE 5.0..699] */
struct ContactsSearchCriteria {
 WCHAR* wszFirstName;
 WCHAR* wszLastName;
};

/* ExchangeClientRequestStatus  [enum; ce-only; CE 5.0..699] */
enum ExchangeClientRequestStatus
{
 e_ecrsPending = 0,
 e_ecrsInProgress,
 e_ecrsSending,
 e_ecrsBypassingOWAPage,
 e_ecrsSucceeded,
 e_ecrsOutOfMemory,
 e_ecrsParseFailed,
 e_ecrsHttpFailure,
 e_ecrsFailedToSend,
 e_ecrsFailedToBypassAuthPage,
 e_ecrsCancelled,
 e_ecrsNoCredentials
};

/* ExchangeClientRequestType  [enum; ce-only; CE 5.0..699] */
enum ExchangeClientRequestType
{
 e_ecrtInvalid = 0,
 e_ecrtContacts,
 e_ecrtGALSearch,
 e_ecrtFreeBusy
};

/* FreeBusyCriteria  [struct; ce-only; CE 5.0..699] */
struct FreeBusyCriteria {
 WCHAR* wszAlias;
 SYSTEMTIME* pstStart;
};

/* GALSearchCriteria  [struct; ce-only; CE 5.0..699] */
struct GALSearchCriteria {
 WCHAR* wszAlias;
 WCHAR* wszFirstName;
 WCHAR* wszLastName;
};

/* IExchangeClient::RequestContacts  [struct; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT RequestContacts(
 struct ContactsSearchCriteria* pCriteria,
 IExchangeClientRequest** ppiRequest
);

/* IExchangeClient::RequestFreeBusyData  [struct; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT RequestFreeBusyData(
 struct FreeBusyCriteria* pCriteria,
 IExchangeClientRequest** ppiRequest
);

/* IExchangeClient::RequestGALSearch  [struct; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT RequestGALSearch(
 struct GALSearchCriteria* pCriteria,
 IExchangeClientRequest** ppiRequest
);

/* IExchangeClientRequest::GetStatus  [enum; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetStatus(
 enum ExchangeClientRequestStatus* pStatus
);

/* IExchangeClientRequest::GetType  [enum; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetType(
 enum ExchangeClientRequestType* pecrt
);

/* IExchangeClientRequestCallback::OnRequestProgress  [enum; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT OnRequestProgress(
 IExchangeClientRequest* pRequest,
 enum ExchangeClientRequestStatus status
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IExchangeClient::CancelPendingRequests  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT CancelPendingRequests();

/* IExchangeClient::GetServer  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetServer(
 WCHAR* wszBuffer, 
 UINT cchBuffer
);

/* IExchangeClient::Initialize  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT Initialize(
 IExchangeClientRequestCallback* piCallback
);

/* IExchangeClient::SetCredentials  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT SetCredentials(
 const WCHAR* c_wszUsername,
 const WCHAR* c_wszPassword
);

/* IExchangeClient::SetServer  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT SetServer(
 const WCHAR* c_wszServername
);

/* IExchangeClient::Uninitialize  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT Uninitialize();

/* IExchangeClientContactInformation::GetDisplayName  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetDisplayName(
 WCHAR* wszNameBuffer,
 UINT cchNameBuffer
);

/* IExchangeClientContactInformation::GetEmailAddress  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetEmailAddress(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientContactInformation::GetHomeAddress  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetHomeAddress(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientContactInformation::GetHomePhoneNumber  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetHomePhoneNumber(
 WCHAR* wszNumberBuffer,
 UINT cchNumberBuffer
);

/* IExchangeClientContactInformation::GetMobilePhoneNumber  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetMobilePhoneNumber(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientContactInformation::GetWorkAddress  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetWorkAddress(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientContactInformation::GetWorkPhoneNumber  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetWorkPhoneNumber(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientDataItemArray::GetItemAt  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetItemAt(
 UINT idxItem,
 IUnknown** ppiItem
);

/* IExchangeClientDataItemArray::GetItemCount  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetItemCount(
 UINT* pcItems
);

/* IExchangeClientFreeBusyInformation::GetDisplayName  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetDisplayName(
 WCHAR* wszNameBuffer,
 UINT cchNameBuffer
);

/* IExchangeClientFreeBusyInformation::GetEmailAddress  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetEmailAddress(
 WCHAR* wszAddressBuffer,
 UINT cchAddressBuffer
);

/* IExchangeClientFreeBusyInformation::GetFreeBusyData  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetFreeBusyData(
 WCHAR* wszDataBuffer,
 UINT cchDataBuffer
);

/* IExchangeClientGALSearchInformation::GetAlias  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetAlias(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientGALSearchInformation::GetDisplayName  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetDisplayName(
 WCHAR* wszNameBuffer,
 UINT cchNameBuffer
);

/* IExchangeClientGALSearchInformation::GetOffice  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetOffice(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientGALSearchInformation::GetPhoneNumber  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetPhoneNumber(
 WCHAR* wszNumberBuffer,
 UINT cchNumberBuffer
);

/* IExchangeClientGALSearchInformation::GetSMTPAddress  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetSMTPAddress(
 WCHAR* wszBuffer,
 UINT cchBuffer
);

/* IExchangeClientRequest::Cancel  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT Cancel();

/* IExchangeClientRequest::GetDataItemArray  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetDataItemArray(
 IExchangeClientDataItemArray** ppiArray
);

/* IExchangeClientRequest::GetHttpStatus  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT GetHttpStatus(
 LONG* plHttpStatus
);

/* IExchangeClientRequestCallback::OnShutdown  [function; ce-only; CE 5.0..699; OWAExchangeClient.lib] */
HRESULT OnShutdown();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum ExchangeClientRequestStatus{ e_ecrsPending = 0, e_ecrsInProgress, e_ecrsSending, e_ecrsBypassingOWAPage, e_ecrsSucceeded, e_ecrsOutOfMemory, e_ecrsParseFailed, e_ecrsHttpFailure, e_ecrsFailedToSend, e_ecrsFailedToBypassAuthPage, e_ecrsCancelled, e_ecrsNoCredentials,};
enum ExchangeClientRequestType{ e_ecrtInvalid = 0, e_ecrtContacts, e_ecrtGALSearch, e_ecrtFreeBusy,};
HRESULT GetStatus(  enum ExchangeClientRequestStatus* pStatus  );
HRESULT GetType(  enum ExchangeClientRequestType* pecrt  );
HRESULT OnRequestProgress(  IExchangeClientRequest* pRequest,  enum ExchangeClientRequestStatus status  );

/* struct */
HRESULT RequestContacts(  struct ContactsSearchCriteria* pCriteria,  IExchangeClientRequest** ppiRequest  );
struct FreeBusyCriteria { WCHAR* wszAlias; SYSTEMTIME* pstStart;};
struct GALSearchCriteria { WCHAR* wszAlias; WCHAR* wszFirstName; WCHAR* wszLastName;};

/* function */
HRESULT CancelPendingRequests();
HRESULT GetAlias( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetDataItemArray( IExchangeClientDataItemArray** ppiArray );
HRESULT GetEmailAddress( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetFreeBusyData( WCHAR* wszDataBuffer, UINT cchDataBuffer );
HRESULT GetHomeAddress( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetHomePhoneNumber( WCHAR* wszNumberBuffer, UINT cchNumberBuffer );
HRESULT GetHttpStatus( LONG* plHttpStatus );
HRESULT GetItemAt( UINT idxItem, IUnknown** ppiItem );
HRESULT GetMobilePhoneNumber( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetOffice( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetPhoneNumber( WCHAR* wszNumberBuffer, UINT cchNumberBuffer );
HRESULT GetSMTPAddress( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetServer( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetWorkAddress( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT GetWorkPhoneNumber( WCHAR* wszBuffer, UINT cchBuffer );
HRESULT OnRequestProgress( IExchangeClientRequest* pRequest, enum ExchangeClientRequestStatus status );
HRESULT OnShutdown();
HRESULT RequestContacts( struct ContactsSearchCriteria* pCriteria, IExchangeClientRequest** ppiRequest );
HRESULT RequestFreeBusyData( struct FreeBusyCriteria* pCriteria, IExchangeClientRequest** ppiRequest );
HRESULT RequestGALSearch( struct GALSearchCriteria* pCriteria, IExchangeClientRequest** ppiRequest );
HRESULT SetCredentials( const WCHAR* c_wszUsername, const WCHAR* c_wszPassword );
HRESULT SetServer( const WCHAR* c_wszServername );
HRESULT Uninitialize();

#endif /* _IEXCHANGECLIENT_ */
