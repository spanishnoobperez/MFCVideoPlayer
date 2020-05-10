#if !defined(AFX_WMPERRORITEM_H__A4E4E516_7845_4644_BC9D_23FFD7701AB6__INCLUDED_)
#define AFX_WMPERRORITEM_H__A4E4E516_7845_4644_BC9D_23FFD7701AB6__INCLUDED_

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
