#include "Face.hpp"

int Face::openedTime = 0;
int Face::closedTime = 0;
Boolean Face::isClosed = false;
int Face::eyeSize = 60;
int Face::faceWidth = 0;

Face::Face(){
}

void Face::setFaceWidth(int _chatWidth){
    faceWidth = ofGetWidth() - _chatWidth;
}

int Face::getFaceWidth(){
    return faceWidth;
}

void Face::drawEyes(){
    ofSetLineWidth(10);
    ofSetCircleResolution(100);

   if (ofGetElapsedTimeMillis() - openedTime > 2500 && isClosed == false) {
          isClosed = true;
          closedTime = ofGetElapsedTimeMillis();
      }
      
      if (ofGetElapsedTimeMillis() - closedTime > 300 && isClosed == true) {
          isClosed = false;
          openedTime = ofGetElapsedTimeMillis();
      }
      
      if (isClosed == false) {
          ofSetColor(255);
          ofDrawCircle(ofGetWidth() * 1/3, ofGetHeight()/3, eyeSize/2);
          ofDrawCircle(ofGetWidth() * 2/3, ofGetHeight()/3, eyeSize/2);
      } else {
          ofSetColor(255);
          ofLine(ofGetWidth() * 1/3 - (eyeSize * 2/3), ofGetHeight()/3, ofGetWidth() * 1/3 + (eyeSize * 2/3), ofGetHeight()/3);
          ofLine(ofGetWidth() * 2/3 - (eyeSize * 2/3), ofGetHeight()/3, ofGetWidth() * 2/3 + (eyeSize * 2/3), ofGetHeight()/3);
      }
}

void Face::drawSkin(){
    if (ofGetElapsedTimeMillis() - openedTime > 2500 && isClosed == false) {
        isClosed = true;
        closedTime = ofGetElapsedTimeMillis();
    }
    
    if (ofGetElapsedTimeMillis() - closedTime > 300 && isClosed == true) {
        isClosed = false;
        openedTime = ofGetElapsedTimeMillis();
    }
    
    if (isClosed == false) {
        ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    } else {
        ofSetColor(255, 30, 255);
        ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    }
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
