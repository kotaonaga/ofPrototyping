#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(noiseScale.setup("noiseScale", 0.442, 0.1, 1.0));
    gui.add(noiseScale2.setup("noiseScale2", 0.54, 0.1, 1.0));
    ofSetFrameRate(60);
    ofSetWindowTitle("openFrameworks");
    
    ofBackground(239);
    ofSetLineWidth(2.5);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//    float time = ofGetElapsedTimef();
//    ofBackground(239);
//    ofPushMatrix();
//    ofTranslate(ofGetWidth() * 0.5, ofGetHeight() * 0.5);
//
//    auto radius = 300;
//
//    vector<glm::vec2> vertices;
//    for(float deg = 0; deg < 360; deg += 0.3) {
//
//        auto base_location = glm::vec2(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD));
//        auto noise_radius = ofMap(ofNoise(base_location.x * 0.005, base_location.y * 0.005, (ofGetFrameNum()) * 0.01),
//                                  0, 1, radius * noiseScale, radius * noiseScale2);
//        auto location = glm::vec2(noise_radius * cos(deg * DEG_TO_RAD), noise_radius * sin(deg * DEG_TO_RAD));
//
//        vertices.push_back(location);
//    }
//
//    ofFill();
//    ofSetColor(12,34,129, abs(sin(time)) * 255);
//    ofBeginShape();
//    ofVertices(vertices);
//    ofEndShape(true);
//    //
////    ofNoFill();
////    ofSetColor(39);
////    ofBeginShape();
////    ofVertices(vertices);
////    ofEndShape(true);
//    vertices.clear();
//    ofPopMatrix();
    gui.draw();
    //       }
    
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
