//
//  Eye.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/27.
//

#include "Eye.hpp"

//Eye::Eye(){
//    openedTime = 0;
//    closedTime = 0;
//    isClosed = false;
//    eyeSize = 60;
//    
//    Tear rightTear;
//    rightTears.push_back(rightTear);
//    
//    Tear leftTear;
//    leftTears.push_back(leftTear);
//}

void Eye::update(){
    if (ofGetElapsedTimeMillis() - openedTime > 2500 && isClosed == false) {
        isClosed = true;
        closedTime = ofGetElapsedTimeMillis();
    }
    
    if (ofGetElapsedTimeMillis() - closedTime > 300 && isClosed == true) {
           isClosed = false;
           openedTime = ofGetElapsedTimeMillis();
       }
    
        for(int i = 0; i < rightTears.size(); i++){
            rightTears[i].updateFallRight();
        }
    
        for(int i = 0; i < leftTears.size(); i++){
            leftTears[i].updateFallLeft();
        }
}

void Eye::draw(){
    ofSetLineWidth(10);
    ofSetCircleResolution(100);

    if (isClosed == false) {
        ofSetColor(255);
        ofDrawCircle(ofGetWidth() * 1/3, ofGetHeight()/3, eyeSize/2);
        ofDrawCircle(ofGetWidth() * 2/3, ofGetHeight()/3, eyeSize/2);
    } else {
        ofSetColor(255);
        ofLine(ofGetWidth() * 1/3 - (eyeSize * 2/3), ofGetHeight()/3, ofGetWidth() * 1/3 + (eyeSize * 2/3), ofGetHeight()/3);
        ofLine(ofGetWidth() * 2/3 - (eyeSize * 2/3), ofGetHeight()/3, ofGetWidth() * 2/3 + (eyeSize * 2/3), ofGetHeight()/3);
    }
    
     for(int i = 0; i < rightTears.size(); i++){
            rightTears[i].drawRight();
        }
    
    for(int i = 0; i < leftTears.size(); i++){
                leftTears[i].drawLeft();
    }
}
