#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofBackground(200);
    
    
    for(int i = 0; i < numSquares; i++){
        Square s;
        s.setup(0, 500 - 100 * i);
        s.setColor(ofColor(150 - 50 * i, 11, 90, 255));
        squares.push_back(s);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < numSquares; i++){
        //次の正方形を見せる。
        if(squares[i].getAlpha() < 127){
            squares[i+1].setIsShow(true);
        }
        
        //透明度0になった正方形復活。
        if(squares[i].getAlpha() < 0){
            squares[i].setIsShow(false);
            squares[i].setAlpha(255);
        }
    }
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
    
    
    //描かれたら透明度が減っていく。
    for(int i = 0; i < numSquares; i++){
        if(squares[i].getIsShow()){
            squares[i].decreaseAlpha();
            squares[i].draw();
        }
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
