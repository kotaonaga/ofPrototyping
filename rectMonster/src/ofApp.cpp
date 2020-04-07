#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofRectMode(OF_RECTMODE_CORNER);
    
    gui.setup();
    gui.add(bgSlider.setup("background", 0, 0, 255));
    gui.add(scaleSlider.setup("scale",4, 4, 20));
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    colorScale = scaleSlider;
    cam.begin();
    ofBackground(bgSlider);
    for (int x = 0; x < colorScale; x++) {
        for (int y = 0; y < colorScale; y++) {
            for (int z = 0; z < colorScale; z++) {
                ofPushMatrix();
                ofTranslate(x,y,z);
                ofSetColor(x, y, z, 80);
                float r = ofRandom(10);
                ofRotateX(glm::radians(count * x));
                ofRotateY(glm::radians(count * y));
                ofRotateZ(glm::radians(count * z));
                ofDrawRectangle(0, 0, 500, 500);
                ofPopMatrix();
            }
        }
    }
    count = count + 0.5;
    cam.end();
    
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
