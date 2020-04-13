//
//  Chat.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/13.
//

#include "Chat.hpp"
#include "ofMain.h"

Chat::Chat(){
    
}

int Chat::getChatWidth(){
    return chatWidth;
}

void Chat::setPos(int _faceWidth){
    posX = _faceWidth;
}


void Chat::draw(){
    ofSetColor(255);
    ofDrawRectangle(posX, 0, chatWidth, ofGetHeight());
}
