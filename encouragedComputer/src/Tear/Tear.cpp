//
//  Tear.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/16.
//

#include "Tear.hpp"
//#include "Face.hpp"

Tear::Tear(){
    
}

Tear::Tear(shared_ptr<Globals::Mode> _mode) :mode(_mode){
//    Tear rightTear;
//    rightTear.setupRight();
//    rightTears.push_back(rightTear);
//
//    Tear leftTear;
//    leftTear.setupLeft();
//    leftTears.push_back(leftTear);
//    ofLog() << face.getFaceMode();
}

void Tear::setup(int _startWidth, int _startHeight){
    startWidth = _startWidth;
    startHeight = _startHeight;
}

void Tear::update(){
    fallPos += 3;
}

void Tear::draw(){
    ofLog() << startWidth;
    ofLog() << "目標" << ofGetWidth() * 1/3;
    
    ofPushMatrix();
//    ofTranslate(startWidth, startHeight);
    ofTranslate(ofGetWidth() * 1/3, ofGetHeight() * 1/3);
    ofRotate(-90);
    ofBeginShape();
    for (float t = 0; t < TWO_PI; t += 0.1) {
      r = 1 / (A * sin(t/2)+1);
      ofVertex( R * r * cos(t), R * r * sin(t));
    }
    ofEndShape(true);
    ofPopMatrix();
}


void Tear::dump(){
    Globals::dump_mode("Tear", mode);
}

int Tear::getY(){
//    return y;
}


//getNextRightPosもいらない。
int Tear::getNextRightPos(){
    return nextRightPos;
}

int Tear::getNextLeftPos(){
    return nextLeftPos;
}

//fallRightはupdateにしたい。update
void Tear::updateFallRight(){
    fallPosRight += 3;
}

void Tear::updateFallLeft(){
    fallPosLeft += 3;
}

//FallPosRightが240になったら次が生まれる。
int Tear::getFallPosRight(){
    return fallPosRight;
}

int Tear::getFallPosLeft(){
    return fallPosLeft;
}

//これも使ってない。
void Tear::resetFallPosRight(){
    fallPosRight = 0;
}

void Tear::resetFallPosLeft(){
    fallPosLeft = 0;
}

void Tear::drawLeft(){
    ofPushMatrix();
    ofTranslate(ofGetWidth() * 1/3, ofGetHeight() * 1/3 + 30 + fallPosLeft);
    ofRotate(-90);
    ofBeginShape();
    for (float t = 0; t < TWO_PI; t += 0.1) {
      r = 1 / (A * sin(t/2)+1);
      ofVertex( R * r * cos(t), R * r * sin(t));
    }
    ofEndShape(true);
    ofPopMatrix();
}

void Tear::drawRight(){
        ofPushMatrix();
        ofTranslate(ofGetWidth() * 2/3, ofGetHeight() * 1/3 + 30 + fallPosRight);
        ofRotate(-90);
        ofBeginShape();
        for (float t = 0; t < TWO_PI; t += 0.1) {
          r = 1 / (A * sin(t/2)+1);
          ofVertex( R * r * cos(t), R * r * sin(t));
        }
        ofEndShape(true);
        ofPopMatrix();
}
