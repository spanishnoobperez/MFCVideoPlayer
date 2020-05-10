#if !defined(AFX_WMPCDROM1_H__C5C241CC_BE13_42E6_A0A3_010BEA7004ED__INCLUDED_)
#define AFX_WMPCDROM1_H__C5C241CC_BE13_42E6_A0A3_010BEA7004ED__INCLUDED_

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
