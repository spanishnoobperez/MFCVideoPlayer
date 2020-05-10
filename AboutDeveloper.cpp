

#include "stdafx.h"
#include "VideoPlayer.h"
#include "AboutDeveloper.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CAboutDeveloper::CAboutDeveloper(CWnd *pParent )
    : CDialog(CAboutDeveloper::IDD, pParent) {

}

void CAboutDeveloper::DoDataExchange(CDataExchange *pDX) {
    CDialog::DoDataExchange(pDX);

}

BEGIN_MESSAGE_MAP(CAboutDeveloper, CDialog)

END_MESSAGE_MAP()

