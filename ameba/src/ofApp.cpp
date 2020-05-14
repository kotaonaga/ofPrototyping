#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    gui.setup();
//    gui.add(noiseScale.setup("noiseScale", 0.442, 0.1, 1.0));
//    gui.add(noiseScale2.setup("noiseScale2", 0.54, 0.1, 1.0));
    ofSetBackgroundAuto(false);
    ofSetFrameRate(60);
    ofSetWindowShape(800, 800);
    ofBackground(239);
    ofSetLineWidth(2.5);
    ameba.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    ameba.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ameba.show();
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
