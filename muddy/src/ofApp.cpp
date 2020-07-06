#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetRectMode(OF_RECTMODE_CENTER);
    angle = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    angle++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(123, 123, 222);
    ofBeginShape();
    ofCurveVertex(100, 100);
    ofCurveVertex(500, 100);
    ofCurveVertex(500, 400);
    ofCurveVertex(100, 400);
    ofCurveVertex(100, 100);
    ofEndShape();
    
    ofSetColor(233, 23, 123);
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateDeg(angle);
    ofDrawRectangle(0, 0, 200, 100);
    ofPopMatrix();
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
