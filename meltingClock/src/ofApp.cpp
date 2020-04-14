#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
//    ofRectMode(OF_RECTMODE_CENTER);
    font.load("MPLUSRounded1c-Regular.ttf", 50);
}

//--------------------------------------------------------------
void ofApp::update(){
    fall += 5;
    dialAlpha -= 1.2;
}

//--------------------------------------------------------------
void ofApp::draw(){
    //時間が溶けていく
    ofBackground(234, 246, 253);
    
    //時計の針
    time = ofGetElapsedTimeMillis() / 1000;
    pos = fmod(time, 12);
    if(prevPos != pos){
        fall = 0;
        dialAlpha = 100;
        addedHue = 0;
    }
    prevPos = pos;
       
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    //針の色
    ofSetColor(248, 198, 189);
    ofRotate(pos * 30.0);
    ofLine(0, 0, 0, -280);
    ofPopMatrix();
    
    addedHue = pos * 20;
    dialColor.setHueAngle(112 + addedHue);
    
    cout << addedHue << endl;
    cout << dialColor.getHue() << endl;
    saturation = 13;
    brightness = 88;
    s = ofMap(saturation, 0, 100, 0, 255);
    b = ofMap(brightness, 0, 100, 0, 255);
    
//    cout << "s: " << s << endl;
//    cout << "b: " << b << endl;
    
    dialColor.setSaturation(s);
    dialColor.setBrightness(b);
    
//    int hex = dialColor.getHex();
//    cout << hex << endl;
    ofSetLineWidth(4);
    
    //文字盤
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(pos * 30.0);
    ofRectangle rect = font.getStringBoundingBox(dials[pos], 0, -300);
    ofSetColor(dialColor);
//    ofSetColor(176, 184, 214); //RGB
    font.drawString(dials[pos], rect.x - rect.width/2, -300);
    ofPopMatrix();
    
    //文字盤落下
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate( (pos - 1) * 30.0);
        rect = font.getStringBoundingBox(dials[pos], 0, -300);
    ofSetColor(dialColor, dialAlpha);
//    ofSetColor(176, 184, 214, dialAlpha); //RGB
        font.drawString(fallenDials[pos], rect.x - rect.width/2, -300 + fall);
        ofPopMatrix();
    
    prevPos = pos;
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
