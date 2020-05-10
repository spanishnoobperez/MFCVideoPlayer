#if !defined(AFX_VIDEOPLAYER_H__87069553_A5E4_4FDB_9C61_F76487D92282__INCLUDED_)
#define AFX_VIDEOPLAYER_H__87069553_A5E4_4FDB_9C61_F76487D92282__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"

class CVideoPlayerApp : public CWinApp {
public:
    CVideoPlayerApp();

public:
    virtual BOOL InitInstance();

    DECLARE_MESSAGE_MAP()
};

#endif
