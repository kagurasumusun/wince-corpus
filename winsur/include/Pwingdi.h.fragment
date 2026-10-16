/* Pwingdi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _PWINGDI_
#define _PWINGDI_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* VIDEO_POWER_MANAGEMENT  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct VIDEOPOWER_MANAGEMENT {
 ULONG Length;
 ULONG DPMSVersion;
 ULONG PowerState;
} VIDEO_POWER_MANAGEMENT,* PVIDEO_POWER_MANAGEMENT;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* ContrastCmdInputParm  [struct; ce-only; CE 3.0..699] */
struct ContrastCmdInputParm {
 int command;
 int parm;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct VIDEOPOWER_MANAGEMENT {
  ULONG Length;
  ULONG DPMSVersion;
  ULONG PowerState;
} VIDEO_POWER_MANAGEMENT, *PVIDEO_POWER_MANAGEMENT;
struct ContrastCmdInputParm{intcommand;intparm;};
struct ContrastCmdInputParm {  int command;  int parm;  };

#endif /* _PWINGDI_ */
