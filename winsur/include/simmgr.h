/* simmgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 50 constants, 37 declarations, 0 outlines, 0 base types, 0 extra macros, 12 extra decls
 */
#ifndef _SIMMGR_
#define _SIMMGR_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SIM_E_BADPARAM 0
#define SIM_E_BUFFERTOOSMALL 0
#define SIM_E_CORPPINREQUIRED 0
#define SIM_E_CORPPUKREQUIRED 0
#define SIM_E_EMPTYINDEX 0
#define SIM_E_INCORRECTPASSWORD 0
#define SIM_E_INVALIDINDEX 0
#define SIM_E_MEMORYFAILURE 0
#define SIM_E_MEMORYFULL 0
#define SIM_E_MOBILEERROR 0
#define SIM_E_NETWKPINREQUIRED 0
#define SIM_E_NETWKPUKREQUIRED 0
#define SIM_E_NETWORKERROR 0
#define SIM_E_NOSIM 0
#define SIM_E_NOSIMMSGSTORAGE 0
#define SIM_E_NOTFOUND 0
#define SIM_E_NOTREADY 0
#define SIM_E_NOTTEXTMESSAGE 0
#define SIM_E_PHFSIMPINREQUIRED 0
#define SIM_E_PHFSIMPUKREQUIRED 0
#define SIM_E_PHSIMPINREQUIRED 0
#define SIM_E_RADIONOTPRESENT 0
#define SIM_E_RADIOOFF 0
#define SIM_E_SECURITYFAILURE 0
#define SIM_E_SIMBUSY 0
#define SIM_E_SIMDOWNLOADERROR 0
#define SIM_E_SIMFAILURE 0
#define SIM_E_SIMMSGSTORAGEFULL 0
#define SIM_E_SIMNOTINSERTED 0
#define SIM_E_SIMPIN2REQUIRED 0
#define SIM_E_SIMPINREQUIRED 0
#define SIM_E_SIMPUK2REQUIRED 0
#define SIM_E_SIMPUKREQUIRED 0
#define SIM_E_SIMTOOLKITBUSY 0
#define SIM_E_SIMWRONG 0
#define SIM_E_SUBSETPINREQUIRED 0
#define SIM_E_SUBSETPUKREQUIRED 0
#define SIM_E_SVCPINREQUIRED 0
#define SIM_E_SVCPUKREQUIRED 0
#define SIM_E_UNDETERMINED 0
#define SIM_E_UNSUPPORTED 0
#define SIM_SMSSTORAGE_BROADCAST 0
#define SIM_SMSSTORAGE_SIM 0
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define SIM_INIT_SIMCARD_NOTIFICATIONS 0x00000001
#define SIM_RECORDTYPE_CYCLIC 0x00000002
#define SIM_RECORDTYPE_DEDICATED 0x00000005
#define SIM_RECORDTYPE_LINEAR 0x00000003
#define SIM_RECORDTYPE_MASTER 0x00000004
#define SIM_RECORDTYPE_TRANSPARENT 0x00000001
#define SIM_RECORDTYPE_UNKNOWN 0x00000000
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* SIMCALLBACK  [callback; ce-only; CE 6.0..699; cellcore.lib] */
typedef void (*SIMCALLBACK) (
 DWORD dwNotifyCode,
 const void* pData,
 DWORD dwDataSize,
 DWORD dwParam
);

/* SIMCAPS  [struct; ce-only; CE 6.0..699] */
typedef struct simcaps_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwPBStorages;
 DWORD dwMinPBIndex;
 DWORD dwMaxPBIndex;
 DWORD dwMaxPBEAddressLength;
 DWORD dwMaxPBETextLength;
 DWORD dwLockFacilities;
 DWORD dwReadMsgStorages;
 DWORD dwWriteMsgStorages;
 DWORD dwNumLockingPwdLengths;
 SIMLOCKINGPWDLENGTH rgLockingPwdLengths[SIM_NUMLOCKFACILITIES];
} SIMCAPS, FAR *LPSIMCAPS;

/* SIMFILEREFRESH  [struct; ce-only; CE 6.0..699] */
typedef struct simfilerefresh_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwFlags;
 DWORD dwFileCount;
 DWORD rgdwAddress[MAX_FILES];
} SIMFILEREFRESH, FAR *LPSIMFILEREFRESH;

/* SIMLOCKINGPWDLENGTH  [struct; ce-only; CE 6.0..699] */
typedef struct simlockingpwdlength {
 DWORD dwFacility;
 DWORD dwPasswordLength;
} SIMLOCKINGPWDLENGTH, FAR *LPSIMLOCKINGPWDLENGTH;

/* SIMMESSAGE  [struct; ce-only; CE 6.0..699] */
typedef struct simmessage_tag {
 DWORD cbSize;
 DWORD dwParams;
 TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
 DWORD dwAddressType;
 DWORD dwNumPlan;
 SYSTEMTIME stReceiveTime;
 DWORD cbHdrLength;
 BYTE rgbHeader[MAX_LENGTH_HEADER];
 TCHAR lpszMessage[MAX_LENGTH_MESSAGE];
} SIMMESSAGE, FAR *LPSIMMESSAGE;

/* SIMMESSAGECHANGE  [struct; ce-only; CE 6.0..699] */
typedef struct simmessagechange_tag {
 DWORD dwEntry;
 DWORD dwStorage;
} SIMMESSAGECHANGE, FAR *LPSIMMESSAGECHANGE;

/* SIMPBECHANGE  [struct; ce-only; CE 6.0..699] */
typedef struct simpbechange_tag {
 DWORD dwEntry;
 DWORD dwStorage;
} SIMPBECHANGE, FAR *LPSIMPBECHANGE;

/* SIMPHONEBOOKADDITIONALNUMBER  [struct; ce-only; CE 6.0..699] */
typedef struct simphonebookadditionalnumber_tag {
 DWORD cbSize;
 DWORD dwParams;
 TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
 DWORD dwAddressType;
 DWORD dwNumPlan;
 DWORD dwNumId;
} SIMPHONEBOOKADDITIONALNUMBER, *LPSIMPHONEADDITIONALNUMBER;

/* SIMPHONEBOOKCAPS  [struct; ce-only; CE 6.0..699] */
typedef struct simphonebookcaps_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwStorages;
 DWORD dwMinIndex;
 DWORD dwMaxIndex;
 DWORD dwMaxAddressLength;
 DWORD dwMaxTextLength;
 DWORD dwMaxSecondNameLength;
 DWORD dwMaxAdditionalNumberLength;
 DWORD dwMaxEmailAddressLength;
 DWORD dwMaxGroupTagLength;
 DWORD dwMaxAdditionalNumberTagLength;
 DWORD dwAdditionalNumberCount;
 DWORD dwEmailAddressCount;
 DWORD dwMaxGroupTags;
 DWORD dwMaxAdditionalNumberTags;
 BOOL fHidden;
 BOOL fUid;
 DWORD dwMaxGroupIdCount;
} SIMPHONEBOOKCAPS, FAR *LPPHONEBOOKSIMCAPS;

/* SIMPHONEBOOKEMAILADDRESS  [struct; ce-only; CE 6.0..699] */
typedef struct simphonebookemailaddress_tag {
 DWORD cbSize;
 DWORD dwParams;
 TCHAR lpszAddress[MAX_LENGTH_PHONEBOOKENTRYTEXT];
} SIMPHONEBOOKEMAILADDRESS, *LPSIMPHONEBOOKEMAILADDRESS;

/* SIMPHONEBOOKENTRY  [struct; ce-only; CE 6.0..699; cellcore.lib] */
typedef struct simphonebookentry_tag {
 DWORD cbSize;
 DWORD dwParams;
 TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
 DWORD dwAddressType;
 DWORD dwNumPlan;
 TCHAR lpszText[MAX_LENGTH_PHONEBOOKENTRYTEXT];
} SIMPHONEBOOKENTRY, *LPSIMPHONEBOOKENTRY;

/* SIMPHONEBOOKENTRYEX  [struct; ce-only; CE 6.0..699] */
typedef struct simphonebookentryex_tag {
 DWORD cbSize;
 DWORD dwParams;
 TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
 DWORD dwAddressType;
 DWORD dwNumPlan;
 TCHAR lpszText[MAX_LENGTH_PHONEBOOKENTRYTEXT];
 TCHAR lpszSecondName[MAX_LENGTH_PHONEBOOKENTRYTEXT];
 DWORD dwIndex;
 BOOL fHidden;
 DWORD dwGroupIdCount;
 DWORD rgdwGroupId[MAX_NUM_GROUPS];
 DWORD dwUid;
 DWORD dwAdditionalNumberCount;
 LPSIMPHONEBOOKADDITIONALNUMBER lpAdditionalNumbers;
 DWORD dwEmailCount;
 LPSIMPHONEBOOKEMAILADDRESS lpEmailAddresses;
} SIMPHONEBOOKENTRYEX, *LPSIMPHONEBOOKENTRYEX;

/* SIMRECORDINFO  [struct; ce-only; CE 6.0..699] */
typedef struct simrecordinfo_tag {
 DWORD cbSize;
 DWORD dwParams;
 DWORD dwRecordType;
 DWORD dwItemCount;
 DWORD dwSize;
} SIMRECORDINFO, FAR *LPSIMRECORDINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* SimChangeLockingPassword  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimChangeLockingPassword (
 HSIM hSim,
 DWORD dwLockingFacility,
 LPTSTR lpszOldPassword,
 LPTSTR lpszNewPassword
);

/* SimDeinitialize  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimDeinitialize (
 HSIM hSim
);

/* SimDeleteMessage  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimDeleteMessage (
 HSIM hSim,
 DWORD dwStorage,
 DWORD dwIndex
);

/* SimDeletePhonebookEntry  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimDeletePhonebookEntry (
 HSIM hSim,
 DWORD dwLocation,
 DWORD dwIndex
);

/* SimGetDevCaps  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetDevCaps(
 HSIM hSim,
 DWORD dwCapsType,
 LPSIMCAPS lpSimCaps 
);

/* SimGetLockingStatus  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetLockingStatus (
 HSIM hSim,
 DWORD dwLockingFacility,
 LPTSTR lpszPassword,
 BOOL* pfEnabled
);

/* SimGetPhonebookCapabilities  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetPhonebookCapabilities(
HSIM hSim,
LPSIMPHONEBOOKCAPS lpCapabilities
);

/* SimGetPhonebookStatus  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetPhonebookStatus (
 HSIM hSim,
 DWORD dwLocation,
 LPDWORD lpdwUsed,
 LPDWORD lpdwTotal
);

/* SimGetPhoneLockedState  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetPhoneLockedState (
 HSIM hSim,
 LPDWORD lpdwLockedState 
);

/* SimGetRecordInfo  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetRecordInfo (
 HSIM hSim,
 DWORD dwAddress,
 LPSIMRECORDINFO lpSimRecordInfo
);

/* SimGetSmsStorageStatus  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimGetSmsStorageStatus (
 HSIM hSim,
 DWORD dwStorage,
 LPDWORD lpdwUsed,
 LPDWORD lpdwTotal
);

/* SimInitialize  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimInitialize (
 DWORD dwFlags,
 SIMCALLBACK lpfnCallBack,
 DWORD dwParam,
 LPHSIM lphSim
);

/* SimReadMessage  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimReadMessage (
 HSIM hSim,
 DWORD dwStorage,
 DWORD dwIndex,
 LPSIMMESSAGE lpSimMessage
);

/* SimReadPhonebookEntries  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimReadPhonebookEntries(
 HSIM hSim,
 DWORD dwLocation,
 DWORD dwStartIndex,
 LPDWORD lpdwCount,
 LPSIMPHONEBOOKENTRYEX lpEntries,
 LPDWORD lpdwBufferSize
);

/* SimReadPhonebookEntry  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimReadPhonebookEntry (
 HSIM hSim,
 DWORD dwLocation,
 DWORD dwIndex,
 LPSIMPHONEBOOKENTRY lpPhonebookEntry
);

/* SimReadPhonebookTag  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimReadPhonebookTag(
 HSIM hSim,
 DWORD dwTag,
 DWORD dwIndex,
 __out_ecount(cchNameSize) LPTSTR szName,
 DWORD cchNameSize
);

/* SimReadRecord  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimReadRecord (
 HSIM hSim,
 DWORD dwAddress,
 DWORD dwRecordType,
 DWORD dwIndex,
 LPBYTE lpData,
 DWORD dwBufferSize,
 LPDWORD lpdwBytesRead
);

/* SimSetLockingStatus  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimSetLockingStatus (
 HSIM hSim,
 DWORD dwLockingFacility,
 LPTSTR lpszPassword,
 BOOL fEnabled
);

/* SimUnlockPhone  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimUnlockPhone (
 HSIM hSim,
 LPTSTR lpszPassword,
 LPTSTR lpszNewPin
);

/* SimWriteMessage  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimWriteMessage (
 HSIM hSim,
 DWORD dwStorage,
 LPDWORD lpdwIndex,
 LPSIMMESSAGE lpSimMessage
);

/* SimWritePhonebookEntry  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimWritePhonebookEntry (
 HSIM hSim,
 DWORD dwLocation,
 DWORD dwIndex,
 LPSIMPHONEBOOKENTRY lpPhonebookEntry
);

/* SimWritePhonebookEntryEx  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimWritePhonebookEntryEx(
 HSIM hSim,
 DWORD dwLocation,
 DWORD dwIndex,
 LPSIMPHONEBOOKENTRYEX lpEntries
);

/* SimWritePhonebookTag  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimReadPhonebookTag(
 HSIM hSim,
 DWORD dwTag,
 DWORD dwIndex,
 LPSTR szName
);

/* SimWriteRecord  [function; ce-only; CE 6.0..699; cellcore.lib] */
HRESULT SimWriteRecord (
 HSIM hSim,
 DWORD dwAddress,
 DWORD dwRecordType,
 DWORD dwIndex,
 LPBYTE lpData,
 DWORD dwByteCount
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct simphonebookcaps_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwStorages;
  DWORD dwMinIndex;
  DWORD dwMaxIndex;
  DWORD dwMaxAddressLength;
  DWORD dwMaxTextLength;
  DWORD dwMaxSecondNameLength;
  DWORD dwMaxAdditionalNumberLength;
  DWORD dwMaxEmailAddressLength;
  DWORD dwMaxGroupTagLength;
  DWORD dwMaxAdditionalNumberTagLength;
  DWORD dwAdditionalNumberCount;
  DWORD dwEmailAddressCount;
  DWORD dwMaxGroupTags;
  DWORD dwMaxAdditionalNumberTags;
  BOOL fHidden;
  BOOL fUid;
  DWORD dwMaxGroupIdCount;
} SIMPHONEBOOKCAPS, FAR *LPPHONEBOOKSIMCAPS;
typedef struct simcaps_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwPBStorages;
  DWORD dwMinPBIndex;
  DWORD dwMaxPBIndex;
  DWORD dwMaxPBEAddressLength;
  DWORD dwMaxPBETextLength;
  DWORD dwLockFacilities;
  DWORD dwReadMsgStorages;
  DWORD dwWriteMsgStorages;
  DWORD dwNumLockingPwdLengths;
  SIMLOCKINGPWDLENGTH rgLockingPwdLengths[SIM_NUMLOCKFACILITIES];
} SIMCAPS, FAR *LPSIMCAPS;
typedef struct simfilerefresh_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwFileCount;
  DWORD rgdwAddress[MAX_FILES];
} SIMFILEREFRESH, FAR *LPSIMFILEREFRESH;
typedef struct simlockingpwdlength { DWORD dwFacility; DWORD dwPasswordLength; } SIMLOCKINGPWDLENGTH, FAR *LPSIMLOCKINGPWDLENGTH;
typedef struct simmessage_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  SYSTEMTIME stReceiveTime;
  DWORD cbHdrLength;
  BYTE rgbHeader[MAX_LENGTH_HEADER];
  TCHAR lpszMessage[MAX_LENGTH_MESSAGE];
} SIMMESSAGE, FAR *LPSIMMESSAGE;
typedef struct simmessagechange_tag { DWORD dwEntry; DWORD dwStorage; } SIMMESSAGECHANGE, FAR *LPSIMMESSAGECHANGE;
typedef struct simpbechange_tag { DWORD dwEntry; DWORD dwStorage; } SIMPBECHANGE, FAR *LPSIMPBECHANGE;
typedef struct simphonebookadditionalnumber_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  DWORD dwNumId;
} SIMPHONEBOOKADDITIONALNUMBER, *LPSIMPHONEADDITIONALNUMBER;
typedef struct simphonebookemailaddress_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_PHONEBOOKENTRYTEXT];
} SIMPHONEBOOKEMAILADDRESS, *LPSIMPHONEBOOKEMAILADDRESS;
typedef struct simphonebookentry_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  TCHAR lpszText[MAX_LENGTH_PHONEBOOKENTRYTEXT];
} SIMPHONEBOOKENTRY, *LPSIMPHONEBOOKENTRY;
typedef struct simphonebookentryex_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  TCHAR lpszText[MAX_LENGTH_PHONEBOOKENTRYTEXT];
  TCHAR lpszSecondName[MAX_LENGTH_PHONEBOOKENTRYTEXT];
  DWORD dwIndex;
  BOOL fHidden;
  DWORD dwGroupIdCount;
  DWORD rgdwGroupId[MAX_NUM_GROUPS];
  DWORD dwUid;
  DWORD dwAdditionalNumberCount;
  LPSIMPHONEBOOKADDITIONALNUMBER lpAdditionalNumbers;
  DWORD dwEmailCount;
  LPSIMPHONEBOOKEMAILADDRESS lpEmailAddresses;
} SIMPHONEBOOKENTRYEX, *LPSIMPHONEBOOKENTRYEX;
typedef struct simrecordinfo_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwRecordType;
  DWORD dwItemCount;
  DWORD dwSize;
} SIMRECORDINFO, FAR *LPSIMRECORDINFO;

#endif /* _SIMMGR_ */
