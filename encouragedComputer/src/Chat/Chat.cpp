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
    font.load("MPLUSRounded1c-Regular.ttf", 50);
}

int Chat::getChatWidth(){
    return chatWidth;
}

void Chat::setPos(int _faceWidth){
    posX = _faceWidth;
}

int Chat::getTextPos(){
    return textPos;
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
    font.drawString(displayedText, textPos, ofGetHeight() - 200);
}

void Chat::moveText(){
    textPos += 14;
}

void Chat::resetTextPos(){
    cout << "リセットしたよ" << endl;
    textPos = 50;
}
