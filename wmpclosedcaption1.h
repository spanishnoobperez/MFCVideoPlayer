#if !defined(AFX_WMPCLOSEDCAPTION1_H__877E1CDA_986A_4795_B760_6747A54E9691__INCLUDED_)
#define AFX_WMPCLOSEDCAPTION1_H__877E1CDA_986A_4795_B760_6747A54E9691__INCLUDED_

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
