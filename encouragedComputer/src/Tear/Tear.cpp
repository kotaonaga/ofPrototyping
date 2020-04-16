//
//  Tear.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/16.
//

#include "Tear.hpp"



Tear::Tear(){
    
}


//void fallRight();
//void fallLeft();
//int getFallRightPos();
//int getFallLeftPos();
//void resetRight();
//void drawRight();
//void drawLeft();
// fallPosRight

void Tear::fallRight(){
    fallPosRight += 3;
}

void Tear::fallLeft(){
    fallPosLeft += 3;
}

int Tear::getFallPosRight(){
    return fallPosRight;
}

int Tear::getFallPosLeft(){
    return fallPosLeft;
}

void Tear::resetFallPosRight(){
    fallPosRight = 0;
}

void Tear::resetFallPosLeft(){
    fallPosLeft = 0;
}

void Tear::drawRight(){
    ofPushMatrix();
    ofTranslate(ofGetWidth() * 1/3, ofGetHeight() * 1/3 + 30 + fallPosRight);
    ofRotate(-90);
    ofBeginShape();
    for (float t = 0; t < TWO_PI; t += 0.1) {
      r = 1 / (A * sin(t/2)+1);
      ofVertex( R * r * cos(t), R * r * sin(t));
    }
    ofEndShape(true);
    ofPopMatrix();
}

void Tear::drawLeft(){
        ofPushMatrix();
        ofTranslate(ofGetWidth() * 2/3, ofGetHeight() * 1/3 + 30 + fallPosLeft);
        ofRotate(-90);
        ofBeginShape();
        for (float t = 0; t < TWO_PI; t += 0.1) {
          r = 1 / (A * sin(t/2)+1);
          ofVertex( R * r * cos(t), R * r * sin(t));
        }
        ofEndShape(true);
        ofPopMatrix();
}
