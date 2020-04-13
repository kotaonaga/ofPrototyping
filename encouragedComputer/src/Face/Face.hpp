#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"

class Face{
private:
    int mode;
    
    int openedTime = 0;
    int closedTime = 0;
    Boolean isClosed = false;
    int eyeSize = 60;
    int faceWidth;
    
public:
    Face();
    void setFaceWidth(int _chatWidth);
    void draw();
    
};
#endif /* Face_hpp */
