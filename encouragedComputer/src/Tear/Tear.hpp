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
    Tear(shared_ptr<Globals::Mode> _mode) :mode(_mode){
        
    };
    void dump();
    int getY();
    void testLog();
    int getNextRightPos();
    int getNextLeftPos();
    void updateFallRight();
    void updateFallLeft();
    int getFallPosRight();
    int getFallPosLeft();
    void resetFallPosRight();
    void resetFallPosLeft();
    void drawRight();
    void drawLeft();
};

#endif /* Tear_hpp */
