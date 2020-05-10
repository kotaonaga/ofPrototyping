//
//  Agent.cpp
//  noiseAgents
//
//  Created by kota on 2020/05/10.
//

#include "Agent.hpp"

Agent::Agent(){
    p.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    pOld.set(p.x, p.y);
    stepSize = ofRandom(1, 5);
    agentsAlpha = ofMap(agentsAlpha, 0, 100, 0, 255);
}


void Agent::setup(){
    
}

void Agent::update(){
    angle = ofNoise(p.x/noiseScale, p.y/noiseScale) * noiseStrength;
    
    p.x += cos(angle) * stepSize;
    p.y += sin(angle) * stepSize;
    
    if(p.x<-10) isOutside = true;
    else if(p.x>ofGetWidth()+10) isOutside = true;
    else if(p.y<-10) isOutside = true;
    else if(p.y>ofGetHeight()+10) isOutside = true;

    if (isOutside) {
        p.x = ofRandom(ofGetWidth());
        p.y = ofRandom(ofGetHeight());
      pOld.set(p);
    }
    
    isOutside = false;
}

void Agent::draw(){
    ofSetLineWidth(0.09);
    ofSetColor(0, agentsAlpha);
    ofLine(pOld.x, pOld.y, p.x, p.y);
    pOld.set(p);
    
}

void Agent::setNoiseScale(float _noiseScale){
    noiseScale = _noiseScale;
}

void Agent::setNoiseStrength(float _noiseStrength){
    noiseStrength = _noiseStrength;
}
