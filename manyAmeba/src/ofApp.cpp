#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    gui.setup();
//    gui.add(noiseScale.setup("noiseScale", 0.442, 0.1, 1.0));
//    gui.add(noiseScale2.setup("noiseScale2", 0.54, 0.1, 1.0));
    ofSetBackgroundAuto(false);
//    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetFrameRate(60);
    ofSetWindowShape(800, 800);
//    ofBackground(0);
    ofSetLineWidth(2.5);
    for(int i = 0; i < amebaNum; i++){
        amebas[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < amebaNum; i++){
        amebas[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(255, 10.2);
//    ofSetColor(240, 10.2);
    ofDrawRectangle(0, 0, 800, 800);
    for(int i = 0; i < amebaNum; i++){
        amebas[i].draw();
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
