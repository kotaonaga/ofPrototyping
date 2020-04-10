#include "ofApp.h"



void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetCircleResolution(64);
    gui.setup();
    gui.add(radius.setup("radius", 120, 120, 140));
    gui.add(hue[0].setup("circle1 color", 1, 0, 255));
    gui.add(hue[1].setup("circle2 color", 60, 0, 255));
    gui.add(hue[2].setup("circle3 color", 146, 0, 255));
    gui.add(hue[3].setup("circle4 color", 185, 0, 255));
    
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
            circles[i].setHue(hue[i]);
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
