#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofBackground(0);
    
    isPushed = false;
    enterPushed = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(23, 65, 233, 180);
    ofDrawRectangle(200, 200, 300, 100);
    
    ofSetLineWidth(0.1);
    ofSetColor(222, 222, 222);
    if(enterPushed){
        ofDrawLine(200, 200, 100, 100);
        ofDrawLine(400, 200, 500, 300);
        ofDrawLine(200, 300, 100, 500);
        ofDrawLine(400, 500, 200, 550);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'a'){
        isPushed = true;
    }
    
    if(key == OF_KEY_RETURN){
        if(enterPushed == false){
            enterPushed = true;
        }else{
            enterPushed = false;
        }
    }
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
