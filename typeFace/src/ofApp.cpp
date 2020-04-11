#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(fontSize.setup("font size", 20, 10, 100));
    gui.add(posRandom.setup("position random", ofVec2f(200,222), ofVec2f(0, 0), ofVec2f(300, 400) ));
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

//--------------------------------------------------------------
void ofApp::update(){
//    ofTrueTypeFontSettings settings("AquaKana.ttc", fontSize);
//    settings.antialiased = true;
//    settings.addRanges(ofAlphabet::Japanese);
//    font.load(settings);
    
    
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
        for(int k = 0; k < 100; k++){
            font.drawString("あ",
            haar.blobs[i].boundingRect.x + ofRandom(posRandom->x),
            haar.blobs[i].boundingRect.y + ofRandom(-50, posRandom->y)
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
