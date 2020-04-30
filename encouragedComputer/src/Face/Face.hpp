#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Eye.hpp"

class Face{
private:
    int mode;
    static int faceWidth;
    //シェーダー系
    float hue = 0.0;
    ofShader shader;
    
    //顔系
    enum Facemode
    {
        depression, superCry, cry, normal, smile
    };
    Facemode facemode;
    ofImage img;
    Eye eye;
    
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
    
};
#endif /* Face_hpp */
