#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetBackgroundAuto(false);
    for(int i = 0; i < amebaNum; i++){
        amebas[i].setup();
    }
    blur.setup(ofGetWidth(), ofGetHeight(), 10, .2, 2);
}

//--------------------------------------------------------------
void ofApp::update(){
    blur.setScale(ofMap(mouseX, 0, ofGetWidth(), 0, 10));
//    blur.setScale(1);
    ofLog() << blur.getScale();
    for(int i = 0; i < amebaNum; i++){
        amebas[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    blur.begin();
    
    for(int i = 0; i < amebaNum; i++){
        amebas[i].draw();
    }
    blur.end();
    
    blur.draw();
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
