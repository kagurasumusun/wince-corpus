/* Remoteui.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _REMOTEUI_
#define _REMOTEUI_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddArray( const char *pName, IRemoteUI_Array **pArray );
HRESULT AddValue( const char *pIndex, VARIANT *pValue );
HRESULT FindFirstArray( IRemoteUI_Array **pArray );
HRESULT FindFirstVar( char **pIndex, VARIANT **pValue );
HRESULT FindNextArray( IRemoteUI_Array **pArray );
HRESULT FindNextVar( char **pIndex, VARIANT **pValue );
HRESULT GetArray(  const char *pName,  IRemoteUI_Array **pArray  )
HRESULT GetValue( const char *pIndex, VARIANT **pValue );
HRESULT ModuleName ( char **pModuleName );
HRESULT NeedHTTPDRestart( BOOL *pVal );
HRESULT NeedNetworkRestart( BOOL *pVal );

#endif /* _REMOTEUI_ */
