#include "ofApp.h"



void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetCircleResolution(64);
    gui.setup();
    gui.add(radius.setup("radius", 107, 0, 200));
    
    for(int i = 0; i < circleNum; i++){
        circles[i].setPos(ofRandom(-13, 13), ofRandom(-13, 13));
    }
}

void ofApp::update(){
    angle++;
}

void ofApp::draw(){
    ofBackground(255);
    
    for(int i = 0; i < circleNum; i++){
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(angle + startPos[i]);
            circles[i].setRaduis(radius);
            circles[i].setColor( ofColor(0,ofRandom(30, 60),255, 40) );
            circles[i].draw();
        ofPopMatrix();
    }
    
    gui.draw();
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
