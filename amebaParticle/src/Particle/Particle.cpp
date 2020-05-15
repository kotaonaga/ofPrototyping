//
//  Particle.cpp
//  amebaParticle
//
//  Created by kota on 2020/05/15.
//

#include "Particle.hpp"

Particle::Particle(){
    
}

void Particle::setup(){
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    vx = 0;
    vy = 0;
    life = 1;
    radius = ofRandom(10, 30);
    pColor.setHsb(ofRandom(30, 255), 190, 255);
}

void Particle::update(){
    x += vx;
    y += vy;
      
    vx += ofRandom(-0.1, +0.1) * 2.0;
    vy += ofRandom(-0.1, +0.1) * 2.0;
    
    vx *= 0.99;
    vy *= 0.99;
      
    // 寿命を減らす
    life -= 0.004;
}

void Particle::noiseCalc(){
    
}

void Particle::draw(){
    float al = ofMap(life, 1, 0, 255, 0);
    ofFill();
    ofSetColor(pColor, al);
    ofDrawEllipse(x, y, radius, radius);
}

float Particle::getLife(){
    return life;
}
