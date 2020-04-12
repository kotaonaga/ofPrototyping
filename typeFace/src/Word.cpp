#include "Word.hpp"

Boolean Word::isInitialized  = false;
ofTrueTypeFont Word::font;

Word::Word(){
    //ofApp.hのisFirstを使っているのでよろしくない。
    
}

void Word::init(){
    if(Word::isInitialized == false){
        ofTrueTypeFontSettings settings("AquaKana.ttc", 35);
        settings.antialiased = true;
        settings.addRanges(ofAlphabet::Japanese);
        Word::font.load(settings);
        
        Word::isInitialized = true;
        cout << "初期化したよ！" << endl;
    }
}

void Word::setup(){
    init();
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

void Word::draw(){
    ofSetColor(displayedWordColor);
    Word::font.drawString(displayedWord, x,y);
}
