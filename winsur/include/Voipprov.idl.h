/* Voipprov.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _VOIPPROV_IDL_
#define _VOIPPROV_IDL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT get_SipServerParameters( BSTR* pbstrMyURI, BSTR* pbstrMyServer, BSTR* pbstrProfileString );
HRESULT put_RegistrationParameters( DirectoryClientRegParams* pdcrp );
HRESULT put_SipPassword( BSTR bstrSipPassword );

#endif /* _VOIPPROV_IDL_ */
