//
//  Circle.cpp
//  gradientShake
//
//  Created by kota on 2020/04/10.
//

#include "Circle.hpp"

Circle::Circle(){

}

void Circle::draw(){
    ofSetColor(circleColor);
    ofDrawRectRounded(posX, posY, 300,300, radius);
}

void Circle::setPos(int _posX, int _posY){
    posX = _posX;
    posY = _posY;
}


void Circle::setRaduis(int _radius){
    radius = _radius;
}


void Circle::setColor(ofColor _color){
    circleColor = _color;
}

