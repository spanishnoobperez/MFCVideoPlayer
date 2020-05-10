#if !defined(AFX_WMPCDROM_H__7DDFD49E_F294_481F_91F9_33BAF71619C9__INCLUDED_)
#define AFX_WMPCDROM_H__7DDFD49E_F294_481F_91F9_33BAF71619C9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPPlaylist;

class CWMPCdrom : public COleDispatchDriver {
public:
    CWMPCdrom() {}
    CWMPCdrom(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPCdrom(const CWMPCdrom &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    CString GetDriveSpecifier();
    CWMPPlaylist GetPlaylist();
    void eject();
};

#endif
