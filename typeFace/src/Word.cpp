#include "Word.hpp"

Word::Word(){
    
}

void Word::setup(){
    ofTrueTypeFontSettings settings("AquaKana.ttc", 35);
    settings.antialiased = true;
    settings.addRanges(ofAlphabet::Japanese);
    font.load(settings);
    
    int r = (int) ofRandom(5);
    displayedWord = words[r];
}

void Word::setColor(){
    int j = (int) ofRandom(5);
    displayedWordColor = wordsColor[j];
}

void Word::setPos(int _x, int _y){
    x = _x;
    y = _y;
}

void Word::draw(int _x, int _y){
    ofSetColor(displayedWordColor);
    font.drawString(displayedWord, _x,_y);
}
