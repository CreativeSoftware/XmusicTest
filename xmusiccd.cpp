#include "xmusiccd.h"
XMusicCd::XMusicCd(){}

XMusicCd::XMusicCd(std::string Author, int mLength, std::vector<XTrackInfo> trackinfo)
    :m_Author(Author), m_Length(mLength),
      m_TrackInfo(std::move(trackinfo))
{

}


const std::string& XMusicCd::GetAuthor() const{
    return m_Author;
}

int XMusicCd::GetLength() const {
    return m_Length;
}

void XMusicCd::SetAuthor(std::string Author){
    m_Author = Author;
}

void XMusicCd::SetLength(int MLength){
    m_Length = MLength;
}

void XMusicCd::addMusicTrackContent(std::vector<XTrackInfo> & trackinfo){
    unsigned int noTracks = 2;
    XTrackInfo mytrack;

    std::string trackname;
    int length;

    for (unsigned int i=0; i < noTracks; i++){
        std::cout << "Track Title ?" << std::endl;
        std::cin >> trackname;
        std::cout << "Track length " << std::endl;
        std::cin >> length;
        mytrack.setTrackName(trackname);
        mytrack.setTrackLength(length);
    }
    trackinfo.push_back(mytrack);

}

void XMusicCd::printMusicCDContent(std::vector<XTrackInfo> & trackinfo){

    std::cout << "Cd Author " << m_Author << std::endl;
    std::cout << "Cd Length " << m_Length << std::endl;
    std::cout << "Track Content " << std::endl;

    unsigned int auxsize = trackinfo.size();

    for (unsigned int i=0; i< auxsize; i++)
    {
        std::cout << "Track Title " << trackinfo[i].GetTrackName() << std::endl;
        std::cout << "Track Length " << trackinfo[i].GetTrackLength() << std::endl;

    }

}


