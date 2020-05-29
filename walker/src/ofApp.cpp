#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetBackgroundAuto(false);
//    ofBackground(0xFFFDED);
    ofBackground(0xFFFDED);
    
//    walkers.resize(4);
    
//    for(int i = 0; i < walkers.size(); i++){
//        Walker w;
//        w.setup();
//        walkers.push_back(w);
//    }
    
    for(int i = 0; i < numWalkers; i++){
        Walker w;
        walkers[i] = w;
    }
    
    walkers[0].setHex(0xFFB17A);
    walkers[1].setHex(0x4F4789);
    walkers[2].setHex(0x201335);
    walkers[3].setHex(0xFCE762);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < numWalkers; i++){
        walkers[i].draw();
    }
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
