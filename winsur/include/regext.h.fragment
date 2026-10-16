/* regext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _REGEXT_
#define _REGEXT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* NOTIFICATIONCONDITION  [struct; ce-only; CE 6.0..699] */
typedef struct tagNOTIFICATIONCONDITION {
 REG_COMPARISONTYPE ctComparisonType;
 DWORD dwMask;
 union TargetValue {
 LPCTSTR psz;
 DWORD dw; 
 };
} NOTIFICATIONCONDITION;

/* NOTIFYMSGQUEUEPACKET  [struct; ce-only; CE 6.0..699] */
typedef struct tagNOTIFYMSGQUEUEPACKET
{
 HREGNOTIFY hNotify;
 DWORD dwUserData;
 UINT cbData;
 BYTE rgData[1];
} NOTIFYMSGQUEUEPACKET;

/* REG_COMPARISONTYPE  [enum; ce-only; CE 6.0..699] */
typedef enum tagREG_COMPARISONTYPE { 
 REG_CT_ANYCHANGE,
 REG_CT_EQUAL,
 REG_CT_NOT_EQUAL,
 REG_CT_GREATER,
 REG_CT_GREATER_OR_EQUAL,
 REG_CT_LESS,
 REG_CT_LESS_OR_EQUAL,
 REG_CT_CONTAINS,
 REG_CT_STARTS_WITH,
 REG_CT_ENDS_WITH
} REG_COMPARISONTYPE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* RegistryBatchNotification  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryBatchNotificaton(
 HREGNOTIFY hNotify,
 DWORD dwMillisecondsIdle,
 DWORD dwMillesecondsMax
);

/* RegistryCloseNotification  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryCloseNotification( 
 HREGNOTIFY hNotify
);

/* RegistryDeleteValue  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryDeleteValue( 
 HKEY hKey
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName
);

/* RegistryGetDWORD  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryGetDWORD( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 DWORD* pdwData
);

/* RegistryGetString  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryGetString( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 LPTSTR pszData,
 UINT cchData 
);

/* RegistryNotifyApp  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryNotifyApp( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 LPCTSTR pszName,
 LPCTSTR pszApp,
 LPCTSTR pszClass,
 LPCTSTR pszWindow,
 UINT msg,
 DWORD dwFlags,
 NOTIFICATIONCONDITION* pCondition
);

/* RegistryNotifyCallback  [function, typedef; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryNotifyCallback(
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 REGISTRYNOTIFYCALLBACK pfnRegistryNotifyCallback,
 DWORD dwUserData,
 NOTIFICATIONCONDITION * pCondition,
 HREGNOTIFY * phNotify
);

/* RegistryNotifyMsgQueue  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryNotifyMsgQueue(
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 LPCTSTR pszMsgQueue,
 DWORD dwUserData,
 NOTIFICATIONCONDITION* pCondition,
 HREGNOTIFY* phNotify
);

/* RegistryNotifyWindow  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryNotifyWindow( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 HWND hWnd,
 UINT msg,
 DWORD dwUserData,
 NOTIFICATIONCONDITION* pCondition,
 HREGNOTIFY* phNotify
);

/* RegistrySetDWORD  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistrySetDWORD( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 DWORD dwData 
);

/* RegistrySetString  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistrySetString( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 LPCTSTR pszData 
);

/* RegistryStopNotification  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryStopNotification(
 LPCTSTR pszName
);

/* RegistryTestExchangeDWORD  [function; ce-only; CE 6.0..699; aygshell.lib] */
HRESULT WINAPI RegistryTestExchangeDWORD( 
 HKEY hKey,
 LPCTSTR pszSubKey,
 LPCTSTR pszValueName,
 DWORD dwOldValue,
 DWORD dwNewValue 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef void REGISTRYNOTIFYCALLBACK( HREGNOTIFY hNotify, DWORD dwUserData, const PBYTE pData, const UINT cbData );

/* struct */
typedef struct tagNOTIFICATIONCONDITION { REG_COMPARISONTYPE ctComparisonType; DWORD dwMask; union TargetValue { LPCTSTR psz; DWORD dw; };

/* function */
void AdjustPowerConsumption(HREGNOTIFY hNotify, DWORD dwUserData, const PBYTE pData, const UINT cbData);
void REGISTRYNOTIFYCALLBACK( HREGNOTIFY hNotify, DWORD dwUserData, const PBYTE pData, const UINT cbData );
VOID WINAPI RegistryBatchNotificaton( HREGNOTIFY hNotify, DWORD dwMillisecondsIdle, DWORD dwMillesecondsMax );

#endif /* _REGEXT_ */
