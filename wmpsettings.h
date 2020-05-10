#if !defined(AFX_WMPSETTINGS_H__7DC7A08E_37F0_4312_BE6B_3F5E9A1F8570__INCLUDED_)
#define AFX_WMPSETTINGS_H__7DC7A08E_37F0_4312_BE6B_3F5E9A1F8570__INCLUDED_

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
