#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"

class Face{
private:
    int mode;
    
    static int openedTime;
    static int closedTime;
    static Boolean isClosed;
    static int eyeSize;
    static int faceWidth;
    enum struct Facemode
    {
        depression, superCry, cry, normal, smile
    };
    Facemode facemode;
    
public:
    Face();
    void setFaceWidth(int _chatWidth);
    int getFaceWidth();
    void draw();
//    void drawSkin();
    void drawEyes();
    
};
#endif /* Face_hpp */
