#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(40);
    ofTrueTypeFontSettings settings("AquaKana.ttc", 10);
    settings.antialiased = true;
    settings.addRanges(ofAlphabet::Japanese);
    font.load(settings);
    
    //haar
    camera.setup(640, 480);
    
    color.allocate(camera.getWidth(), camera.getHeight());
    gray.allocate(camera.getWidth(), camera.getHeight());
    
    haar.setup("haarcascade_frontalface_default.xml");
    haar.setScaleHaar(3);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    camera.update();
    
    if (camera.isFrameNew()){
        color.setFromPixels(camera.getPixels());
        gray = color;
        haar.findHaarObjects(gray);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    color.draw(0, 0);
    
    for (int i = 0; i < haar.blobs.size(); i++) {
        ofSetColor(255);
        ofNoFill();
        ofDrawEllipse(haar.blobs[i].boundingRect.x,
                      haar.blobs[i].boundingRect.y,
                      haar.blobs[i].boundingRect.width,
                      haar.blobs[i].boundingRect.height
                      );
    }
    ofSetColor(255);
    for(int i = 0; i< 45; i++){
        font.drawString("あ", 100 + ofRandom(-20, 20), 400 + ofRandom(-20, 20));
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
