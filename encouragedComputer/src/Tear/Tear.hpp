#ifndef Tear_hpp
#define Tear_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Globals.hpp"

class Tear{
private:
    float r;
    int R = 50;
    int A = 6;
    int fallPosRight = 0;
    int fallPosLeft = 0;
    int nextRightPos = 0;
    int nextLeftPos = 0;
    shared_ptr<Globals::Mode> mode;
    
public:
    Tear(shared_ptr<Globals::Mode> _mode);
    void updateFallRight();
    void updateFallLeft();
    void drawRight();
    void drawLeft();
    
    void dump();
    int getY();
    int getNextRightPos();
    int getNextLeftPos();
    
    int getFallPosRight();
    int getFallPosLeft();
    void resetFallPosRight();
    void resetFallPosLeft();
    
};

#endif /* Tear_hpp */
