#if !defined(AFX_WMPPLAYLISTARRAY1_H__75DD8AA5_CE21_4D93_9F9B_81C707E2E66F__INCLUDED_)
#define AFX_WMPPLAYLISTARRAY1_H__75DD8AA5_CE21_4D93_9F9B_81C707E2E66F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPPlaylist;

class CWMPPlaylistArray : public COleDispatchDriver {
public:
    CWMPPlaylistArray() {}
    CWMPPlaylistArray(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPPlaylistArray(const CWMPPlaylistArray &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    long GetCount();
    CWMPPlaylist Item(long lIndex);
};

#endif
