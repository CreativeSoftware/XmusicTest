#ifndef XTRACKINFO_H
#define XTRACKINFO_H

#include <iostream>
#include <vector>
#include <string>


class XTrackInfo
{

    std::string t_trackName;
    int t_length;

public:
    XTrackInfo();
    XTrackInfo(std::string trackName, int tLength);
    void setTrackName(std::string trackName);
    void setTrackLength(int tLength);

    const std::string& GetTrackName() const;
    int GetTrackLength() const;



};

#endif // XTRACKINFO_H
