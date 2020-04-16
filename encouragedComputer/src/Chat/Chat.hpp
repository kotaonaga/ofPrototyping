#ifndef Chat_hpp
#define Chat_hpp

#include <stdio.h>
#include "ofMain.h"

class Chat {
private:
    int chatWidth = 250;
    int posX = 0;
    static ofTrueTypeFont font;
    static string displayedText;
    static int textPos;
    
public:
    Chat();
    int getChatWidth();
    void setPos(int _faceWidth);
    void draw();
    void setText(string _textTyped);
    string getText();
    void drawText();
    void moveText();
    void resetTextPos();
    int getTextPos();
};
#endif /* Chat_hpp */
