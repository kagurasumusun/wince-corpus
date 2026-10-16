/* Wzcapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 1 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _WZCAPI_
#define _WZCAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define INTFCAP_MAX_CIPHER_MASK 0x000000ff
#define INTFCAP_SSN 0x00000100
#define INTFCTL_8021XSUPP 0x1000
#define INTFCTL_CM_MASK 0x0007
#define INTFCTL_ENABLED 0x8000
#define INTFCTL_FALLBACK 0x4000
#define INTFCTL_OIDSSUPP 0x2000
#define INTFCTL_POLICY 0x0800
#define INTFCTL_VOLATILE 0x1000
#define WZCCTL_ONEX_ENABLED 0x0010
#define WZCCTL_POLICY 0x0008
#define WZCCTL_VOLATILE 0x0004
#define WZCCTL_WEPK_PRESENT 0x0001
#define WZCCTL_WEPK_XFORMAT 0x0002
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* INTF_ENTRY  [struct; ce-only; CE 5.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* WZC_WLAN_CONFIG  [struct; ce-only; CE 5.0..699] */
typedef struct
{
 ULONG Length;
 DWORD dwCtlFlags;
 NDIS_802_11_MAC_ADDRESS MacAddress;
 UCHAR Reserved[2];
 NDIS_802_11_SSID Ssid;
 ULONG Privacy;
 NDIS_802_11_RSSI Rssi;
 NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
 NDIS_802_11_CONFIGURATION Configuration;
 NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
 NDIS_802_11_RATES SupportedRates;
 ULONG KeyIndex;
 ULONG KeyLength;
 UCHAR KeyMaterial[WZCCTL_MAX_WEPK_MATERIAL];
 NDIS_802_11_AUTHENTICATION_MODE AuthenticationMode;
 RAW_DATA rdUserData;
 WZC_EAPOL_PARAMS EapolParams;
 RAW_DATA rdNetworkData;
 ULONG WPAMCastCipher;
 ULONG ulMediaType;
} WZC_WLAN_CONFIG, *PWZC_WLAN_CONFIG;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct{ ULONG Length; DWORD dwCtlFlags; NDIS_802_11_MAC_ADDRESS MacAddress; UCHAR Reserved[2]; NDIS_802_11_SSID Ssid; ULONG Privacy; NDIS_802_11_RSSI Rssi; NDIS_802_11_NETWORK_TYPE NetworkTypeInUse; NDIS_802_11_CONFIGURATION Configuration; NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode; NDIS_802_11_RATES SupportedRates; ULONG KeyIndex; ULONG KeyLength; UCHAR KeyMaterial[WZCCTL_MAX_WEPK_MATERIAL]; NDIS_802_11_AUTHENTICATION_MODE AuthenticationMode; RAW_DATA rdUserData; WZC_EAPOL_PARAMS EapolParams; RAW_DATA rdNetworkData; ULONG WPAMCastCipher; ULONG ulMediaType;} WZC_WLAN_CONFIG, *PWZC_WLAN_CONFIG;

#endif /* _WZCAPI_ */
