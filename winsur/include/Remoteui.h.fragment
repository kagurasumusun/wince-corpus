/* Remoteui.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 20 declarations, 0 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _REMOTEUI_
#define _REMOTEUI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IRemoteUI_Array::AddValue  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT AddValue(
 const char* pIndex,
 VARIANT* pValue
);

/* IRemoteUI_Array::FindFirstVar  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT FindFirstVar(
 char** pIndex,
 VARIANT** pValue
);

/* IRemoteUI_Array::FindNextVar  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT FindNextVar(
 char** pIndex,
 VARIANT** pValue
);

/* IRemoteUI_Array::GetName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT GetName(
 char** pName
);

/* IRemoteUI_Array::GetValue  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT GetValue(
 const char* pIndex,
 VARIANT** pValue
);

/* IRemoteUIModule::Get  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Get(
 BOOL fForBackup,
 IVariableContainer* pToServer
);

/* IRemoteUIModule::Init  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Init(
 const char* pInitArgs
);

/* IRemoteUIModule::ModuleName  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT ModuleName (
 char** pModuleName
);

/* IRemoteUIModule::NeedHTTPDRestart  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT NeedHTTPDRestart(
 BOOL* pVal
);

/* IRemoteUIModule::NeedNetworkRestart  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT NeedNetworkRestart(
 BOOL* pVal
);

/* IRemoteUIModule::Put  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Put(
 BOOL fForRestore,
 IVariableContainer* pFromServer,
 IVariableContainer* pReturn
);

/* IRemoteUIModule::Reset  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT Reset();

/* IVariableContainer::AddArray  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT AddArray(
 const char* pName,
 IRemoteUI_Array** pArray
);

/* IVariableContainer::AddValue  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT AddValue(
 const char* pName,
 VARIANT* pValue
);

/* IVariableContainer::FindFirstArray  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT FindFirstArray(
 IRemoteUI_Array** pArray
);

/* IVariableContainer::FindFirstVar  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT FindFirstVar(
 char** pName,
 VARIANT** pValue
);

/* IVariableContainer::FindNextArray  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT FindNextArray(
 IRemoteUI_Array** pArray
);

/* IVariableContainer::FindNextVar  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT FindNextVar(
 char** pName,
 VARIANT** pValue
);

/* IVariableContainer::GetArray  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT GetArray(
 const char* pName,
 IRemoteUI_Array** pArray
)

/* IVariableContainer::GetValue  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
HRESULT GetValue(
 const char* pName,
 VARIANT** pValue
);
#endif /* _WIN32_WCE */

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
