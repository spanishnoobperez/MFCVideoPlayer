#if !defined(AFX_WMPPLAYLIST_H__91C251F2_FB25_4802_B2A6_FCD09C6AE8FF__INCLUDED_)
#define AFX_WMPPLAYLIST_H__91C251F2_FB25_4802_B2A6_FCD09C6AE8FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPMedia;

class CWMPPlaylist : public COleDispatchDriver {
public:
    CWMPPlaylist() {}
    CWMPPlaylist(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPPlaylist(const CWMPPlaylist &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    long GetCount();
    CString GetName();
    void SetName(LPCTSTR lpszNewValue);
    long GetAttributeCount();
    CString GetAttributeName(long lIndex);
    CWMPMedia GetItem(long lIndex);
    CString getItemInfo(LPCTSTR bstrName);
    void setItemInfo(LPCTSTR bstrName, LPCTSTR bstrValue);
    BOOL GetIsIdentical(LPDISPATCH pIWMPPlaylist);
    void clear();
    void insertItem(long lIndex, LPDISPATCH pIWMPMedia);
    void appendItem(LPDISPATCH pIWMPMedia);
    void removeItem(LPDISPATCH pIWMPMedia);
    void moveItem(long lIndexOld, long lIndexNew);
};

#endif
