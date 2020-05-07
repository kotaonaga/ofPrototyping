#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Globals.hpp"
#include "Eye.hpp"


class Face{
private:
    //シェーダー系
    float hue = 0.0;
    ofShader shader;
    ofImage smileMouse;
    
    shared_ptr<Globals::Mode> mode;
    unique_ptr<Eye> eye;
    
public:
    //TODO: この処理cppで書いた方が良さそう。
    Face();
    void dump();
    void randomize();
    //Facemode系
    void goNextFaceMode();
    void update();
    void draw();
    
};
#endif /* Face_hpp */
