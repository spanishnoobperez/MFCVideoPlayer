#if !defined(AFX_WMPPLAYLISTCOLLECTION1_H__89F90384_4BE1_4D0B_B643_0E9B18A2CFB1__INCLUDED_)
#define AFX_WMPPLAYLISTCOLLECTION1_H__89F90384_4BE1_4D0B_B643_0E9B18A2CFB1__INCLUDED_

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
