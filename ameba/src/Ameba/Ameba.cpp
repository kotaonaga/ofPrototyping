//
//  Ameba.cpp
//  ameba
//
//  Created by kota on 2020/05/14.
//

#include "Ameba.hpp"

Ameba::Ameba(){
   
}

void Ameba::setup(float _x, float _y){
    pos.set(_x,_y);
       vel.set(ofRandom(-1.0, 1.0), ofRandom(-1.0, 1.0));
       vel * ofRandom(2.0, 5.0);
       r = ofRandom(90, 130);
}

void Ameba::update(){
    pos += vel;
    if (pos.x > ofGetWidth() || pos.x < 0) {
        vel.x *= -1;
    }
    if (pos.y > ofGetHeight() || pos.y < 0) {
        vel.y *= -1;
    }
}


float Ameba::getPosX(){
    return pos.x;
}

float Ameba::getPosY(){
    return pos.y;
}

float Ameba::getR(){
    return r;
}


void Ameba::show(){
    float time = ofGetElapsedTimef();
    ofBackground(239);
        ofPushMatrix();
        ofTranslate(ofGetWidth() * 0.5, ofGetHeight() * 0.5);
        
        auto radius = 300;
        
        vector<glm::vec2> vertices;
        for(float deg = 0; deg < 360; deg += 0.3) {
            
            auto base_location = glm::vec2(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD));
            auto noise_radius = ofMap(ofNoise(base_location.x * 0.005, base_location.y * 0.005, (ofGetFrameNum()) * 0.01),
                                      0, 1, radius * 0.45, radius * 0.55);
            auto location = glm::vec2(noise_radius * cos(deg * DEG_TO_RAD), noise_radius * sin(deg * DEG_TO_RAD));
            
            vertices.push_back(location);
        }
        
        ofFill();
        ofSetColor(12,34,129, abs(sin(time)) * 255);
        ofBeginShape();
        ofVertices(vertices);
        ofEndShape(true);
        //
    //    ofNoFill();
    //    ofSetColor(39);
    //    ofBeginShape();
    //    ofVertices(vertices);
    //    ofEndShape(true);
        vertices.clear();
        ofPopMatrix();
}

