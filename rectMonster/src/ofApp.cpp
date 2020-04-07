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
    count = count + 0.5;
}

//--------------------------------------------------------------
void ofApp::draw(){
    colorScale = scaleSlider;
    cam.begin();
    
    ofPushMatrix();
    ofBackground(bgSlider);
    
    ofRotateZ(glm::radians(count * 3.0));
    ofRotateX(glm::radians(count * 5.0));
    ofRotateY(glm::radians(count * 5.0));
    
    for (int x = 0; x < colorScale; x++) {
        for (int y = 0; y < colorScale; y++) {
            for (int z = 0; z < colorScale; z++) {
                ofPushMatrix();
                ofTranslate(numberChanger(x), numberChanger(y), numberChanger(z));
                ofSetColor(x, y, z, 80);
                
                float r = ofRandom(10);
                ofRotateX(glm::radians(count * x * 3 * ofNoise(r)));
                ofRotateX(glm::radians(count * x * 3 * ofNoise(r)));
                ofRotateX(glm::radians(count * x * 3 * ofNoise(r)));
                ofDrawRectangle(0, 0, 500 * ofNoise(r) * 2, 500 * ofNoise(r) * 3);
                ofPopMatrix();
            }
        }
    }
    ofPopMatrix();
    
    
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

int ofApp::numberChanger(int _num) {
  return _num * 20 - 40;
}
