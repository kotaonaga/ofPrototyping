#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(noiseScale.setup("noiseScale", 300.0, 1.0, 1000.0));
    gui.add(noiseStrength.setup("noiseStrength", 10.0, 0.0, 100.0));
    gui.add(agentsAlpha.setup("agentsAlpha", 90.0, 0.0, 100.0));
    gui.add(overlayAlpha.setup("overlayAlpha", 232, 0, 255));
    
    ofSetWindowShape(1280, 800);
    ofEnableSmoothing();
    ofSetVerticalSync(true);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < agentsNum; i++){
        agents[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(255, overlayAlpha);
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    for(int i = 0; i < agentsNum; i++){
        agents[i].draw();
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
