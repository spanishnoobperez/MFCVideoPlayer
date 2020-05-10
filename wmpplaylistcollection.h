#if !defined(AFX_WMPPLAYLISTCOLLECTION_H__A7347B2C_3B2F_4E74_889E_15D6E3AD09A2__INCLUDED_)
#define AFX_WMPPLAYLISTCOLLECTION_H__A7347B2C_3B2F_4E74_889E_15D6E3AD09A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPPlaylist;
class CWMPPlaylistArray;

class CWMPPlaylistCollection : public COleDispatchDriver {
public:
    CWMPPlaylistCollection() {}
    CWMPPlaylistCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPPlaylistCollection(const CWMPPlaylistCollection &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    CWMPPlaylist newPlaylist(LPCTSTR bstrName);
    CWMPPlaylistArray getAll();
    CWMPPlaylistArray getByName(LPCTSTR bstrName);
    void remove(LPDISPATCH pItem);
    void setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted);
    BOOL isDeleted(LPDISPATCH pItem);
    CWMPPlaylist importPlaylist(LPDISPATCH pItem);
};

#endif
