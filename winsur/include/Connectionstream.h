/* Connectionstream.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CONNECTIONSTREAM_
#define _CONNECTIONSTREAM_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMConnectionStream::Close  [function; ce-only; CE 4.2..599] */
HRESULT Close();

/* IPMConnectionStream::ReadBytes  [function; ce-only; CE 4.2..599] */
HRESULT ReadBytes( 
 long dwSize, 
 VARIANT* pvtArray, 
 long* pdwSizeRecv 
);

/* IPMConnectionStream::Receive  [function; ce-only; CE 4.2..599] */
HRESULT Receive(long* pdwBytesReceived);

/* IPMConnectionStream::Send  [function; ce-only; CE 4.2..599] */
HRESULT Send( 
 long dwSize, 
 VARIANT vtArray, 
 long* pdwSizeSent 
);
#endif /* _WIN32_WCE */

#endif /* _CONNECTIONSTREAM_ */
