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

class Sound{
private:
    ofSoundPlayer rain;
    
public:
    Sound();
    void play();
};
