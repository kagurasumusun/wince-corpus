/* IAccess.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 1 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _IACCESS_
#define _IACCESS_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IAccessControl  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetAllAccessRights( LPWSTR lpProperty, PACTRL_ACCESSW* ppAccessList, PTRUSTEEW* ppOwner, PTRUSTEEW* ppGroup );
HRESULT GrantAccessRights( PACTRL_ACCESSW pAccessList );
HRESULT IsAccessAllowed( PTRUSTEEW pTrustee, LPWSTR lpProperty, ACCESS_RIGHTS AccessRights, BOOL* pfAccessAllowed );
HRESULT RevokeAccessRights( LPWSTR lpProperty, ULONG cTrustees, TRUSTEEW prgTrustees[] );
HRESULT SetAccessRights( PACTRL_ACCESSW pAccessList );
HRESULT SetOwner( PTRUSTEEW pOwner, PTRUSTEEW pGroup );

#endif /* _IACCESS_ */
