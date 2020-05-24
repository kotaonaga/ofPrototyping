#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofBackground(220);
    
    for(int posX = 0; posX < numFixedSquares; posX++){
        Square s;
        s.setup(posX + 100 * posX, 500);
        s.setHsb(255 - posX * 45, 170, 240);
        fixedSquares.push_back(s);
    }
    
    //まずは縦を作る。y座標。movingSに突っ込む
    for(int i = 0; i < numMovingSquares; i++){
        Square s;
        s.setup(0, 400 - 100 * i);
        s.setHsb(255, 170 - 20 * i, 240);
        movingSquares.push_back(s);
    }
    
    for(int i = 0; i < numMovingSquares; i++){
        movingMatrixSquares.push_back(movingSquares);
    }
    
    for(int i = 0; i < numMovingSquares; i++){
        for(int j = 0; j < numMovingSquares; j++){
            movingMatrixSquares[i][j].setup(100 * i, 400 - 100 * j);
        }
    }
    
    ofLog() << movingMatrixSquares[0][1].getPosX();
    ofLog() << movingMatrixSquares[1][1].getPosX();
//    movingMatrixSquares.push_back(movingSquares);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < numMovingSquares; i++){
        //次の正方形を見せる。
        if(movingSquares[i].getAlpha() < 127){
            movingSquares[i+1].setIsShow(true);
        }
        
        //透明度0になった正方形復活。
        if(movingSquares[i].getAlpha() < 0){
            movingSquares[i].setIsShow(false);
            movingSquares[i].setAlpha(255);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int posX = 0; posX < numFixedSquares; posX++){
        fixedSquares[posX].draw();
    }
    
//    s1.setup(0, 500);
//    s1.setHsb(255, 180, 240);
//    s1.draw();
    
    
    //描かれたら透明度が減っていく。
    for(int i = 0; i < numMovingSquares; i++){
        if(movingSquares[i].getIsShow()){
            movingSquares[i].decreaseAlpha();
            movingSquares[i].draw();
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'a'){
        movingSquares[0].setIsShow(true);
    }
    
    if(key == 's'){
        movingMatrixSquares[1][0].setIsShow(true);
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
