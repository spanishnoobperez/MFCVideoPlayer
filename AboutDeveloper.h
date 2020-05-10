#if !defined(AFX_ABOUTDEVELOPER_H__3540446C_B3E5_4AC3_88A8_EDC9E52C83C1__INCLUDED_)
#define AFX_ABOUTDEVELOPER_H__3540446C_B3E5_4AC3_88A8_EDC9E52C83C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CAboutDeveloper : public CDialog {

public:
    CAboutDeveloper(CWnd *pParent = NULL);

    enum { IDD = IDD_ABOUT_DEVELOPER_DIALOG };

protected:
    virtual void DoDataExchange(CDataExchange *pDX);

protected:

    DECLARE_MESSAGE_MAP()
public:

};

#endif
