/* wap.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 18 declarations, 1 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _WAP_
#define _WAP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WAP_ADDRESS_TYPE_UDP 1
#define WAP_LAYER_WDP 1
#define WAP_PRIMITIVE_ID_T_DUNITDATA 1
#define WAP_PRIMITIVE_TYPE_REQUEST 1
#define WTP_TRANSACTION_CLASS_TYPE_0 1
#define WTP_TRANSACTION_SECURITY_LEVEL_NOTSECURE 1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* WAP_ADDRESS  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* WTP_TRANSACTION_HANDLE  [typedef; ce-only] */
typedef LONG WTP_TRANSACTION_HANDLE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* WapClose  [function; ce-only; CE 6.0..699; Wap.lib] */
HRESULT WapClose(
 const WAP_HANDLE whHandle 
);

/* WapGetNextPrimitiveSize  [function; ce-only; CE 6.0..699; Wap.lib] */
HRESULT WapGetNextPrimitiveSize(
 const WAP_HANDLE whHandle,
 DWORD* const pdwNextPrimitiveSize 
);

/* WapOpen  [function; ce-only; CE 6.0..699; Wap.lib] */
HRESULT WapOpen(
 const WAP_LAYER wlLayer,
 const DWORD dwLocalPort,
 WAP_HANDLE* const pwhHandle,
 HANDLE* const phMessageAvailableEvent 
);

/* WapPing  [function; ce-only; CE 6.0..699; Wap.lib] */
HRESULT WapPing(
 const WAP_ADDRESS* const pwaAddress,
 const WORD wIdentifier,
 const DWORD dwSendDataSize,
 DWORD* const pdwReceiveDataSize,
 const DWORD dwTimeout 
);

/* WapRead  [function; ce-only; CE 6.0..699; Wap.lib] */
HRESULT WapRead(
 const WAP_HANDLE whHandle,
 WAP_PRIMITIVE_BASE* const pwpbPrimitiveBuffer,
 const DWORD dwPrimitiveBufferSize 
);

/* WapSend  [function; ce-only; CE 6.0..699; Wap.lib] */
HRESULT WapSend(
 const WAP_HANDLE whHandle,
 WAP_PRIMITIVE_BASE* const pwpbPrimitive 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum WAP_ADDRESS_TYPE{ WAP_ADDRESS_TYPE_UDP = 1, WAP_ADDRESS_TYPE_GSM_SMS };
enum WAP_LAYER{
  WAP_LAYER_WDP = 1,
  WAP_LAYER_WTLS,
  WAP_LAYER_WTP,
  WAP_LAYER_WSP,
  WAP_LAYER_WAE
};
enum WAP_PRIMITIVE_ID{
  WAP_PRIMITIVE_ID_T_DUNITDATA = 1,
  WAP_PRIMITIVE_ID_TR_INVOKE,
  WAP_PRIMITIVE_ID_TR_RESULT,
  WAP_PRIMITIVE_ID_TR_ABORT
};
enum WAP_PRIMITIVE_TYPE{
  WAP_PRIMITIVE_TYPE_REQUEST = 1,
  WAP_PRIMITIVE_TYPE_INDICATION,
  WAP_PRIMITIVE_TYPE_RESPONSE,
  WAP_PRIMITIVE_TYPE_CONFIRM
};
enum WTP_TRANSACTION_CLASS_TYPE{
  WTP_TRANSACTION_CLASS_TYPE_0 = 1,
  WTP_TRANSACTION_CLASS_TYPE_1,
  WTP_TRANSACTION_CLASS_TYPE_2
};
enum WTP_TRANSACTION_SECURITY_LEVEL
{
  WTP_TRANSACTION_SECURITY_LEVEL_NOTSECURE = 1,
  WTP_TRANSACTION_SECURITY_LEVEL_SECURENOAUTH,
  WTP_TRANSACTION_SECURITY_LEVEL_GATEWAYAUTH,
};

#endif /* _WAP_ */
