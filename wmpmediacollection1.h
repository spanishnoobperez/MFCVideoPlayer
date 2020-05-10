#if !defined(AFX_WMPMEDIACOLLECTION1_H__84442C19_0E3C_4407_8062_B73E11E188DA__INCLUDED_)
#define AFX_WMPMEDIACOLLECTION1_H__84442C19_0E3C_4407_8062_B73E11E188DA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

class CWMPMedia;
class CWMPPlaylist;
class CWMPStringCollection;

class CWMPMediaCollection : public COleDispatchDriver {
public:
    CWMPMediaCollection() {}
    CWMPMediaCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CWMPMediaCollection(const CWMPMediaCollection &dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

public:

public:
    CWMPMedia add(LPCTSTR bstrURL);
    CWMPPlaylist getAll();
    CWMPPlaylist getByName(LPCTSTR bstrName);
    CWMPPlaylist getByGenre(LPCTSTR bstrGenre);
    CWMPPlaylist getByAuthor(LPCTSTR bstrAuthor);
    CWMPPlaylist getByAlbum(LPCTSTR bstrAlbum);
    CWMPPlaylist getByAttribute(LPCTSTR bstrAttribute, LPCTSTR bstrValue);
    void remove(LPDISPATCH pItem, BOOL varfDeleteFile);
    CWMPStringCollection getAttributeStringCollection(LPCTSTR bstrAttribute, LPCTSTR bstrMediaType);
    long getMediaAtom(LPCTSTR bstrItemName);
    void setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted);
    BOOL isDeleted(LPDISPATCH pItem);
};

#endif
