/* Oleauto.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 63 constants, 229 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _OLEAUTO_
#define _OLEAUTO_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ACTIVEOBJECT_STRONG 0
#define ACTIVEOBJECT_WEAK 1
#define DISPATCH_METHOD 1
#define DISPATCH_PROPERTYGET 2
#define DISPATCH_PROPERTYPUT 4
#define DISPATCH_PROPERTYPUTREF 8
#define ID_DEFAULTINST (-2)
#define LOCALE_USE_NLS 0x10000000
#define MEMBERID_NIL DISPID_UNKNOWN
#define NUMPRS_CURRENCY 0x00400
#define NUMPRS_DECIMAL 0x00100
#define NUMPRS_EXPONENT 0x00800
#define NUMPRS_HEX_OCT 0x00040
#define NUMPRS_INEXACT 0x20000
#define NUMPRS_LEADING_MINUS 0x00010
#define NUMPRS_LEADING_PLUS 0x00004
#define NUMPRS_LEADING_WHITE 0x00001
#define NUMPRS_NEG 0x10000
#define NUMPRS_PARENS 0x00080
#define NUMPRS_STD 0x01FFF
#define NUMPRS_THOUSANDS 0x00200
#define NUMPRS_TRAILING_MINUS 0x00020
#define NUMPRS_TRAILING_PLUS 0x00008
#define NUMPRS_TRAILING_WHITE 0x00002
#define NUMPRS_USE_ALL 0x01000
#define STDOLE_LCID 0
#define STDOLE_MAJORVERNUM 1
#define STDOLE_MINORVERNUM 0
#define VAR_CALENDAR_GREGORIAN 0x0100
#define VAR_CALENDAR_HIJRI 0x0008
#define VAR_CALENDAR_THAI 0x0080
#define VAR_DATEVALUEONLY 0x0002
#define VAR_FORMAT_NOSUBSTITUTE 0x0020
#define VAR_FOURDIGITYEARS 0x0040
#define VAR_LOCALBOOL 0x0010
#define VAR_TIMEVALUEONLY 0x0001
#define VAR_VALIDDATE 0x0004
#define VARCMP_EQ 1
#define VARCMP_GT 2
#define VARCMP_LT 0
#define VARCMP_NULL 3
#define VARIANT_ALPHABOOL 0x02
#define VARIANT_CALENDAR_GREGORIAN 0x40
#define VARIANT_CALENDAR_HIJRI 0x08
#define VARIANT_CALENDAR_THAI 0x20
#define VARIANT_LOCALBOOL 0x08
#define VARIANT_NOUSEOVERRIDE 0x04
#define VARIANT_NOUSEROVERRIDE 0x04
#define VARIANT_NOVALUEPROP 0x01
#define VARIANT_USE_NLS 0x80
#define VTBIT_CY (1<<VT_CY)
#define VTBIT_DECIMAL (1<<VT_DECIMAL)
#define VTBIT_I1 (1<<VT_I1)
#define VTBIT_I2 (1<<VT_I2)
#define VTBIT_I4 (1<<VT_I4)
#define VTBIT_I8 (1<<VT_I8)
#define VTBIT_R4 (1<<VT_R4)
#define VTBIT_R8 (1<<VT_R8)
#define VTBIT_UI1 (1<<VT_UI1)
#define VTBIT_UI2 (1<<VT_UI2)
#define VTBIT_UI4 (1<<VT_UI4)
#define VTBIT_UI8 (1<<VT_UI8)
#define WINOLEAUTAPI STDAPI

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* DISPPARAMS  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagDISPPARAMS {
 VARIANTARG FAR* rgvarg;
 DISPID FAR* rgdispidNamedArgs;
 unsigned int cArgs;
 unsigned int cNamedArgs;
} DISPPARAMS;

/* METHODDATA  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagMETHODDATA {
 OLECHAR FAR* zName;
 PARAMDATA FAR* ppData;
 DISPID dispid;
 unsigned int iMeth;
 CALLCONV cc;
 unsigned int cArgs;
 unsigned short wFlags;
 VARTYPE vtReturn;
} METHODDATA;

/* PARAMDATA  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagPARAMDATA {
 OLECHAR FAR* szName;
 VARTYPE vtReturn;
} PARAMDATA;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* Var  [struct; ce-only; CE 3.0..399, 5.0..699; heuristic-prefix] */
typedef struct Var {
 WORD wLength;
 WORD wValueLength;
 WORD wType;
 WCHAR szKey[];
 WORD Padding[];
 DWORD Value[];
} Var;

/* VarFileInfo  [struct; ce-only; CE 3.0..399, 5.0..699; heuristic-prefix] */
typedef struct VarFileInfo {
 WORD wLength;
 WORD wValueLength;
 WORD wType;
 WCHAR szKey[];
 WORD Padding[];
 Var Children[];
} VarFileInfo;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* VarBoolFromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromCy(
 CURRENCY cyIn, 
 BOOL* pboolOut 
);

/* VarBoolFromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromDate(
 DATE dateIn, 
 BOOL* pboolOut 
);

/* VarBoolFromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromDec(
 DECIMAL* pdecIn, 
 BOOL* pboolOut 
);

/* VarBoolFromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 BOOL* pboolOut 
);

/* VarBoolFromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarBoolFromI1(
 char cIn, 
 BOOL* pboolOut
);

/* VarBoolFromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromI2(
 short sIn, 
 BOOL* pboolOut 
);

/* VarBoolFromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromI4(
 long lIn, 
 BOOL* pboolOut 
);

/* VarBoolFromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromR4(
 float fltIn, 
 BOOL* pboolOut 
);

/* VarBoolFromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromR8(
 double dblIn, 
 BOOL* pboolOut 
);

/* VarBoolFromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BOOL* pboolOut 
);

/* VarBoolFromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBoolFromUI1(
 BYTE bIn, 
 BOOL* pboolOut 
);

/* VarBoolFromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarBoolFromUI2(
 USHORT uiIn, 
 BOOL* pboolOut 
);

/* VarBoolFromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarBoolFromUI4(
 ULONG ulIn, 
 BOOL* pboolOut 
);

/* VarBstrFromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromBool(
 BOOL boolIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromCy(
 CURRENCY cyIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromDate(
 DATE dateIn,
 LCID lcid,
 ULONG dwFlags,
 BSTR pbstrOut
);

/* VarBstrFromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromDec(
 DECIMAL* pdecIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR* pbstrOut 
);

/* VarBstrFromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromDisp(
 IDispatch* pdispln, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarBstrFromI1(
 char cIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromI2(
 short iVal, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromI4(
 long lIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromR4(
 float fltIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarBstrFromR8(
 double dblIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromUI1(
 BYTE bVal, 
 LCID lcid, 
 ULONG dwFlags, 
 CURRENCY* pbstrOut
);

/* VarBstrFromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarBstrFromUI2(
 USHORT uiIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarBstrFromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarBstrFromUI4(
 ULONG ulIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BSTR pbstrOut 
);

/* VarCyFromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromBool(
 BOOL boolIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromDate(
 DATE dateIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromDec(
 DECIMAL* pdecIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromDisp(
 IDispatch* pdispIn,
 LCID lcid, 
 CURRENCY* pcyOut 
);

/* VarCyFromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarCyFromI1(
 char cIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromI2(
 short sIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromI4(
 long lIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromR4(
 float fltIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromR8(
 double dblIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 CURRENCY* pcyOut 
);

/* VarCyFromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarCyFromUI1(
 BYTE bIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarCyFromUI2(
 USHORT uiIn, 
 CURRENCY* pcyOut 
);

/* VarCyFromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarCyFromUI4(
 ULONG ulIn, 
 CURRENCY* pcyOut 
);

/* VarDateFromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromBool(
 BOOL boolIn, 
 DATE* pdateOut 
);

/* VarDateFromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromCy(
 CURRENCY cyIn, 
 DATE* pdateOut 
);

/* VarDateFromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromDec(
 DECIMAL* pdecIn, 
 DATE* pdateOut 
);

/* VarDateFromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 DATE* pdateOut 
);

/* VarDateFromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarDateFromI1(
 char cIn, 
 DATE* pdateOut 
);

/* VarDateFromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromI2(
 short sIn, 
 DATE* pdateOut 
);

/* VarDateFromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromI4(
 long lIn, 
 DATE* pdateOut 
);

/* VarDateFromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromR4(
 float fltIn, 
 DATE* pdateOut 
);

/* VarDateFromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromR8( 
 double dblIn, 
 DATE* pdateOut 
);

/* VarDateFromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromStr( 
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 DATE* pdateOut 
);

/* VarDateFromUdate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromUdate( 
 UDATE* pudateIn, 
 unsigned long* dwFlags, 
 DATE* pdateOut 
);

/* VarDateFromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDateFromUI1(
 unsigned char bIn, 
 DATE* pdateOut 
);

/* VarDateFromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarDateFromUI2(
 unsigned short uiIn, 
 DATE* pdateOut 
);

/* VarDateFromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarDateFromUI4(
 unsigned long ulIn, 
 DATE* pdateOut 
);

/* VarDecFromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromBool(
 BOOL boolIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromCy(
 CURRENCY cIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromDate(
 DATE dateIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 DECIMAL* pdecOut 
);

/* VarDecFromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarDecFromI1(
 char cIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromI2(
 short sIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromI4(
 long lIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromR4(
 float fltIn,
 DECIMAL* pdecOut 
);

/* VarDecFromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromR8(
 double dblIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 DECIMAL* pdecOut 
);

/* VarDecFromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarDecFromUI1( 
 BYTE bIn, 
 DECIMAL* pdecOut 
);

/* VarDecFromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarDecFromUI1(
 ULONG ulIn, 
 DECIMAL* pdecOut 
);

/* VarI1FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromBool(
 BOOL boolIn, 
 char* pcOut 
);

/* VarI1FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromCy(
 CURRENCY cyIn, 
 char* pcOut 
);

/* VarI1FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromDate(
 DATE dateIn, 
 char* pcOut 
);

/* VarI1FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromDec(
 DECIMAL* pdecIn, 
 char* pcOut 
);

/* VarI1FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 char* pcOut 
);

/* VarI1FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromI2(
 short sIn, 
 char* pcOut 
);

/* VarI1FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromI4(
 long lIn, 
 char* pcOut 
);

/* VarI1FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromR4(
 float fltIn, 
 char* pcOut 
);

/* VarI1FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromR8(
 double dblIn, 
 char* pcOut 
);

/* VarI1FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromStr(
 BSTR strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 char* pcOut 
);

/* VarI1FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromUI1(
 BYTE bIn, 
 char* pcOut 
);

/* VarI1FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromUI2(
 USHORT uiIn, 
 char* pcOut 
);

/* VarI1FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI1FromUI4(
 ULONG ulIn, 
 char* pcOut 
);

/* VarI2FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromBool(
 BOOL boolIn, 
 short* psOut 
);

/* VarI2FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromCy(
 CURRENCY cyIn, 
 short* psOut 
);

/* VarI2FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromDate(
 DATE dateIn, 
 short* psOut 
);

/* VarI2FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromDec(
 DECIMAL* pdecIn, 
 short* psOut 
);

/* VarI2FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 short* psOut 
);

/* VarI2FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI2FromI1(
 CHAR cIn, 
 short* psOut 
);

/* VarI2FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromI4(
 LONG lIn, 
 short* psOut 
);

/* VarI2FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromR4(
 float fltIn, 
 short* psOut 
);

/* VarI2FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromR8(
 double dblIn, 
 short* psOut 
);

/* VarI2FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 short* psOut 
);

/* VarI2FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI2FromUI1(
 BYTE bIn, 
 short* psOut 
);

/* VarI2FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI2FromUI2(
 USHORT uiIn, 
 short* psOut 
);

/* VarI2FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI2FromUI4(
 ULONG ulIn, 
 short* psOut 
);

/* VarI4FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromBool(
 BOOL boolIn, 
 long* plOut 
);

/* VarI4FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromCy(
 CURRENTY cyIn, 
 long* plOut 
);

/* VarI4FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromUI1(
 DATE dateIn, 
 long* plOut 
);

/* VarI4FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromDec(
 DECIMAL* pdecIn, 
 long* plOut 
);

/* VarI4FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 long* plOut 
);

/* VarI4FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI4FromI1(
 CHAR cIn, 
 long* plOut 
);

/* VarI4FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromUI1(
 short sIn, 
 long* plOut 
);

/* VarI4FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromR4(
 float fltIn, 
 long* plOut 
);

/* VarI4FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromR8(
 double dblIn, 
 long* plOut 
);

/* VarI4FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 long* plOut 
);

/* VarI4FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarI4FromUI1(
 BYTE bIn, 
 long* plOut 
);

/* VarI4FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI4FromUI2(
 USHORT uiIn, 
 long* plOut 
);

/* VarI4FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarI4FromUI4(
 ULONG ulIn, 
 long* plOut 
);

/* VarR4FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromBool(
 BOOL boolIn, 
 float* pfltOut 
);

/* VarR4FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromCy(
 CURRENCY cyIn, 
 float* pfltOut 
);

/* VarR4FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromDate(
 DATE dateIn, 
 float* pfltOut 
);

/* VarR4FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromDec(
 DECIMAL* pdecIn, 
 float* pfltOut 
);

/* VarR4FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromDisp(
 IDispatch* pdispIn,
 LCID lcid,
 float* pfltOut 
);

/* VarR4FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarR4FromI1(
 DOUBLE cIn, 
 float* pfltOut 
);

/* VarR4FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromI2(
 short sIn, 
 float* pfltOut 
);

/* VarR4FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromI4(
 long lIn, 
 float* pfltOut 
);

/* VarR4FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromR8(
 DOUBLE dblIn, 
 float* pfltOut 
);

/* VarR4FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 Ulong dwFlags, 
 float* pfltOut 
);

/* VarR4FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR4FromUI1(
 BYTE bIn, 
 float* pfltOut 
);

/* VarR4FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarR4FromUI2(
 USHORT uiIn, 
 float* pfltOut 
);

/* VarR4FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarR4FromUI4(
 ULONG ulIn, 
 float* pfltOut 
);

/* VarR8FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromBool(
 BOOL boolIn, 
 double* pdblOut 
);

/* VarR8FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromCy(
 CURRENCY cyIn, 
 double* pdblOut 
);

/* VarR8FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromDate(
 DATE dateIn, 
 double* pdblOut 
);

/* VarR8FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromDec(
 DECIMAL* pdecIn, 
 double* pdblOut 
);

/* VarR8FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromDips(
 IDispatch* pdispIn, 
 LCID lcid, 
 double* pdblOut 
);

/* VarR8FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarR8FromI1(
 char cIn, 
 double* pdblOut 
);

/* VarR8FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromI2(
 short sIn, 
 double* pdblOut 
);

/* VarR8FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromI4(
 long lIn, 
 double* pdblOut 
);

/* VarR8FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromR4(
 float fltIn, 
 double* pdblOut 
);

/* VarR8FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 double* pdblOut 
);

/* VarR8FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarR8FromUI1(
 BYTE bIn, 
 double* pdblOut 
);

/* VarR8FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarR8FromUI2(
 USHORT uiIn, 
 double* pdblOut 
);

/* VarR8FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarR8FromI4(
 ULONG ulIn, 
 double* pdblOut 
);

/* VarUI1FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromBool(
 BOOL boolIn, 
 BYTE* pbOut 
);

/* VarUI1FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromCy(
 CURRENCY cyIn, 
 BYTE* pbOut 
);

/* VarUI1FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromDate(
 DATE dateIn, 
 BYTE* pbOut 
);

/* VarUI1FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromDec(
 DECIMAL* pdecIn, 
 BYTE* pbOut 
);

/* VarUI1FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 BYTE* pbOut 
);

/* VarUI1FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI1FromI1(
 char cIn, 
 BYTE* pbOut 
);

/* VarUI1FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromI2(
 short sIn, 
 BYTE* pbOut 
);

/* VarUI1FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromI4(
 long lIn, 
 BYTE* pbOut 
);

/* VarUI1FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromR4(
 float fltIn, 
 BYTE* pbOut 
);

/* VarUI1FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromR8(
 double dblIn, 
 BYTE* pbOut 
);

/* VarUI1FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUI1FromStr(
 OLECHAR* strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 BYTE* pbOut 
);

/* VarUI1FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI1FromUI2(
 USHORT uiIn, 
 BYTE* pbOut 
);

/* VarUI1FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI1FromUI4(
 ULONG ulIn, 
 BYTE* pbOut 
);

/* VarUI2FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromBool(
 BOOL boolIn, 
 USHORT* puiOut 
);

/* VarUI2FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromCy(
 CURRENCY cyIn, 
 USHORT* puiOut 
);

/* VarUI2FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromDate(
 DATE dateIn, 
 USHORT* puiOut 
);

/* VarUI2FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromDec(
 DECIMAL* pdecIn, 
 USHORT* puiOut 
);

/* VarUI2FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 USHORT* puiOut 
);

/* VarUI2FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromI1(
 char cIn, 
 USHORT* puiOut 
);

/* VarUI2FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromI2(
 short uiIn, 
 USHORT* puiOut 
);

/* VarUI2FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromI4(
 long lIn, 
 USHORT* puiOut 
);

/* VarUI2FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromR4(
 float fltIn, 
 USHORT* puiOut 
);

/* VarUI2FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromR8(
 double dblIn, 
 USHORT* puiOut 
);

/* VarUI2FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromStr(
 BSTR strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 USHORT* puiOut 
);

/* VarUI2FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromUI1(
 BYTE bIn, 
 USHORT* puiOut 
);

/* VarUI2FromUI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI2FromUI4(
 ULONG ulIn, 
 USHORT* puiOut 
);

/* VarUI4FromBool  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromBool(
 BOOL boolIn, 
 ULONG* pulOut 
);

/* VarUI4FromCy  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromCy(
 CURRENCY cyIn, 
 ULONG* pulOut 
);

/* VarUI4FromDate  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromDate(
 DATE dateIn, 
 ULONG* pulOut 
);

/* VarUI4FromDec  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromDec(
 DECIMAL* pdecIn, 
 ULONG* pulOut 
);

/* VarUI4FromDisp  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromDisp(
 IDispatch* pdispIn, 
 LCID lcid, 
 ULONG* pulOut 
);

/* VarUI4FromI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromI1(
 char cIn, 
 ULONG* pulOut 
);

/* VarUI4FromI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromI2(
 short sIn, 
 ULONG* pulOut 
);

/* VarUI4FromI4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromI4(
 long lIn, 
 ULONG* pulOut 
);

/* VarUI4FromR4  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromR4(
 float fltIn, 
 ULONG* pulOut 
);

/* VarUI4FromR8  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromR8(
 double dblIn, 
 ULONG* pulOut 
);

/* VarUI4FromStr  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromStr(
 BSTR strIn, 
 LCID lcid, 
 ULONG dwFlags, 
 ULONG* pulOut 
);

/* VarUI4FromUI1  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromUI1(
 BYTE bIn, 
 ULONG* pulOut 
);

/* VarUI4FromUI2  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarUI4FromUI2(
 USHORT uiIn, 
 ULONG* pulOut 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* BstrFromVector  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT BstrFromVector(
 SAFEARRAY FAR* 
 psa
 ,
 BSTR FAR* 
 pbstr 
 );

/* CreateErrorInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT CreateErrorInfo(
 ICreateErrorInfo** pperrinfo 
);

/* CreateTypeLib2  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT CreateTypeLib2( 
 SYSKIND syskind,
 LPOLESTR szFile,
 ICreateTypeLib2** ppctlib 
);

/* DispGetIDsOfNames  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT DispGetIDsOfNames(
 ItypeInfo* ptinfo, 
 OLECHAR FAR* FAR* rgszNames, 
 unsigned int cNames, 
 DISPID FAR* rgdispid 
);

/* DispGetParam  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT DispGetParam(
 DISPPARAMS FAR* pdispparams, 
 unsigned int position, 
 VARTYPE vtTarg, 
 VARIANT FAR* pvarResult, 
 unsigned int FAR* puArgErr 
);

/* DispInvoke  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT DispInvoke(
 void FAR* _this, 
 ITypeInfo FAR* ptinfo, 
 DISPID dispidMember, 
 unsigned short wFlags, 
 DISPPARAMS FAR* pparams, 
 VARIANT FAR* pvarResult, 
 EXCEPINFO pexcepinfo, 
 unsigned int FAR* puArgErr 
);

/* GetErrorInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT GetErrorInfo( 
 DWORD dwReserved, 
 IerrorInfo** pperrinfo 
);

/* LoadRegTypeLib  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT LoadRegTypeLib( 
 REFGUID rguid, 
 unsigned short wVerMajor, 
 unsigned short wVerMinor, 
 LCID lcid, 
 ITypeLib FAR* FAR* pptlib 
);

/* LoadTypeLib  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT LoadTypeLib( 
 OLECHAR FAR* szFile, 
 ITypeLib FAR* FAR* pptlib 
);

/* RegisterTypeLib  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT RegisterTypeLib( 
 ITypeLib FAR* ptlib, 
 OLECHAR FAR* szFullPath, 
 OLECHAR FAR* szHelpDir 
);

/* SafeArrayAccessData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayAccessData( 
 SAFEARRAY FAR* psa, 
 void HUGEP* FAR* ppvData 
);

/* SafeArrayAllocData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayAllocData(
 SAFEARRAY FAR* psa 
);

/* SafeArrayAllocDescriptor  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayAllocDescriptor( 
 unsigned int cDims, 
 SAFEARRAY FAR* FAR* ppsaOut 
);

/* SafeArrayCopy  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayCopy(
 SAFEARRAY FAR* psa, 
 SAFEARRAY FAR* FAR* ppsaOut 
);

/* SafeArrayCopyData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayCopyData(
 SAFEARRAY FAR* psaSource, 
 SAFEARRAY FAR* FAR* psaTarget 
);

/* SafeArrayCreate  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
SAFEARRAY * SafeArrayCreate( 
 VARTYPE vt, 
 unsigned int cDims, 
 SAFEARRRAYBOUND FAR* rgsabound 
);

/* SafeArrayCreateVector  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
SAFEARRAY * SafeArrayCreateVector(
 VARTYPE vt, 
 long lLbound, 
 unsigned int cElements 
);

/* SafeArrayDestroy  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayDestroy( 
 SAFEARRAY FAR* psa 
);

/* SafeArrayDestroyData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayDestroyData( 
 SAFEARRAY FAR* psa 
);

/* SafeArrayDestroyDescriptor  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayDestroyDescriptor(
 SAFEARRAY FAR* psa 
);

/* SafeArrayGetDim  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayGetDim( 
 SAFEARRAY FAR* psa 
);

/* SafeArrayGetElement  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayGetElement(
 SAFEARRAY FAR* psa, 
 long FAR* rgIndices, 
 void FAR* pv 
);

/* SafeArrayGetElemsize  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayGetElemsize(
 SAFEARRAY FAR* psa 
);

/* SafeArrayGetLBound  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayGetLBound(
 SAFEARRAY FAR* psa, 
 unsigned int nDim, 
 long FAR* plLbound 
);

/* SafeArrayGetUBound  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayGetUBound(
 SAFEARRAY FAR* psa, 
 unsigned int nDim, 
 long FAR* plUbound 
);

/* SafeArrayLock  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayLock(
 SAFEARRAY FAR* psa 
);

/* SafeArrayPtrOfIndex  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayPtrOfIndex(
SAFEARRAY FAR* psa, 
long FAR* rgIndices, 
void HUGEP* FAR* ppvData 
);

/* SafeArrayPutElement  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayPutElement(
 SAFEARRAY FAR* psa, 
 long FAR* rgIndices, 
 void FAR* pv 
);

/* SafeArrayRedim  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayRedim(
 SAFEARRAY FAR* psa, 
 SAFEARRAYBOUND FAR* psaboundNew 
);

/* SafeArrayUnaccessData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayUnaccessData(
 SAFEARRAY FAR* psa 
);

/* SafeArrayUnlock  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SafeArrayUnlock(
 SAFEARRAY FAR* psa 
);

/* SetErrorInfo  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SetErrorInfo( 
 DWORD dwReserved, 
 IErrorInfo* perrinfo 
);

/* SysAllocString  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
BSTR SysAllocString(
 OLECHAR FAR* sz
);

/* SysAllocStringByteLen  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
BSTR SysAllocStringByteLen(
 char FAR* psz, 
 unsigned int len 
);

/* SysAllocStringLen  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
BSTR SysAllocStringLen(
 OLECHAR FAR* pch, 
 unsigned int cch 
);

/* SysFreeString  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SysFreeString(
 BSTR bstr 
);

/* SysReAllocString  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SysReAllocString(
 BSTR FAR* pbstr, 
 OLECHAR FAR* sz 
);

/* SysReAllocStringLen  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SysReAllocStringLen(
 BSTR FAR* pbstr,
 OLECHAR FAR* pch,
 unsigned int cch 
);

/* SysStringByteLen  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT SysStringByteLen(
 BSTR bstr 
);

/* SysStringLen  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
UINT SysStringLen(
 BSTR bstr 
);

/* SystemTimeToVariantTime  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
int SystemTimeToVariantTime(
 SYSTEMTIME lpSystemTime, 
 double* pvtime 
);

/* VarDecFromUI2  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
WINOLEAUTAPI VarDecFromUI2(
 USHORT uiIn, 
 DECIMAL* pdecOut 
);

/* VariantChangeType  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VariantChangeType( 
 VARIANTARG FAR* pvargDest, 
 VARIANTARG FAR* pvarSrc, 
 unsigned short wFlags, 
 VARTYPE vt 
);

/* VariantChangeTypeEx  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VariantChangeTypeEx( 
 VARIANTARG FAR* pvargDest, 
 VARIANTARG FAR* pvarSrc, 
 LCID lcid, 
 unsigned short wFlags, 
 VARTYPE vt 
);

/* VariantClear  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VariantClear(
 VARIANTARG FAR* pvarg 
);

/* VariantCopy  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VariantCopy( 
 VARIANTARG FAR* pvargDest, 
 VARIANTARG FAR* pvargSrc 
);

/* VariantCopyInd  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VariantCopyInd( 
 VARIANT FAR* pvarDest, 
 VARIANTARG FAR* pvargSrc 
);

/* VariantInit  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
VOID VariantInit( 
 VARIANTARG FAR* pvarg 
);

/* VariantTimeToSystemTime  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
int VariantTimeToSystemTime(
 double vtime, 
 LPSYSTEMTIME lpSystemTime 
);

/* VarNumFromParseNum  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarNumFromParseNum( 
 NUMPARSE* pnumprs, 
 unsigned char* rgbDig, 
 unsigned long dwVtBits, 
 VARIANT* pvar 
);

/* VarParseNumFromStr  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarParseNumFromStr( 
 OLECHAR* strIn, 
 LCID lcid, 
 unsigned long dwFlags, 
 NUMPARSE* pnumprs, 
 unsigned char* rgbDig 
);

/* VarUdateFromDate  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VarUdateFromDate(
 DATE* dateIn, 
 unsigned long dwFlags, 
 UDATE* pudateOut 
);

/* VectorFromBstr  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT VectorFromBstr(
 BSTR bstr, 
 SAFEARRAY FAR* FAR* ppsa 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* OaBuildVersion  [function; shared; CE 3.0..399; Oleaut32.lib] */
WINOLEAUTAPI_(ULONG) OaBuildVersion(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* UnRegisterTypeLib  [function; shared; CE 3.0..699; Oleaut32.lib, oleaut32.lib] */
HRESULT UnRegisterTypeLib( 
 REFGUID libID,
 unsigned short wVerMajor,
 unsigned short wVerMinor,
 LCID lcid,
 SYSKIND syskind 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT VarR8FromDips( [in] IDispatch *pdispIn, [in] LCID lcid, [out] double *pdblOut );
WINOLEAUTAPIVarBoolFromUI2( USHORT uiIn, BOOL* pboolOut );
WINOLEAUTAPIVarCyFromI1( char cIn, CURRENCY* pcyOut );
WINOLEAUTAPIVarDecFromI1( char cIn, DECIMAL* pdecOut );
WINOLEAUTAPIVarI1FromBool( BOOL boolIn, char* pcOut );
WINOLEAUTAPIVarI1FromDate( DATE dateIn, char* pcOut);
WINOLEAUTAPIVarI1FromI2( short sIn, char* pcOut);
WINOLEAUTAPIVarI1FromR4( float fltIn, char* pcOut);
WINOLEAUTAPIVarI1FromStr( BSTR strIn, LCIDlcid, ULONGdwFlags, char* pcOut);
WINOLEAUTAPIVarI1FromUI1( BYTE bIn, char* pcOut);
WINOLEAUTAPIVarI1FromUI4( ULONG ulIn, char* pcOut);
WINOLEAUTAPIVarR8FromI1(char cIn, double* pdblOut);
WINOLEAUTAPIVarUI2FromI1( char cIn, USHORT* puiOut);
WINOLEAUTAPIVarUI4FromBool( BOOL boolIn, ULONG* pulOut);
WINOLEAUTAPIVarUI4FromI1( char cIn, ULONG* pulOut);

#endif /* _OLEAUTO_ */
