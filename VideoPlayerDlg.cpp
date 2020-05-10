

#include "stdafx.h"
#include "VideoPlayer.h"
#include "VideoPlayerDlg.h"
#include "AboutDeveloper.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CVideoPlayerDlg::CVideoPlayerDlg(CWnd *pParent )
    : CDialog(CVideoPlayerDlg::IDD, pParent) {
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
    m_csPathName = _T("");
}

void CVideoPlayerDlg::DoDataExchange(CDataExchange *pDX) {
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_MediaPlay_OCX, m_MediaPlayer);

}

BEGIN_MESSAGE_MAP(CVideoPlayerDlg, CDialog)

    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_COMMAND(IDC_FILE_OPEN, OnFileOpen)
    ON_COMMAND(IDC_FILE_QUIT, OnFileQuit)
    ON_COMMAND(IDC_HELP_ABOUT_DEVELOPER, OnHelpAboutDeveloper)

    ON_WM_SIZE()
END_MESSAGE_MAP()

BOOL CVideoPlayerDlg::OnInitDialog() {
    CDialog::OnInitDialog();

    SetIcon(m_hIcon, TRUE);
    SetIcon(m_hIcon, FALSE);

    return TRUE;
}

void CVideoPlayerDlg::OnPaint() {
    if (IsIconic()) {
        CPaintDC dc(this);
        SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        dc.DrawIcon(x, y, m_hIcon);
    } else
        CDialog::OnPaint();
}

HCURSOR CVideoPlayerDlg::OnQueryDragIcon() {
    return (HCURSOR) m_hIcon;
}

void CVideoPlayerDlg::OnFileOpen() {

    char szFileFilter[] = "All Music Files(*.*)|*.*||";
    CFileDialog FileOpenDlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, szFileFilter);
    if( FileOpenDlg.DoModal() == IDOK ) {
        m_csPathName = FileOpenDlg.GetPathName();
    }
    m_MediaPlayer.SetUrl(m_csPathName);
}

void CVideoPlayerDlg::OnFileQuit() {

    CDialog::OnCancel();
}

void CVideoPlayerDlg::OnHelpAboutDeveloper() {

    CAboutDeveloper AboutDeveloperDlg;
    AboutDeveloperDlg.DoModal();
}

void CVideoPlayerDlg::OnSize(UINT nType, int cx, int cy) {
    CDialog::OnSize(nType, cx, cy);
    RECT rcClient;
    GetClientRect(&rcClient);
    int nWidth = rcClient.right - rcClient.left;
    int nHeight = rcClient.bottom - rcClient.top;
    ::MoveWindow(GetDlgItem(IDC_MediaPlay_OCX)->GetSafeHwnd(), 0, 0, nWidth, nHeight, TRUE);
}
