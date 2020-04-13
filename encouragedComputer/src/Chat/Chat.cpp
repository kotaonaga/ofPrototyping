#include "Chat.hpp"
#include "ofMain.h"

ofTrueTypeFont Chat::font;
string Chat::displayedText = "";

Chat::Chat(){
//    ofTrueTypeFontSettings settings("MPLUSRounded1c-Regular.ttf", 40);
//    settings.antialiased = true;
//    settings.addRanges(ofAlphabet::Japanese);
//    font.load(settings);
    font.load("MPLUSRounded1c-Regular.ttf", 40);
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

void Chat::setText(string _textTyped){
    displayedText = _textTyped;
}

string Chat::getText(){
    return displayedText;
}

void Chat::drawText(){
    ofSetColor(255);
    font.drawString(displayedText, 0, ofGetHeight() - 100);
}
