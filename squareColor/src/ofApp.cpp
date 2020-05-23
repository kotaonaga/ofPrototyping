#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofBackground(200);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //    for(int height = 1; height <= 4; height++){
    //        for(int posX = 1; posX <= 4; posX++){
    //            ofFill();
    //            ofSetColor(213, 33, 11);
    //            ofDrawRectangle(ofGetposX()/5 * posX , ofGetHeight()/5 * height, 50, 50);
    //        }
    //    }
    
    //画面したに敷き詰める
    //    for(int posX = 0; posX <= 5; posX++){
    //        ofFill();
    //        ofSetColor(122, 11, 40 * posX);
    //        ofDrawRectangle(posX * 100, 500, 100, 100);
    //    }
    
    
    s1.setup(0, 500);
    s1.draw();
    
    
    if(s2.getIsShow()){
        s2.setup(0, 400);
        s2.setColor(ofColor(200, 11, 90, 255));
        s2.decreaseAlpha();
        s2.draw();
    }
    
    if(s2.getAlpha() < 127){
        s3.setIsShow(true);
    }
    
    if(s3.getIsShow()){
        s3.setup(0, 300);
        s3.setColor(ofColor(150, 11, 90, 255));
        s3.decreaseAlpha();
        s3.draw();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(OF_KEY_RETURN){
        s2.setIsShow(true);
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
