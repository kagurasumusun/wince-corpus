/* Dvdcss.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 13 declarations, 0 outlines, 0 base types, 0 extra macros, 13 extra decls
 */
#ifndef _DVDCSS_IDL_
#define _DVDCSS_IDL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IDVDDecoderCSS  [struct; ce-only; CE 5.0..599] */
typedef struct { UINT8 key[5]; } CSS_KEY;
typedef struct { UINT8 challenge[10]; } CSS_CHALLENGE;
typedef struct { UINT8 sdks[2048]; } CSS_SDKS;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IDVDDecoderCSS::BypassDescrambler  [function; ce-only; CE 4.0..699] */
HRESULT BypassDescrambler();

/* IDVDDecoderCSS::EnableDescrambler  [function; ce-only; CE 4.0..699] */
HRESULT EnableDescrambler();

/* IDVDDecoderCSS::GetChallenge  [function; ce-only; CE 4.0..699] */
HRESULT GetChallenge(
 CSS_CHALLENGE* pChallenge
);

/* IDVDDecoderCSS::GetResponseKey  [function; ce-only; CE 4.0..699] */
HRESULT GetResponseKey(
 CSS_KEY* pKey
);

/* IDVDDecoderCSS::InitiateAuthentication  [function; ce-only; CE 4.0..699] */
HRESULT InitiateAuthentication();

/* IDVDDecoderCSS::NewDisk  [function; ce-only; CE 4.0..699] */
HRESULT NewDisk();

/* IDVDDecoderCSS::ResetAuthentication  [function; ce-only; CE 4.0..699] */
HRESULT ResetAuthentication();

/* IDVDDecoderCSS::SendDriveChallenge  [function; ce-only; CE 4.0..699] */
HRESULT SendDriveChallenge(
 CSS_CHALLENGE* pChallenge
);

/* IDVDDecoderCSS::SendDriveResponseKey  [function; ce-only; CE 4.0..699] */
HRESULT SendDriveResponseKey(
 CSS_KEY* pKey
);

/* IDVDDecoderCSS::SendScrambledDiskKeyData  [function; ce-only; CE 4.0..699] */
HRESULT SendScrambledDiskKeyData(
 CSS_SDKS* pSDKS
);

/* IDVDDecoderCSS::SendTitleKey  [function; ce-only; CE 4.0..699] */
HRESULT SendTitleKey(
 CSS_KEY* pKey
);

/* IDVDDecoderCSS::SetSectorLength  [function; ce-only; CE 4.0..699] */
HRESULT SetSectorLength(
 UINT dwLength
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct { UINT8 key[5]; } CSS_KEY; typedef struct { UINT8 challenge[10]; } CSS_CHALLENGE; typedef struct { UINT8 sdks[2048]; } CSS_SDKS;

/* function */
HRESULT BypassDescrambler();
HRESULT EnableDescrambler();
HRESULT GetChallenge(CSS_CHALLENGE* pChallenge);
HRESULT GetResponseKey(CSS_KEY* pKey);
HRESULT InitiateAuthentication();
HRESULT NewDisk();
HRESULT ResetAuthentication();
HRESULT SendDriveChallenge(CSS_CHALLENGE* pChallenge);
HRESULT SendDriveResponseKey(CSS_KEY* pKey);
HRESULT SendScrambledDiskKeyData(CSS_SDKS* pSDKS);
HRESULT SendTitleKey(CSS_KEY* pKey);
HRESULT SetSectorLength(UINTdwLength);

#endif /* _DVDCSS_IDL_ */
