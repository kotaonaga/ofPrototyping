#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
}

//--------------------------------------------------------------
void ofApp::update(){
    shape.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    shape.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'a') {
        sound.setSound("beam0");
        shape
        .setIsDrawen(true);
    }
    if(key == 'b') sound.setSound("beam1");
    if(key == 'c') sound.setSound("beam2");
    if(key == 'd') sound.setSound("beam3");
    if(key == 'e') sound.setSound("beam4");
    sound.play();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == 'a'){
        shape.setIsDrawen(false);
    }
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
