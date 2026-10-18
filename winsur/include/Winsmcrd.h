/* Winsmcrd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WINSMCRD_
#define _WINSMCRD_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IOCTL_SMARTCARD_TRANSMIT  [struct; ce-only] */
#ifndef __WINCE_DEFINED__SCARD_IO_REQUEST
#define __WINCE_DEFINED__SCARD_IO_REQUEST
#ifndef __WINCE_DEFINED_IOCTL_SMARTCARD_TRANSMIT
#define __WINCE_DEFINED_IOCTL_SMARTCARD_TRANSMIT
#ifndef __WINCE_DEFINED_SCARD_IO_REQUEST
#define __WINCE_DEFINED_SCARD_IO_REQUEST
#ifndef __WINCE_DEFINED_PSCARD_IO_REQUEST
#define __WINCE_DEFINED_PSCARD_IO_REQUEST
#ifndef __WINCE_DEFINED_LPSCARD_IO_REQUEST
#define __WINCE_DEFINED_LPSCARD_IO_REQUEST
typedef struct _SCARD_IO_REQUEST{
 DWORD dwProtocol;
 DWORD cbPciLength;
} SCARD_IO_REQUEST, *PSCARD_IO_REQUEST, *LPSCARD_IO_REQUEST;
#endif /* __WINCE_DEFINED_LPSCARD_IO_REQUEST */
#endif /* __WINCE_DEFINED_PSCARD_IO_REQUEST */
#endif /* __WINCE_DEFINED_SCARD_IO_REQUEST */
#endif /* __WINCE_DEFINED_IOCTL_SMARTCARD_TRANSMIT */
#endif /* __WINCE_DEFINED__SCARD_IO_REQUEST */

#endif /* _WINSMCRD_ */
