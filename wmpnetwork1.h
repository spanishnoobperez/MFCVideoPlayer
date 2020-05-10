#if !defined(AFX_WMPNETWORK1_H__FB274A62_A68F_4A4B_A388_2526B4109F1A__INCLUDED_)
#define AFX_WMPNETWORK1_H__FB274A62_A68F_4A4B_A388_2526B4109F1A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPNetwork : public COleDispatchDriver {
public:
    CWMPNetwork() {}
    CWMPNetwork(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPNetwork(const CWMPNetwork &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    long GetBandWidth();
    long GetRecoveredPackets();
    CString GetSourceProtocol();
    long GetReceivedPackets();
    long GetLostPackets();
    long GetReceptionQuality();
    long GetBufferingCount();
    long GetBufferingProgress();
    long GetBufferingTime();
    void SetBufferingTime(long nNewValue);
    long GetFrameRate();
    long GetMaxBitRate();
    long GetBitRate();
    long getProxySettings(LPCTSTR bstrProtocol);
    void setProxySettings(LPCTSTR bstrProtocol, long lProxySetting);
    CString getProxyName(LPCTSTR bstrProtocol);
    void setProxyName(LPCTSTR bstrProtocol, LPCTSTR bstrProxyName);
    long getProxyPort(LPCTSTR bstrProtocol);
    void setProxyPort(LPCTSTR bstrProtocol, long lProxyPort);
    CString getProxyExceptionList(LPCTSTR bstrProtocol);
    void setProxyExceptionList(LPCTSTR bstrProtocol, LPCTSTR pbstrExceptionList);
    BOOL getProxyBypassForLocal(LPCTSTR bstrProtocol);
    void setProxyBypassForLocal(LPCTSTR bstrProtocol, BOOL fBypassForLocal);
    long GetMaxBandwidth();
    void SetMaxBandwidth(long nNewValue);
    long GetDownloadProgress();
    long GetEncodedFrameRate();
    long GetFramesSkipped();
};

#endif
