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
    //シェーダー系
    float hue = 0.0;
    ofShader shader;
    
    enum Facemode
    {
        depression, superCry, cry, normal, smile
    };
    Facemode facemode;
    
public:
    Face();
    void setFaceWidth(int _chatWidth);
    int getFaceWidth();
    //Facemode系
    void setFaceMode(Facemode _facemode);
    int getFaceMode();
    void goNextFaceMode();
    
    void update();
    void draw();
    void drawEyes();
    
};
#endif /* Face_hpp */
