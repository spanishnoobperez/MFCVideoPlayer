#if !defined(AFX_WMPPLAYLISTARRAY_H__065C570A_64F5_4BE5_8328_3EBF481AE66E__INCLUDED_)
#define AFX_WMPPLAYLISTARRAY_H__065C570A_64F5_4BE5_8328_3EBF481AE66E__INCLUDED_

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
