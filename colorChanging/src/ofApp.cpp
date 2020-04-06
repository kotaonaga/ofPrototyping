#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    float time = 0;
    width = ofGetWidth();
    height = ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    time = ofGetElapsedTimef();
    for(int i = 0; i <= height; i++){
        ofSetColor(127 + 127 * sin(0.01 * i + time),
                   67 + 127 * sin(0.011 * i + time),
                   127 + 127 * sin(0.012 * i + time));
        ofDrawRectangle(width/2 + 50 * sin(0.02 * i + time),
                        i,
                        50 + sin(time * 0.5) * 300,
                        50 + sin(time * 0.2) * 300
                        );
        cout << i * 0.02 + time << endl;
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
