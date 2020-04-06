#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    width = ofGetWidth();
    height = ofGetHeight();
    ofHideCursor();
    ofBackground(0);
    cornSize = 200;
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(ofGetMouseX() < width/3){
        ofBackground(52, 99, 168);
        ofSetColor(241, 142, 29);
        ofDrawSphere(ofGetMouseX(), ofGetMouseY(), 100, 45);
    }else if(ofGetMouseX() > width/3 && ofGetMouseX() < width * 2/3){
        ofBackground(116, 199, 241);
        ofSetColor(245, 175, 126);
        ofDrawSphere(ofGetMouseX(), ofGetMouseY(), 100, 45);
    }else if(ofGetMouseX() > width * 2/3 && ofGetMouseX() < width){
        ofBackground(30, 75, 105);
        ofSetColor(245, 242, 219);
        ofDrawSphere(ofGetMouseX(), ofGetMouseY(), 100, 45);
    }
    
    
//    for(int x = 0; x < 3; x++){
//        for(int z = 0; z < 2; z++){
//            cornColor.setHsb(ofRandom(120, 140), 100, 100);
//            cornColor.setHsb(120, 100, 100);
//            ofSetColor(cornColor);
//            ofDrawCone(70 * x, height - 200, 80 * z, 32, cornSize);
//        }
//    }
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
