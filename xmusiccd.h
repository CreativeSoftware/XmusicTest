#ifndef XMUSICCD_H
#define XMUSICCD_H

#include <iostream>
#include <vector>
#include <string>
#include "xtrackinfo.h"

class XMusicCd
{
private:
    std::string m_Author;
    int m_Length;
    std::vector<XTrackInfo> m_TrackInfo;

public:
    XMusicCd();
    XMusicCd(std::string Author, int mLength, std::vector< XTrackInfo > trackinfo);

    void SetAuthor(std::string Author);
    void SetLength(int MLength);

    const std::string& GetAuthor() const;
    int GetLength() const;

    void addMusicTrackContent(std::vector <XTrackInfo> &);
    void printMusicCDContent(std::vector<XTrackInfo> &);

};

#endif // XMUSICCD_H
