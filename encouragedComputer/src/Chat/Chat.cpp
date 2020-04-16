#include "Chat.hpp"
#include "ofMain.h"

ofTrueTypeFont Chat::font;
string Chat::displayedText = "";
int Chat::textPos = 50;

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
    font.drawString(displayedText, 50, ofGetHeight() - 100);
}

void Chat::moveText(){
    textPos++;
    if(textPos > ofGetWidth()){
        mode = 0;
    }
}

void Chat::setMode(int _mode){
    mode = _mode;
}

int Chat::getMode(){
    return mode;
}
