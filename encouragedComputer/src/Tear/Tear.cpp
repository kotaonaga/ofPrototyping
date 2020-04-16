//
//  Tear.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/16.
//

#include "Tear.hpp"



Tear::Tear(){
    
}

//void Tear::setSize(int _R, int _A){
//    R = _R;
//    A = _A;
//}

int Tear::getFallPos(){
    return fallPos;
}

void Tear::fall(){
    fallPos += 3;
}

void Tear::reset(){
    fallPos = 0;
}

void Tear::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth() * 1/3, ofGetHeight() * 1/3 + fallPos);
    ofRotate(-90);
    ofBeginShape();
    for (float t = 0; t < TWO_PI; t += 0.1) {
      r = 1 / (A * sin(t/2)+1);
      ofVertex( R * r * cos(t), R * r * sin(t));
    }
    ofEndShape(true);
    ofPopMatrix();
    
//    ofPushMatrix();
//    ofTranslate(ofGetWidth() * 2/3, ofGetHeight() * 1/3 + fallPos);
//    ofRotate(-90);
//    ofBeginShape();
//    for (float t = 0; t < TWO_PI; t += 0.1) {
//      r = 1 / (A * sin(t/2)+1);
//      ofVertex( R * r * cos(t), R * r * sin(t));
//    }
//    ofEndShape(true);
//    ofPopMatrix();
}


