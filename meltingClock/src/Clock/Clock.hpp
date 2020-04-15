#ifndef Clock_hpp
#define Clock_hpp

#include <stdio.h>
#include "ofMain.h"

class Clock {
private:
    ofColor dialColor = ofColor(0,0,0);
    float saturation = 0.0;
    float brightness = 0.0;
    float h = 0.0;
    float s = 0.0;
    float b = 0.0;
    ofRectangle rect;
    ofTrueTypeFont font;
    vector<string> dials{"12", "1", "2", "3","4", "5", "6","7", "8", "9","10", "11"};
    
    vector<string> fallenDials{"11", "12", "1", "2", "3","4", "5", "6","7", "8", "9","10"};
    
    static float time;
    static float pos;
    static float prevPos;
    static int fall;
    static float addedHue;
    static int dialAlpha;
    
public:
    Clock();
    void increaseFall(int _num); //文字を落下させる
    void decreaseAlpha(float _num); //文字の透明度を上げる
    void drawHand(); //時計の針を描く
    void setDialColor(float _hue, float _saturation, float _brightness); //文字盤の色を設定
    void drawDial(); //文字盤を描く
    void drawFallingDial(); //落下する文字盤を描く
};

#endif /* Clock_hpp */
