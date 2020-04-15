#include "Clock.hpp"

float Clock::time = 0.0;
float Clock::pos = 0.0;
float Clock::prevPos = 0.0;
int Clock::fall = 0;
float Clock::addedHue = 0.0;
int Clock::dialAlpha = 100;

Clock::Clock(){
    ofSetLineWidth(4);
    font.load("MPLUSRounded1c-Regular.ttf", 50);
}

void Clock::increaseFall(int _num){
    fall += _num;
}

void Clock::decreaseAlpha(float _num){
    dialAlpha -= _num;
}

void Clock::drawHand(){
    ofBackground(234, 246, 253);
    
    //時計の針
    time = ofGetElapsedTimeMillis() / 1000;
    pos = fmod(time, 12);
    if(prevPos != pos){
        fall = 0;
        dialAlpha = 100;
        addedHue = 0;
    }
    prevPos = pos;
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    //針の色
    ofSetColor(248, 198, 189);
    ofRotate(pos * 30.0);
    ofLine(0, 0, 0, -280);
    ofPopMatrix();
}

void Clock::setDialColor(float _hue, float _saturation, float _brightness){
    addedHue = pos * 20;
    dialColor.setHueAngle(_hue + addedHue);
    saturation = _saturation;
    brightness = _brightness;
    s = ofMap(saturation, 0, 100, 0, 255);
    b = ofMap(brightness, 0, 100, 0, 255);
    
    dialColor.setSaturation(s);
    dialColor.setBrightness(b);
}

void Clock::drawDial(){
        //文字盤
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(pos * 30.0);
        rect = font.getStringBoundingBox(dials[pos], 0, -300);
        ofSetColor(dialColor);
        font.drawString(dials[pos], rect.x - rect.width/2, -300);
        ofPopMatrix();
}

void Clock::drawFallingDial(){
        //文字盤落下
            ofPushMatrix();
            ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
            ofRotate( (pos - 1) * 30.0);
            rect = font.getStringBoundingBox(dials[pos], 0, -300);
        ofSetColor(dialColor, dialAlpha);
            font.drawString(fallenDials[pos], rect.x - rect.width/2, -300 + fall);
            ofPopMatrix();
    
        prevPos = pos;
}
