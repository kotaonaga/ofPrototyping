#ifndef Tear_hpp
#define Tear_hpp

#include <stdio.h>
#include "ofMain.h"

class Tear{
private:
    float r;
    int R = 50;
    int A = 6;
    int fallPos = 0;
    
public:
    Tear();
    
    void fall();
    int getFallPos();
    void reset();
    void draw();
};

#endif /* Tear_hpp */
