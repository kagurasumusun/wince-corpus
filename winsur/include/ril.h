/* ril.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 244 declarations, 0 outlines, 0 base types, 0 extra macros, 25 extra decls
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
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* RIL3GQOSPROFILE  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 DWORD dwTrafficClass;
 DWORD dwMaxULBitrate;
 DWORD dwMaxDLBitrate;
 DWORD dwGuaranteedULBitrate;
 DWORD dwGuaranteedDLBitrate;
 DWORD dwDeliveryOrder;
 DWORD dwMaxSDUSize;
 char szSDUErrorRatio[MAXLENGTH_3GERRORRATIO];
 char szBitErrorRatio[MAXLENGTH_3GERRORRATIO];
 DWORD dwDeliveryOfErrSDU;
 DWORD dwTransferDelay;
 DWORD dwHandlingPriority;
} RIL3GQOSPROFILE;

/* RILADDRESS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwType;
 DWORD dwNumPlan;
 WCHAR wszAddress[MAXLENGTH_ADDRESS];
} RILADDRESS;

/* RILATRINFO  [struct; ce-only; CE 6.0..699] */
typedef struct rilatrinfo_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwPhase;
 DWORD cbATRSize;
 BYTE rgbATR[MAXLENGTH_ATR];
} RILATRINFO, *LPRILATRINFO;

/* RILAUDIODEVICEINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwTxDevice;
 DWORD dwRxDevice;
} RILAUDIODEVICEINFO;

/* RILBEARERSVCINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwSpeed;
 DWORD dwServiceName;
 DWORD dwConnectionElement;
} RILBEARERSVCINFO;

/* RILBYTECOUNTER  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct rilbytecounter_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRxByte;
 DWORD dwTxByte;
 DWORD dwTotalByte;
} RILBYTECOUNTER, *LPRILBYTECOUNTER;

/* RILCALLERIDSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILCALLERIDSETTINGS;

/* RILCALLFORWARDINGSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwInfoClasses;
 RILADDRESS raAddress;
 RILSUBADDRESS rsaSubAddress;
 DWORD dwDelayTime;
} RILCALLFORWARDINGSETTINGS;

/* RILCALLHSCSDINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRxTimeslots;
 DWORD dwTxTimeslots;
 DWORD dwAirInterfaceUserRat;
 DWORD dwChannelCoding;
} RILCALLHSCSDINFO;

/* RILCALLINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwID;
 DWORD dwDirection;
 DWORD dwStatus;
 DWORD dwType;
 DWORD dwMultiparty;
 RILADDRESS raAddress;
 WCHAR wszDescription[MAXLENGTH_DESCRIPTION];
 DWORD dwDisconnectCode;
} RILCALLINFO;

/* RILCALLTYPECALLBACK  [typedef; ce-only; CE 6.0..699] */
typedef DWORD (CALLBACK *RILCALLTYPECALLBACK)(
 const RILREMOTEPARTYINFO* const pRemotePartyInfo
);

/* RILCALLWAITINGINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallType;
 DWORD dwAddressId;
 RILREMOTEPARTYINFO rrpiCallerInfo;
} RILCALLWAITINGINFO;

/* RILCAPSBARRINGPWDLENGTH  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwType;
 DWORD dwPasswordLength;
} RILCAPSBARRINGPWDLENGTH;

/* RILCAPSBEARERSVC  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwSpeeds1;
 DWORD dwSpeeds2;
 DWORD dwServiceNames;
 DWORD dwConnectionElements;
} RILCAPSBEARERSVC;

/* RILCAPSDATACOMPRESSION  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwDirection;
 DWORD dwNegotiation;
 RILRANGE rrMaxDict;
 RILRANGE rrMaxString;
} RILCAPSDATACOMPRESSION;

/* RILCAPSDIAL  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallTypes;
 DWORD dwOptions;
} RILCAPSDIAL;

/* RILCAPSERRORCORRECTION  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwOriginalRequest;
 DWORD dwOriginalFallback;
 DWORD dwAnswererFallback;
} RILCAPSERRORCORRECTION, *LPRILCAPSERRORCORRECTION;

/* RILCAPSHSCSD  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwMultislotClass;
 DWORD dwMaxRxTimeslots;
 DWORD dwMaxTxTimeslots;
 DWORD dwMaxTotalTimeslots;
 DWORD dwChannelCodings;
 DWORD dwAirInterfaceUserRates;
 RILRANGE rrTopRxTimeslotRange;
} RILCAPSHSCSD;

/* RILCAPSLOCKINGPWDLENGTH  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwFacility;
 DWORD dwPasswordLength;
} RILCAPSLOCKINGPWDLENGTH;

/* RILCAPSMSGMEMORYLOCATIONS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwReadLocations;
 DWORD dwWriteLocations;
 DWORD dwStoreLocations;
} RILCAPSMSGMEMORYLOCATIONS;

/* RILCAPSPBENTRYLENGTH  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwMaxAddressLength;
 DWORD dwMaxTextLength;
} RILCAPSPBENTRYLENGTH, *LPRILCAPSPBENTRYLENGTH;

/* RILCAPSRLP  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwVersion;
 RILRANGE rrIWSRange;
 RILRANGE rrMWSRange;
 RILRANGE rrAckTimerRange;
 RILRANGE rrRetransmissionAttsRange;
 RILRANGE rrReseqPeriodRange;
} RILCAPSRLP;

/* RILCBMSGCONFIG  [struct; ce-only; CE 6.0..699] */
typedef struct rilcbmsgconfig_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwBroadcastMsgLangs;
 BOOL fAccept;
 RILRANGE rgrrBroadcastMsgIDs[];
} RILCBMSGCONFIG, *LPRILCBMSGCONFIG;

/* RILCELLTOWERINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwMobileCountryCode;
 DWORD dwMobileNetworkCode;
 DWORD dwLocationAreaCode;
 DWORD dwCellID;
 DWORD dwBaseStationID;
 DWORD dwBroadcastControlChannel;
 DWORD dwRxLevel;
 DWORD dwRxLevelFull;
 DWORD dwRxLevelSub;
 DWORD dwRxQuality;
 DWORD dwRxQualityFull;
 DWORD dwRxQualitySub;
 DWORD dwIdleTimeSlot;
 DWORD dwTimingAdvance;
 DWORD dwGPRSCellID;
 DWORD dwGPRSBaseStationID;
 DWORD dwNumBCCH;
 BYTE rgbBCCH[MAXLENGTH_BCCH];
 BYTE rgbNMR[MAXLENGTH_NMR];
} RILCELLTOWERINFO;

/* RILCLOSEDGROUPSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwIndex;
 DWORD dwInfo;
} RILCLOSEDGROUPSETTINGS;

/* RILCONNECTINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallType;
 DWORD dwBaudRate;
} RILCONNECTINFO;

/* RILCOSTINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCCM;
 DWORD dwACM;
 DWORD dwMaxACM;
 DWORD dwCostPerUnit;
 WCHAR wszCurrency[MAXLENGTH_CURRENCY];
} RILCOSTINFO;

/* RILDATACOMPINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwDirection;
 DWORD dwNegotiation;
 DWORD dwMaxDictEntries;
 DWORD dwMaxStringLength;
} RILDATACOMPINFO;

/* RILDIALEDIDSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILDIALEDIDSETTINGS;

/* RILDIALINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 HRESULT hrCmdId;
 DWORD dwCallId;
} RILDIALINFO;

/* RILEMLPPPRIORITY  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwPriority;
 DWORD dwMaxPriority;
}RILEMLPPPRIORITY;

/* RILENTERGPRSDATAMODE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwL2Protocol;
 DWORD dwNumContexts;
 DWORD dwContextID[];
} RILENTERGPRSDATAMODE;

/* RILEQUIPMENTINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 char szManufacturer[MAXLENGTH_EQUIPINFO];
 char szModel[MAXLENGTH_EQUIPINFO];
 char szRevision[MAXLENGTH_EQUIPINFO];
 char szSerialNumber[MAXLENGTH_EQUIPINFO];
} RILEQUIPMENTINFO;

/* RILEQUIPMENTSTATE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRadioSupport;
 DWORD dwEqState;
 DWORD dwReadyState;
} RILEQUIPMENTSTATE;

/* RILERRORCORRECTIONINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwOriginalRequest;
 DWORD dwOriginalFallback;
 DWORD dwAnswererFallback;
} RILERRORCORRECTIONINFO;

/* RILGAININFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwTxGain;
 DWORD dwRxGain;
} RILGAININFO;

/* RILGPRSANSWER  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
} RILGPRSANSWER;

/* RILGPRSCONTEXT  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 DWORD dwProtocolType;
 DWORD wszAccessPointName[MAXLENGTH_GPRSACCESSPOINTNAME];
 WCHAR wszAddress[MAXLENGTH_GPRSADDRESS];
 DWORD dwDataCompression;
 DWORD dwHeaderCompression;
 DWORD dwParameterLength;
 char szParameters[];
} RILGPRSCONTEXT;

/* RILGPRSCONTEXTACTIVATED  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwContextID;
 BOOL fActivated;
} RILGPRSCONTEXTACTIVATED;

/* RILGPRSCONTEXTCAPS  [struct; ce-only; CE 6.0..699] */
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

/* RILGPRSPROTOCOLCAPS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwProtocolType;
 RILRANGE ContextIDRange;
 DWORD dwDataCompression;
 DWORD dwHeaderCompression;
 DWORD dwParameterLength;
 char szParameters[];
} RILGPRSPROTOCOLCAPS;

/* RILGPRSQOSPROFILE  [struct; ce-only; CE 6.0..699] */
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

/* RILGPRSQOSPROFILECAPS  [struct; ce-only; CE 6.0..699] */
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

/* RILHIDECONNECTEDIDSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILHIDECONNECTEDIDSETTINGS;

/* RILHIDEIDSETTINGS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 DWORD dwProvisioning;
} RILHIDEIDSETTINGS;

/* RILHSCSDINFO  [struct; ce-only; CE 6.0..699] */
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

/* RILLOCATIONINFO  [struct; ce-only; CE 6.0..699] */
typedef struct rillocationinfo_tag {
 DWORD cbSize;
 DWORD dwLocationAreaCode;
 DWORD dwCellID;
} RILLOCATIONINFO, *LPRILLOCATIONINFO;

/* RILMESSAGE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 RILADDRESS raSvcCtrAddress;
 DWORD dwType;
 DWORD dwFlags;
 UNION {
 struct {
 RILADDRESS raOrigAddress;
 DWORD dwProtocolID;
 RILMSGDCS rmdDataCoding;
 SYSTEMTIME stSCReceiveTime;
 DWORD cbHdrLength;
 DWORD cchMsgLength;
 BYTE rgbHdr[MAXLENGTH_HDR];
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgInDeliver;
 struct {
 DWORD dwTgtMsgReference;
 RILADDRESS raTgtRecipAddress;
 SYSTEMTIME stTgtSCReceiveTime;
 SYSTEMTIME stTgtDischargeTime;
 DWORD dwTgtDlvStatus;
 DWORD dwProtocolID;
 RILMSGDCS rmdDataCoding;
 DWORD cbHdrLength;
 DWORD cchMsgLength;
 BYTE rgbHdr[MAXLENGTH_HDR];
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgInStatus;
 struct {
 RILADDRESS raDestAddress;
 DWORD dwProtocolID;
 RILMSGDCS rmdDataCoding;
 DWORD dwVPFormat;
 SYSTEMTIME stVP;
 DWORD cbHdrLength;
 DWORD cchMsgLength;
 BYTE rgbHdr[MAXLENGTH_HDR];
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgOutSubmit;
 struct {
 DWORD dwProtocolID;
 DWORD dwCommandType;
 DWORD dwTgtMsgReference;
 RILADDRESS raDestAddress;
 DWORD cbCmdLength;
 BYTE rgbCmd[MAXLENGTH_CMD];
 } msgOutCommand;
 struct {
 DWORD dwGeoScope;
 DWORD dwMsgCode;
 DWORD dwUpdateNumber;
 DWORD dwID;
 RILMSGDCS rmdDataCoding;
 DWORD dwTotalPages;
 DWORD dwPageNumber;
 DWORD cchMsgLength;
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgBcGeneral;
 struct {
 DWORD cchMsgLength;
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgOutRaw;
 struct {
 RILADDRESS raOrigAddress;
 RILSUBADDRESS rsaOrigSubaddr;
 SYSTEMTIME stSCReceiveTime;
 SYSTEMTIME stValidityPeriodAbs;
 SYSTEMTIME stValidityPeriodRel;
 SYSTEMTIME stDeferredDelTimeAbs;
 SYSTEMTIME stDeferredDelTimeRel;
 DWORD dwNumMsgs;
 RILADDRESS raCallBackNumber; 
 DWORD dwMsgPriority; 
 DWORD dwMsgPrivacy;
 BOOL bUserAckRequest; 
 DWORD dwMsgDisplayMode;
 DWORD dwTeleservice; 
 DWORD dwMsgID;
 DWORD dwMsgLang;
 DWORD dwMsgEncoding;
 DWORD cchMsgLength;
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgIS637InDeliver;
 struct {
 RILADDRESS raDestAddress;
 RILSUBADDRESS rsaDestSubaddr;
 BOOL bDigit;
 SYSTEMTIME stValidityPeriodAbs;
 SYSTEMTIME stValidityPeriodRel;
 SYSTEMTIME stDeferredDelTimeAbs;
 SYSTEMTIME stDeferredDelTimeRel;
 BOOL bDeliveryAckRequest;
 BOOL bUserAckRequest;
 BOOL bBearerReplyRequest;
 DWORD dwReplySeqNumber;
 DWORD dwMsgDisplayMode;
 RILADDRESS raCallBackNumber;
 DWORD dwMsgPriority;
 DWORD dwMsgPrivacy;
 DWORD dwTeleservice;
 DWORD dwMsgID;
 DWORD dwMsgLang;
 DWORD dwMsgEncoding; 
 DWORD cchMsgLength; 
 BYTE rgbMsg[MAXLENGTH_MSG]; 
 } msgIS637OutSubmit;
 struct { 
 RILADDRESS raOrigAddress;
 RILSUBADDRESS rsaOrigSubaddr;
 SYSTEMTIME stSCReceiveTime;
 DWORD dwCauseCode;
 DWORD dwReplySeqNumber;
 DWORD dwUserResponseCode;
 DWORD dwMsgStatusType;
 DWORD dwMsgID;
 DWORD dwMsgLang;
 DWORD dwMsgEncoding;
 DWORD cchMsgLength;
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgIS637InStatus;
 struct {
 RILADDRESS raDestAddress;
 RILSUBADDRESS rsaDestSubaddr;
 BOOL bDigit;
 DWORD dwReplySeqNumber;
 DWORD dwUserResponseCode;
 DWORD dwMsgID;
 DWORD dwMsgLang;
 DWORD dwMsgEncoding;
 DWORD cchMsgLength;
 BYTE rgbMsg[MAXLENGTH_MSG];
 } msgIS637OutStatus;
 }
} RILMESSAGE;

/* RILMESSAGE_IN_SIM  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwLocation;
 DWORD dwIndex;
} RILMESSAGE_IN_SIM;

/* RILMESSAGEINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwIndex;
 DWORD dwStatus;
 RILMESSAGE rmMessage;
} RILMESSAGEINFO;

/* RILMSGCONFIG  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 RILADDRESS raSvcCtrAddress;
 char szBroadcastMsgIDs[MAXLENGTH_MSGIDS];
 DWORD dwBroadcastMsgLangs;
} RILMSGCONFIG;

/* RILMSGDCS  [struct; ce-only; CE 6.0..699] */
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

/* RILMSGSERVICEINFO  [struct; ce-only; CE 6.0..699] */
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

/* RILMSGSTORAGEINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwReadLocation;
 DWORD dwWriteLocation;
 DWORD dwStoreLocation;
} RILMSGSTORAGEINFO;

/* RILMULTIPLECALLSETTINGS  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 DWORD dwServiceStatus;
}RILMULTIPLECALLSETTINGS;

/* RILNCHINDICATION  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 DWORD dwNCHStatus;
} RILNCHINDICATION;

/* RILNDISBUFFER  [struct; ce-only; CE 6.0..699] */
typedef struct rilndisbuffer_tag {
 const BYTE *pbyBytes;
 DWORD cByteCount;
} RILNDISBUFFER, *LPRILNDISBUFFER;

/* RILNDISGPRSCONTEXT  [struct; ce-only; CE 6.0..699] */
typedef struct rilndisgprscontext_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 BOOL fContextActivation;
 TCHAR tszUserName[NDIS_GPRS_USERNAME_MAX_LENGTH];
 TCHAR tszPassword[NDIS_GPRS_PASSWORD_MAX_LENGTH];
 TCHAR tszDNS1[NDIS_GRPS_DNS_MAX_LENGTH];
 TCHAR tszDNS2[NDIS_GRPS_DNS_MAX_LENGTH];
 RILNDISRECEIVECALLBACK pfnNdisReceive;
 RILNDISTRANSMITCALLBACK pfnNdisTransmit;
 RILNDISSTATUSCALLBACK pfnNdisStatus;
 PVOID pCallbackContext;
} RILNDISGPRSCONTEXT, *LPRILNDISGPRSCONTEXT;

/* RILNDISIPCONFIG  [struct; ce-only; CE 6.0..699] */
typedef struct rilndisipconfig_tag {
 DWORD cbSize;
 DWORD dwContextId;
 DWORD dwProtocol;
 union
 {
 struct
 {
 DWORD dwFlags;
 DWORD inIPAddress;
 DWORD inPrimaryDNS;
 DWORD inSecondaryDNS;
 DWORD inDefaultGateway;
 DWORD inSubnetMask;
 } ipv4;
 struct
 {
 DWORD dwFlags;
 RILNDISIPV6ADDR inIPAddress;
 RILNDISIPV6ADDR inPrimaryDNS;
 RILNDISIPV6ADDR inSecondaryDNS;

/* RILNDISIPV6ADDR  [struct; ce-only; CE 6.0..699] */
typedef struct rilndisipv6addr_tag {
 union
 {
 UCHAR Byte[IPV6_ADDRESS_LENGTH_IN_UCHAR];
 USHORT Word[IPV6_ADDRESS_LENGTH_IN_USHORT];
 };
} RILNDISIPV6ADDR, *LPRILNDISIPV6ADDR;

/* RILNDISPACKET  [struct; ce-only; CE 6.0..699] */
typedef struct rilndispacket_tag {
 DWORD dwSize;
 DWORD dwContextID;
 DWORD cBufferCount;
 const RILNDISBUFFER NDISBuffer[1];
} RILNDISPACKET, *LPRILNDISPACKET;

/* RILNDISRECEIVECALLBACK  [typedef; ce-only; CE 6.0..699] */
typedef void (CALLBACK *RILNDISRECEIVECALLBACK)(
 PVOID pCallbackContext,
 LPRILNDISPACKET pRilPacket
);

/* RILNDISSTATUS  [struct; ce-only; CE 6.0..699] */
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

/* RILNDISSTATUSCALLBACK  [typedef; ce-only; CE 6.0..699] */
typedef void (CALLBACK *RILNDISSTATUSCALLBACK)(
 PVOID pCallbackContext,
 LPRILNDISSTATUS pRilStatus
);

/* RILNDISTRANSMITCALLBACK  [typedef; ce-only; CE 6.0..699] */
typedef void (CALLBACK *RILNDISTRANSMITCALLBACK)(
 PVOID pCallbackContext,
 LPRILNDISPACKET pRilPacket
);

/* RILNITZINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwNotificationCode;
 int TimeZoneOffsetMinutes;
 int DaylightSavingOffsetMinutes;
 SYSTEMTIME SysTime;
} RILNITZINFO;

/* RILNOTIFYCALLBACK  [typedef; ce-only; CE 6.0..699] */
typedef void (CALLBACK *RILNOTIFYCALLBACK)(
 DWORD dwCode,
 const void* lpData,
 DWORD cbData,
 DWORD dwParam
);

/* RILOPERATORINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwIndex;
 DWORD dwStatus;
 RILOPERATORNAMES ronNames;
} RILOPERATORINFO;

/* RILOPERATORNAMES  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 char szLongName[MAXLENGTH_OPERATOR_LONG];
 char szShortName[MAXLENGTH_OPERATOR_SHORT];
 char szNumName[MAXLENGTH_OPERATOR_NUMERIC];
 char szCountryCode[MAXLENGTH_OPERATOR_COUNTRY_CODE];
} RILOPERATORNAMES;

/* RILPDPPACKETSUPPORTCAPS  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fPacket;
 DWORD dwActiveContexts;
} RILPDPPACKETSUPPORTCAPS;

/* RILPHONEBOOKENTRY  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwIndex;
 RILADDRESS raAddress;
 WCHAR wszText[MAXLENGTH_PHONEBOOKTEXT];
} RILPHONEBOOKENTRY;

/* RILPHONEBOOKINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStoreLocation;
 DWORD dwUsed;
 DWORD dwTotal;
} RILPHONEBOOKINFO;

/* RILPROTOCOLMODE  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwProto;
 char szVersion[MAXLENGTH_PROTO_VERSION];
 DWORD dwParameterLength;
 char szParameters[];
} RILPROTOCOLMODE;

/* RILRANGE  [struct; ce-only; CE 6.0..699] */
typedef struct rilrange_tag {
 DWORD dwMinValue;
 DWORD dwMaxValue;
} RILRANGE, *LPRILRING;

/* RILREMOTEPARTYINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 RILADDRESS raAddress;
 RILSUBADDRESS rsaSubAddress;
 WCHAR wszDescription[MAXLENGTH_DESCRIPTION];
 DWORD dwValidity;
} RILREMOTEPARTYINFO;

/* RILRESULTCALLBACK  [typedef; ce-only; CE 6.0..699; Ril.lib] */
typedef void (CALLBACK *RILRESULTCALLBACK)(
 DWORD dwCode,
 HRESULT hrCmdID,
 const void* lpData,
 DWORD cbData,
 DWORD dwParam
);

/* RILRINGINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwCallType;
 DWORD dwAddressId;
 RILSERVICEINFO rsiServiceInfo;
} RILRINGINFO;

/* RILRLPINFO  [struct; ce-only; CE 6.0..699] */
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

/* RILSECONDARYPDPCONTEXT  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 DWORD dwPriContextID;
 DWORD dwDataCompression;
 DWORD dwHeaderCompression;
} RILSECONDARYPDPCONTEXT;

/* RILSERIALPORTSTATS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwReadBitsPerSecond;
 DWORD dwWrittenBitsPerSecond;
} RILSERIALPORTSTATS;

/* RILSERVICEINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fSynchronous;
 BOOL fTransparent;
} RILSERVICEINFO;

/* RILSIGNALQUALITY  [struct; ce-only; CE 6.0..699] */
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

/* RILSIMCMDPARAMETERS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwFileID;
 DWORD dwParameter1;
 DWORD dwParameter2;
 DWORD dwParameter3;
} RILSIMCMDPARAMETERS;

/* RILSIMRECORDSTATUS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRecordType;
 DWORD dwItemCount;
 DWORD dwSize;
} RILSIMRECORDSTATUS;

/* RILSIMRESPONSE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatusWord1;
 DWORD dwStatusWord2;
 BYTE pbResponse[];
} RILSIMRESPONSE;

/* RILSIMTOOLKITCMD  [struct; ce-only; CE 6.0..699] */
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

/* RILSIMTOOLKITEVENTCAPS  [struct; ce-only; CE 6.0..699] */
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

/* RILSIMTOOLKITNOTIFYCAPS  [struct; ce-only; CE 6.0..699] */
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

/* RILSIMTOOLKITRSP  [struct; ce-only; CE 6.0..699] */
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

/* RILSUBADDRESS  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwType;
 WCHAR wszSubAddress[MAXLENGTH_SUBADDR];
} RILSUBADDRESS;

/* RILSUBSCRIBERINFO  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 RILADDRESS raAddress;
 WCHAR wszDescription[MAXLENGTH_DESCRIPTION];
 DWORD dwSpeed;
 DWORD dwService;
 DWORD dwITC;
 DWORD dwAddressId;
} RILSUBSCRIBERINFO;

/* RILSUPSERVICEDATA  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStatus;
 BYTE pbData[];
} RILSUPSERVICEDATA;

/* RILTRAFFICFLOWTEMPLATE  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwContextID;
 DWORD dwPacketFilterID;
 DWORD dwEvalPrecedenceIndex;
 char szAddress[MAXLENGTH_PDPADDRESS];
 char szSubnetMask[MAXLENGTH_PDPADDRESS];
 DWORD dwNextHeader;
 RILRANGE rrDstPortRange;
 RILRANGE rrSrcPortRange;
 DWORD dwIpsecSpi;
 DWORD dwTrafficClass;
 DWORD dwTrafficClassMask;
 DWORD dwFlowLabel;
} RILTRAFFICFLOWTEMPLATE;

/* RILVGCSTALKERACCESSINFO  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwMode;
 DWORD dwTime;
} RILVGCSTALKERACCESSINFO;

/* RILVGCSUPLINKINFO  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 DWORD dwStatus;
} RILVGCSUPLINKINFO;

/* RILVGCSVBSCALLINFO  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwService;
 WCHAR wszGID[MAXLENGTH_GROUPID];
 WCHAR wszGCA[MAXLENGTH_GROUPCALLAREA];
 DWORD dwStatus;
 DWORD dwDirection;
 BOOL fACK;
 DWORD dwPriority;
} RILVGCSVBSCALLINFO;

/* RILVGCSVBSSTATEATTR  [struct; ce-only; CE 6.0..699; Ril.lib] */
typedef struct {
 DWORD cbSize;
 DWORD dwParams;
 BOOL fEnable;
 BOOL fDownlink;
 BOOL fUplink;
 BOOL fBothDirComm;
 BOOL fOriginator;
} RILVGCSVBSSTATEATTR;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* RIL_AddCallForwarding  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_AddCallForwarding(
 HRIL hRil,
 DWORD dwReason,
 const RILCALLFORWARDINGSETTINGS* lpSettings,
 DWORD dwAddressId
);

/* RIL_AddPreferredOperator  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_AddPreferredOperator(
 HRIL hRil,
 DWORD dwIndex,
 const RILOPERATORNAMES* lpOperatorNames
);

/* RIL_Answer  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_Answer(
 HRIL hRil
);

/* RIL_CancelSupServiceDataSession  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_CancelSupServiceDataSession(
 HRIL hRil
);

/* RIL_ChangeCallBarringPassword  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_ChangeCallBarringPassword(
 HRIL hRil,
 DWORD dwType,
 LPCSTR lpwszOldPassword,
 LPCSTR lpwszNewPassword
);

/* RIL_ChangeLockingPassword  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT
 RIL_ChangeLockingPassword(
 HRIL hRil,
 DWORD dwFacility,
 LPCSTR lpszOldPassword,
 LPCSTR lpszNewPassword
);

/* RIL_ClearCCBSRegistration  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_ClearCCBSRegistration(
 HRIL hRil,
 DWORD dwCCBSIndex
);

/* RIL_Deinitialize  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_Deinitialize(
 HRIL hRil
);

/* RIL_DeleteGPRSContext  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DeleteGPRSContext(
 HRIL hRil,
 DWORD dwContextID
);

/* RIL_DeleteMinimumQualityOfService  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DeleteMinimumQualityOfService(
 HRIL hRil,
 DWORD dwContextID
);

/* RIL_DeleteMsg  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DeleteMsg(
 HRIL hRil,
 DWORD dwIndex
);

/* RIL_DeletePhonebookEntry  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DeletePhonebookEntry(
 HRIL hRil,
 DWORD dwIndex
);

/* RIL_DeleteRequestedQualityOfService  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DeleteRequestedQualityOfService(
 HRIL hRil,
 DWORD dwContextID
);

/* RIL_DevSpecific  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DevSpecific(
 HRIL hRil,
 const BYTE* lpbParams,
 DWORD dwSize,
 BYTE* pbAsyncResults = NULL,
 DWORD dwAsyncResultsSize = RIL_NOTIFYTHREAD_ALLOCSIZE,
 DWORD* pcbAsyncResults = NULL,
 DWORD dwTimeOut = RIL_DEVSPECIFIC_ASYNC_RESPONSE_TIMEOUT
);

/* RIL_Dial  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_Dial(
 HRIL hRil,
 LPCSTR lpszAddress,
 DWORD dwType,
 DWORD dwOptions
);

/* RIL_DisableNotifications  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_DisableNotifications(
 HRIL hRil,
 DWORD dwNotificationClasses
);

/* RIL_EnableNotifications  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_EnableNotifications(
 HRIL hRil,
 DWORD dwNotificationClasses
);

/* RIL_EnterGPRSDataMode  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_EnterGPRSDataMode(
 HRIL hRil,
 const RILENTERGPRSDATAMODE* lpEnterGprsDataMode
);

/* RIL_FetchSimToolkitCmd  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_FetchSimToolkitCmd(
 HRIL hRil
);

/* RIL_GetAllOperatorsList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetAllOperatorsList(
 HRIL hRil
);

/* RIL_GetATR  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetATR(
 HRIL hRil
);

/* RIL_GetAudioDevices  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetAudioDevices(
 HRIL hRil
);

/* RIL_GetAudioGain  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetAudioGain(
 HRIL hRil
);

/* RIL_GetAudioMuting  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetAudioMuting(
 HRIL hRil
);

/* RIL_GetBearerServiceOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetBearerServiceOptions(
 HRIL hRil
);

/* RIL_GetCallBarringStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCallBarringStatus(
 HRIL hRil,
 DWORD dwType,
 DWORD dwInfoClass,
 LPCSTR lpszPassword
);

/* RIL_GetCallerIdSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCallerIdSettings(
 HRIL hRil
);

/* RIL_GetCallForwardingSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCallForwardingSettings(
 HRIL hRil,
 DWORD dwReason,
 DWORD dwAddressId
);

/* RIL_GetCallWaitingSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCallWaitingSettings(
 HRIL hRil
 DWORD dwInfoClass
);

/* RIL_GetCCBSStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCCBSStatus(
 HRIL hRil,
 DWORD dwCCBSIndex
);

/* RIL_GetCellBroadcastMsgConfig  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCellBroadcastMsgConfig(
 HRIL hRil
);

/* RIL_GetCellTowerInfo  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCellTowerInfo(
 HRIL hRil
);

/* RIL_GetClosedGroupSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetClosedGroupSettings(
 HRIL hRil
);

/* RIL_GetCurrentAddressId  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCurrentAddressId(
 HRIL hRil
);

/* RIL_GetCurrentOperator  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCurrentOperator(
 HRIL hRil,
 DWORD dwFormat
);

/* RIL_GetCurrentPrivacyStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCurrentPrivacyStatus(
 HRIL hRil
);

/* RIL_GetCurrentSystemType  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetCurrentSystemType(
 HRIL hRil
);

/* RIL_GetDataCompression  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetDataCompression(
 HRIL hRil
);

/* RIL_GetDevCaps  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetDevCaps(
 HRIL hRil,
 DWORD dwCapsType
);

/* RIL_GetDialedIdSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetDialedIdSettings(
 HRIL hRil
);

/* RIL_GetDriverVersion  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetDriverVersion(
 HRIL hRil,
 DWORD *pdwVersion
);

/* RIL_GetEquipmentInfo  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetEquipmentInfo(
 HRIL hRil
);

/* RIL_GetEquipmentState  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetEquipmentState(
 HRIL hRil
);

/* RIL_GetErrorCorrection  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetErrorCorrection(
 HRIL hRil
);

/* RIL_GetGPRSAddress  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetGPRSAddress(
 HRIL hRil,
 DWORD dwContextID
);

/* RIL_GetGPRSAttached  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetGPRSAttached(
 HRIL hRil
);

/* RIL_GetGPRSClass  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetGPRSClass(
 HRIL hRil
);

/* RIL_GetGPRSContextActivatedList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetGPRSContextActivatedList(
 HRIL hRil
);

/* RIL_GetGPRSContextList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetGPRSContextList(
 HRIL hRil
);

/* RIL_GetGPRSRegistrationStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetGPRSRegistrationStatus(
 HRIL hRil
);

/* RIL_GetHideConnectedIdSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetHideConnectedIdSettings(
 HRIL hRil
);

/* RIL_GetHideIdSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetHideIdSettings(
 HRIL hRil
);

/* RIL_GetHSCSDCallSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetHSCSDCallSettings(
 HRIL hRil
);

/* RIL_GetHSCSDOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetHSCSDOptions(
 HRIL hRil
);

/* RIL_GetLockingStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetLockingStatus(
 HRIL hRil,
 DWORD dwFacility,
 LPCSTR lpszPassword
);

/* RIL_GetMinimumQualityOfServiceList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetMinimumQualityOfServiceList(
 HRIL hRil
);

/* RIL_GetMOSMSService  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetMOSMSService(
 HRIL hRil
);

/* RIL_GetMsgConfig  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetMsgConfig(
 HRIL hRil
);

/* RIL_GetMsgServiceOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetMsgServiceOptions(
 HRIL hRil
);

/* RIL_GetOperatorList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetOperatorList(
 HRIL hRil
);

/* RIL_GetPacketByteCount  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetPacketByteCount(
 HRIL hRil
);

/* RIL_GetPhonebookOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetPhonebookOptions(
 HRIL hRil
);

/* RIL_GetPhoneLockedState  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetPhoneLockedState(
 HRIL hRil
);

/* RIL_GetPreferredOperatorList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetPreferredOperatorList(
 HRIL hRil,
 DWORD dwFormat
);

/* RIL_GetPreferredPrivacyMode  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetPreferredPrivacyMode(
 HRIL hRil
);

/* RIL_GetRadioPresence  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetRadioPresence(
 HRIL hRIL,
 DWORD* dwRadioPresence
);

/* RIL_GetRegistrationStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetRegistrationStatus(
 HRIL hRil
);

/* RIL_GetRequestedQualityOfServiceList  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetRequestedQualityOfServiceList(
 HRIL hRil
);

/* RIL_GetRLPOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetRLPOptions(
 HRIL hRil
);

/* RIL_GetRoamingMode  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetRoamingMode(
 HRIL hRil
);

/* RIL_GetSerialPortHandle  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSerialPortHandle(
 HRIL hRil,
 HANDLE* lphSerial
);

/* RIL_GetSerialPortHandleFromContextID  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSerialPortHandleFromContextID(
 HRIL hRil,
 DWORD dwContextID,
 HANDLE *lphSerial
);

/* RIL_GetSerialPortStatistics  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSerialPortStatistics(
 HRIL hRil,
 RILSERIALPORTSTATS* lpSerialPortStats
);

/* RIL_GetSignalQuality  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSignalQuality(
 HRIL hRil
);

/* RIL_GetSimRecordStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSimRecordStatus(
 HRIL hRil,
 DWORD dwFileID
);

/* RIL_GetSimToolkitProfile  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSimToolkitProfile(
 HRIL hRil
);

/* RIL_GetSubscriberNumbers  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSubscriberNumbers(
 HRIL hRil
);

/* RIL_GetSystemTime  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetSystemTime(
 HRIL hRil
);

/* RIL_GetUserIdentity  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GetUserIdentity(
 HRIL hRil
);

/* RIL_GPRSAnswer  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_GPRSAnswer(
 HRIL hRil
);

/* RIL_Hangup  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_Hangup(
 HRIL hRil
);

/* RIL_Initialize  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_Initialize(
 DWORD dwIndex,
 RILRESULTCALLBACK pfnResult,
 RILNOTIFYCALLBACK pfnNotify,
 DWORD dwNotificationClasses,
 DWORD dwParam,
 HRIL* lphRil
);

/* RIL_InitializeEmergency  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_InitializeEmergency(
 DWORD dwIndex,
 RILRESULTCALLBACK pfnResult,
 RILNOTIFYCALLBACK pfnNotify,
 DWORD dwNotificationClasses,
 DWORD dwParam,
 HRIL* lphRil
);

/* RIL_LogEventToRadio  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_LogEventToRadio(
 HRIL hRil,
 LPCSTR lpszChars
);

/* RIL_ManageCalls  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_ManageCalls(
 HRIL hRil,
 DWORD dwCommand,
 DWORD dwID
);

/* RIL_NDIS_ReceivePacketDone  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_NDIS_ReceivePacketDone (
 HRIL hRil,
 Const RILNDISPACKET* pPacketReceived
);

/* RIL_NDIS_SendPacket  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_NDIS_SendPacket (
 HRIL hRil,
 const RILNDISPACKET* pPacketToSend
);

/* RIL_NDIS_SetGPRSContextActivated  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_NDIS_ SetGPRSContextActivated (
 HRIL hRil,
 Const RILNDISGPRSCONTEXT* pGprsContext
);

/* RIL_ReadMsg  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_ReadMsg(
 HRIL hRil,
 DWORD dwIndex
);

/* RIL_ReadPhonebookEntries  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_ReadPhonebookEntries(
 HRIL hRil,
 DWORD dwStartIndex,
 DWORD dwEndIndex
);

/* RIL_RegisterOnNetwork  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_RegisterOnNetwork(
 HRIL hRil,
 DWORD dwMode,
 const RILOPERATORNAMES* lpOperatorNames
);

/* RIL_RemoveCallForwarding  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_RemoveCallForwarding(
 HRIL hRil,
 DWORD dwReason,
 DWORD dwInfoClasses,
 );

/* RIL_RemovePreferredOperator  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_RemovePreferredOperator(
 HRIL hRil,
 DWORD dwIndex
);

/* RIL_ResetPacketByteCount  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_ResetPacketByteCount(
 HRIL hRil
);

/* RIL_SendAKey  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendAKey(
 HRIL hRil,
 LPCSTR lpszChars
);

/* RIL_SendDTMF  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendDTMF(
 HRIL hRil,
 LPCSTR lpszChars,
 DWORD dwDuration
);

/* RIL_SendFlash  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendFlash(
 HRIL hRil,
 LPRILADDRESS lpraRilAddress
);

/* RIL_SendMsg  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendMsg(
 HRIL hRil,
 const RILMESSAGE* lpMessage,
 DWORD dwOptions
);

/* RIL_SendMsgAcknowledgement  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendMsgAcknowledgement(
 HRIL hRil,
 BOOL fSuccess
);

/* RIL_SendRestrictedSimCmd  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendRestrictedSimCmd(
 HRIL hRil,
 DWORD dwCommand,
 const RILSIMCMDPARAMETERS* lpParameters,
 const BYTE* lpbData,
 DWORD dwSize
);

/* RIL_SendSimCmd  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendSimCmd(
 HRIL hRil,
 const BYTE* lpbCommand,
 DWORD dwSize
);

/* RIL_SendSimToolkitCmdResponse  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendSimToolkitCmdResponse(
 HRIL hRil,
 const RILSIMTOOLKITRSP* pRsp,
 const LPBYTE pDetails,
 DWORD dwDetailSize
);

/* RIL_SendSimToolkitEnvelopeCmd  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendSimToolkitEnvelopeCmd(
 HRIL hRil,
 const BYTE* lpbCommand,
 DWORD dwSize
);

/* RIL_SendSimToolkitEventDownload  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendSimToolkitEventDownload(
 HRIL hRil,
 const DWORD dwEvent,
 const LPBYTE pData,
 DWORD dwDataSize
);

/* RIL_SendStoredMsg  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendStoredMsg(
 HRIL hRil,
 DWORD dwIndex,
 DWORD dwOptions
);

/* RIL_SendSupServiceData  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SendSupServiceData(
 HRIL hRil,
 const BYTE* lpbData,
 DWORD dwSize
);

/* RIL_SetAudioDevices  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetAudioDevices(
 HRIL hRil,
 const RILAUDIODEVICEINFO* lpAudioDeviceInfo
);

/* RIL_SetAudioGain  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetAudioGain(
 HRIL hRil,
 const RILGAININFO* lpGainInfo
);

/* RIL_SetAudioMuting  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetAudioMuting(
 HRIL hRil,
 BOOL fEnable
);

/* RIL_SetBearerServiceOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetBearerServiceOptions(
 HRIL hRil,
 const RILBEARERSVCINFO* lpBearerServiceInfo
);

/* RIL_SetCallBarringStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCallBarringStatus(
 HRIL hRil,
 DWORD dwType,
 DWORD dwInfoClass,
 LPCSTR lpszPassword,
 DWORD dwStatus
);

/* RIL_SetCallerIdStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCallerIdStatus(
 HRIL hRil,
 DWORD dwStatus
);

/* RIL_SetCallForwardingStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCallForwardingStatus(
 HRIL hRil,
 DWORD dwReason,
 DWORD dwInfoClasses,
 DWORD dwStatus,
 );

/* RIL_SetCallWaitingStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCallWaitingStatus(
 HRIL hRil,
 DWORD dwInfoClasses,
 DWORD dwStatus
);

/* RIL_SetCellBroadcastMsgConfig  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCellBroadcastMsgConfig(
 HRIL hRil,
 const RILCBMSGCONFIG* lpCbMsgConfigInfo
);

/* RIL_SetClosedGroupSettings  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetClosedGroupSettings(
 HRIL hRil,
 const RILCLOSEDGROUPSETTINGS* lpSettings
);

/* RIL_SetCostInfo  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCostInfo(
 HRIL hRil,
 const RILCOSTINFO* lpCostInfo,
 LPCSTR lpszPassword
);

/* RIL_SetCurrentAddressId  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetCurrentAddressId(
 HRIL hRil,
 DWORD dwAddressId
);

/* RIL_SetDataCompression  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetDataCompression(
 HRIL hRil,
 const RILDATACOMPINFO* lpDataCompInfo
);

/* RIL_SetDialedIdStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetDialedIdStatus(
 HRIL hRil,
 DWORD dwStatus
);

/* RIL_SetDTMFMonitoring  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetDTMFMonitoring(
 HRIL hRil,
 BOOL fEnable
);

/* RIL_SetEquipmentState  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetEquipmentState(
 HRIL hRil,
 DWORD dwEquipmentState
);

/* RIL_SetErrorCorrection  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetErrorCorrection(
 HRIL hRil,
 const RILERRORCORRECTIONINFO* lpErrorCorrectionInfo
);

/* RIL_SetGPRSAttached  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetGPRSAttached(
 HRIL hRil,
 BOOL fAttached
);

/* RIL_SetGPRSClass  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetGPRSClass(
 HRIL hRil,
 DWORD dwClass
);

/* RIL_SetGPRSContext  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetGPRSContext(
 HRIL hRil,
 const RILGPRSCONTEXT* lpGprsContext
);

/* RIL_SetGPRSContextActivated  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetGPRSContextActivated(
 HRIL hRil,
 DWORD dwContextID,
 BOOL fContextActivation
);

/* RIL_SetHideConnectedIdStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetHideConnectedIdStatus(
 HRIL hRil,
 DWORD dwStatus
);

/* RIL_SetHideIdStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetHideIdStatus(
 HRIL hRil,
 DWORD dwStatus
);

/* RIL_SetHSCSDOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetHSCSDOptions(
 HRIL hRil,
 const RILHSCSDINFO* lpHscsdInfo
);

/* RIL_SetLockingStatus  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetLockingStatus(
 HRIL hRil,
 DWORD dwFacility,
 LPCSTR lpszPassword,
 DWORD dwStatus
);

/* RIL_SetMinimumQualityOfService  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetMinimumQualityOfService(
 HRIL hRil,
 const RILGPRSQOSPROFILE* lpGprsQosProfile
);

/* RIL_SetMOSMSService  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetMOSMSService(
 HRIL hRil,
 DWORD dwMoSmsService
);

/* RIL_SetMsgConfig  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetMsgConfig(
 HRIL hRil,
 const RILMSGCONFIG* lpMsgConfigInfo
);

/* RIL_SetMsgServiceOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetMsgServiceOptions(
 HRIL hRil,
 const RILMSGSERVICEINFO* lpMsgServiceInfo
);

/* RIL_SetPhonebookOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetPhonebookOptions(
 HRIL hRil,
 const RILPHONEBOOKINFO* lpPhonebookInfo
);

/* RIL_SetPreferredPrivacyMode  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetPreferredPrivacyMode(
 HRIL hRil,
 DWORD dwPreferredPrivacyMode
);

/* RIL_SetRequestedQualityOfService  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetRequestedQualityOfService(
 HRIL hRil,
 const RILGPRSQOSPROFILE* lpGprsQosProfile
);

/* RIL_SetRLPOptions  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetRLPOptions(
 HRIL hRil,
 const RILRLPINFO* lpRlpInfo
);

/* RIL_SetRoamingMode  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetRoamingMode(
 HRIL hRil,
 DWORD dwRoamingMode
);

/* RIL_SetSimToolkitProfile  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_SetSimToolkitProfile(
 HRIL hRil,
 const BYTE* lpbProfile,
 DWORD dwSize
);

/* RIL_TerminateSimToolkitSession  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_TerminateSimToolkitSession(
 HRIL hRil,
 DWORD dwCause
);

/* RIL_TransferCall  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_TransferCall(
 HRIL hRil,
 const RILADDRESS* lpAddress,
 const RILSUBADDRESS* lpSubAddress
);

/* RIL_UnlockPhone  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_UnlockPhone(
 HRIL hRil,
 LPCSTR lpszPassword,
 LPCSTR lpszNewPassword
);

/* RIL_UnregisterFromNetwork  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_UnregisterFromNetwork(
 HRIL hRil
);

/* RIL_WriteMsg  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_WriteMsg(
 HRIL hRil,
 const RILMESSAGE* lpMessage,
 DWORD dwStatus
);

/* RIL_WritePhonebookEntry  [function; ce-only; CE 6.0..699; Ril.lib] */
HRESULT RIL_WritePhonebookEntry(
 HRIL hRil,
 const RILPHONEBOOKENTRY* lpEntry
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef void (CALLBACK *RILRESULTCALLBACK)( DWORD dwCode, HRESULT hrCmdID, const void* lpData, DWORD cbData, DWORD dwParam );
typedef DWORD (CALLBACK *RILCALLTYPECALLBACK)( const RILREMOTEPARTYINFO* const pRemotePartyInfo );
typedef void (CALLBACK *RILNDISRECEIVECALLBACK)( PVOID pCallbackContext, LPRILNDISPACKET pRilPacket );
typedef void (CALLBACK *RILNDISSTATUSCALLBACK)( PVOID pCallbackContext, LPRILNDISSTATUS pRilStatus );

/* struct */
typedef struct rilatrinfo_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwPhase;
  DWORD cbATRSize;
  BYTE rgbATR[MAXLENGTH_ATR];
} RILATRINFO, *LPRILATRINFO;
typedef struct rilbytecounter_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwRxByte;
  DWORD dwTxByte;
  DWORD dwTotalByte;
} RILBYTECOUNTER, *LPRILBYTECOUNTER;
typedef struct {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwOriginalRequest;
  DWORD dwOriginalFallback;
  DWORD dwAnswererFallback;
} RILCAPSERRORCORRECTION, *LPRILCAPSERRORCORRECTION;
typedef struct {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwMaxAddressLength;
  DWORD dwMaxTextLength;
} RILCAPSPBENTRYLENGTH, *LPRILCAPSPBENTRYLENGTH;
typedef struct rilcbmsgconfig_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwBroadcastMsgLangs;
  BOOL fAccept;
  RILRANGE rgrrBroadcastMsgIDs[];
} RILCBMSGCONFIG, *LPRILCBMSGCONFIG;
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
typedef struct rillocationinfo_tag {
  DWORD cbSize;
  DWORD dwLocationAreaCode;
  DWORD dwCellID;
} RILLOCATIONINFO, *LPRILLOCATIONINFO;
typedef struct rilndisbuffer_tag { const BYTE *pbyBytes; DWORD cByteCount; } RILNDISBUFFER, *LPRILNDISBUFFER;
typedef struct rilndisgprscontext_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwContextID;
  BOOL fContextActivation;
  TCHAR tszUserName[NDIS_GPRS_USERNAME_MAX_LENGTH];
  TCHAR tszPassword[NDIS_GPRS_PASSWORD_MAX_LENGTH];
  TCHAR tszDNS1[NDIS_GRPS_DNS_MAX_LENGTH];
  TCHAR tszDNS2[NDIS_GRPS_DNS_MAX_LENGTH];
  RILNDISRECEIVECALLBACK pfnNdisReceive;
  RILNDISTRANSMITCALLBACK pfnNdisTransmit;
  RILNDISSTATUSCALLBACK pfnNdisStatus;
  PVOID pCallbackContext;
} RILNDISGPRSCONTEXT, *LPRILNDISGPRSCONTEXT;
typedef struct rilndisipv6addr_tag {
  union
  {
    UCHAR Byte[IPV6_ADDRESS_LENGTH_IN_UCHAR];
    USHORT Word[IPV6_ADDRESS_LENGTH_IN_USHORT];
  };
} RILNDISIPV6ADDR, *LPRILNDISIPV6ADDR;
typedef struct rilndispacket_tag {
  DWORD dwSize;
  DWORD dwContextID;
  DWORD cBufferCount;
  const RILNDISBUFFER NDISBuffer[1];
} RILNDISPACKET, *LPRILNDISPACKET;
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
typedef struct rilrange_tag { DWORD dwMinValue; DWORD dwMaxValue; } RILRANGE, *LPRILRING;
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
typedef struct rilndisipconfig_tag {
  DWORD cbSize;
  DWORD dwContextId;
  DWORD dwProtocol;
  union
  {
    struct
    {
      DWORD dwFlags;
      DWORD inIPAddress;
      DWORD inPrimaryDNS;
      DWORD inSecondaryDNS;
      DWORD inDefaultGateway;
      DWORD inSubnetMask;
    } ipv4;
    struct
    {
      DWORD dwFlags;
      RILNDISIPV6ADDR inIPAddress;
      RILNDISIPV6ADDR inPrimaryDNS;
      RILNDISIPV6ADDR inSecondaryDNS;
typedef struct rilndisipconfig_tag { DWORD cbSize; DWORD dwContextId; DWORD dwProtocol; union { struct { DWORD dwFlags; DWORD inIPAddress; DWORD inPrimaryDNS; DWORD inSecondaryDNS; DWORD inDefaultGateway; DWORD inSubnetMask; } ipv4;
typedef struct rilndisipv6addr_tag { union { UCHAR Byte[IPV6_ADDRESS_LENGTH_IN_UCHAR]; USHORT Word[IPV6_ADDRESS_LENGTH_IN_USHORT]; };
typedef struct rilndisstatus_tag { DWORD dwContextId; DWORD dwSize; DWORD dwStatusType; union { LPRILNDISIPCONFIG pRilNdisIpConfig; DWORD dwFlowControl; };

/* function */
HRESULT RIL_NDIS_ SetGPRSContextActivated ( HRIL hRil, Const RILNDISGPRSCONTEXT* pGprsContext );

#endif /* _RIL_ */
