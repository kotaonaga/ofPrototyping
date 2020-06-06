#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(400, 400);
    ofSetRectMode(OF_RECTMODE_CENTER);
    frameCountPerCircle = 60.0;
}

//--------------------------------------------------------------
void ofApp::update(){
    currentCircleFrameCount = (float) ofGetFrameNum() % frameCountPerCircle;
    
    currentCircleProgressRatio = (float) currentCircleFrameCount / frameCountPerCircle;
//    ofLog() << currentCircleProgressRatio;
    ofLog() << currentCircleProgressRatio;

    currentCircleQuartEaseOutRatio = (float) -pow(currentCircleProgressRatio - 1, 4) + 1;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    float angle = -HALF_PI + TWO_PI * currentCircleQuartEaseOutRatio;
    float particleSize = size * 0.2;
    float radius = size * 0.5;
    ofNoFill();
    ofSetLineWidth(1);
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, size, size);
    
    ofFill();
    ofSetColor(0);
    ofDrawEllipse(
        ofGetWidth()/2 + radius * cos(angle),
        ofGetHeight()/2 + radius * sin(angle),
        particleSize,
        particleSize
    );
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
