//
//  Particle.hpp
//  amebaParticle
//
//  Created by kota on 2020/05/15.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

// 粒を表現するクラス Particle を定義
class Particle {
private:
  float x;
  float y;
  float vx;
  float vy;
  float life;
  float radius;
ofColor pColor;
    float maxNoiseRadius;
//    static vector<glm::vec2> vertices;

public:
    Particle();
    void setup();
    void update();
    void noiseCalc();
    void draw();
    float getLife();
};

#endif /* Particle_hpp */
