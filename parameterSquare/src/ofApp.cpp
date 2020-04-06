#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(angle.setup("angle", 0, 0, 360));
    gui.add(size.setup("size", 400, -100, 400));
    gui.add(hue.setup("hue", 124, 0, 255));
    gui.add(b.setup("s", 187, 0, 255));
    gui.add(s.setup("b", 198, 0, 255));
    
    ofNoFill();
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for(int i = 0; i < rectNum; i++){
        rectSize[i] = ofRandom(40, 400);
        rectAngle[i] = ofRandom(20, 180);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    rotateAngle++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    rectColor.setHsb(hue, s, b);
    ofBackground(0);
    
    for(int i = 0; i < rectNum; i++){
        ofPushMatrix();
        ofTranslate(width/2, height/2);
        ofRotate(rotateAngle);
        ofRotate(rectAngle[i] + angle);
        ofSetColor(rectColor);
        ofDrawRectangle(0, 0, rectSize[i] + size, rectSize[i] + size);
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
