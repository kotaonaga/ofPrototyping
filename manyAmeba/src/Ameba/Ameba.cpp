//
//  Ameba.cpp
//  ameba
//
//  Created by kota on 2020/05/14.
//

#include "Ameba.hpp"

Ameba::Ameba(){
   
}

void Ameba::setup(){
    float x = ofRandom(ofGetWidth());
    float y = ofRandom(ofGetHeight());
    
    pos.set(x, y);
       vel.set(ofRandom(-1.0, 1.0), ofRandom(-1.0, 1.0));
    vel *= ofRandom(5.43, 5.48);
    amebaColor.setHsb(ofRandom(45, 255), 160,255);
    
    radius = ofRandom(100, 300);
    maxNoiseRadius = ofRandom(0.55, 0.7);
    
    ofLog() << amebaColor;
}

void Ameba::update(){
    pos += vel;
    if (pos.x + radius/2 > ofGetWidth() || pos.x - radius/2 < 0) {
        vel.x *= -1;
    }
    if (pos.y + radius/2 > ofGetHeight() || pos.y - radius/2 < 0) {
        vel.y *= -1;
    }
}


float Ameba::getPosX(){
    return pos.x;
}

float Ameba::getPosY(){
    return pos.y;
}

void Ameba::draw(){
    float time = ofGetElapsedTimef();
//    ofFill();
//    ofSetColor(230, 10.2);
//    ofDrawRectangle(0, 0, 800, 800);
    
        ofPushMatrix();

//        auto radius = 300;

        vector<glm::vec2> vertices;
        for(float deg = 0; deg < 360; deg += 0.3) {

            auto base_location = glm::vec2(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD));
            auto noise_radius = ofMap(ofNoise(base_location.x * 0.005, base_location.y * 0.005, (ofGetFrameNum()) * 0.01),
                                      0, 1, radius * 0.45, radius * maxNoiseRadius);
            auto location = glm::vec2(noise_radius * cos(deg * DEG_TO_RAD) + pos.x, noise_radius * sin(deg * DEG_TO_RAD) + pos.y);

            vertices.push_back(location);
        }

        ofFill();
        ofSetColor(amebaColor, 40);
        ofBeginShape();
        ofVertices(vertices);
        ofEndShape(true);

        vertices.clear();
        ofPopMatrix();
}

