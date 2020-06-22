//
//  Shape.cpp
//  natureDrum
//
//  Created by kota on 2020/06/14.
//

#include "Shape.hpp"

Shape::Shape(){
    posX = 0;
    posY = 100;
}

void Shape::setIsDrawen(bool _isDrawen){
    isDrawen = _isDrawen;
}

void Shape::update(){
    if(isDrawen == false) posX = 0;
    posX += 30;
    if(posX > ofGetWidth()) posX = 0;
    
}

void Shape::draw(){
    if(isDrawen){
        ofDrawCircle(posX, posY, 120);
    }
}
