//
//  Particle.cpp
//  amebaParticle
//
//  Created by kota on 2020/05/15.
//

#include "Particle.hpp"

//vector<glm::vec2> Particle::vertices;

Particle::Particle(){
    
}

void Particle::setup(){
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    vx = 0;
    vy = 0;
    life = 1;
    radius = ofRandom(1, 8);
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
//    for(float deg = 0; deg < 360; deg += 0.3) {
//
//        auto base_location = glm::vec2(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD));
//        auto noise_radius = ofMap(ofNoise(base_location.x * 0.005, base_location.y * 0.005, (ofGetFrameNum()) * 0.01),
//                                  0, 1, radius * 0.45, radius * maxNoiseRadius);
//        auto location = glm::vec2(noise_radius * cos(deg * DEG_TO_RAD) + x, noise_radius * sin(deg * DEG_TO_RAD) + y);
//
//        vertices.push_back(location);
//    }
}

void Particle::draw(){
    float al = ofMap(life, 1, 0, 255, 0);
    ofFill();
    ofSetColor(pColor, al);
    ofDrawEllipse(x, y, radius, radius);
    
//    ofLog() << vertices;
//    ofFill();
//    ofSetColor(pColor, al);
//    ofBeginShape();
////    ofVertices(vertices);
//    ofEndShape(true);
}

float Particle::getLife(){
    return life;
}
