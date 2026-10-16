/* mmeapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _MMEAPI_
#define _MMEAPI_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct{DWORDcbStruct;DWORDdwControlID;DWORDdwControlType;DWORDfdwControl;DWORDcMultipleItems;CHARszShortName[MIXER_SHORT_NAME_CHARS];CHARszName[MIXER_LONG_NAME_CHARS];union{struct{LONGlMinimum;LONGlMaximum;};struct{DWORDdwMinimum;DWORDdwMaximum;};DWORDdwReserved[6];}Bounds;  union{DWORDcSteps;DWORDcbCustomData;DWORDdwReserved[6];}Metrics;  }MIXERCONTROL, *PMIXERCONTROL, FAR* LPMIXERCONTROL;

/* function */
MMRESULTmixerGetID(HMIXEROBJhmxobj,UINT* puMxId,DWORDfdwId);

#endif /* _MMEAPI_ */
