#include "stdafx.h"
#include "wmpcdrom1.h"

#include "wmpplaylist1.h"

CString CWMPCdrom::GetDriveSpecifier() {
    CString result;
    InvokeHelper(0xfb, DISPATCH_PROPERTYGET, VT_BSTR, (void *)&result, NULL);
    return result;
}

CWMPPlaylist CWMPCdrom::GetPlaylist() {
    LPDISPATCH pDispatch;
    InvokeHelper(0xfc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void *)&pDispatch, NULL);
    return CWMPPlaylist(pDispatch);
}

void CWMPCdrom::eject() {
    InvokeHelper(0xfd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
