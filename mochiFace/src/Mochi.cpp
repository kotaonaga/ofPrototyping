//
//  Mochi.cpp
//  mochiFace
//
//  Created by kota on 2020/06/06.
//

#include "Mochi.hpp"

Mochi::Mochi(){
    stepSize = 2;
    distortionFactor = 1;
    initRadius = 150;
    centerX = 0;
    centerY = 0;
}

void Mochi::setup(){
    centerX = ofGetWidth()/2;
    centerY = ofGetHeight()/2;
    float angle = radians(360/float(formResolution));
    for (int i=0; i<formResolution; i++){
      x[i] = cos(angle*i) * initRadius;
      y[i] = sin(angle*i) * initRadius;
    }
}

void Mochi::update(){
    float time = ofGetElapsedTimef();
    ofSetColor(123,45,170 * abs(sin(time)), 70);
    
    if (ofGetMouseX() != 0 || ofGetMouseY() != 0) {
      centerX += (ofGetMouseX()-centerX) * 0.01;
      centerY += (ofGetMouseY()-centerY) * 0.01;
    }
    
    for (int i=0; i<formResolution; i++){
      x[i] += ofRandom(-stepSize,stepSize);
      y[i] += ofRandom(-stepSize,stepSize);
      // ellipse(x[i], y[i], 5, 5);
    }
}

void Mochi::draw(){
    ofSetLineWidth(0.75);
//    if (filled) ofSetColor(ofRandom(255));
//    else ofNoFill();

    ofBeginShape();
    // start controlpoint
    ofCurveVertex(x[formResolution-1]+centerX, y[formResolution-1]+centerY);

    // only these points are drawn
    for (int i=0; i<formResolution; i++){
      ofCurveVertex(x[i]+centerX, y[i]+centerY);
    }
    ofCurveVertex(x[0]+centerX, y[0]+centerY);

    // end controlpoint
    ofCurveVertex(x[1]+centerX, y[1]+centerY);
    ofEndShape();
}
