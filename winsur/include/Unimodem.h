/* Unimodem.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _UNIMODEM_
#define _UNIMODEM_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* UNIMODEM_INFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIMODEM_INFO_TAG
#define __WINCE_DEFINED_UNIMODEM_INFO_TAG
typedef struct UNIMODEM_INFO_tag {
 WORD wDeviceType;
 WORD wActive;
 DWORD dwPPPMTU;
} UNIMODEM_INFO, * PUNIMODEM_INFO;
#endif /* __WINCE_DEFINED_UNIMODEM_INFO_TAG */

/* PHONECAPS  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwTotalSize */
/*   dwNeededSize */
/*   dwUsedSize */
/*   dwProviderInfoSize */
/*   dwProviderInfoOffset */
/*   dwPhoneInfoSize */
/*   dwPhoneInfoOffset */
/*   dwPermanentPhoneID */
/*   dwPhoneNameSize */
/*   dwPhoneNameOffset */
/*   dwStringFormat */
/*   dwPhoneStates */
/*   dwHookSwitchDevs */
/*   dwHandsetHookSwitchModes */
/*   dwSpeakerHookSwitchModes */
/*   dwHeadsetHookSwitchModes */
/*   dwVolumeFlags */
/*   dwGainFlags */
/*   dwDisplayNumRows */
/*   dwDisplayNumColumns */
/*   dwNumRingModes */
/*   dwNumButtonLamps */
/*   dwButtonModesSize */
/*   dwButtonModesOffset */
/*   dwButtonFunctionsSize */
/*   dwButtonFunctionsOffset */
/*   dwLampModesSize */
/*   dwLampModesOffset */
/*   dwNumSetData */
/*   dwSetDataSize */
/*   dwSetDataOffset */
/*   dwNumGetData */
/*   dwGetDataSize */
/*   dwGetDataOffset */
/*   dwDevSpecificSize */
/*   dwDevSpecificOffset */
/*   dwDeviceClassesSize */
/*   dwDeviceClassesOffset */
/*   dwPhoneFeatures */
/*   dwSettableHandsetHookSwitchModes */
/*   dwSettableSpeakerHookSwitchModes */
/*   dwSettableHeadsetHookSwitchModes */
/*   dwMonitoredHandsetHookSwitchModes */
/*   dwMonitoredSpeakerHookSwitchModes */
/*   dwMonitoredHeadsetHookSwitchModes */
/*   PermanentPhoneGuid */

#endif /* _UNIMODEM_ */
