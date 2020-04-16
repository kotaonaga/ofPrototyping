#ifndef Button_hpp
#define Button_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxSvg.h"

class Button{
private:
    int radius = 80;
    float step;
    ofImage img;
    ofxSVG svg;
    vector<ofPolyline> outlines;
    
public:
    Button();
    void draw();
    
};

#endif /* Button_hpp */
