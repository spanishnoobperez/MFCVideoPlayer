#if !defined(AFX_WMPERROR_H__AAF2ABDE_3661_497B_9068_C3C7E5CB9A6E__INCLUDED_)
#define AFX_WMPERROR_H__AAF2ABDE_3661_497B_9068_C3C7E5CB9A6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPErrorItem;

class CWMPError : public COleDispatchDriver {
public:
    CWMPError() {}
    CWMPError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPError(const CWMPError &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    void clearErrorQueue();
    long GetErrorCount();
    CWMPErrorItem GetItem(long dwIndex);
    void webHelp();
};

#endif
