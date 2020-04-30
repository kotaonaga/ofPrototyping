#ifndef Tear_hpp
#define Tear_hpp

#include <stdio.h>
#include "ofMain.h"

class Tear{
private:
    int x = 0;
    int y = 0;
    float r;
    int R = 50;
    int A = 6;
    int fallPosRight = 0;
    int fallPosLeft = 0;
    int nextRightPos = 0;
    int nextLeftPos = 0;
//    Tear tear;
    vector<Tear> rightTears;
    vector<Tear> leftTears;
    
public:
    Tear();
    int getY();
    void setupRight();
    void setupLeft();
    int getNextRightPos();
    int getNextLeftPos();
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
