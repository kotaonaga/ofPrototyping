#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofRectMode(OF_RECTMODE_CENTER);
    font.load("MPLUSRounded1c-Regular.ttf", 50);
}

//--------------------------------------------------------------
void ofApp::update(){
    fall += 3;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cout << "pos:" << pos<< endl;
    cout << "pos-1:" << pos - 1 << endl;
    //時間が溶けていく
    ofBackground(0);
    //時計の針
    time = ofGetElapsedTimeMillis() / 1000;
    pos = fmod(time, 12);
    if(prevPos != pos){
        fall = 0;
    }
    prevPos = pos;
       
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(255);
    ofRotate(pos * 30.0);
    ofLine(0, 0, 0, -300);
    ofPopMatrix();
    
    //文字盤
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(pos * 30.0);
    ofRectangle rect = font.getStringBoundingBox(dials[pos], 0, -300);
    ofSetColor(255, 45, 255, 90);
    font.drawString(dials[pos], rect.x - rect.width/2, -300);
    ofPopMatrix();
    
    //文字盤落下
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate( (pos - 1) * 30.0);
        rect = font.getStringBoundingBox(dials[pos-1], 0, -300);
        font.drawString(fallenDials[pos], rect.x - rect.width/2, -300 + fall);
        ofPopMatrix();
    
    prevPos = pos;
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
