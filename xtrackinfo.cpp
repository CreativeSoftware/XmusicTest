#include "xtrackinfo.h"

XTrackInfo::XTrackInfo(){}
XTrackInfo::XTrackInfo(std::string trackName, int tLength)
    :t_trackName(trackName), t_length(tLength)
{
}

const std::string &XTrackInfo::GetTrackName() const {
    return t_trackName;
}

int XTrackInfo::GetTrackLength() const {
    return t_length;}

void XTrackInfo::setTrackLength(int tLength){
    t_length = tLength;
}

void XTrackInfo::setTrackName(std::string trackName){
    t_trackName = trackName;
}
