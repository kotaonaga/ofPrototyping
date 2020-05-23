//
//  Square.cpp
//  squareColor
//
//  Created by kota on 2020/05/23.
//

#include "Square.hpp"

Square::Square(){
    alpha = 255;
    color = ofColor(0, 255, 0);
    color.setHsb(255, 180, 240);
}

void Square::setup(int _posX, int _posY){
    posX = _posX;
    posY = _posY;
}

void Square::update(){
    
}

void Square::draw(){
//    ofNoFill();
    ofSetColor(color, alpha);
    ofDrawRectangle(posX, posY, 100, 100);
}

void Square::setHsb(float _hue, float _saturation, float _brightness){
    color.setHsb(_hue, _saturation, _brightness);
}


void Square::decreaseAlpha(){
    alpha -= 10.0;
}

void Square::setIsShow(bool _isShow){
    isShow = _isShow;
}

bool Square::getIsShow(){
    return isShow;
}

void Square::setAlpha(int _alpha){
    alpha = _alpha;
}
int Square::getAlpha(){
    return alpha;
}
