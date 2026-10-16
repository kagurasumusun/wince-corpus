/* Cpu.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CPU_
#define _CPU_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MIPS 16

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMCPU::Architecture  [function; ce-only; CE 4.2..599] */
HRESULT Architecture(int* pwArchitecture);

/* IPMCPU::CpuNum  [function; ce-only; CE 4.2..599] */
HRESULT CpuNum(long* pdwNum);

/* IPMCPU::DefaultValue  [function; ce-only; CE 4.2..599] */
HRESULT DefaultValue(BSTR* pbstrName);

/* IPMCPU::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrGuid);

/* IPMCPU::Level  [function; ce-only; CE 4.2..599] */
HRESULT Level(long dwLevel);

/* IPMCPU::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrName);

/* IPMCPU::PageSize  [function; ce-only; CE 4.2..599] */
HRESULT PageSize(long dwPageSize);

/* IPMCPU::Type  [function; ce-only; CE 4.2..599] */
HRESULT Type(long* pdwType);
#endif /* _WIN32_WCE */

#endif /* _CPU_ */
