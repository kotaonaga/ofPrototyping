//
//  Eye.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/27.
//

#include "Eye.hpp"

Eye::Eye(shared_ptr<Globals::Mode> _mode) :mode(_mode){
    openedTime = 0;
    closedTime = 0;
    isClosed = false;
    eyeSize = 60;
//    posX = ofGetWidth() * 1/3;
//    posY = ofGetHeight() * 1/3;
    tear = make_unique<Tear>(mode);
    
    //    Tear rightTear(mode);
    //    rightTear.setup(ofGetWidth() * 1/3, ofGetHeight() * 1/3);
    //    rightTears.push_back(rightTear);
    
    Tear rightTear;
    rightTear.setup(ofGetWidth() * 1/3, ofGetHeight() * 1/3);
    rightTears.push_back(rightTear);
}

void Eye::setup(int _posX, int _posY){
    
}


void Eye::dump(){
    Globals::dump_mode("Eye", mode);
    tear->dump();
}

void Eye::update(){
    if (ofGetElapsedTimeMillis() - openedTime > 2500 && isClosed == false) {
        isClosed = true;
        closedTime = ofGetElapsedTimeMillis();
    }
    
    if (ofGetElapsedTimeMillis() - closedTime > 300 && isClosed == true) {
        isClosed = false;
        openedTime = ofGetElapsedTimeMillis();
    }
    
    //        for(int i = 0; i < rightTears.size(); i++){
    //            rightTears[i].updateFallRight();
    //        }
    //
    //        for(int i = 0; i < leftTears.size(); i++){
    //            leftTears[i].updateFallLeft();
    //        }
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
        rightTears[i].draw();
    }
}
