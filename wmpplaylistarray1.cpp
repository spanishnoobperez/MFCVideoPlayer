#include "stdafx.h"
#include "wmpplaylistarray1.h"

#include "wmpplaylist1.h"

long CWMPPlaylistArray::GetCount() {
    long result;
    InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

CWMPPlaylist CWMPPlaylistArray::Item(long lIndex) {
    LPDISPATCH pDispatch;
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x1f6, DISPATCH_METHOD, VT_DISPATCH, (void *)&pDispatch, parms,
                 lIndex);
    return CWMPPlaylist(pDispatch);
}
