#if !defined(AFX_WMPPLAYERAPPLICATION_H__8EE3D07A_CEDB_4859_9948_27D8DD8EDA79__INCLUDED_)
#define AFX_WMPPLAYERAPPLICATION_H__8EE3D07A_CEDB_4859_9948_27D8DD8EDA79__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPPlayerApplication : public COleDispatchDriver {
public:
    CWMPPlayerApplication() {}
    CWMPPlayerApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPPlayerApplication(const CWMPPlayerApplication &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    void switchToPlayerApplication();
    void switchToControl();
    BOOL GetPlayerDocked();
    BOOL GetHasDisplay();
};

#endif
