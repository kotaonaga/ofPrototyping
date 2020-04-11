//
//  Word.hpp
//  typeFace
//
//  Created by kota on 2020/04/12.
//


#ifndef Word_hpp
#define Word_hpp

#include "ofMain.h"
#include <stdio.h>
class Word{
private:
    vector<string> words{"あああ","帰りたい","寝たい","休みたい","泣きたい", "きゃああ"};
    ofColor clearTurquoise = ofColor(13,184,218);
    ofColor brightYellow = ofColor(255,230,0);
    ofColor springGreen = ofColor(163,202,15);
    ofColor brightPink = ofColor(201,66,132);
    ofColor brilliantOrange = ofColor(234,85,25);
    vector<ofColor> wordsColor{clearTurquoise, brightYellow,springGreen,brightPink,brilliantOrange};
    string displayedWord;
    ofColor displayedWordColor;
    ofTrueTypeFont font;
    int x;
    int y;
    
public:
    Word();
    void setup();
    void setColor();
    void setPos(int _x, int _y);
    void draw(int _x, int _y);
    
    
};

#endif /* Word_hpp */
