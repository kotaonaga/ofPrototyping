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
    circleColor.setBrightness(255);
    circleColor.setSaturation(255);
    ofSetColor(circleColor, 30);
    ofDrawRectRounded(posX, posY, 300,300, radius);
}

void Circle::setPos(int _posX, int _posY){
    posX = _posX;
    posY = _posY;
}


void Circle::setRaduis(int _radius){
    radius = _radius;
}


void Circle::setHue(int _hue){
    circleColor.setHue(_hue);
}

