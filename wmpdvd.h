#if !defined(AFX_WMPDVD_H__A737E3F4_070E_4107_923A_9CE9C095BBC8__INCLUDED_)
#define AFX_WMPDVD_H__A737E3F4_070E_4107_923A_9CE9C095BBC8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPDVD : public COleDispatchDriver {
public:
    CWMPDVD() {}
    CWMPDVD(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPDVD(const CWMPDVD &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    BOOL GetIsAvailable(LPCTSTR bstrItem);
    CString GetDomain();
    void topMenu();
    void titleMenu();
    void back();
    void resume();
};

#endif
