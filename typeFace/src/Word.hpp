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
    
    int x;
    int y;
    
public:
    static ofTrueTypeFont font;
    static Boolean isInitialized;
    Word();
    void init();
    void setup();
    void setColor();
    void setPos(int _x, int _y);
    void draw();
    
    
};

#endif /* Word_hpp */
