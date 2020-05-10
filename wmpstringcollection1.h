#if !defined(AFX_WMPSTRINGCOLLECTION1_H__69414111_2FEB_4656_AEB8_9378E8D41D78__INCLUDED_)
#define AFX_WMPSTRINGCOLLECTION1_H__69414111_2FEB_4656_AEB8_9378E8D41D78__INCLUDED_

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
