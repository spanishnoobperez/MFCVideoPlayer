#if !defined(AFX_WMPPLAYERAPPLICATION1_H__BBE660F3_113F_490D_9A1A_45D63038192C__INCLUDED_)
#define AFX_WMPPLAYERAPPLICATION1_H__BBE660F3_113F_490D_9A1A_45D63038192C__INCLUDED_

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
