/* Dmoimpl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _DMOIMPL_
#define _DMOIMPL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IMediaObjectImpl::CheckTypesSet  [function; shared; CE 4.0..699; Msdmo.lib, Dmoguids.lib; lib:win32-reference] */
bool CheckTypesSet(void);

/* IMediaObjectImpl::InputType  [function; shared; CE 4.0..699; Dmoguids.lib, Msdmo.lib; lib:win32-reference] */
const DMO_MEDIA_TYPE *InputType(
 DWORD ulInputStreamIndex
);

/* IMediaObjectImpl::InputTypeSet  [function; shared; CE 4.0..699; Dmoguids.lib, Msdmo.lib; lib:win32-reference] */
bool InputTypeSet(
 DWORD ulInputStreamIndex
);

/* IMediaObjectImpl::OutputType  [function; shared; CE 4.0..699; Dmoguids.lib, Msdmo.lib; lib:win32-reference] */
const DMO_MEDIA_TYPE *OutputType(
 DWORD ulOutputStreamIndex
);

/* IMediaObjectImpl::OutputTypeSet  [function; shared; CE 4.0..699; Dmoguids.lib, Msdmo.lib; lib:win32-reference] */
bool OutputTypeSet(
 DWORD ulOutputStreamIndex
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* _DERIVED_::InternalAcceptingInput  [function; ce-only; CE 5.0..699] */
HRESULT InternalAcceptingInput(
 DWORD dwInputStreamIndex
);

/* _DERIVED_::InternalCheckInputType  [function; ce-only; CE 5.0..699] */
HRESULT InternalCheckInputType(
 DWORD dwInputStreamIndex,
 const DMO_MEDIA_TYPE* pmt
);

/* _DERIVED_::InternalCheckOutputType  [function; ce-only; CE 5.0..699] */
HRESULT InternalCheckOutputType(
 DWORD dwOutputStreamIndex,
 const DMO_MEDIA_TYPE* pmt
);

/* _DERIVED_::Lock  [function; ce-only; CE 5.0..699] */
void Lock(void);

/* _DERIVED_::Unlock  [function; ce-only; CE 5.0..699] */
void Unlock(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
bool CheckTypesSet(void);
const DMO_MEDIA_TYPE *InputType(  DWORD ulInputStreamIndex  );
bool InputTypeSet(  DWORD ulInputStreamIndex  );
HRESULT InternalAcceptingInput( DWORD dwInputStreamIndex );
HRESULT InternalCheckInputType( DWORD dwInputStreamIndex, const DMO_MEDIA_TYPE* pmt );
HRESULT InternalCheckOutputType( DWORD dwOutputStreamIndex, const DMO_MEDIA_TYPE* pmt );
const DMO_MEDIA_TYPE *OutputType(  DWORD ulOutputStreamIndex  );
bool OutputTypeSet(  DWORD ulOutputStreamIndex  );

#endif /* _DMOIMPL_ */
