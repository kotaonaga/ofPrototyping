//
//  Button.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/13.
//

#include "Button.hpp"


Button::Button(){
    
}

void Button::draw(){
    ofSetColor(255);
    ofDrawCircle(ofGetWidth() - 100, ofGetHeight() - 100, 100);
}
