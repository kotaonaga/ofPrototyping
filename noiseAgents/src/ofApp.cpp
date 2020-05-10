#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1280, 800);
    ofEnableSmoothing();
    ofSetVerticalSync(true);
    
    overlayAlpha = ofMap(overlayAlpha, 0, 100, 0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < agentsNum; i++){
        agents[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(255, overlayAlpha);
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    for(int i = 0; i < agentsNum; i++){
        agents[i].draw();
    }
    
//    gui.draw();
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
