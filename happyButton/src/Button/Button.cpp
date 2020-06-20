//
//  Button.cpp
//  happyButton
//
//  Created by kota on 2020/06/21.
//

#include "Button.hpp"

Button::Button(){
    
}

void Button::draw(){
    ofSetColor(23, 65, 233, 180);
    ofDrawRectangle(200, 200, 300, 100);
}

void Button::drawLink(){
    link.draw();
}
