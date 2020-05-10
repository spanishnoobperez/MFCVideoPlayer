#if !defined(AFX_WMPCDROMCOLLECTION_H__7CA35330_32BC_48C0_BD96_F65FDF3D3CFA__INCLUDED_)
#define AFX_WMPCDROMCOLLECTION_H__7CA35330_32BC_48C0_BD96_F65FDF3D3CFA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPCdrom;

class CWMPCdromCollection : public COleDispatchDriver {
public:
    CWMPCdromCollection() {}
    CWMPCdromCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPCdromCollection(const CWMPCdromCollection &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    long GetCount();
    CWMPCdrom Item(long lIndex);
    CWMPCdrom getByDriveSpecifier(LPCTSTR bstrDriveSpecifier);
};

#endif
