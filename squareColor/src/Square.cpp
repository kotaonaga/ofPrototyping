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
}

void Square::setup(int _posX, int _posY){
    posX = _posX;
    posY = _posY;
}

void Square::update(){
    
}

void Square::draw(){
    ofFill();
    ofSetColor(color, alpha);
    ofDrawRectangle(posX, posY, 100, 100);
}

void Square::setColor(ofColor _color){
    color = _color;
}


void Square::decreaseAlpha(){
    alpha -= 7.0;
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
