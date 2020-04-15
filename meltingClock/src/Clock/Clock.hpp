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
    void setPosition();
    void fallReset();
    void increaseFall(int _num);
    void decreaseAlpha(float _num);
    void drawHand();
    void setDialColor(float _hue, float _saturation, float _brightness);
    void drawDial();
    void drawFallingDial();
};

#endif /* Clock_hpp */
