#if !defined(AFX_WMPERRORITEM1_H__9E73E5F2_562F_40F2_B320_28BC54F508D8__INCLUDED_)
#define AFX_WMPERRORITEM1_H__9E73E5F2_562F_40F2_B320_28BC54F508D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPErrorItem : public COleDispatchDriver {
public:
    CWMPErrorItem() {}
    CWMPErrorItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPErrorItem(const CWMPErrorItem &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    long GetErrorCode();
    CString GetErrorDescription();
    VARIANT GetErrorContext();
    long GetRemedy();
    CString GetCustomUrl();
};

#endif
