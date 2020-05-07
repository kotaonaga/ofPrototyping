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
    //TODO: この処理cppで書いた方が良さそう。
    Face(){
        ofLog() << "Faceが呼ばれたよ";
        mode = make_shared<Globals::Mode>();
//        ofLog() << mode;
        *mode = Globals::Mode::depression;
//        ofLog() << *mode;
        eye = make_unique<Eye>(mode);
    };
    
    shared_ptr<Globals::Mode> mode;
    unique_ptr<Eye> eye;
    
    void randomize();
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
