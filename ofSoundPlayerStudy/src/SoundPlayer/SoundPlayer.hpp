//
//  SoundPlayer.hpp
//  ofSoundPlayerStudy
//
//  Created by kota on 2020/06/14.
//

#ifndef SoundPlayer_hpp
#define SoundPlayer_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* SoundPlayer_hpp */

class SoundPlayer{
private:
public:
    SoundPlayer();
    void setup();
    void update();
    void draw();
    
    ofSoundPlayer beam;
    int currentSoundIndex;
    
    vector<char> codes;
    string currentCode;
    
    bool isReady;
    
};
