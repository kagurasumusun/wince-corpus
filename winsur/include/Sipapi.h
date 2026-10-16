/* Sipapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 12 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SIPAPI_
#define _SIPAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SIPF_DOCKED 2
#define SIPF_LOCKED 4
#define SIPF_OFF 0
#define SIPF_ON 1
#define SPI_APPBUTTONCHANGE 228
#define SPI_GETCURRENTIM 227
#define SPI_GETSIPINFO 225
#define SPI_RESERVED 229
#define SPI_SETCOMPLETIONINFO 223
#define SPI_SETCURRENTIM 226
#define SPI_SETSIPINFO 224
#define SPI_SYNCSETTINGSCHANGE 230

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* SIPINFO  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct{
 DWORD cbSize;
 DWORD fdwFlags;
 RECT rcVisibleDesktop;
 RECT rcSipRect; 
 DWORD dwImDataSize;
 VOID* pvImData;
} SIPINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* IMENUMINFO  [?; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct_IMENUMINFO{
 TCHAR szName[MAX_PATH];
 CLSID clsid;
}IMENUMINFO;

/* SipEnumIM  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
int SipEnumIM( 
 IMENUMPROC pEnumIMProc
);

/* SipEnumIMProc  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coresip.lib] */
int SipEnumIMProc( 
 IMENUMINFO* pIMInfo
);

/* SipGetCurrentIM  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipGetCurrentIM( 
 CLSID* pClsid
);

/* SipGetInfo  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipGetInfo(
 SIPINFO* pSipInfo
);

/* SipRegisterNotification  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipRegisterNotification( 
 HWND hWnd
);

/* SipSetCurrentIM  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipSetCurrentIM( 
 CLSID* pClsid
);

/* SipSetDefaultRect  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipSetDefaultRect( 
 RECT* pRect
);

/* SipSetInfo  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipSetInfo( 
 SIPINFO* pSipInfo
);

/* SipShowIM  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
BOOL SipShowIM( 
 DWORD dwFlag
);

/* SipStatus  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Coresip.lib, coresip.lib] */
DWORD SipStatus(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL SipSetDefautRect( RECT * pRect );

#endif /* _SIPAPI_ */
