#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(793, 600);
    
    img.load("sky.jpg");
    ofColor color;
    
    for(int i = 0; i < ofGetHeight(); i++){
        for(int j = 0; j < ofGetWidth(); j++){
            hues.push_back(img.getColor(i, j).getHue());
        }
    }
    
    sort(hues.begin(), hues.end());
    
    for(int i = 0; i < ofGetHeight(); i++){
        for(int j = 0; j < ofGetWidth(); j++){
            ofColor color;
            color.setHsb(hues[793*i + j], 170, 255);
            colors.push_back(color);
        }
    }
    
//    for(int i = 0; i < ofGetHeight(); i++){
//        for(int j = 0; j < ofGetWidth(); j++){
//            ofLog() << colors[793*i + j];
//        }
//    }
//    for(int i = 0; i < ofGetHeight(); i++){
//        for(int j = 0; j < ofGetWidth(); j++){
//            ofLog() << hues[793 * i + j];
//        }
//    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < ofGetHeight(); i++){
        for(int j = 0; j < ofGetWidth(); j++){
            ofSetColor(colors[793*i + j]);
            ofDrawRectangle(i, j, 1, 1);
        }
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
