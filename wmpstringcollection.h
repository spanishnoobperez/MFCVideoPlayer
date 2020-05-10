#if !defined(AFX_WMPSTRINGCOLLECTION_H__648F9568_F7FD_4751_B5C5_DA9B7B6337EB__INCLUDED_)
#define AFX_WMPSTRINGCOLLECTION_H__648F9568_F7FD_4751_B5C5_DA9B7B6337EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPStringCollection : public COleDispatchDriver {
public:
    CWMPStringCollection() {}
    CWMPStringCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPStringCollection(const CWMPStringCollection &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    long GetCount();
    CString Item(long lIndex);
};

#endif
