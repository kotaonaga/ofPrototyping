//
//  Particle.cpp
//  particleStudy
//
//  Created by kota on 2020/05/08.
//

#include "Particle.hpp"

Particle::Particle(){
    
}
void Particle::setup(float _x, float _y, float _velX, float _velY){
    x = _x;
    y = _y;
    velX = _velX;
    velY = _velY;
}


void Particle::update(){
    x += velX;
    y += velY;
    velX += ofRandom(-0.1, 0.1);
    velY += ofRandom(-0.1, 0.1);
}

void Particle::draw(){
    ofDrawEllipse(x, y, 20, 20);
}
