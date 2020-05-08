#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    pPtr = new Particle();
    
    ofSetWindowShape(400, 400);
    pPtr -> setup(ofGetWidth()/2, ofGetHeight()/2, 0.0, 0.0);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(222);
    pPtr->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    pPtr->draw();
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
