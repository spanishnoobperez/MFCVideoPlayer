#if !defined(AFX_WMPERROR1_H__DF9F468A_7CDC_4E83_9C3A_DE6CEECB6307__INCLUDED_)
#define AFX_WMPERROR1_H__DF9F468A_7CDC_4E83_9C3A_DE6CEECB6307__INCLUDED_

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
