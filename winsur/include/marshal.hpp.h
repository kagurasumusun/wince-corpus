/* marshal.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _MARSHAL_HPP_
#define _MARSHAL_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* MarshalledBuffer_t  [function; ce-only; CE 6.0..699; coredll.lib] */
class MarshalledBuffer_t {
public:
 MarshalledBuffer_t()
 MarshalledBuffer_t()
 MarshalledBuffer_t(
 PVOID pSrcUnmarshalled,
 DWORD cbSrc,
 DWORD ArgumentDescriptor,
 BOOL ForceDuplicate = TRUE,
 BOOL Asynchronous = FALSE
 );
 MarshalledBuffer_t(
 PCVOID pSrcUnmarshalled,
 DWORD cbSrc,
 DWORD ArgumentDescriptor,
 BOOL ForceDuplicate = TRUE,
 BOOL Asynchronous = FALSE
 );
 HRESULT Marshal(
 PVOID pSrcUnmarshalled,
 DWORD cbSrc,
 DWORD ArgumentDescriptor,
 BOOL ForceDuplicate = TRUE,
 BOOL Asynchronous = FALSE
 );
 HRESULT Marshal(
 PCVOID pSrcUnmarshalled,
 DWORD cbSrc,
 DWORD ArgumentDescriptor,
 BOOL ForceDuplicate = TRUE,
 BOOL Asynchronous = FALSE
 );
 HRESULT Flush();
 HRESULT Unmarshal();
 LPVOID ptr() const;
 DWORD size() const;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT Allocate( PVOID pSrcMarshalled, DWORD cbSrc, DWORD ArgumentDescriptor );
HRESULT Unmarshal();

#endif /* _MARSHAL_HPP_ */
