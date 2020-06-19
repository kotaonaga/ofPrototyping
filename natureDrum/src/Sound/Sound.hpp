//
//  Sound.hpp
//  natureDrum
//
//  Created by kota on 2020/06/14.
//

#ifndef Sound_hpp
#define Sound_hpp

#include <stdio.h>
#include "ofMain.h"
#endif /* Sound_hpp */

#define beamNum 5
#define laserNum 6

class Sound{
private:
    ofSoundPlayer beams[beamNum];
    ofSoundPlayer lasers[laserNum];
    
    ofSoundPlayer launcher1;
    ofSoundPlayer launcher2;
    ofSoundPlayer launcher3;
    ofSoundPlayer launcher4;
    ofSoundPlayer launcher5;
    ofSoundPlayer launcher6;
    
    string soundIndex;
    ofSoundPlayer currentSound;
    
    
public:
    Sound();
    void setSound(string _soundName);
    void update();
    void play();
};
