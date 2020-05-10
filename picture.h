#if !defined(AFX_PICTURE_H__E2B6BD29_15CB_4562_997B_E9922F664DED__INCLUDED_)
#define AFX_PICTURE_H__E2B6BD29_15CB_4562_997B_E9922F664DED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CPicture : public COleDispatchDriver {
public:
    CPicture() {}
    CPicture(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPicture(const CPicture &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:
    long GetHandle();
    long GetHPal();
    void SetHPal(long);
    short GetType();
    long GetWidth();
    long GetHeight();

public:

};

#endif
