#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setDistance(300);
    
    //球
    radius = 10;
    r = 20;
    b = 20;
    
    for(int i = 0; i < sphereNum; i++){
        radiusArray[i] = radius;
    }
    
    //音系
    for(int i = 0; i < sphereNum; i++){
        reverberation[i] = false;
    }
    
    gui.setup();
    gui.add(backGroundSlider.setup("backGround", 230, 0, 255));
    gui.add(rgbSlider.setup("rgb", ofVec4f(20,30,20, 25),ofVec4f(0,0,0, 0), ofVec4f(20, 255, 20, 100)));
    
    d.load("do.mp3");
    re.load("re.mp3");
    mi.load("mi.mp3");
    fa.load("fa.mp3");
    so.load("so.mp3");
    ra.load("ra.mp3");
    si.load("si.mp3");
    d1.load("1do.mp3");
    re2.load("2re.mp3");
    mi3.load("3mi.mp3");
    fa4.load("4fa.mp3");
    so5.load("5so.mp3");
    ra6.load("6ra.mp3");
    si7.load("7si.mp3");
    d8.load("8do.mp3");
    am_chord.load("am_chord.mp3");
    c_chord.load("c_chord.mp3");
    drum2_cymbal.load("drum2_cymbal.mp3");
    drum2_hat.load("drum2_hat.mp3");
    drum2_snare.load("drum2_snare.mp3");
    drum2_tom1.load("drum2_tom1.mp3");
    drum2_tom2.load("drum2_tom2.mp3");
    drum2_tom3.load("drum2_tom3.mp3");
    f_chord.load("f_chord.mp3");
    g_chord.load("g_chord.mp3");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < sphereNum; i++){
        if(reverberation[i]){
            radiusArray[i] += 10;
        }else if(radiusArray[i] > 10){
            radiusArray[i] -= 10;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    time = ofGetElapsedTimef();
    
    ofBackground(backGroundSlider);
    cam.begin();
    ofNoFill();
    for(int x = 0; x < sphereNum/4; x++){
        for(int y = 0; y < sphereNum/4; y++){
            spherePos[x][y] = radiusArray[x + 4*y];
            ofPushMatrix();
            ofTranslate(30 * x, 30 * y);
            ofSetColor(rgbSlider->x + r*x, 30, rgbSlider->z + b*y, rgbSlider->w);
            ofDrawSphere(radiusArray[x + 4*y]);
            ofPopMatrix();
        }
    }
    
    
    cam.end();
   
    for(int i = 0; i < sphereNum; i++){
        if(time - keyPressedTime[i] > 0.5){
            reverberation[i] = false;
        }
    }
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'a') {
        keyPressedTime[0] = ofGetElapsedTimef();
        d.play();
        reverberation[0]  = true;
    }else if(key == 'b'){
        keyPressedTime[1] = ofGetElapsedTimef();
        re.play();
        reverberation[1]  = true;
    }else if(key == 'c'){
        keyPressedTime[2] = ofGetElapsedTimef();
        mi.play();
        reverberation[2]  = true;
    }else if(key == 'd'){
        keyPressedTime[3] = ofGetElapsedTimef();
        fa.play();
        reverberation[3]  = true;
    }else if(key == 'e'){
        keyPressedTime[4] = ofGetElapsedTimef();
        so.play();
        reverberation[4]  = true;
    }else if(key == 'f'){
        keyPressedTime[5] = ofGetElapsedTimef();
        ra.play();
        reverberation[5]  = true;
    }else if(key == 'g'){
        keyPressedTime[6] = ofGetElapsedTimef();
        si.play();
        reverberation[6]  = true;
    }else if(key == 'h'){
        keyPressedTime[7] = ofGetElapsedTimef();
        d8.play();
        reverberation[7]  = true;
    }else if(key == 'i'){
        keyPressedTime[8] = ofGetElapsedTimef();
        re2.play();
        reverberation[8]  = true;
    }else if(key == 'j'){
        keyPressedTime[9] = ofGetElapsedTimef();
        mi3.play();
        reverberation[9]  = true;
    }else if(key == 'k'){
        keyPressedTime[10] = ofGetElapsedTimef();
        fa4.play();
        reverberation[10]  = true;
    }else if(key == 'l'){
        keyPressedTime[11] = ofGetElapsedTimef();
        so5.play();
        reverberation[11]  = true;
    }else if(key == 'm'){
        keyPressedTime[12] = ofGetElapsedTimef();
        ra6.play();
        reverberation[12]  = true;
    }else if(key == 'n'){
        keyPressedTime[13] = ofGetElapsedTimef();
        si7.play();
        reverberation[13]  = true;
    }else if(key == 'o'){
        keyPressedTime[14] = ofGetElapsedTimef();
        d1.play();
        reverberation[14]  = true;
    }else if(key == 'p'){
        keyPressedTime[15] = ofGetElapsedTimef();
        am_chord.play();
        reverberation[15]  = true;
    }
    
//    if(key == 'b') radiusArray[1] += 10; re.play();
//    if(key == 'c') radiusArray[2] += 10; mi.play();
//    if(key == 'd') radiusArray[3] += 10; fa.play();
//    if(key == 'e') radiusArray[4] += 10; so.play();
//    if(key == 'f') radiusArray[5] += 10; ra.play();
//    if(key == 'g') radiusArray[6] += 10; si.play();
//    if(key == 'h') radiusArray[7] += 10; d1.play();
//    if(key == 'i') radiusArray[8] += 10; re2.play();
//    if(key == 'j') radiusArray[9] += 10; mi3.play();
//    if(key == 'k') radiusArray[10] += 10; fa4.play();
//    if(key == 'l') radiusArray[11] += 10; so5.play();
//    if(key == 'm') radiusArray[12] += 10; ra6.play();
//    if(key == 'n') radiusArray[13] += 10; si7.play();
//    if(key == 'o') radiusArray[14] += 10; d8.play();
//    if(key == 'p') radiusArray[15] += 10; am_chord.play();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
//    if(key == 'a') radiusArray[0] = 10;
//    if(key == 'b') radiusArray[1] = 10;
//    if(key == 'c') radiusArray[2] = 10;
//    if(key == 'd') radiusArray[3] = 10;
//    if(key == 'e') radiusArray[4] = 10;
//    if(key == 'f') radiusArray[5] = 10;
//    if(key == 'g') radiusArray[6] = 10;
//    if(key == 'h') radiusArray[7] = 10;
//    if(key == 'i') radiusArray[8] = 10;
//    if(key == 'j') radiusArray[9] = 10;
//    if(key == 'k') radiusArray[10] = 10;
//    if(key == 'l') radiusArray[11] = 10;
//    if(key == 'm') radiusArray[12] = 10;
//    if(key == 'n') radiusArray[13] = 10;
//    if(key == 'o') radiusArray[14] = 10;
//    if(key == 'p') radiusArray[15] = 10;
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
