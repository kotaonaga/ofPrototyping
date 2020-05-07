#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Globals.hpp"
#include "Eye.hpp"


class Face{
private:
    static int faceWidth;
    //シェーダー系
    float hue = 0.0;
    ofShader shader;
    ofImage smileMouse;
//    Eye eye;
    
public:
    //Facemodeがpublicは望ましくない気がする。
//    enum Facemode
//    {
//        depression, superCry, cry, normal, smile
//    };
//    Facemode facemode;
//
    Face(){
        ofLog() << "Faceが呼ばれたよ";
        mode = make_shared<Globals::Mode>();
        *mode = Globals::Mode::depression;
        eye = make_unique<Eye>(mode);
    };
    
    shared_ptr<Globals::Mode> mode;
    unique_ptr<Eye> eye;
    
    void setFaceWidth(int _chatWidth);
    int getFaceWidth();
    //Facemode系
//    void setFaceMode(Facemode _facemode);
    //    Facemode getFaceMode();
    //    int getFaceMode();
    void goNextFaceMode();
    
    
    int testGetInt();
    void update();
    void draw();
    
};
#endif /* Face_hpp */
