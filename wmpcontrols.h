#if !defined(AFX_WMPCONTROLS_H__5616C799_ADE5_4DA1_B49D_D53F206C3A4B__INCLUDED_)
#define AFX_WMPCONTROLS_H__5616C799_ADE5_4DA1_B49D_D53F206C3A4B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPMedia;

class CWMPControls : public COleDispatchDriver {
public:
    CWMPControls() {}
    CWMPControls(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPControls(const CWMPControls &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    BOOL GetIsAvailable(LPCTSTR bstrItem);
    void play();
    void stop();
    void pause();
    void fastForward();
    void fastReverse();
    double GetCurrentPosition();
    void SetCurrentPosition(double newValue);
    CString GetCurrentPositionString();
    void next();
    void previous();
    CWMPMedia GetCurrentItem();
    void SetCurrentItem(LPDISPATCH newValue);
    long GetCurrentMarker();
    void SetCurrentMarker(long nNewValue);
    void playItem(LPDISPATCH pIWMPMedia);
};

#endif
