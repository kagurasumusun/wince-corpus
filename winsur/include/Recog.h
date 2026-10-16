/* Recog.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _RECOG_
#define _RECOG_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* HwxALCPriority  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxALCPriority( 
 HRC hrc, 
 ALC alc 
);

/* HwxALCValid  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxALCValid( 
 HRC hrc, 
 ALC alc 
);

/* HwxConfig  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxConfig(void);

/* HwxCreate  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
HRC HwxCreate( 
 HRC hrc 
);

/* HwxDestroy  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxDestroy( 
 HRC hrc 
);

/* HwxEndInput  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxEndInput( 
 HRC hrc 
);

/* HwxGetResults  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
INT32 HwxGetResults( 
 HRC hrc, 
 UINT cAlt, 
 UINT iFirst, 
 UINT cBoxRes,
 HWXRESULTS* rgBoxResults 
);

/* HwxInput  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxInput( 
 HRC hrc, 
 POINT* lppnt, 
 UINT upoints, 
 DWORD timestamp 
);

/* HwxProcess  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxProcess( 
 HRC hrc 
);

/* HwxResultsAvailable  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
INT HwxResultsAvailable( 
 HRC hrc 
);

/* HwxSetAbort  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxSetAbort( 
 HRC hrc, 
 UINT* pnumstrokes 
);

/* HwxSetContext  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxSetContext( 
 HRC hrc, 
 WCHAR wContext 
);

/* HwxSetGuide  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxSetGuide(
 HRC hrc,
 HWXGUIDE* lpGuide
);

/* HwxSetPartial  [function; ce-only; CE 2.11..2.12, 3.0..699; Hwxcht.lib, hwxcht.lib, Hwxjpn.lib, hwxjpn.lib, Hwxkor.lib, Hwxusa.lib, hwxusa.lib] */
BOOL HwxSetPartial( 
 HRC hrc,
 UINT urecog 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagHWXGUIDE {UINT cHorzBox;UINT cVertBox;INT xOrigin;INT yOrigin;UINT cxBox;UINT cyBox;UINT cxOffset;UINT cyOffset;UINT cxWriting;UINT cyWriting;UINT cyMid;UINT cyBase;UINTnDir;} HWXGUIDE, *PHWXGUIDE;
typedef struct tagHWXRESULTS {USHORT indxBox;WCHAR rgChar[1]} HWXRESULTS, *PHWXRESULTS;

#endif /* _RECOG_ */
