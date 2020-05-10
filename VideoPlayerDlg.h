#include "wmpplayer5.h"

#if !defined(AFX_VIDEOPLAYERDLG_H__CE7C927D_9F43_41A9_B02C_4CAB31C12BC6__INCLUDED_)
#define AFX_VIDEOPLAYERDLG_H__CE7C927D_9F43_41A9_B02C_4CAB31C12BC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CVideoPlayerDlg : public CDialog {

public:
    CVideoPlayerDlg(CWnd *pParent = NULL);

    enum { IDD = IDD_VIDEOPLAYER_DIALOG };
    CWMPPlayer4	m_MediaPlayer;

protected:
    virtual void DoDataExchange(CDataExchange *pDX);

protected:
    HICON m_hIcon;

    virtual BOOL OnInitDialog();
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnFileOpen();
    afx_msg void OnFileQuit();
    afx_msg void OnHelpAboutDeveloper();

    DECLARE_MESSAGE_MAP()

private:
    CString m_csPathName;

public:

    afx_msg void OnSize(UINT nType, int cx, int cy);
};

#endif
