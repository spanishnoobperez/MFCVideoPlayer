#if !defined(AFX_WMPSETTINGS1_H__6F61285D_9913_4EAB_85A0_1C727E87E79E__INCLUDED_)
#define AFX_WMPSETTINGS1_H__6F61285D_9913_4EAB_85A0_1C727E87E79E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPSettings : public COleDispatchDriver {
public:
    CWMPSettings() {}
    CWMPSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPSettings(const CWMPSettings &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    BOOL GetIsAvailable(LPCTSTR bstrItem);
    BOOL GetAutoStart();
    void SetAutoStart(BOOL bNewValue);
    CString GetBaseURL();
    void SetBaseURL(LPCTSTR lpszNewValue);
    CString GetDefaultFrame();
    void SetDefaultFrame(LPCTSTR lpszNewValue);
    BOOL GetInvokeURLs();
    void SetInvokeURLs(BOOL bNewValue);
    BOOL GetMute();
    void SetMute(BOOL bNewValue);
    long GetPlayCount();
    void SetPlayCount(long nNewValue);
    double GetRate();
    void SetRate(double newValue);
    long GetBalance();
    void SetBalance(long nNewValue);
    long GetVolume();
    void SetVolume(long nNewValue);
    BOOL getMode(LPCTSTR bstrMode);
    void setMode(LPCTSTR bstrMode, BOOL varfMode);
    BOOL GetEnableErrorDialogs();
    void SetEnableErrorDialogs(BOOL bNewValue);
};

#endif
