#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
//    ofEnableBlendMode(OF_BLENDMODE_);
    ofSetWindowShape(600, 600);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    Particle p;
    p.setup();
    
    ps.push_back(p);
    for(int i = 0; i < ps.size(); i++){
        ps[i].update();
    }
    
    pNoise.noiseCalc();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(20, 10.2);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    for(int i = 0; i < ps.size(); i++){
        ps[i].draw();
    }
    
    for (int i = ps.size() - 1; i >= 0; i--) {
        if (ps[i].getLife() <= 0.0) {
          ps.erase(ps.begin() + i);
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
