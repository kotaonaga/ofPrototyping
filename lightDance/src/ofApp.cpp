#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(rSlider.setup("radius", 100.0, 100.0, 300.0) );
    gui.add(backGroundSlider.setup("background color", 0, 0, 255) );
    gui.add(uiPosition.set("position", ofVec3f(0,0,0), ofVec3f(-300,-300,-300), ofVec3f(300,300,300)));
    //色系
    for(int i = 0; i < lightNum; i++){
        lights[i].setup();
    }
    
    for(int i = 0; i < lightNum; i++){
        lights[i].setDiffuseColor( ofColor(0.f, 255.f, 0.f));
        lights[i].setSpecularColor( ofColor(255.f, 255.f, 255.f));
    }
    
    
    colorHue = ofRandom(0, 250);
    lightColor.setBrightness(180.f);
    lightColor.setSaturation(150.f);
    
    
    
    for(int i = 0; i < lightNum; i++){
        startPos[i] = 360/lightNum * i;
        cout << i << "number: " << startPos[i] << endl;
        cout << i << "cos: " << cos(startPos[i]) << endl;
        cout << i << "sin: " << sin(startPos[i]) << endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < lightNum; i++){
        startPos[i] += 0.5;
    }
  
    colorHue++;
    if(colorHue >= 255) colorHue = 0.f;
    lightColor.setHue(colorHue);
    
    for(int i = 0; i < lightNum; i++){
        lights[i].setDiffuseColor(lightColor);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    
    ofBackground(backGroundSlider);
    
    for(int i = 0; i < lightNum; i++){
        x[i] = rSlider * cos(glm::radians(startPos[i]));
        y[i] = rSlider * sin(glm::radians(startPos[i]));
    }
    
    
    ofEnableDepthTest(); //これ入れないとライトがボックスの中身まで照らしてしまう。
   
    for(int i = 0; i < lightNum; i++){
        lights[i].enable();
    }
    
    cam.begin();
    ofSetColor(lightColor);
  
    for(int i = 0; i < lightNum; i++){
        lights[i].setPosition(x[i], y[i], uiPosition->z);
    }
    
    for(int i = 0; i < lightNum; i++){
        ofDrawSphere(x[i], y[i], 0, 16);
    }
    
    ofSetColor(255,255,255);
    ofDrawBox(0,0,0,64);
    cam.end();
        for(int i = 0; i < lightNum; i++){
            lights[i].disable();
        }
    ofDisableDepthTest(); //これ入れないと他のところにまでライトが影響してしまう。
    
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
