#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1000, 800);

    trail.resize(8);
    y.resize(8); //可変長配列の大きさを8に。
    
    x = 0;
    prevX = 0;
    y[0] = 60*2;
    radius = 3;
    rightMargin = 200; //右端からの距離
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void ofApp::update(){
    t = ofGetElapsedTimef();
    if(trail[0].size() == 0){
        initTime = t;
    }
    t = t - initTime;
    
    x = int(t * 80) % (ofGetWidth()-rightMargin);
    y[1] = 60*3 + 5 * sin(theta);
    y[2] = 60*4 + 5 * tan(theta);
    theta++;
    
    cout << (x < prevX) << endl;
    
    if(x < prevX){
        trail[0].clear();
        trail[1].clear();
        trail[2].clear();
    }else{
        trail[0].addVertex(x,y[0]); //trailにvertexを加えてけ！
        trail[1].addVertex(x,y[1]);
        trail[2].addVertex(x,y[2]);
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
    ofBackgroundGradient(pink, bay, OF_GRADIENT_LINEAR);
    ofSetColor(255);
    ofEnableSmoothing();
    
    ofDrawCircle(x, y[0], radius);
    ofDrawCircle(x, y[1], radius);
    ofDrawCircle(x, y[2], radius);
    trail[0].draw();
    trail[1].draw();
    trail[2].draw();
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
