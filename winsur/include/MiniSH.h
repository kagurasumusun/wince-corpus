/* MiniSH.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _MINISH_
#define _MINISH_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IMiniSH::GetAddressFromLine  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetAddressFromLine(
 DWORD dwLine,
 LPCWSTR pszModule,
 LPCWSTR pszSource,
 ADDRESS_TYPE*pAddress);

/* IMiniSH::GetAddressFromSymbol  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetAddressFromSymbol(
 DWORD dwPid,
 LPCWSTR pszModule,
 LPCWSTR pszSource,
 LPCWSTR pszRoutine,
 LPCWSTR pszSymbol,
 ADDRESS_TYPE* pAddress
);

/* IMiniSH::GetNearestLineFromAddress  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNearestLineFromAddress(
 ADDRESS_TYPE Address,
 LPWSTR* ppszModule,
 LPWSTR* ppszSource,
 DWORD* dwLine
);

/* IMiniSH::GetNearestLineFromOffset  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNearestLineFromOffset(
 ADDRESS_TYPE Offset,
 LPCWSTR pszModule,
 LPWSTR* ppszSource,
 DWORD* pdwLine
);

/* IMiniSH::GetNearestSymbolFromAddress  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNearestSymbolFromAddress(
 ADDRESS_TYPE Address,
 DWORD* pdwPid,
 LPWSTR* ppszModule,
 LPWSTR* ppszSource,
 LPWSTR* ppszRoutine,
 LPWSTR* ppszSymbol,
 DWORD* pdwDistance
);

/* IMiniSH::GetNearestSymbolFromOffset  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNearestSymbolFromOffset(
 ADDRESS_TYPE Offset,
 LPCWSTR pszModule,
 LPWSTR* ppszSource,
 LPWSTR* ppszRoutine,
 LPWSTR* ppszSymbol,
 DWORD* pdwDistance
);

/* IMiniSH::GetOffsetFromLine  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetOffsetFromLine(
 DWORD dwLine,
 LPCWSTR pszModule,
 LPCWSTR pszSource,
 ADDRESS_TYPE* pOffset
);

/* IMiniSH::GetOffsetFromSymbol  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetOffsetFromSymbol(
 LPCWSTR pszModule,
 LPCWSTR pszSource,
 LPCWSTR pszRoutine,
 LPCWSTR pszSymbol,
 ADDRESS_TYPE* pOffset
);

/* IMiniSH::GetSymbolPath  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetSymbolPath(
 LPWSTR* ppszPath
);

/* IMiniSH::SetSymbolPath  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SetSymbolPath(
 LPCWSTR pszPath
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetAddressFromLine( DWORDdwLine,LPCWSTRpszModule,LPCWSTRpszSource, ADDRESS_TYPE*pAddress);
HRESULT GetAddressFromSymbol( DWORD dwPid,LPCWSTRpszModule, LPCWSTRpszSource, LPCWSTRpszRoutine,LPCWSTRpszSymbol,ADDRESS_TYPE*pAddress);
HRESULT GetNearestLineFromAddress( ADDRESS_TYPEAddress, LPWSTR*ppszModule, LPWSTR*ppszSource, DWORD*dwLine);
HRESULT GetNearestLineFromOffset( ADDRESS_TYPEOffset,LPCWSTRpszModule,LPWSTR*ppszSource,DWORD*pdwLine);
HRESULT GetNearestSymbolFromAddress( ADDRESS_TYPEAddress,DWORD*pdwPid,LPWSTR*ppszModule,LPWSTR*ppszSource,LPWSTR* ppszRoutine,LPWSTR*ppszSymbol,DWORD*pdwDistance);
HRESULT GetNearestSymbolFromOffset( ADDRESS_TYPEOffset,LPCWSTRpszModule,LPWSTR*ppszSource,LPWSTR*ppszRoutine, LPWSTR*ppszSymbol,DWORD*pdwDistance);
HRESULT GetOffsetFromLine( DWORD dwLine,LPCWSTRpszModule,LPCWSTRpszSource,ADDRESS_TYPE*pOffset);
HRESULT GetOffsetFromSymbol( LPCWSTR pszModule,LPCWSTRpszSource,LPCWSTRpszRoutine,LPCWSTRpszSymbol,ADDRESS_TYPE*pOffset);
HRESULT GetSymbolPath( LPWSTR* ppszPath);
HRESULT SetSymbolPath( LPCWSTR pszPath);

#endif /* _MINISH_ */
