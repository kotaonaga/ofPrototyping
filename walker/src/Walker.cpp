//
//  Walker.cpp
//  walker
//
//  Created by kota on 2020/05/29.
//

#include "Walker.hpp"

Walker::Walker(){
    
}

void Walker::setup(){
    posX = ofGetWidth()/2;
    posY = ofGetHeight()/2;
    stepSize = 1;
    diameter = 0.1;
}

void Walker::update(){
    
}

void Walker::draw(){
    for(int i = 0; i < 600; i++){
        direction = (Direction) ofRandom(0, 8);
        
        if (direction == NORTH) {
          posY -= stepSize;
        }
        else if (direction == NORTHEAST) {
          posX += stepSize;
          posY -= stepSize;
        }
        else if (direction == EAST) {
          posX += stepSize;
        }
        else if (direction == SOUTHEAST) {
          posX += stepSize;
          posY += stepSize;
        }
        else if (direction == SOUTH) {
          posY += stepSize;
        }
        else if (direction == SOUTHWEST) {
          posX -= stepSize;
          posY += stepSize;
        }
        else if (direction == WEST) {
          posX -= stepSize;
        }
        else if (direction == NORTHWEST) {
          posX -= stepSize;
          posY -= stepSize;
        }
        
        if (posX > ofGetWidth()) posX = 0;
        if (posX < 0) posX = ofGetWidth();
        if (posY < 0) posY = ofGetHeight();
        if (posY > ofGetHeight()) posY = 0;
        
        ofFill();
        ofSetColor(color, 56);
        ofDrawCircle(posX, posY, diameter);
    }

}

void Walker::setColor(ofColor _color){
    color = _color;
}

void Walker::setHex(int _hexColor){
    color.setHex(_hexColor);
}
