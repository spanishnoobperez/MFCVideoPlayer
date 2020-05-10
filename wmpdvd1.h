#if !defined(AFX_WMPDVD1_H__729F2554_136E_483A_8088_3C415C16D910__INCLUDED_)
#define AFX_WMPDVD1_H__729F2554_136E_483A_8088_3C415C16D910__INCLUDED_

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
