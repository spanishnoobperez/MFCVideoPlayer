#if !defined(AFX_WMPMEDIA_H__468465D4_B107_4FF1_BA2B_3D9ECA50A6F1__INCLUDED_)
#define AFX_WMPMEDIA_H__468465D4_B107_4FF1_BA2B_3D9ECA50A6F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPMedia : public COleDispatchDriver {
public:
    CWMPMedia() {}
    CWMPMedia(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPMedia(const CWMPMedia &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    BOOL GetIsIdentical(LPDISPATCH pIWMPMedia);
    CString GetSourceURL();
    CString GetName();
    void SetName(LPCTSTR lpszNewValue);
    long GetImageSourceWidth();
    long GetImageSourceHeight();
    long GetMarkerCount();
    double getMarkerTime(long MarkerNum);
    CString getMarkerName(long MarkerNum);
    double GetDuration();
    CString GetDurationString();
    long GetAttributeCount();
    CString getAttributeName(long lIndex);
    CString getItemInfo(LPCTSTR bstrItemName);
    void setItemInfo(LPCTSTR bstrItemName, LPCTSTR bstrVal);
    CString getItemInfoByAtom(long lAtom);
    BOOL isMemberOf(LPDISPATCH pPlaylist);
    BOOL isReadOnlyItem(LPCTSTR bstrItemName);
};

#endif
