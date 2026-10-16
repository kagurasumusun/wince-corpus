/* pimstore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 116 constants, 331 declarations, 0 outlines, 0 base types, 0 extra macros, 35 extra decls
 */
#ifndef _PIMSTORE_
#define _PIMSTORE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CEVT_PIM_AUTO_I4 (102)
#define CEVT_PIM_STREAM (100)
#define olAppointmentItem 1
#define olBusy 2
#define olCityItem 102
#define olConfidential 3
#define olContactItem 2
#define olDialog 4
#define olFolderCalendar 9
#define olFolderCities 101
#define olFolderContacts 10
#define olFolderInfrared 102
#define olFolderTasks 13
#define olFree 0
#define olFriday 32
#define olHomeCity 0
#define olImportanceHigh 2
#define olImportanceLow 0
#define olImportanceNormal 1
#define olLED 1
#define olMeeting 1
#define olMeetingAccepted 3
#define olMeetingCanceled 7
#define olMonday 2
#define olNonMeeting 0
#define olNormal 0
#define olOutOfOffice 3
#define olPersonal 1
#define olPrivate 2
#define olRecursDaily 0
#define olRecursMonthly 2
#define olRecursMonthNth 3
#define olRecursOnce -1
#define olRecursWeekly 1
#define olRecursYearly 5
#define olRecursYearNth 6
#define olRepeat 16
#define olSaturday 64
#define olSound 8
#define olSunday 1
#define olTaskItem 3
#define olTentative 1
#define olThursday 16
#define olTuesday 4
#define olVibrate 2
#define olVisitingCity 1
#define olWednesday 8
#define PIMPR_ACCOUNT_NAME PROP_TAG(
#define PIMPR_ANNIVERSARY PROP_TAG(
#define PIMPR_ASSISTANT_NAME PROP_TAG(
#define PIMPR_ASSISTANT_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_BIRTHDAY PROP_TAG(
#define PIMPR_BUSINESS2_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_BUSINESS_ADDRESS PROP_TAG(
#define PIMPR_BUSINESS_ADDRESS_CITY PROP_TAG(
#define PIMPR_BUSINESS_ADDRESS_COUNTRY PROP_TAG(
#define PIMPR_BUSINESS_ADDRESS_POSTAL_CODE PROP_TAG(
#define PIMPR_BUSINESS_ADDRESS_STATE PROP_TAG(
#define PIMPR_BUSINESS_ADDRESS_STREET PROP_TAG(
#define PIMPR_BUSINESS_FAX_NUMBER PROP_TAG(
#define PIMPR_BUSINESS_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_CAR_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_CHILDREN PROP_TAG(
#define PIMPR_COMPANY_NAME PROP_TAG(
#define PIMPR_COMPANY_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_CONTACT_TYPE PROP_TAG(
#define PIMPR_CUSTOMERID PROP_TAG(
#define PIMPR_DEPARTMENT PROP_TAG(
#define PIMPR_DISPLAY_NAME PROP_TAG(
#define PIMPR_EMAIL1_ADDRESS PROP_TAG(
#define PIMPR_EMAIL2_ADDRESS PROP_TAG(
#define PIMPR_EMAIL3_ADDRESS PROP_TAG(
#define PIMPR_FILEAS PROP_TAG(
#define PIMPR_FIRST_NAME PROP_TAG(
#define PIMPR_GOVERNMENTID PROP_TAG(
#define PIMPR_HOME2_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_HOME_ADDRESS PROP_TAG(
#define PIMPR_HOME_ADDRESS_CITY PROP_TAG(
#define PIMPR_HOME_ADDRESS_COUNTRY PROP_TAG(
#define PIMPR_HOME_ADDRESS_POSTAL_CODE PROP_TAG(
#define PIMPR_HOME_ADDRESS_STATE PROP_TAG(
#define PIMPR_HOME_ADDRESS_STREET PROP_TAG(
#define PIMPR_HOME_FAX_NUMBER PROP_TAG(
#define PIMPR_HOME_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_IM1_ADDRESS PROP_TAG(
#define PIMPR_IM2_ADDRESS PROP_TAG(
#define PIMPR_IM3_ADDRESS PROP_TAG(
#define PIMPR_JOB_TITLE PROP_TAG(
#define PIMPR_LAST_NAME PROP_TAG(
#define PIMPR_MANAGER PROP_TAG(
#define PIMPR_MIDDLE_NAME PROP_TAG(
#define PIMPR_MMS PROP_TAG(
#define PIMPR_MOBILE_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_NICKNAME PROP_TAG(
#define PIMPR_OFFICE_LOCATION PROP_TAG(
#define PIMPR_OTHER_ADDRESS PROP_TAG(
#define PIMPR_OTHER_ADDRESS_CITY PROP_TAG(
#define PIMPR_OTHER_ADDRESS_COUNTRY PROP_TAG(
#define PIMPR_OTHER_ADDRESS_POSTAL_CODE PROP_TAG(
#define PIMPR_OTHER_ADDRESS_STATE PROP_TAG(
#define PIMPR_OTHER_ADDRESS_STREET PROP_TAG(
#define PIMPR_PAGER_NUMBER PROP_TAG(
#define PIMPR_PICTURE PROP_TAG(
#define PIMPR_RADIO_TELEPHONE_NUMBER PROP_TAG(
#define PIMPR_RINGTONE PROP_TAG(
#define PIMPR_SIM_PHONE PROP_TAG(
#define PIMPR_SMARTPROP PROP_TAG(
#define PIMPR_SMS PROP_TAG(
#define PIMPR_SPOUSE PROP_TAG(
#define PIMPR_SUFFIX PROP_TAG(
#define PIMPR_TITLE PROP_TAG(
#define PIMPR_WEB_PAGE PROP_TAG(
#define PIMPR_YOMI_COMPANY PROP_TAG(
#define PIMPR_YOMI_FILEAS PROP_TAG(
#define PIMPR_YOMI_FIRSTNAME PROP_TAG(
#define PIMPR_YOMI_LASTNAME PROP_TAG(

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IPOlRecipient::Resolve  [function, macro; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Resolve(
 VARIANT_BOOL fDisplayUI,
 VARIANT_BOOL * pfResolved
);

/* IPOutlookItemCollection::Sort  [function, macro; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Sort(
 BSTR pwszProperty,
 VARIANT_BOOL fDescending
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IAppointment::get_AllDayEvent  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_AllDayEvent(
 VARIANT_BOOL * pfAllDay
);

/* IAppointment::get_IsRecurring  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_IsRecurring(
 VARIANT_BOOL * pfIsRecurring
);

/* IAppointment::get_ReminderSet  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderSet(
 VARIANT_BOOL * pfReminderSet
);

/* IAppointment::put_AllDayEvent  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_AllDayEvent(
 VARIANT_BOOL fAllDay
);

/* IAppointment::put_ReminderSet  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderSet(
 VARIANT_BOOL fReminderSet
);

/* ICity::get_InROM  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_InROM(
 VARIANT_BOOL * pbInROM
);

/* IException::get_Deleted  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Deleted(
 VARIANT_BOOL * pfDeleted
);

/* IPOutlookApp::get_OutlookCompatible  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OutlookCompatible(
 VARIANT_BOOL * pfCompat
);

/* IPOutlookItemCollection::get_IncludeRecurrences  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_IncludeRecurrences(
 VARIANT_BOOL * pfIncludeRecurrences
);

/* IPOutlookItemCollection::put_IncludeRecurrences  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_IncludeRecurrences(
 VARIANT_BOOL fIncludeRecurrences
);

/* IRecurrencePattern::get_NoEndDate  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_NoEndDate(
 VARIANT_BOOL * pfNoEndDate
);

/* IRecurrencePattern::put_NoEndDate  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_NoEndDate(
 VARIANT_BOOL fNoEndDate
);

/* ITask::get_Complete  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Complete(
 VARIANT_BOOL * pfCompleted
);

/* ITask::get_IsRecurring  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_IsRecurring(
 VARIANT_BOOL * pfIsRecurring
);

/* ITask::get_ReminderSet  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderSet(
 VARIANT_BOOL * pfReminderSet
);

/* ITask::get_TeamTask  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_TeamTask(
 VARIANT_BOOL * pfTeamTask
);

/* ITask::put_Complete  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Complete(
 VARIANT_BOOL fCompleted
);

/* ITask::put_ReminderSet  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderSet(
 VARIANT_BOOL fReminderSet
);

/* ITask::put_TeamTask  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_TeamTask(
 VARIANT_BOOL fTeamTask
);

/* ITimeZone::get_IsDaylightAbsoluteDate  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_IsDaylightAbsoluteDate(
 VARIANT_BOOL * pfAbsolute
);

/* ITimeZone::get_IsStandardAbsoluteDate  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_IsStandardAbsoluteDate(
 VARIANT_BOOL * pfAbsolute
);

/* ITimeZone::get_SupportsDST  [function, macro; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_SupportsDST(
 VARIANT_BOOL * pfSupportsDST
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* OlBusyStatus  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlBusyStatus {
 olFree = 0,
 olTentative = 1,
 olBusy = 2,
 olOutOfOffice = 3
};

/* OlCurrentCity  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlCurrentCity {
 olHomeCity = 0,
 olVisitingCity = 1
};

/* OlDaysOfWeek  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlDaysOfWeek {
 olSunday = 1,
 olMonday = 2,
 olTuesday = 4,
 olWednesday = 8,
 olThursday = 16,
 olFriday = 32,
 olSaturday = 64
};

/* OlDefaultFolders  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlDefaultFolders {
 olFolderCalendar = 9,
 olFolderContacts = 10,
 olFolderTasks = 13,
 olFolderCities = 101,
 olFolderInfrared = 102
};

/* OlImportance  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlImportance {
 olImportanceLow = 0,
 olImportanceNormal = 1,
 olImportanceHigh = 2
};

/* OlItemType  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlItemType {
 olAppointmentItem = 1,
 olContactItem = 2,
 olTaskItem = 3,
 olCityItem = 102
};

/* OlMeetingStatus  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlMeetingStatus {
 olNonMeeting = 0,
 olMeeting = 1,
 olMeetingAccepted = 3,
 olMeetingCanceled = 7
};

/* OlRecurrenceType  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlRecurrenceType {
 olRecursOnce = -1,
 olRecursDaily = 0,
 olRecursWeekly = 1,
 olRecursMonthly = 2,
 olRecursMonthNth = 3,
 olRecursYearly = 5,
 olRecursYearNth = 6
};

/* OlReminderOptions  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlReminderOptions {
 olLED = 1,
 olVibrate = 2,
 olDialog = 4,
 olSound = 8,
 olRepeat = 16
};

/* OlSensitivity  [enum; ce-only; CE 6.0..699; Pimstore.lib] */
enum OlSensitivity {
 olNormal = 0,
 olPersonal = 1,
 olPrivate = 2,
 olConfidential = 3
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* ICity::Display  [function; ce-only; CE 3.0..399] */
HRESULT Display();

/* IException::Unknown  [function; ce-only; CE 3.0..399] */
void GetFirstExceptionItem(IAppointment *pAppt) 
{ 
IRecurrencePattern *pRec; 
IExceptions *pExceptions; 
IException *pException; 
// Get the exception item 
pAppt->GetRecurrencePattern(&pRec); 
pRec->get_Exceptions(&pExceptions); 
pExceptions->Item(1, &pException); 
// Release objects 
pRec->Release(); 
pExceptions->Release(); 
pException->Release(); 
}
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* CePimCommand  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
void CePimCommand(
 HWND hWnd,
 PIMTYPE ptData,
 UINT uDataCount,
 HANDLE * rghData,
 void pReserved
);

/* IAppointment::Cancel  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Cancel ();

/* IAppointment::ClearRecurrencePattern  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT ClearRecurrencePattern ();

/* IAppointment::Copy  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Copy(
 IAppointment ** ppolItem
);

/* IAppointment::Delete  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Delete ();

/* IAppointment::GetRecurrencePattern  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetRecurrencePattern(
 IRecurrencePattern ** ppRec
);

/* IAppointment::Save  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Save ();

/* IAppointment::Send  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Send ();

/* IContact::Copy  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Copy(
 IContact ** ppolCopy
);

/* IContact::Delete  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Delete(void);

/* IContact::Save  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Save(void);

/* IExceptions::Item  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Item(
 int iIndex,
 IException ** ppExcept
);

/* IFolder::AddItemToInfraredFolder  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT AddItemToInfraredFolder(
 int olItem,
 IDispatch * polItem
);

/* IFolder::ReceiveFromInfrared  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT SendToInfrared ();

/* IFolder::SendToInfrared  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT SendToInfrared ();

/* IPOutlookApp::CreateItem  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT CreateItem(
 int olItem,
 IDispatch ** ppolItem
);

/* IPOutlookApp::GetDefaultFolder  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetDefaultFolder(
 int olFolder,
 IFolder ** ppIFolder
);

/* IPOutlookApp::GetItemFromOid  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetItemFromOid(
 long oid,
 IDispatch ** ppolItem
);

/* IPOutlookApp::GetTimeZoneFromIndex  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetTimeZoneFromIndex(
 int iIndex,
 ITimeZone ** ppTimeZone
);

/* IPOutlookApp::GetTimeZoneInformationFromIndex  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetTimeZoneInformationFromIndex(
 int iIndex,
 TIME_ZONE_INFORMATION * ptz
);

/* IPOutlookApp::Logoff  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Logoff ();

/* IPOutlookApp::Logon  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Logon(
 long hWnd
);

/* IPOutlookApp::ReceiveFromInfrared  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT ReceiveFromInfrared ();

/* IPOutlookApp::SysFreeString  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT SysFreeString(
 BSTR bstr
);

/* IPOutlookItemCollection::Add  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Add(
 IDispatch ** ppolItem
);

/* IPOutlookItemCollection::Find  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Find (
 BSTR pwszRestriction,
 IDispatch ** ppolItem
);

/* IPOutlookItemCollection::FindNext  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT FindNext(
 IDispatch ** ppolItem
);

/* IPOutlookItemCollection::Item  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Item(
 int iItem,
 IDispatch ** ppolItem
);

/* IPOutlookItemCollection::Remove  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Remove(
 int iItem
);

/* IPOutlookItemCollection::Restrict  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Restrict(
 BSTR pwszRestriction,
 IPOutlookItemCollection ** ppolItems
);

/* IRecipients::Add  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Add(
 BSTR pwszName,
 IRecipient ** pRecipient
);

/* IRecipients::Item  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Item(
 int iIndex,
 IRecipient ** ppRecipient
);

/* IRecipients::Remove  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Remove(
 int iIndex
);

/* IRecurrencePattern::GetOccurrence  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetOccurrence(
 DATE date,
 IAppointment ** ppolAppt
);

/* ITask::ClearRecurrencePattern  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT ClearReccurencePattern ();

/* ITask::Copy  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Copy(
 ITask ** ppolItem
);

/* ITask::Delete  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Delete ();

/* ITask::GetRecurrencePattern  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT GetRecurrencePattern(
 IRecurrencePattern ** ppRec
);

/* ITask::Save  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT Save ();

/* ITask::SkipRecurrence  [function; ce-only; CE 3.0..399, 5.0..699; Pimstore.lib] */
HRESULT SkipRecurrence ();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 3.0..399, 6.0..699 */

/* IAppointment::Display  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT Display(void);

/* ICity::Copy  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT Copy(
 ITEMTYPE ** ppolItem
);

/* ICity::Delete  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT Delete();

/* ICity::Save  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT Save();

/* IContact::Display  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT Display(void);

/* IPOlItems::SetColumns  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT SetColumns(
 BSTR Columns
);

/* ITask::Display  [function; ce-only; CE 3.0..399, 6.0..699; Pimstore.lib] */
HRESULT Display(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IException  [function; ce-only; CE 5.0..599; Pimstore.lib] */
void GetFirstExceptionItem (IAppointment *pAppt) 
{ 
 IRecurrencePattern *pRec; 
 IExceptions *pExceptions; 
 IException *pException; 
 // Get the exception item 
 pAppt->GetRecurrencePattern (&pRec); 
 pRec->get_Exceptions (&pExceptions); 
 pExceptions->Item (1, &pException); 
 // Release objects 
 pRec->Release (); 
 pExceptions->Release (); 
 pException->Release (); 
}

/* IFolder  [function; ce-only; CE 5.0..599; Pimstore.lib] */
void GetCalendarFolder (IPOutlookApplication *polApp) 
{ 
 IFolder *pFolder; 
 polApp->GetDefaultFolder (olFolderCalendar, &pFolder); 
 // Release objects 
 pFolder->Release (); 
}

/* IPOutlookItemCollection  [function; ce-only; CE 5.0..599; Pimstore.lib] */
void GetAnItemsCollection (IPOutlookApp *polApp) 
{ 
 IPOutlookItemCollection *pItems; 
 IFolder *pFolder; 
 polApp->GetDefaultFolder (olFolderTasks, &pFolder); 
 pFolder->get_Items (&pItems); 
 // Release objects 
 pItems->Release (); 
 pFolder->Release (); 
}
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IAppointment::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IAppointment::get_Body  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Body(
 BSTR * ppwsz
);

/* IAppointment::get_BodyInk  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BodyInk(
 CEBLOB * pcebl
);

/* IAppointment::get_BusyStatus  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusyStatus(
 long * pnState
);

/* IAppointment::get_Categories  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Categories(
 BSTR * ppwsz
);

/* IAppointment::get_Duration  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Duration(
 long * pnLen
);

/* IAppointment::get_End  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_End(
 DATE * pst
);

/* IAppointment::get_Location  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Location(
 BSTR * ppwsz
);

/* IAppointment::get_MeetingStatus  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_MeetingStatus(
 long * pnStatus
);

/* IAppointment::get_Oid  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Oid(
 long * poid
);

/* IAppointment::get_Recipients  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Recipients(
 IRecipients ** pRecipients
);

/* IAppointment::get_ReminderMinutesBeforeStart  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderMinutesBeforeStart(
 long * plMinutes
);

/* IAppointment::get_ReminderOptions  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderOptions(
 long * pdwOptions
);

/* IAppointment::get_ReminderSoundFile  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderSoundFile(
 BSTR * ppwsz
);

/* IAppointment::get_Sensitivity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Sensitivity(
 long * plSensitivity
);

/* IAppointment::get_Start  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Start(
 DATE * pst
);

/* IAppointment::get_Subject  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Subject(
 BSTR * ppwsz
);

/* IAppointment::put_Body  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Body(
 BSTR pwsz
);

/* IAppointment::put_BodyInk  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BodyInk(
 CEBLOB * pcebl
);

/* IAppointment::put_BusyStatus  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusyStatus(
 long nState
);

/* IAppointment::put_Categories  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Categories(
 BSTR pwsz
);

/* IAppointment::put_Duration  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Duration(
 long nLen
);

/* IAppointment::put_End  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_End(
 DATE st
);

/* IAppointment::put_Location  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Location(
 BSTR pwsz
);

/* IAppointment::put_ReminderMinutesBeforeStart  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderMinutesBeforeStart(
 long lMinutes
);

/* IAppointment::put_ReminderOptions  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderOptions(
 long dwOptions
);

/* IAppointment::put_ReminderSoundFile  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderSoundFile(
 BSTR pwsz
);

/* IAppointment::put_Sensitivity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Sensitivity(
 long lSensitivity
);

/* IAppointment::put_Start  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Start(
 DATE st
);

/* IAppointment::put_Subject  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Subject(
 BSTR pwsz
);

/* ICity::get_AirportCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_AirportCode(
 BSTR * pbstrAirportCode
);

/* ICity::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* ICity::get_AreaCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_AreaCode(
 BSTR * pbstrAreaCode
);

/* ICity::get_Country  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Country(
 BSTR * pbstrCountry
);

/* ICity::get_CountryPhoneCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_CountryPhoneCode(
 BSTR * pbstrCountryPhoneCode
);

/* ICity::get_Latitude  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Latitude(
 long * plLatitude
);

/* ICity::get_Longitude  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Longitude(
 long * plLongitude
);

/* ICity::get_Name  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Name(
 BSTR * pbstrName
);

/* ICity::get_TimezoneIndex  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_TimezoneIndex(
 long * plTimezoneIndex
);

/* ICity::put_AirportCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_AirportCode(
 BSTR bstrAirportCode
);

/* ICity::put_AreaCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_AreaCode(
 BSTR bstrAreaCode
);

/* ICity::put_Country  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Country(
 BSTR bstrCountry
);

/* ICity::put_CountryPhoneCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_CountryPhoneCode(
 BSTR bstrCountryPhoneCode
);

/* ICity::put_Latitude  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Latitude(
 long lLatitude
);

/* ICity::put_Longitude  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Longitude(
 long lLongitude
);

/* ICity::put_Name  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Name(
 BSTR bstrName
);

/* ICity::put_TimezoneIndex  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_TimezoneIndex(
 long lTimezoneIndex
);

/* IContact::get_Anniversary  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Anniversary(
 DATE * pst
);

/* IContact::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IContact::get_AssistantName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_AssistantName(
 BSTR * ppwsz
);

/* IContact::get_AssistantTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_AssistantTelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_Birthday  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Birthday(
 DATE * pst
);

/* IContact::get_Body  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Body(
 BSTR * ppwsz
);

/* IContact::get_BodyInk  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BodyInk(
 CEBLOB * pcebl
);

/* IContact::get_Business2TelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Business2TelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_BusinessAddressCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessAddressCity(
 BSTR * ppwsz
);

/* IContact::get_BusinessAddressCountry  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessAddressCountry(
 BSTR * ppwsz
);

/* IContact::get_BusinessAddressPostalCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessAddressPostalCode(
 BSTR * ppwsz
);

/* IContact::get_BusinessAddressState  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessAddressState(
 BSTR * ppwsz
);

/* IContact::get_BusinessAddressStreet  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessAddressStreet(
 BSTR * ppwsz
);

/* IContact::get_BusinessFaxNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessFaxNumber(
 BSTR * ppwsz
);

/* IContact::get_BusinessTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BusinessTelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_CarTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_CarTelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_Categories  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Categories(
 BSTR * ppwsz
);

/* IContact::get_Children  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Children(
 BSTR * ppwsz
);

/* IContact::get_CompanyName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_CompanyName(
 BSTR * ppwsz
);

/* IContact::get_Department  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Department(
 BSTR * ppwsz
);

/* IContact::get_Email1Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Email1Address(
 BSTR * ppwsz
);

/* IContact::get_Email2Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Email2Address(
 BSTR * ppwsz
);

/* IContact::get_Email3Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Email3Address(
 BSTR * ppwsz
);

/* IContact::get_FileAs  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_FileAs(
 BSTR * ppwsz
);

/* IContact::get_FirstName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_FirstName(
 BSTR * ppwsz
);

/* IContact::get_Home2TelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Home2TelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_HomeAddressCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeAddressCity(
 BSTR * ppwsz
);

/* IContact::get_HomeAddressCountry  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeAddressCountry(
 BSTR * ppwsz
);

/* IContact::get_HomeAddressPostalCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeAddressPostalCode(
 BSTR * ppwsz
);

/* IContact::get_HomeAddressState  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeAddressState(
 BSTR * ppwsz
);

/* IContact::get_HomeAddressStreet  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeAddressStreet(
 BSTR * ppwsz
);

/* IContact::get_HomeFaxNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeFaxNumber(
 BSTR * ppwsz
);

/* IContact::get_HomeTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeTelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_JobTitle  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_JobTitle(
 BSTR * ppwsz
);

/* IContact::get_LastName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_LastName(
 BSTR * ppwsz
);

/* IContact::get_MiddleName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_MiddleName(
 BSTR * ppwsz
);

/* IContact::get_MobileTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_MobileTelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_OfficeLocation  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OfficeLocation(
 BSTR * ppwsz
);

/* IContact::get_Oid  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Oid(
 long * poid
);

/* IContact::get_OtherAddressCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OtherAddressCity(
 BSTR * ppwsz
);

/* IContact::get_OtherAddressCountry  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OtherAddressCountry(
 BSTR * ppwsz
);

/* IContact::get_OtherAddressPostalCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OtherAddressPostalCode(
 BSTR * ppwsz
);

/* IContact::get_OtherAddressState  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OtherAddressState(
 BSTR * ppwsz
);

/* IContact::get_OtherAddressStreet  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OtherAddressStreet(
 BSTR * ppwsz
);

/* IContact::get_PagerNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_PagerNumber(
 BSTR * ppwsz
);

/* IContact::get_RadioTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_RadioTelephoneNumber(
 BSTR * ppwsz
);

/* IContact::get_Spouse  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Spouse(
 BSTR * ppwsz
);

/* IContact::get_Suffix  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Suffix(
 BSTR * ppwsz
);

/* IContact::get_Title  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Title(
 BSTR * ppwsz
);

/* IContact::get_WebPage  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_WebPage(
 BSTR * ppwsz
);

/* IContact::get_YomiCompanyName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_YomiCompanyName(
 BSTR * ppwsz
);

/* IContact::get_YomiFirstName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_YomiFirstName(
 BSTR * ppwsz
);

/* IContact::get_YomiLastName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_YomiLastName(
 BSTR * ppwsz
);

/* IContact::put_Anniversary  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Anniversary(
 DATE st
);

/* IContact::put_AssistantName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_AssistantName(
 BSTR pwsz
);

/* IContact::put_AssistantTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_AssistantTelephoneNumber(
 BSTR pwsz
);

/* IContact::put_Birthday  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Birthday(
 DATE st
);

/* IContact::put_Body  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Body(
 BSTR pwsz
);

/* IContact::put_BodyInk  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BodyInk(
 CEBLOB * pcebl
);

/* IContact::put_Business2TelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Business2TelephoneNumber(
 BSTR pwsz
);

/* IContact::put_BusinessAddressCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessAddressCity(
 BSTR pwsz
);

/* IContact::put_BusinessAddressCountry  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessAddressCountry(
 BSTR pwsz
);

/* IContact::put_BusinessAddressPostalCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessAddressPostalCode(
 BSTR pwsz
);

/* IContact::put_BusinessAddressState  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessAddressState(
 BSTR pwsz
);

/* IContact::put_BusinessAddressStreet  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessAddressStreet(
 BSTR pwsz
);

/* IContact::put_BusinessFaxNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessFaxNumber(
 BSTR pwsz
);

/* IContact::put_BusinessTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BusinessTelephoneNumber(
 BSTR pwsz
);

/* IContact::put_CarTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_CarTelephoneNumber(
 BSTR pwsz
);

/* IContact::put_Categories  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Categories(
 BSTR pwsz
);

/* IContact::put_Children  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Children(
 BSTR pwsz
);

/* IContact::put_CompanyName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_CompanyName(
 BSTR pwsz
);

/* IContact::put_Department  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Department(
 BSTR pwsz
);

/* IContact::put_Email1Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Email1Address(
 BSTR pwsz
);

/* IContact::put_Email2Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Email2Address(
 BSTR pwsz
);

/* IContact::put_Email3Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Email3Address(
 BSTR pwsz
);

/* IContact::put_FileAs  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_FileAs(
 BSTR pwsz
);

/* IContact::put_FirstName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_FirstName(
 BSTR pwsz
);

/* IContact::put_Home2TelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Home2TelephoneNumber(
 BSTR pwsz
);

/* IContact::put_HomeAddressCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeAddressCity(
 BSTR pwsz
);

/* IContact::put_HomeAddressCountry  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeAddressCountry(
 BSTR pwsz
);

/* IContact::put_HomeAddressPostalCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeAddressPostalCode(
 BSTR pwsz
);

/* IContact::put_HomeAddressState  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeAddressState(
 BSTR pwsz
);

/* IContact::put_HomeAddressStreet  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeAddressStreet(
 BSTR pwsz
);

/* IContact::put_HomeFaxNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeFaxNumber(
 BSTR pwsz
);

/* IContact::put_HomeTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeTelephoneNumber(
 BSTR pwsz
);

/* IContact::put_JobTitle  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_JobTitle(
 BSTR pwsz
);

/* IContact::put_LastName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_LastName(
 BSTR pwsz
);

/* IContact::put_MiddleName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_MiddleName(
 BSTR pwsz
);

/* IContact::put_MobileTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_MobileTelephoneNumber(
 BSTR pwsz
);

/* IContact::put_OfficeLocation  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_OfficeLocation(
 BSTR pwsz
);

/* IContact::put_OtherAddressCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_OtherAddressCity(
 BSTR pwsz
);

/* IContact::put_OtherAddressCountry  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_OtherAddressCountry(
 BSTR pwsz
);

/* IContact::put_OtherAddressPostalCode  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_OtherAddressPostalCode(
 BSTR pwsz
);

/* IContact::put_OtherAddressState  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_OtherAddressState(
 BSTR pwsz
);

/* IContact::put_OtherAddressStreet  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_OtherAddressStreet(
 BSTR pwsz
);

/* IContact::put_PagerNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_PagerNumber(
 BSTR pwsz
);

/* IContact::put_RadioTelephoneNumber  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_RadioTelephoneNumber(
 BSTR pwsz
);

/* IContact::put_Spouse  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Spouse(
 BSTR pwsz
);

/* IContact::put_Suffix  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Suffix(
 BSTR pwsz
);

/* IContact::put_Title  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Title(
 BSTR pwsz
);

/* IContact::put_WebPage  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_WebPage(
 BSTR pwsz
);

/* IContact::put_YomiCompanyName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_YomiCompanyName(
 BSTR pwsz
);

/* IContact::put_YomiFirstName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_YomiFirstName(
 BSTR pwsz
);

/* IContact::put_YomiLastName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_YomiLastName(
 BSTR pwsz
);

/* IException::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IException::get_AppointmentItem  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_AppointmentItem(
 IAppointment ** ppAppt
);

/* IException::get_OriginalDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_OriginalDate(
 DATE * pdate
);

/* IExceptions::get__NewEnum  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get__NewEnum(
 IUnknown ** ppEnumerator
)

/* IExceptions::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IExceptions::get_Count  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Count(
 int * pnCount
);

/* IFolder::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IFolder::get_DefaultItemType  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DefaultItemType(
 int * polItem
);

/* IFolder::get_Items  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Items(
 IPOutlookItemCollection ** ppolItems
);

/* IPOutlookApp::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IPOutlookApp::get_CurrentCityIndex  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_CurrentCityIndex(
 long * pnolCity
);

/* IPOutlookApp::get_HomeCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_HomeCity(
 ICity ** ppHomeCity
);

/* IPOutlookApp::get_Version  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Version(
 BSTR * pbstrVersion
);

/* IPOutlookApp::get_VisitingCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_VisitingCity(
 ICity ** ppVisitingCity
);

/* IPOutlookApp::put_CurrentCityIndex  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_CurrentCityIndex(
 long olCity
);

/* IPOutlookApp::put_HomeCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_HomeCity(
 ICity * pHomeCity
);

/* IPOutlookApp::put_VisitingCity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_VisitingCity(
 ICity ** pVisitingCity
);

/* IPOutlookApp::SystemTimeToVariantTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT SystemTimeToVariantTime(
 SYSTEMTIME * pst,
 DATE * pdate
);

/* IPOutlookApp::VariantTimeToSystemTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT VariantTimeToSystemTime(
 DATE date,
 SYSTEMTIME * pst
);

/* IPOutlookItemCollection::get__NewEnum  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get__NewEnum(
 IUnknown ** ppEnumerator
)

/* IPOutlookItemCollection::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IPOutlookItemCollection::get_Count  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Count(
 int * pnCount
);

/* IRecipient::get_Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Address(
 BSTR * ppwsz
);

/* IRecipient::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IRecipient::get_Name  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Name(
 BSTR * ppwsz
);

/* IRecipient::put_Address  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Address(
 BSTR pwsz
);

/* IRecipients::get__NewEnum  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get__NewEnum(
 IUnknown ** ppEnumerator
)

/* IRecipients::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IRecipients::get_Count  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Count(
 int * pnCount
);

/* IRecurrencePattern::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* IRecurrencePattern::get_DayOfMonth  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DayOfMonth(
 long * plDay
);

/* IRecurrencePattern::get_DayOfWeekMask  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DayOfWeekMask(
 long * plMask
);

/* IRecurrencePattern::get_Duration  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Duration(
 long * plDuration
);

/* IRecurrencePattern::get_EndTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_EndTime(
 DATE * pst
);

/* IRecurrencePattern::get_Exceptions  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Exceptions(
 IExceptions ** ppExceptions
);

/* IRecurrencePattern::get_Instance  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Instance(
 long * plInstance
);

/* IRecurrencePattern::get_Interval  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Interval(
 long * plInterval
);

/* IRecurrencePattern::get_MonthOfYear  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_MonthOfYear(
 long * plMask
);

/* IRecurrencePattern::get_Occurrences  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Occurrences(
 long * plOccurrences
);

/* IRecurrencePattern::get_PatternEndDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_PatternEndDate(
 DATE * pst
);

/* IRecurrencePattern::get_PatternStartDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_PatternStartDate(
 DATE * pst
);

/* IRecurrencePattern::get_RecurrenceType  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_RecurrenceType(
 long * plRecType
);

/* IRecurrencePattern::get_StartTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StartTime(
 DATE * pst
);

/* IRecurrencePattern::put_DayOfMonth  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_DayOfMonth(
 long lDay
);

/* IRecurrencePattern::put_DayOfWeekMask  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_DayOfWeekMask(
 long lMask
);

/* IRecurrencePattern::put_Duration  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Duration(
 long lDuration
);

/* IRecurrencePattern::put_EndTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_EndTime(
 DATE st
);

/* IRecurrencePattern::put_Instance  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Instance(
 long lInstance
);

/* IRecurrencePattern::put_Interval  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Interval(
 long lInterval
);

/* IRecurrencePattern::put_MonthOfYear  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_MonthOfYear(
 long lMask
);

/* IRecurrencePattern::put_Occurrences  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Occurrences(
 long lOccurrences
);

/* IRecurrencePattern::put_PatternEndDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_PatternEndDate(
 DATE st
);

/* IRecurrencePattern::put_PatternStartDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_PatternStartDate(
 DATE st
);

/* IRecurrencePattern::put_RecurrenceType  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_RecurrenceType(
 long lRecType
);

/* IRecurrencePattern::put_StartTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_StartTime(
 DATE st
);

/* ITask::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* ITask::get_Body  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Body(
 BSTR * ppwsz
);

/* ITask::get_BodyInk  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_BodyInk(
 CEBLOB * pcebl
);

/* ITask::get_Categories  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Categories(
 BSTR * ppwsz
);

/* ITask::get_DateCompleted  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DateCompleted(
 DATE * pst
);

/* ITask::get_DueDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DueDate(
 DATE * pst
);

/* ITask::get_Importance  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Importance(
 long * pdwPriority
);

/* ITask::get_Oid  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Oid(
 long * poid
);

/* ITask::get_ReminderOptions  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderOptions(
 long * pdwOptions
);

/* ITask::get_ReminderSoundFile  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderSoundFile(
 BSTR * ppwsz
);

/* ITask::get_ReminderTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_ReminderTime(
 DATE * pst
);

/* ITask::get_Sensitivity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Sensitivity(
 long * plSensitivity
);

/* ITask::get_StartDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StartDate(
 DATE * pst
);

/* ITask::get_Subject  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Subject(
 BSTR * ppwsz
);

/* ITask::put_Body  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Body(
 BSTR pwsz
);

/* ITask::put_BodyInk  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_BodyInk(
 CEBLOB * pcebl
);

/* ITask::put_Categories  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Categories(
 BSTR pwsz
);

/* ITask::put_DueDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_DueDate(
 DATE st
);

/* ITask::put_Importance  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Importance(
 long dwPriority
);

/* ITask::put_ReminderOptions  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderOptions(
 long dwOptions
);

/* ITask::put_ReminderSoundFile  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderSoundFile(
 BSTR pwsz
);

/* ITask::put_ReminderTime  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_ReminderTime(
 DATE st
);

/* ITask::put_Sensitivity  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Sensitivity(
 long lSensitivity
);

/* ITask::put_StartDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_StartDate(
 DATE st
);

/* ITask::put_Subject  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT put_Subject(
 BSTR pwsz
);

/* ITimeZone::get_Application  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Application(
 IPOutlookApp ** ppIPOutlookApp
);

/* ITimeZone::get_Bias  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_Bias(
 long * plBias
);

/* ITimeZone::get_DaylightBias  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DaylightBias(
 long * plBias
);

/* ITimeZone::get_DaylightDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DaylightDate(
 DATE * pDate
);

/* ITimeZone::get_DaylightDayOfWeekMask  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DaylightDayOfWeekMask(
 long * plMask
);

/* ITimeZone::get_DaylightInstance  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DaylightInstance(
 long * plInstance
);

/* ITimeZone::get_DaylightMonthOfYear  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DaylightMonthOfYear(
 long * plMonth
);

/* ITimeZone::get_DaylightName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_DaylightName(
 BSTR * ppwsz
);

/* ITimeZone::get_StandardBias  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StandardBias(
 long * plBias
);

/* ITimeZone::get_StandardDate  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StandardDate(
 DATE * pDate
);

/* ITimeZone::get_StandardDayOfWeekMask  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StandardDayOfWeekMask(
 long * plMask
);

/* ITimeZone::get_StandardInstance  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StandardInstance(
 long * plInstance
);

/* ITimeZone::get_StandardMonthOfYear  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StandardMonthOfYear(
 long * plMonth
);

/* ITimeZone::get_StandardName  [function; ce-only; CE 6.0..699; Pimstore.lib] */
HRESULT get_StandardName(
 BSTR * ppwsz
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum tagPIMTYPE { PT_CALENDAR = 0, PT_TASKS, PT_CONTACT } PIMTYPE;

/* function */
HRESULT Add( IDispatch ** ppolItem );
HRESULT AddItemToInfraredFolder( int olItem, IDispatch * polItem );
HRESULT Cancel();
HRESULT ClearReccurencePattern();
HRESULT ClearRecurrencePattern();
HRESULT Copy( ITEMTYPE ** ppolItem );
HRESULT CreateItem( int olItem, IDispatch ** ppolItem );
HRESULT Delete();
HRESULT Display();
HRESULT Find( BSTR pwszRestriction, IDispatch ** ppolItem );
HRESULT FindNext( IDispatch ** ppolItem );
void GetAnItemsCollection (IPOutlookApp *polApp)
{
  IPOutlookItemCollection *pItems;
  IFolder *pFolder;
  polApp->GetDefaultFolder (olFolderTasks, &pFolder);
  pFolder->get_Items (&pItems);
  pItems->Release ();
  pFolder->Release ();
}
void GetCalendarFolder (IPOutlookApplication *polApp)
{
  IFolder *pFolder;
  polApp->GetDefaultFolder (olFolderCalendar, &pFolder);
  pFolder->Release ();
}
HRESULT GetDefaultFolder( int olFolder, IFolder **ppIFolder );
void GetFirstExceptionItem(IAppointment *pAppt)
{
  IRecurrencePattern *pRec;
  IExceptions *pExceptions;
  IException *pException;
  pAppt->GetRecurrencePattern(&pRec);
  pRec->get_Exceptions(&pExceptions);
  pExceptions->Item(1, &pException);
  pRec->Release();
  pExceptions->Release();
  pException->Release();
}
HRESULT GetItemFromOid( CEOID oid, IDispatch ** ppolItem );
HRESULT GetOccurrence( DATE date, IAppointmentItem * polAppt );
HRESULT GetRecurrence( IRecurrencePattern * pRec );
HRESULT GetRecurrencePattern( IRecurrencePattern * pRec );
HRESULT GetTimeZoneFromIndex( int iIndex, ITimeZone ** ppTimeZone );
HRESULT GetTimeZoneInformationFromIndex( int iIndex, TIME_ZONE_INFORMATION* ptz );
HRESULT Item( int iIndex, IException ** ppException );
HRESULT Logoff();
HRESULT Logon( long hWnd );
HRESULT ReceiveFromInfrared( IPOutlookItemCollection ** ppolItems );
HRESULT Remove( int iItem );
HRESULT Resolve( VARIANT_BOOL fDisplayUI, VARIANT_BOOL * pfResolved );
HRESULT Restrict( BSTR pwszRestriction, IPOutlookItemCollection ** ppolItems );
HRESULT Save();
HRESULT Send();
HRESULT SendToInfrared();
HRESULT SetColumns( BSTR Columns );
HRESULT SkipRecurrence();
HRESULT Sort( BSTR pwszProperty, VARIANT_BOOL fDescending );

#endif /* _PIMSTORE_ */
