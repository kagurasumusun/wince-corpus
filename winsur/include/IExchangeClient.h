/* IExchangeClient.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 4 declarations, 7 outlines, 0 base types, 0 extra macros, 25 extra decls
 */
#ifndef _IEXCHANGECLIENT_
#define _IEXCHANGECLIENT_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define OWAEC_E_ALREADYINITIALIZED 0x80bb0006
#define OWAEC_E_INVALIDSEARCH 0x80bb0004
#define OWAEC_E_NODATA 0x80bb0005
#define OWAEC_E_NOSERVER 0x80bb0002
#define OWAEC_E_NOTINITIALIZED 0x80bb0001
#define OWAEC_E_NOUSER 0x80bb0003

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* GALSearchCriteria  [struct; ce-only] */

/* IExchangeClient::RequestContacts  [struct; ce-only; OWAExchangeClient.lib] */

/* IExchangeClient::RequestFreeBusyData  [struct; ce-only; OWAExchangeClient.lib] */

/* IExchangeClient::RequestGALSearch  [struct; ce-only; OWAExchangeClient.lib] */

/* IExchangeClientRequest::GetStatus  [enum; ce-only; OWAExchangeClient.lib] */

/* IExchangeClientRequest::GetType  [enum; ce-only; OWAExchangeClient.lib] */

/* IExchangeClientRequestCallback::OnRequestProgress  [enum; ce-only; OWAExchangeClient.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ContactsSearchCriteria  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CONTACTSSEARCHCRITERIA
#define __WINCE_DEFINED_CONTACTSSEARCHCRITERIA
struct ContactsSearchCriteria {
 WCHAR* wszFirstName;
 WCHAR* wszLastName;
};
#endif /* __WINCE_DEFINED_CONTACTSSEARCHCRITERIA */

/* ExchangeClientRequestStatus  [enum; ce-only] */
#ifndef __WINCE_DEFINED_EXCHANGECLIENTREQUESTSTATUS
#define __WINCE_DEFINED_EXCHANGECLIENTREQUESTSTATUS
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
#endif /* __WINCE_DEFINED_EXCHANGECLIENTREQUESTSTATUS */

/* ExchangeClientRequestType  [enum; ce-only] */
#ifndef __WINCE_DEFINED_EXCHANGECLIENTREQUESTTYPE
#define __WINCE_DEFINED_EXCHANGECLIENTREQUESTTYPE
enum ExchangeClientRequestType
{
 e_ecrtInvalid = 0,
 e_ecrtContacts,
 e_ecrtGALSearch,
 e_ecrtFreeBusy
};
#endif /* __WINCE_DEFINED_EXCHANGECLIENTREQUESTTYPE */

/* FreeBusyCriteria  [struct; ce-only] */
#ifndef __WINCE_DEFINED_FREEBUSYCRITERIA
#define __WINCE_DEFINED_FREEBUSYCRITERIA
struct FreeBusyCriteria {
 WCHAR* wszAlias;
 SYSTEMTIME* pstStart;
};
#endif /* __WINCE_DEFINED_FREEBUSYCRITERIA */

/* wszLastName  [extra struct] */
#ifndef __WINCE_DEFINED_CONTACTSSEARCHCRITERIA
#define __WINCE_DEFINED_CONTACTSSEARCHCRITERIA
struct ContactsSearchCriteria { WCHAR* wszFirstName; WCHAR* wszLastName; };
#endif /* __WINCE_DEFINED_CONTACTSSEARCHCRITERIA */

/* e_ecrsNoCredentials  [extra enum] */
#ifndef __WINCE_DEFINED_EXCHANGECLIENTREQUESTSTATUS
#define __WINCE_DEFINED_EXCHANGECLIENTREQUESTSTATUS
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
 e_ecrsNoCredentials,
};
#endif /* __WINCE_DEFINED_EXCHANGECLIENTREQUESTSTATUS */

/* e_ecrtFreeBusy  [extra enum] */
#ifndef __WINCE_DEFINED_EXCHANGECLIENTREQUESTTYPE
#define __WINCE_DEFINED_EXCHANGECLIENTREQUESTTYPE
enum ExchangeClientRequestType
{
 e_ecrtInvalid = 0,
 e_ecrtContacts,
 e_ecrtGALSearch,
 e_ecrtFreeBusy,
};
#endif /* __WINCE_DEFINED_EXCHANGECLIENTREQUESTTYPE */

/* pstStart  [extra struct] */
#ifndef __WINCE_DEFINED_FREEBUSYCRITERIA
#define __WINCE_DEFINED_FREEBUSYCRITERIA
struct FreeBusyCriteria { WCHAR* wszAlias; SYSTEMTIME* pstStart; };
#endif /* __WINCE_DEFINED_FREEBUSYCRITERIA */

/* pStatus  [extra enum] */
#ifndef __WINCE_DEFINED_PSTATUS
#define __WINCE_DEFINED_PSTATUS
HRESULT GetStatus(enum ExchangeClientRequestStatus* pStatus);
#endif /* __WINCE_DEFINED_PSTATUS */

/* pecrt  [extra enum] */
#ifndef __WINCE_DEFINED_PECRT
#define __WINCE_DEFINED_PECRT
HRESULT GetType(enum ExchangeClientRequestType* pecrt);
#endif /* __WINCE_DEFINED_PECRT */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CancelPendingRequests();
HRESULT GetAlias(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetDisplayName(WCHAR* wszNameBuffer, UINT cchNameBuffer);
HRESULT GetEmailAddress(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetFreeBusyData(WCHAR* wszDataBuffer, UINT cchDataBuffer);
HRESULT GetHomeAddress(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetHomePhoneNumber(WCHAR* wszNumberBuffer, UINT cchNumberBuffer);
HRESULT GetHttpStatus(LONG* plHttpStatus);
HRESULT GetMobilePhoneNumber(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetOffice(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetPhoneNumber(WCHAR* wszNumberBuffer, UINT cchNumberBuffer);
HRESULT GetSMTPAddress(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetServer(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetWorkAddress(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT GetWorkPhoneNumber(WCHAR* wszBuffer, UINT cchBuffer);
HRESULT OnShutdown();
HRESULT SetCredentials(const WCHAR* c_wszUsername, const WCHAR* c_wszPassword);
HRESULT SetServer(const WCHAR* c_wszServername);
HRESULT Uninitialize();

#endif /* _IEXCHANGECLIENT_ */
