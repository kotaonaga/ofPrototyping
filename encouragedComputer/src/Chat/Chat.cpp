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


void Chat::draw(){
    ofSetColor(255);
    ofDrawRectangle(faceWidth, 0, chatWidth, ofGetHeight());
}
