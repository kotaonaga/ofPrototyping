//
//  Word.cpp
//  typeFace
//
//  Created by kota on 2020/04/12.
//

#include "Word.hpp"

Word::Word(){
    
}

void Word::setup(){
    int r = (int) ofRandom(5);
    displayedWord = words[r];
}

void Word::setColor(){
    int j = (int) ofRandom(5);
    displayedWordColor = wordsColor[j];
}

void Word::draw(){
    
}
