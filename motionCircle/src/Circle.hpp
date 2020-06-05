//
//  Orbit.hpp
//  motionCircle
//
//  Created by kota on 2020/05/30.
//

#ifndef Orbit_hpp
#define Orbit_hpp

#include "ofMain.h"

#endif /* Orbit_hpp */
class Orbit{
private:
    currentCicleQuadEaseOutRatio = -sq(currentCicleProgressRatio - 1) + 1;
public:
    Orbit();
    void update();
    void draw();
};
