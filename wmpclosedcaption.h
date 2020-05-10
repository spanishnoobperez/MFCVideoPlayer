#if !defined(AFX_WMPCLOSEDCAPTION_H__90DA4513_546D_41E4_9E11_B0E7798FF10D__INCLUDED_)
#define AFX_WMPCLOSEDCAPTION_H__90DA4513_546D_41E4_9E11_B0E7798FF10D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPClosedCaption : public COleDispatchDriver {
public:
    CWMPClosedCaption() {}
    CWMPClosedCaption(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPClosedCaption(const CWMPClosedCaption &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    CString GetSAMIStyle();
    void SetSAMIStyle(LPCTSTR lpszNewValue);
    CString GetSAMILang();
    void SetSAMILang(LPCTSTR lpszNewValue);
    CString GetSAMIFileName();
    void SetSAMIFileName(LPCTSTR lpszNewValue);
    CString GetCaptioningId();
    void SetCaptioningId(LPCTSTR lpszNewValue);
};

#endif
