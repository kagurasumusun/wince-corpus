/* rtcerr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _RTCERR_
#define _RTCERR_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IRTCUnsolicitedSubscription::AcceptedContentType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT AcceptedContentType (
 BSTR* pbstrAcceptedContentType
);

/* IRTCUnsolicitedSubscription::Disable  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Disable ();

/* IRTCUnsolicitedSubscription::Enable  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Enable ();

/* IRTCUnsolicitedSubscription::EventPackage  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT EventPackage(
 BSTR* pbstrEventPackage
);

/* IRTCUnsolicitedSubscription::IsEnabled  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT IsEnabled (
 VARIENT_BOOL pfEnabled
);

/* IRTCUnsolicitedSubscription::Unregister  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Unregister ();
#endif /* _WIN32_WCE */

#endif /* _RTCERR_ */
