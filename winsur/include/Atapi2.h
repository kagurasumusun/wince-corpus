/* Atapi2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _ATAPI2_
#define _ATAPI2_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* INQUIRY_DATA  [struct; ce-only; CE 4.0..699] */
typedef struct _INQUIRY_DATA {
 UCHAR inqDevType; 
 UCHAR inqRMB; 
 UCHAR inqVersion; 
 UCHAR inqAtapiVersion; 
 UCHAR inqLength; 
 UCHAR inqReserved[3]; 
 UCHAR inqVendor[8]; 
 UCHAR inqProdID[16]; 
 UCHAR inqRev[4]; 
 UCHAR inqReserved2[60]; 
} INQUIRY_DATA, *PINQUIRY_DATA;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _INQUIRY_DATA{UCHARinqDevType; UCHARinqRMB; UCHARinqVersion; UCHARinqAtapiVersion; UCHARinqLength; UCHARinqReserved[3]; UCHARinqVendor[8]; UCHARinqProdID[16]; UCHARinqRev[4]; UCHARinqReserved2[60]; } INQUIRY_DATA, *PINQUIRY_DATA;

#endif /* _ATAPI2_ */
