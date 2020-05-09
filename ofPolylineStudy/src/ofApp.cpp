#include "ofApp.h"

//ポインタの練習
//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableBlendMode(OF_BLENDMODE_SCREEN);
    ofSetWindowShape(800, 800);
    
    pinkPtr = &pink;
    bayPtr = &bay;
    
    trail.resize(8);
    y.resize(8); //可変長配列の大きさを8に。
    
    x = 0;
    prevX = 0;
    y[0] = 60*2;
    radius = 3;
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void ofApp::update(){
    t = ofGetElapsedTimef();
    if(trail[0].size() == 0){
        initTime = t;
    }
    t = t - initTime;
    
    float noiseStep = ofRandom(100);
    x = int(t * 80) % (ofGetWidth());
    y[1] = 60*3 + 80 * ofNoise(noiseStep) * sin(theta * 0.3);
    ofLog() << ofNoise(noiseStep);
//    y[2] = 60*4 + 5 * tan(theta);
    theta++;
    
    cout << (x < prevX) << endl;
    
    if(x < prevX){
        for(int i = 0; i < trail.size(); i++){
            trail[i].clear();
        }
    }else{
        for(int i = 0; i < trail.size(); i++){
            trail[i].addVertex(x,y[i]);
        }
    }
    /*
     (t * 120は速度。1秒間にどれだけ進むか)
     1000 - 200 = 800これで割ったあまりは？
     t = 0 x = 0 % 800 = 0
     t = 1 x = 1 % 800 = 1
     t = 2 x = 2 % 800 = 2
           x = 799 % 800 = 799
     */
    prevX = x;
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofBackgroundGradient(*bayPtr, *pinkPtr, OF_GRADIENT_LINEAR);
    ofBackground(0);
    ofSetColor(*pinkPtr, 210 * abs(sin(t)) + 40);
    ofLog() << 210 * abs(sin(t)) + 40;
    ofEnableSmoothing();
    
    for(int i = 0; i < trail.size(); i++){
        ofDrawCircle(x, y[i], radius);
        trail[i].draw();
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
