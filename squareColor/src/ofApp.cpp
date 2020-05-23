#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofBackground(200);
    
    
    for(int i = 0; i < numSquares; i++){
        Square s;
        s.setup(0, 500 - 100 * i);
        s.setColor(ofColor(200 - 50 * i, 11, 90, 255));
        squares.push_back(s);
    }
    
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
    s1.setColor(ofColor(250, 11, 90, 255));
    s1.draw();
    
    
    if(squares[0].getIsShow()){
        squares[0].decreaseAlpha();
        squares[0].draw();
    }
    
    if(squares[0].getAlpha() < 127){
        squares[1].setIsShow(true);
    }
    
    if(squares[1].getIsShow()){
        squares[1].decreaseAlpha();
        squares[1].draw();
    }
    
    if(squares[1].getAlpha() < 127){
        squares[2].setIsShow(true);
    }
    
    if(squares[2].getIsShow()){
        squares[2].decreaseAlpha();
        squares[2].draw();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(OF_KEY_RETURN){
        squares[0].setIsShow(true);
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
