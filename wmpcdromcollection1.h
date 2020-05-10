#if !defined(AFX_WMPCDROMCOLLECTION1_H__F85F7DDA_28FA_4CFA_A535_C298F1B6CCDE__INCLUDED_)
#define AFX_WMPCDROMCOLLECTION1_H__F85F7DDA_28FA_4CFA_A535_C298F1B6CCDE__INCLUDED_

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
