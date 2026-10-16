/* Dvdcss.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 13 extra decls
 */
#ifndef _DVDCSS_IDL_
#define _DVDCSS_IDL_


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
