#include "ofApp.h"

void ofApp::setup(){
    gui.setup();
    gui.add(fontSize.setup("font size", 20, 10, 100));
    gui.add(wordsNum.setup("word number", 30, 10, 100));
    gui.add(posRandom.setup("position random", ofVec2f(200,240), ofVec2f(0, 0), ofVec2f(300, 400) ));
    ofBackground(40);
    ofTrueTypeFontSettings settings("AquaKana.ttc", 35);
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
//    ofBackground(40);
    color.draw(0, 0);
    
    for (int i = 0; i < haar.blobs.size(); i++) {
        
        for(int k = 0; k < wordsNum; k++){
//            ofSetColor((int) ofRandom(4));
//            ofSetColor(100);
            font.drawString(words[(int) ofRandom(5)],
            haar.blobs[i].boundingRect.x + ofRandom(-50, posRandom->x),
            haar.blobs[i].boundingRect.y + ofRandom(-100, posRandom->y)
            );
        }
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
