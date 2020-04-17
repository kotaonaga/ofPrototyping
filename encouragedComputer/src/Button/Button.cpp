#include "Button.hpp"


Button::Button(){
    ofSetColor(0);
    img.load("send.png");
}

void Button::draw(){
    ofSetColor(255);
    ofDrawCircle(ofGetWidth() - (radius+20), ofGetHeight() - (radius+20), radius);
    ofPushMatrix();
    ofTranslate(ofGetWidth() - 400, ofGetHeight() - 400);
    ofScale(.1,.1);
    img.draw(0, 0);
    
    ofPopMatrix();
}


