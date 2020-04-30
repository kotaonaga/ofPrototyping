#include "Face.hpp"

int Face::openedTime = 0;
int Face::closedTime = 0;
Boolean Face::isClosed = false;
int Face::eyeSize = 60;
int Face::faceWidth = 0;

Face::Face(){
//    shader.load("shader");
//    facemode = depression;
}

void Face::setFaceWidth(int _chatWidth){
    faceWidth = ofGetWidth() - _chatWidth;
}

int Face::getFaceWidth(){
    return faceWidth;
}

void Face::setFaceMode(Facemode _facemode){
    facemode = _facemode;
}

int Face::getFaceMode(){
    return facemode;
}

void Face::drawEyes(){
//    face.setFaceMode(smile);
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

void Face::draw(){
//    shader.begin();
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
//    shader.end();
}
