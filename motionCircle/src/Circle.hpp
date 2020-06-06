//
//  Circle.hpp
//  motionCircle
//
//  Created by kota on 2020/05/30.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

#endif /* Circle_hpp */
class Circle{
private:
    float frameCountPerCicle;
    float currentCicleFrameCount;
    float currentCicleQuadEaseOutRatio;
    
public:
    Circle();
    void update();
    void draw();
};
