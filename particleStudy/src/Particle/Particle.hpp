//
//  Particle.hpp
//  particleStudy
//
//  Created by kota on 2020/05/08.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle{
private:
    float x;
    float y;
    float velX;
    float velY;
    
public:
    Particle();
    void setup(float _x, float _y, float _velX, float _velY);
    void update();
    void draw();
    
};
#endif /* Particle_hpp */
