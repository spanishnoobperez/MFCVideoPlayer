#if !defined(AFX_WMPPLAYLIST1_H__A8107BC3_C38A_409D_B716_DED6682DCEB1__INCLUDED_)
#define AFX_WMPPLAYLIST1_H__A8107BC3_C38A_409D_B716_DED6682DCEB1__INCLUDED_

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
