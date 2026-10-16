/* tsp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _TSP_
#define _TSP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CALLER_ID_OPTIONS  [enum; ce-only; CE 6.0..699] */
enum CALLER_ID_OPTIONS {
 CALLER_ID_DEFAULT,
 CALLER_ID_BLOCK,
 CALLER_ID_PRESENT,
};

/* CELLBEARERINFO  [struct; ce-only; CE 6.0..699] */
typedef struct cellbearerinfo_tag {
 DWORD dwSpeed;
 DWORD dwService;
 DWORD dwConnectionElement;
} CELLBEARERINFO, *LPCELLBEARERINFO;

/* CELLDATACOMPINFO  [struct; ce-only; CE 6.0..699] */
typedef struct celldatacompinfo_tag {
 DWORD dwDirection;
 BOOL dwRequired;
 DWORD dwMaxDictEntries;
 DWORD dwMaxStringLength;
} CELLDATACOMPINFO, *LPCELLDATACOMPINFO;

/* CELLDEVCONFIG  [struct; ce-only; CE 6.0..699] */
typedef struct celldevconfig_tag {
 DWORD dwTotalSize;
 DWORD dwNeededSize;
 DWORD dwUsedSize;
 BOOL bBearerInfoValid;
 CELLBEARERINFO cbiBearerInfo;
 BOOL bDataCompInfoValid;
 CELLDATACOMPINFO cdciDataCompInfo;
 BOOL bRadioLinkInfoValid;
 CELLRADIOLINKINFO crliRadioLinkInfo;
 BOOL bGPRSConnectionInfoValid;
 CELLGPRSCONNECTIONINFO cgciGPRSConnectionInfo;
 DWORD dwFlags;
} CELLDEVCONFIG, *LPCELLDEVCONFIG;

/* CELLGPRSCONNECTIONINFO  [struct; ce-only; CE 6.0..699] */
typedef struct cellgprsconnectioninfo_tag {
 DWORD dwProtocolType;
 DWORD dwL2ProtocolType
 WCHAR wszAccessPointName[CELLDEVCONFIG_MAXLENGTH_GPRSACCESSPOINTNAME];
 WCHAR wszAddress[CELLDEVCONFIG_MAXLENGTH_GPRSADDRESS];
 DWORD dwDataCompression;
 DWORD dwHeaderCompression;
 char szParameters[CELLDEVCONFIG_MAXLENGTH_GPRSPARAMETERS];
 BOOL bRequestedQOSSettingsValid;
 CELLGPRSQOSSETTINGS cgqsRequestedQOSSettings;
 BOOL bMinimumQOSSettingsValid;
 CELLGPRSQOSSETTINGS cgqsMinimumQOSSettings;
} CELLGPRSCONNECTIONINFO, *LPCELLGPRSCONNECTIONINFO;

/* CELLGPRSQOSSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct cellgprsqossettings_tag {
 DWORD dwPrecedenceClass;
 DWORD dwDelayClass;
 DWORD dwReliabilityClass;
 DWORD dwPeakThruClass;
 DWORD dwMeanThruClass;
} CELLGPRSQOSSETTINGS, *LPCELLGPRSQOSSETTINGS;

/* CELLRADIOLINKINFO  [struct; ce-only; CE 6.0..699] */
typedef struct cellradiolinkinfo_tag {
 DWORD dwVersion;
 DWORD dwIws;
 DWORD dwMws;
 DWORD dwAckTimer;
 DWORD dwRetransmitAttempts;
 DWORD dwResequenceTimer;
} CELLRADIOLINKINFO, *LPCELLRADIOLINKINFO;

/* LINECALLPARAMSDEVSPECIFIC  [struct; ce-only; CE 6.0..699] */
typedef struct linecallparamsdevspecific_tag {
CALLER_ID_OPTIONS cidoOptions;
} LINECALLPARAMSDEVSPECIFIC, *LPLINECALLPARAMSDEVSPECIFIC;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum CALLER_ID_OPTIONS {
  CALLER_ID_DEFAULT,
  CALLER_ID_BLOCK,
  CALLER_ID_PRESENT,
};

/* struct */
typedef struct cellbearerinfo_tag {
  DWORD dwSpeed;
  DWORD dwService;
  DWORD dwConnectionElement;
} CELLBEARERINFO, *LPCELLBEARERINFO;
typedef struct celldatacompinfo_tag {
  DWORD dwDirection;
  BOOL dwRequired;
  DWORD dwMaxDictEntries;
  DWORD dwMaxStringLength;
} CELLDATACOMPINFO, *LPCELLDATACOMPINFO;
typedef struct celldevconfig_tag {
  DWORD dwTotalSize;
  DWORD dwNeededSize;
  DWORD dwUsedSize;
  BOOL bBearerInfoValid;
  CELLBEARERINFO cbiBearerInfo;
  BOOL bDataCompInfoValid;
  CELLDATACOMPINFO cdciDataCompInfo;
  BOOL bRadioLinkInfoValid;
  CELLRADIOLINKINFO crliRadioLinkInfo;
  BOOL bGPRSConnectionInfoValid;
  CELLGPRSCONNECTIONINFO cgciGPRSConnectionInfo;
  DWORD dwFlags;
} CELLDEVCONFIG, *LPCELLDEVCONFIG;
typedef struct cellgprsconnectioninfo_tag {
  DWORD dwProtocolType;
  DWORD dwL2ProtocolType
  WCHAR wszAccessPointName[CELLDEVCONFIG_MAXLENGTH_GPRSACCESSPOINTNAME];
  WCHAR wszAddress[CELLDEVCONFIG_MAXLENGTH_GPRSADDRESS];
  DWORD dwDataCompression;
  DWORD dwHeaderCompression;
  char szParameters[CELLDEVCONFIG_MAXLENGTH_GPRSPARAMETERS];
  BOOL bRequestedQOSSettingsValid;
  CELLGPRSQOSSETTINGS cgqsRequestedQOSSettings;
  BOOL bMinimumQOSSettingsValid;
  CELLGPRSQOSSETTINGS cgqsMinimumQOSSettings;
} CELLGPRSCONNECTIONINFO, *LPCELLGPRSCONNECTIONINFO;
typedef struct cellgprsqossettings_tag {
  DWORD dwPrecedenceClass;
  DWORD dwDelayClass;
  DWORD dwReliabilityClass;
  DWORD dwPeakThruClass;
  DWORD dwMeanThruClass;
} CELLGPRSQOSSETTINGS, *LPCELLGPRSQOSSETTINGS;
typedef struct cellradiolinkinfo_tag {
  DWORD dwVersion;
  DWORD dwIws;
  DWORD dwMws;
  DWORD dwAckTimer;
  DWORD dwRetransmitAttempts;
  DWORD dwResequenceTimer;
} CELLRADIOLINKINFO, *LPCELLRADIOLINKINFO;
typedef struct linecallparamsdevspecific_tag { CALLER_ID_OPTIONS cidoOptions; } LINECALLPARAMSDEVSPECIFIC, *LPLINECALLPARAMSDEVSPECIFIC;

#endif /* _TSP_ */
