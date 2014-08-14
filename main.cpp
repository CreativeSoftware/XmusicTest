#include <iostream>
#include <vector>

#include "xmusiccd.h"
//#include "xtrackinfo.h"

using namespace std;



int main()
{
    XMusicCd myCD;
    vector <XTrackInfo> tracks;

    myCD.SetAuthor("steven segal");
    myCD.SetLength(100);
    myCD.addMusicTrackContent(tracks);
    myCD.printMusicCDContent(tracks);
    //myCD.printMusicTrackContent(vector <XTrackInfo> & );
    //myCD.printMusicTrackContent();
}


