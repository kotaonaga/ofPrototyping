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
    ofImage smileMouse;
    Eye eye;
    
public:
    //Facemodeがpublicは望ましくない気がする。
    enum Facemode
    {
        depression, superCry, cry, normal, smile
    };
    Facemode facemode;
    
    Face();
    void setFaceWidth(int _chatWidth);
    int getFaceWidth();
    //Facemode系
    void setFaceMode(Facemode _facemode);
//    Facemode getFaceMode();
//    int getFaceMode();
    void goNextFaceMode();
    
    
    int testGetInt();
    void update();
    void draw();
    
};
#endif /* Face_hpp */
