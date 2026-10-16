/* Dccole.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 16 extra decls
 */
#ifndef _DCCOLE_
#define _DCCOLE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200)) /* CE 1.0..199 */

/* IDccMan::AutoconnectDisable  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::AutoconnectDisable(void);

/* IDccMan::AutoconnectEnable  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::AutoconnectEnable(void)
);

/* IDccMan::ConnectNow  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::ConectNow(void)
);

/* IDccMan::DisconnectNow  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::DisconectNow(void);

/* IDccMan::SetIconDataTransferring  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::SetIconDataTransferring (void);

/* IDccMan::SetIconError  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::SetIconError(void);

/* IDccMan::SetIconNoDataTransferring  [function; ce-only; CE 1.0..199] */
HRESULT STDMETHODIMP IDccMan::SetIconDataNoTransferring (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* IDccMan::Advise  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT STDMETHODIMP IDccMan::Advise( 
 IDccManSink* pDccSink,
 DWORD* pdwContext
);

/* IDccMan::ShowCommSettings  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT STDMETHODIMP IDccMan::ShowCommSettings(void);

/* IDccMan::Unadvise  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT STDMETHODIMP IDccMan::Unadvise( 
 DWORD dwContext
);

/* IDccManSink::OnLogActive  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogActive(void);

/* IDccManSink::OnLogAnswered  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogAnswered(void);

/* IDccManSink::OnLogDisconnection  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogDisconnection(void);

/* IDccManSink::OnLogError  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogError(void);

/* IDccManSink::OnLogInactive  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogInactive(void);

/* IDccManSink::OnLogIpAddr  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogIpAddr(
 DWORD dwIpAddr
);

/* IDccManSink::OnLogListen  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogListen(void);

/* IDccManSink::OnLogTerminated  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Ole32.lib, Uuid.lib] */
HRESULT IDccManSink::OnLogTerminated(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT STDMETHODIMP IDccMan::AutoconnectDisable(void);
HRESULT STDMETHODIMP IDccMan::AutoconnectEnable(void) );
HRESULT STDMETHODIMP IDccMan::ConectNow(void) );
HRESULT STDMETHODIMP IDccMan::DisconectNow(void);
STDMETHODIMP IDccManSink::OnLogActive( void );
STDMETHODIMP IDccManSink::OnLogAnswered( void );
STDMETHODIMP IDccManSink::OnLogDisconnection( void);
STDMETHODIMP IDccManSink::OnLogError( void );
STDMETHODIMP IDccManSink::OnLogInactive( void );
STDMETHODIMP IDccManSink::OnLogIpAddr(  DWORD dwIpAddr);
STDMETHODIMP IDccManSink::OnLogListen( void );
HRESULT STDMETHODIMP IDccManSink::OnLogTerminated(void);
HRESULT STDMETHODIMP IDccMan::SetIconDataNoTransferring (void);
HRESULT STDMETHODIMP IDccMan::SetIconDataTransferring (void);
HRESULT STDMETHODIMP IDccMan::SetIconError(void);
HRESULT STDMETHODIMP IDccMan::ShowCommSettings(void);

#endif /* _DCCOLE_ */
