#include "Face.hpp"

Face::Face(){
    ofSetCircleResolution(128);
    ofSetLineWidth(10);
}

void Face::setFaceWidth(int _chatWidth){
    faceWidth = ofGetWidth() - _chatWidth;
}

int Face::getFaceWidth(){
    return faceWidth;
}

void Face::draw(){
    if (ofGetElapsedTimeMillis() - openedTime > 2500 && isClosed == false) {
        isClosed = true;
        closedTime = ofGetElapsedTimeMillis();
    }
    
    if (ofGetElapsedTimeMillis() - closedTime > 300 && isClosed == true) {
        isClosed = false;
        openedTime = ofGetElapsedTimeMillis();
    }
    
    if (isClosed == false) {
        ofSetColor(255, 30, 255);
        ofDrawRectangle(0, 0, faceWidth, ofGetHeight());
        ofSetColor(255);
        ofDrawCircle(faceWidth * 1/3, ofGetHeight()/3, eyeSize/2);
        ofDrawCircle(faceWidth * 2/3, ofGetHeight()/3, eyeSize/2);
    } else {
        ofSetColor(255, 30, 255);
        ofDrawRectangle(0, 0, faceWidth, ofGetHeight());
        ofSetColor(255);
        ofLine(faceWidth * 1/3 - (eyeSize * 2/3), ofGetHeight()/3, faceWidth * 1/3 + (eyeSize * 2/3), ofGetHeight()/3);
        ofLine(faceWidth * 2/3 - (eyeSize * 2/3), ofGetHeight()/3, faceWidth * 2/3 + (eyeSize * 2/3), ofGetHeight()/3);
    }
}
