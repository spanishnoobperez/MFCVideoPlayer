#include "stdafx.h"
#include "mci.h"

#include "Picture.h"

IMPLEMENT_DYNCREATE(Cmci, CWnd)

CString Cmci::GetDeviceType() {
    CString result;
    InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BSTR, (void *)&result, NULL);
    return result;
}

void Cmci::SetDeviceType(LPCTSTR lpszNewValue) {
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 lpszNewValue);
}

BOOL Cmci::GetAutoEnable() {
    BOOL result;
    InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetAutoEnable(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetPrevVisible() {
    BOOL result;
    InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetPrevVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetNextVisible() {
    BOOL result;
    InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetNextVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetPlayVisible() {
    BOOL result;
    InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetPlayVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetPauseVisible() {
    BOOL result;
    InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetPauseVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetBackVisible() {
    BOOL result;
    InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetBackVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetStepVisible() {
    BOOL result;
    InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetStepVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetStopVisible() {
    BOOL result;
    InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetStopVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetRecordVisible() {
    BOOL result;
    InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetRecordVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetEjectVisible() {
    BOOL result;
    InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetEjectVisible(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetPrevEnabled() {
    BOOL result;
    InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetPrevEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetNextEnabled() {
    BOOL result;
    InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetNextEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetPlayEnabled() {
    BOOL result;
    InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetPlayEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetPauseEnabled() {
    BOOL result;
    InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetPauseEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetBackEnabled() {
    BOOL result;
    InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetBackEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetStepEnabled() {
    BOOL result;
    InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetStepEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetStopEnabled() {
    BOOL result;
    InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetStopEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetRecordEnabled() {
    BOOL result;
    InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetRecordEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetEjectEnabled() {
    BOOL result;
    InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetEjectEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

CString Cmci::GetFileName() {
    CString result;
    InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BSTR, (void *)&result, NULL);
    return result;
}

void Cmci::SetFileName(LPCTSTR lpszNewValue) {
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 lpszNewValue);
}

CString Cmci::GetCommand() {
    CString result;
    InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BSTR, (void *)&result, NULL);
    return result;
}

void Cmci::SetCommand(LPCTSTR lpszNewValue) {
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 lpszNewValue);
}

BOOL Cmci::GetNotify() {
    BOOL result;
    InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetNotify(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetWait() {
    BOOL result;
    InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetWait(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetShareable() {
    BOOL result;
    InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetShareable(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

long Cmci::GetOrientation() {
    long result;
    InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetOrientation(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

CString Cmci::GetErrorMessage() {
    CString result;
    InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BSTR, (void *)&result, NULL);
    return result;
}

void Cmci::SetErrorMessage(LPCTSTR lpszNewValue) {
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 lpszNewValue);
}

long Cmci::GetFrom() {
    long result;
    InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetFrom(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetTo() {
    long result;
    InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetTo(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x1e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

BOOL Cmci::GetCanEject() {
    BOOL result;
    InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetCanEject(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetCanPlay() {
    BOOL result;
    InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetCanPlay(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x20, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetCanRecord() {
    BOOL result;
    InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetCanRecord(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x21, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

BOOL Cmci::GetCanStep() {
    BOOL result;
    InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetCanStep(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

long Cmci::GetMode() {
    long result;
    InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetMode(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x23, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetLength() {
    long result;
    InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetLength(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x24, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetPosition() {
    long result;
    InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetPosition(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x25, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetStart() {
    long result;
    InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetStart(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetTimeFormat() {
    long result;
    InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetTimeFormat(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x27, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

BOOL Cmci::GetSilent() {
    BOOL result;
    InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetSilent(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

long Cmci::GetTrack() {
    long result;
    InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetTrack(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x29, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetTracks() {
    long result;
    InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetTracks(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x2a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetTrackLength() {
    long result;
    InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetTrackLength(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetTrackPosition() {
    long result;
    InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetTrackPosition(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x2c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

short Cmci::GetUpdateInterval() {
    short result;
    InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_I2, (void *)&result, NULL);
    return result;
}

void Cmci::SetUpdateInterval(short nNewValue) {
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x2d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

BOOL Cmci::GetUsesWindows() {
    BOOL result;
    InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetUsesWindows(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x2e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

long Cmci::GetFrames() {
    long result;
    InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetFrames(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x2f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetRecordMode() {
    long result;
    InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetRecordMode(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x30, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetHWndDisplay() {
    long result;
    InvokeHelper(0x31, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetHWndDisplay(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x31, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

short Cmci::GetNotifyValue() {
    short result;
    InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_I2, (void *)&result, NULL);
    return result;
}

void Cmci::SetNotifyValue(short nNewValue) {
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x32, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

CString Cmci::GetNotifyMessage() {
    CString result;
    InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_BSTR, (void *)&result, NULL);
    return result;
}

void Cmci::SetNotifyMessage(LPCTSTR lpszNewValue) {
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x33, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 lpszNewValue);
}

BOOL Cmci::GetEnabled() {
    BOOL result;
    InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_BOOL, (void *)&result, NULL);
    return result;
}

void Cmci::SetEnabled(BOOL bNewValue) {
    static BYTE parms[] =
        VTS_BOOL;
    InvokeHelper(0x34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 bNewValue);
}

long Cmci::GetBorderStyle() {
    long result;
    InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetBorderStyle(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

short Cmci::GetError() {
    short result;
    InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_I2, (void *)&result, NULL);
    return result;
}

void Cmci::SetError(short nNewValue) {
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x35, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

short Cmci::GetDeviceID() {
    short result;
    InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_I2, (void *)&result, NULL);
    return result;
}

void Cmci::SetDeviceID(short nNewValue) {
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x36, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetMousePointer() {
    long result;
    InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetMousePointer(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

CPicture Cmci::GetMouseIcon() {
    LPDISPATCH pDispatch;
    InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void *)&pDispatch, NULL);
    return CPicture(pDispatch);
}

void Cmci::SetRefMouseIcon(LPDISPATCH newValue) {
    static BYTE parms[] =
        VTS_DISPATCH;
    InvokeHelper(0x37, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
                 newValue);
}

long Cmci::GetHWnd() {
    long result;
    InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetHWnd(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

long Cmci::GetOLEDropMode() {
    long result;
    InvokeHelper(0x60f, DISPATCH_PROPERTYGET, VT_I4, (void *)&result, NULL);
    return result;
}

void Cmci::SetOLEDropMode(long nNewValue) {
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x60f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

void Cmci::Refresh() {
    InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cmci::OLEDrag() {
    InvokeHelper(0x610, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
