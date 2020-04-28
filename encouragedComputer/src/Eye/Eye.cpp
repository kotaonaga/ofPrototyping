//
//  Eye.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/27.
//

#include "Eye.hpp"

Eye::Eye(){
    
}

void Eye::update(){
    
}

void Eye::draw(){
    ofSetLineWidth(10);
    ofSetCircleResolution(100);
    ofSetColor(34,5,58);
    ofDrawCircle(56, 333, 100);
//    if (ofGetElapsedTimeMillis() - Face::openedTime > 2500 && Face::isClosed == false) {
//        Face::isClosed = true;
//        Face::closedTime = ofGetElapsedTimeMillis();
//    }
//
//    if (ofGetElapsedTimeMillis() - Face::closedTime > 300 && isClosed == true) {
//        isClosed = false;
//        openedTime = ofGetElapsedTimeMillis();
//    }
//
//    if (isClosed == false) {
//        ofSetColor(255);
//        ofDrawCircle(ofGetWidth() * 1/3, ofGetHeight()/3, eyeSize/2);
//        ofDrawCircle(ofGetWidth() * 2/3, ofGetHeight()/3, eyeSize/2);
//    } else {
//        ofSetColor(255);
//        ofLine(ofGetWidth() * 1/3 - (eyeSize * 2/3), ofGetHeight()/3, ofGetWidth() * 1/3 + (eyeSize * 2/3), ofGetHeight()/3);
//        ofLine(ofGetWidth() * 2/3 - (eyeSize * 2/3), ofGetHeight()/3, ofGetWidth() * 2/3 + (eyeSize * 2/3), ofGetHeight()/3);
//    }
}
