//
//  Mochi.hpp
//  mochiFace
//
//  Created by kota on 2020/06/06.
//

#ifndef Mochi_hpp
#define Mochi_hpp

#define formResolution 15

#endif /* Mochi_hpp */

#include "ofMain.h"

using namespace glm;

class Mochi{
private:
    int stepSize = 2;
    float distortionFactor = 1;
    float initRadius = 150;
    float centerX, centerY;
    float x[formResolution];
    float y[formResolution];
    bool filled = false;
    bool freeze = false;
    
public:
    Mochi();
    void setup();
    void update();
    void draw();
    
};
