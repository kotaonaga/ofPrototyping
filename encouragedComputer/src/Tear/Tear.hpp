#ifndef Tear_hpp
#define Tear_hpp

#include <stdio.h>
#include "ofMain.h"

class Tear{
private:
    float r;
    int R = 50;
    int A = 6;
    int fallPosRight = 0;
    int fallPosLeft = 0;
    
public:
    Tear();
    
    void fallRight();
    void fallLeft();
    int getFallPosRight();
    int getFallPosLeft();
    void resetFallPosRight();
    void resetFallPosLeft();
    void drawRight();
    void drawLeft();
};

#endif /* Tear_hpp */
