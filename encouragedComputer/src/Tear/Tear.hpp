#ifndef Tear_hpp
#define Tear_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Globals.hpp"

class Tear{
private:
    //しずくを描くのに必要
    float r;
    int R = 50;
    int A = 6;
    
    //update系変数
    int fallPos = 0;
    int startWidth;
    int startHeight;
    
    int fallPosRight = 0;
    int fallPosLeft = 0;
    int nextRightPos = 0;
    int nextLeftPos = 0;
    shared_ptr<Globals::Mode> mode;
    
public:
    Tear();
    Tear(shared_ptr<Globals::Mode> _mode);
    
    void setup(int _startWidth, int _startHeight);
    void update();
    void draw();
    
    
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
