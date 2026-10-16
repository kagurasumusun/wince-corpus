/* ril.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 222 declarations, 21 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _RIL_
#define _RIL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define RIL_PARAM_NITZ_DAYLIGHTSAVINGOFFSET 0x00000004
#define RIL_PARAM_NITZ_SYSTEMTIME 0x00000001
#define RIL_PARAM_NITZ_TIMEZONEOFFSET 0x00000002

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RIL3GQOSPROFILE  [struct; ce-only; Ril.lib] */

/* RILADDRESS  [struct; ce-only] */

/* RILATRINFO  [struct; ce-only] */

/* RILCALLINFO  [struct; ce-only] */

/* RILCELLTOWERINFO  [struct; ce-only] */

/* RILCOSTINFO  [struct; ce-only] */

/* RILEQUIPMENTINFO  [struct; ce-only] */

/* RILGPRSCONTEXT  [struct; ce-only] */

/* RILMESSAGE  [struct; ce-only] */

/* RILMSGCONFIG  [struct; ce-only] */

/* RILNDISGPRSCONTEXT  [struct; ce-only] */

/* RILNDISIPCONFIG  [struct; ce-only] */

/* RILNDISIPV6ADDR  [struct; ce-only] */

/* RILOPERATORNAMES  [struct; ce-only] */

/* RILPHONEBOOKENTRY  [struct; ce-only] */

/* RILPROTOCOLMODE  [struct; ce-only; Ril.lib] */

/* RILREMOTEPARTYINFO  [struct; ce-only] */

/* RILSUBADDRESS  [struct; ce-only] */

/* RILSUBSCRIBERINFO  [struct; ce-only] */

/* RILTRAFFICFLOWTEMPLATE  [struct; ce-only; Ril.lib] */

/* RILVGCSVBSCALLINFO  [struct; ce-only; Ril.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* RILAUDIODEVICEINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwTxDevice;
 DWORD dwRxDevice;
} RILAUDIODEVICEINFO;

/* RILBEARERSVCINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwSpeed;
 DWORD dwServiceName;
 DWORD dwConnectionElement;
} RILBEARERSVCINFO;

/* RILCALLERIDSETTINGS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILCALLERIDSETTINGS;

/* RILCALLHSCSDINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRxTimeslots;
 DWORD dwTxTimeslots;
 DWORD dwAirInterfaceUserRat;
 DWORD dwChannelCoding;
} RILCALLHSCSDINFO;

/* RILCAPSBARRINGPWDLENGTH  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwType;
 DWORD dwPasswordLength;
} RILCAPSBARRINGPWDLENGTH;

/* RILCAPSBEARERSVC  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwSpeeds1;
 DWORD dwSpeeds2;
 DWORD dwServiceNames;
 DWORD dwConnectionElements;
} RILCAPSBEARERSVC;

/* RILCAPSDIAL  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallTypes;
 DWORD dwOptions;
} RILCAPSDIAL;

/* RILCAPSLOCKINGPWDLENGTH  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwFacility;
 DWORD dwPasswordLength;
} RILCAPSLOCKINGPWDLENGTH;

/* RILCAPSMSGMEMORYLOCATIONS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwReadLocations;
 DWORD dwWriteLocations;
 DWORD dwStoreLocations;
} RILCAPSMSGMEMORYLOCATIONS;

/* RILCLOSEDGROUPSETTINGS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwIndex;
 DWORD dwInfo;
} RILCLOSEDGROUPSETTINGS;

/* RILCONNECTINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallType;
 DWORD dwBaudRate;
} RILCONNECTINFO;

/* RILDATACOMPINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwDirection;
 DWORD dwNegotiation;
 DWORD dwMaxDictEntries;
 DWORD dwMaxStringLength;
} RILDATACOMPINFO;

/* RILDIALEDIDSETTINGS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILDIALEDIDSETTINGS;

/* RILDIALINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 HRESULT hrCmdId;
 DWORD dwCallId;
} RILDIALINFO;

/* RILEMLPPPRIORITY  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwPriority;
 DWORD dwMaxPriority;
}RILEMLPPPRIORITY;

/* RILENTERGPRSDATAMODE  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwL2Protocol;
 DWORD dwNumContexts;
 DWORD dwContextID[];
} RILENTERGPRSDATAMODE;

/* RILEQUIPMENTSTATE  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRadioSupport;
 DWORD dwEqState;
 DWORD dwReadyState;
} RILEQUIPMENTSTATE;

/* RILERRORCORRECTIONINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwOriginalRequest;
 DWORD dwOriginalFallback;
 DWORD dwAnswererFallback;
} RILERRORCORRECTIONINFO;

/* RILGAININFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwTxGain;
 DWORD dwRxGain;
} RILGAININFO;

/* RILGPRSANSWER  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
} RILGPRSANSWER;

/* RILGPRSCONTEXTACTIVATED  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwContextID;
 BOOL fActivated;
} RILGPRSCONTEXTACTIVATED;

/* RILGPRSQOSPROFILE  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 DWORD dwPrecedenceClass;
 DWORD dwDelayClass;
 DWORD dwReliabilityClass;
 DWORD dwPeakThruClass;
 DWORD dwMeanThruClass;
} RILGPRSQOSPROFILE;

/* RILHIDECONNECTEDIDSETTINGS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILHIDECONNECTEDIDSETTINGS;

/* RILHIDEIDSETTINGS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILHIDEIDSETTINGS;

/* RILHSCSDINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwTranspRxTimeslots;
 DWORD dwTranspChannelCodings;
 DWORD dwNonTranspRxTimeslots;
 DWORD dwNonTranspChannelCodings;
 DWORD dwAirInterfaceUserRate;
 DWORD dwRxTimeslotsLimit;
 BOOL fAutoSvcLevelUpgrading;
} RILHSCSDINFO;

/* RILMESSAGE_IN_SIM  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwLocation;
 DWORD dwIndex;
} RILMESSAGE_IN_SIM;

/* RILMSGDCS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwType;
 DWORD dwFlags;
 DWORD dwMsgClass;
 DWORD dwAlphabet;
 DWORD dwIndication;
 DWORD dwLanguage;
} RILMSGDCS;

/* RILMSGSERVICEINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwService;
 DWORD dwMsgClasses;
 DWORD dwReadLocation;
 DWORD dwReadUsed;
 DWORD dwReadTotal;
 DWORD dwWriteLocation;
 DWORD dwWriteUsed;
 DWORD dwWriteTotal;
 DWORD dwStoreLocation;
 DWORD dwStoreUsed;
 DWORD dwStoreTotal;
} RILMSGSERVICEINFO;

/* RILMSGSTORAGEINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwReadLocation;
 DWORD dwWriteLocation;
 DWORD dwStoreLocation;
} RILMSGSTORAGEINFO;

/* RILMULTIPLECALLSETTINGS  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 DWORD dwServiceStatus;
}RILMULTIPLECALLSETTINGS;

/* RILNCHINDICATION  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 DWORD dwNCHStatus;
} RILNCHINDICATION;

/* RILNITZINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwNotificationCode;
 int TimeZoneOffsetMinutes;
 int DaylightSavingOffsetMinutes;
 SYSTEMTIME SysTime;
} RILNITZINFO;

/* RILPDPPACKETSUPPORTCAPS  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fPacket;
 DWORD dwActiveContexts;
} RILPDPPACKETSUPPORTCAPS;

/* RILPHONEBOOKINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStoreLocation;
 DWORD dwUsed;
 DWORD dwTotal;
} RILPHONEBOOKINFO;

/* RILRLPINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwIWS;
 DWORD dwMWS;
 DWORD dwAckTimer;
 DWORD dwRetransmissionAttempts;
 DWORD dwVersion;
 DWORD dwResequencingPeriod;
} RILRLPINFO;

/* RILSECONDARYPDPCONTEXT  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 DWORD dwPriContextID;
 DWORD dwDataCompression;
 DWORD dwHeaderCompression;
} RILSECONDARYPDPCONTEXT;

/* RILSERIALPORTSTATS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwReadBitsPerSecond;
 DWORD dwWrittenBitsPerSecond;
} RILSERIALPORTSTATS;

/* RILSERVICEINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fSynchronous;
 BOOL fTransparent;
} RILSERVICEINFO;

/* RILSIGNALQUALITY  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 int nSignalStrength;
 int nMinSignalStrength;
 int nMaxSignalStrength;
 DWORD dwBitErrorRate;
 int nLowSignalStrength;
 int nHighSignalStrength;
} RILSIGNALQUALITY;

/* RILSIMCMDPARAMETERS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwFileID;
 DWORD dwParameter1;
 DWORD dwParameter2;
 DWORD dwParameter3;
} RILSIMCMDPARAMETERS;

/* RILSIMRECORDSTATUS  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRecordType;
 DWORD dwItemCount;
 DWORD dwSize;
} RILSIMRECORDSTATUS;

/* RILSIMRESPONSE  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatusWord1;
 DWORD dwStatusWord2;
 BYTE pbResponse[];
} RILSIMRESPONSE;

/* RILSIMTOOLKITCMD  [struct; ce-only] */
typedef struct rilsimtoolkitcmd_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwId;
 DWORD dwTag;
 DWORD dwType;
 DWORD dwQualifier;
 DWORD dwError;
 DWORD dwDetailsOffset;
 DWORD dwDetailsSize;
} RILSIMTOOLKITCMD;

/* RILSIMTOOLKITRSP  [struct; ce-only] */
typedef struct rilsimtoolkitrsp_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwId;
 DWORD dwTag;
 DWORD dwType;
 DWORD dwQualifier;
 DWORD dwResponse; 
 DWORD dwAdditionalInfo;
} RILSIMTOOLKITRSP;

/* RILSUPSERVICEDATA  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 BYTE pbData[];
} RILSUPSERVICEDATA;

/* RILVGCSTALKERACCESSINFO  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwMode;
 DWORD dwTime;
} RILVGCSTALKERACCESSINFO;

/* RILVGCSUPLINKINFO  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 DWORD dwStatus;
} RILVGCSUPLINKINFO;

/* RILVGCSVBSSTATEATTR  [struct; ce-only; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 BOOL fDownlink;
 BOOL fUplink;
 BOOL fBothDirComm;
 BOOL fOriginator;
} RILVGCSVBSSTATEATTR;

/* RILRINGINFO  [struct; ce-only] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallType;
 DWORD dwAddressId;
 RILSERVICEINFO rsiServiceInfo;
} RILRINGINFO;

/* LPRILSIMTOOLKITEVENTCAPS  [extra struct] */
typedef struct rilsimtoolkiteventcaps_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwMTCall;
  DWORD dwCallConnected;
  DWORD dwCallDisconnected;
  DWORD dwLocationStatus;
  DWORD dwUserActivity;
  DWORD dwIdleScreen;
  DWORD dwLanguageSelection;
  DWORD dwBrowserTermination;
  DWORD dwDataAvailable;
  DWORD dwChannelStatus;
  DWORD dwDisplayChange;
} RILSIMTOOLKITEVENTCAPS, *LPRILSIMTOOLKITEVENTCAPS;

/* LPRILCAPSPBENTRYLENGTH  [extra struct] */
typedef struct {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwMaxAddressLength;
  DWORD dwMaxTextLength;
} RILCAPSPBENTRYLENGTH, *LPRILCAPSPBENTRYLENGTH;

/* dwParam  [extra typedef] */
typedef void (CALLBACK *RILRESULTCALLBACK)( DWORD dwCode, HRESULT hrCmdID, const void* lpData, DWORD cbData, DWORD dwParam );

/* LPRILBYTECOUNTER  [extra struct] */
typedef struct rilbytecounter_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwRxByte;
  DWORD dwTxByte;
  DWORD dwTotalByte;
} RILBYTECOUNTER, *LPRILBYTECOUNTER;

/* LPRILNDISSTATUS  [extra struct] */
typedef struct rilndisstatus_tag {
  DWORD dwContextId;
  DWORD dwSize;
  DWORD dwStatusType;
  union
  {
    LPRILNDISIPCONFIG pRilNdisIpConfig;
    DWORD dwFlowControl;
  };
} RILNDISSTATUS, *LPRILNDISSTATUS;

/* LPRILRING  [extra struct] */
typedef struct rilrange_tag { DWORD dwMinValue; DWORD dwMaxValue; } RILRANGE, *LPRILRING;

/* LPRILNDISPACKET  [extra struct] */
typedef struct rilndispacket_tag {
  DWORD dwSize;
  DWORD dwContextID;
  DWORD cBufferCount;
  const RILNDISBUFFER NDISBuffer[1];
} RILNDISPACKET, *LPRILNDISPACKET;

/* pRilStatus  [extra typedef] */
typedef void (CALLBACK *RILNDISSTATUSCALLBACK)( PVOID pCallbackContext, LPRILNDISSTATUS pRilStatus );

/* pRilPacket  [extra typedef] */
typedef void (CALLBACK *RILNDISRECEIVECALLBACK)( PVOID pCallbackContext, LPRILNDISPACKET pRilPacket );

/* LPRILSIMTOOLKITNOTIFYCAPS  [extra struct] */
typedef struct rilsimtoolkitnotifycaps_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwRefresh;
  DWORD dwMoreTime;
  DWORD dwPollInterval;
  DWORD dwPollingOff;
  DWORD dwSetUpCall;
  DWORD dwSendSS;
  DWORD dwSendUSSD;
  DWORD dwSendSMS;
  DWORD dwPlayTone;
  DWORD dwDisplayText;
  DWORD dwGetInkey;
  DWORD dwGetInput;
  DWORD dwSelectItem;
  DWORD dwSetupMenu;
  DWORD dwSetupIdleModeText;
  DWORD dwLocalInfo;
  DWORD dwNotifyFlags;
  DWORD dwSetupEventList;
  DWORD dwSendDTMF;
  DWORD dwLaunchBrowser;
  DWORD dwOpenChannel;
  DWORD dwCloseChannel;
  DWORD dwReceiveData;
  DWORD dwSendData;
  DWORD dwTimerManagement;
  DWORD dwRunAtCmd;
  RILSIMTOOLKITEVENTCAPS rstecEvents;
} RILSIMTOOLKITNOTIFYCAPS, *LPRILSIMTOOLKITNOTIFYCAPS;

/* LPRILNDISBUFFER  [extra struct] */
typedef struct rilndisbuffer_tag { const BYTE *pbyBytes; DWORD cByteCount; } RILNDISBUFFER, *LPRILNDISBUFFER;

/* LPRILCBMSGCONFIG  [extra struct] */
typedef struct rilcbmsgconfig_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwBroadcastMsgLangs;
  BOOL fAccept;
  RILRANGE rgrrBroadcastMsgIDs[];
} RILCBMSGCONFIG, *LPRILCBMSGCONFIG;

/* LPRILGPRSQOSPROFILECAPS  [extra struct] */
typedef struct {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwProtocolType;
  DWORD dwPrecedenceClass;
  DWORD dwDelayClass;
  DWORD dwReliabilityClass;
  DWORD dwPeakThruClass;
  char dwMeanThruClass;
} RILGPRSQOSPROFILECAPS, *LPRILGPRSQOSPROFILECAPS;

/* pRemotePartyInfo  [extra typedef] */
typedef DWORD (CALLBACK *RILCALLTYPECALLBACK)( const RILREMOTEPARTYINFO* const pRemotePartyInfo );

/* LPRILGPRSCONTEXTCAPS  [extra struct] */
typedef struct {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwProtocolType;
  RILRANGE ContextIDRange;
  DWORD dwDataCompression;
  DWORD dwHeaderCompression;
  DWORD dwParameterLength;
  char szParameters[];
} RILGPRSCONTEXTCAPS, *LPRILGPRSCONTEXTCAPS;

/* LPRILLOCATIONINFO  [extra struct] */
typedef struct rillocationinfo_tag {
  DWORD cbSize;
  DWORD dwLocationAreaCode;
  DWORD dwCellID;
} RILLOCATIONINFO, *LPRILLOCATIONINFO;

/* LPRILCAPSERRORCORRECTION  [extra struct] */
typedef struct {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwOriginalRequest;
  DWORD dwOriginalFallback;
  DWORD dwAnswererFallback;
} RILCAPSERRORCORRECTION, *LPRILCAPSERRORCORRECTION;

#endif /* _RIL_ */
