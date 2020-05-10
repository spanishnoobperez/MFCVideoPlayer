#if !defined(AFX_MCI_H__48BFAA6F_B3EA_42D6_A92E_3B76D415F635__INCLUDED_)
#define AFX_MCI_H__48BFAA6F_B3EA_42D6_A92E_3B76D415F635__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CPicture;

class Cmci : public CWnd {
protected:
    DECLARE_DYNCREATE(Cmci)
public:
    CLSID const &GetClsid() {
        static CLSID const clsid
            = { 0xc1a8af25, 0x1257, 0x101b, { 0x8f, 0xb0, 0x0, 0x20, 0xaf, 0x3, 0x9c, 0xa3 } };
        return clsid;
    }
    virtual BOOL Create(LPCTSTR lpszClassName,
                        LPCTSTR lpszWindowName, DWORD dwStyle,
                        const RECT &rect,
                        CWnd *pParentWnd, UINT nID,
                        CCreateContext *pContext = NULL) {
        return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID);
    }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
                const RECT &rect, CWnd *pParentWnd, UINT nID,
                CFile *pPersist = NULL, BOOL bStorage = FALSE,
                BSTR bstrLicKey = NULL) {
        return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
                             pPersist, bStorage, bstrLicKey);
    }

public:

public:
    CString GetDeviceType();
    void SetDeviceType(LPCTSTR lpszNewValue);
    BOOL GetAutoEnable();
    void SetAutoEnable(BOOL bNewValue);
    BOOL GetPrevVisible();
    void SetPrevVisible(BOOL bNewValue);
    BOOL GetNextVisible();
    void SetNextVisible(BOOL bNewValue);
    BOOL GetPlayVisible();
    void SetPlayVisible(BOOL bNewValue);
    BOOL GetPauseVisible();
    void SetPauseVisible(BOOL bNewValue);
    BOOL GetBackVisible();
    void SetBackVisible(BOOL bNewValue);
    BOOL GetStepVisible();
    void SetStepVisible(BOOL bNewValue);
    BOOL GetStopVisible();
    void SetStopVisible(BOOL bNewValue);
    BOOL GetRecordVisible();
    void SetRecordVisible(BOOL bNewValue);
    BOOL GetEjectVisible();
    void SetEjectVisible(BOOL bNewValue);
    BOOL GetPrevEnabled();
    void SetPrevEnabled(BOOL bNewValue);
    BOOL GetNextEnabled();
    void SetNextEnabled(BOOL bNewValue);
    BOOL GetPlayEnabled();
    void SetPlayEnabled(BOOL bNewValue);
    BOOL GetPauseEnabled();
    void SetPauseEnabled(BOOL bNewValue);
    BOOL GetBackEnabled();
    void SetBackEnabled(BOOL bNewValue);
    BOOL GetStepEnabled();
    void SetStepEnabled(BOOL bNewValue);
    BOOL GetStopEnabled();
    void SetStopEnabled(BOOL bNewValue);
    BOOL GetRecordEnabled();
    void SetRecordEnabled(BOOL bNewValue);
    BOOL GetEjectEnabled();
    void SetEjectEnabled(BOOL bNewValue);
    CString GetFileName();
    void SetFileName(LPCTSTR lpszNewValue);
    CString GetCommand();
    void SetCommand(LPCTSTR lpszNewValue);
    BOOL GetNotify();
    void SetNotify(BOOL bNewValue);
    BOOL GetWait();
    void SetWait(BOOL bNewValue);
    BOOL GetShareable();
    void SetShareable(BOOL bNewValue);
    long GetOrientation();
    void SetOrientation(long nNewValue);
    CString GetErrorMessage();
    void SetErrorMessage(LPCTSTR lpszNewValue);
    long GetFrom();
    void SetFrom(long nNewValue);
    long GetTo();
    void SetTo(long nNewValue);
    BOOL GetCanEject();
    void SetCanEject(BOOL bNewValue);
    BOOL GetCanPlay();
    void SetCanPlay(BOOL bNewValue);
    BOOL GetCanRecord();
    void SetCanRecord(BOOL bNewValue);
    BOOL GetCanStep();
    void SetCanStep(BOOL bNewValue);
    long GetMode();
    void SetMode(long nNewValue);
    long GetLength();
    void SetLength(long nNewValue);
    long GetPosition();
    void SetPosition(long nNewValue);
    long GetStart();
    void SetStart(long nNewValue);
    long GetTimeFormat();
    void SetTimeFormat(long nNewValue);
    BOOL GetSilent();
    void SetSilent(BOOL bNewValue);
    long GetTrack();
    void SetTrack(long nNewValue);
    long GetTracks();
    void SetTracks(long nNewValue);
    long GetTrackLength();
    void SetTrackLength(long nNewValue);
    long GetTrackPosition();
    void SetTrackPosition(long nNewValue);
    short GetUpdateInterval();
    void SetUpdateInterval(short nNewValue);
    BOOL GetUsesWindows();
    void SetUsesWindows(BOOL bNewValue);
    long GetFrames();
    void SetFrames(long nNewValue);
    long GetRecordMode();
    void SetRecordMode(long nNewValue);
    long GetHWndDisplay();
    void SetHWndDisplay(long nNewValue);
    short GetNotifyValue();
    void SetNotifyValue(short nNewValue);
    CString GetNotifyMessage();
    void SetNotifyMessage(LPCTSTR lpszNewValue);
    BOOL GetEnabled();
    void SetEnabled(BOOL bNewValue);
    long GetBorderStyle();
    void SetBorderStyle(long nNewValue);
    short GetError();
    void SetError(short nNewValue);
    short GetDeviceID();
    void SetDeviceID(short nNewValue);
    long GetMousePointer();
    void SetMousePointer(long nNewValue);
    CPicture GetMouseIcon();
    void SetRefMouseIcon(LPDISPATCH newValue);
    long GetHWnd();
    void SetHWnd(long nNewValue);
    long GetOLEDropMode();
    void SetOLEDropMode(long nNewValue);
    void Refresh();
    void OLEDrag();
};

#endif
