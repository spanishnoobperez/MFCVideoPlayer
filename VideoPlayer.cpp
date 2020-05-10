#include "stdafx.h"
#include "VideoPlayer.h"
#include "VideoPlayerDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

BEGIN_MESSAGE_MAP(CVideoPlayerApp, CWinApp)

    ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

CVideoPlayerApp::CVideoPlayerApp() {

}

CVideoPlayerApp theApp;

BOOL CVideoPlayerApp::InitInstance() {
    AfxEnableControlContainer();

#ifdef _AFXDLL
    Enable3dControls();
#else
    Enable3dControlsStatic();
#endif
    CVideoPlayerDlg dlg;
    m_pMainWnd = &dlg;
    int nResponse = dlg.DoModal();
    if (nResponse == IDOK) {

    } else if (nResponse == IDCANCEL) {

    }

    return FALSE;
}
