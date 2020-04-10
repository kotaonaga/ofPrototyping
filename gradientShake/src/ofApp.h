#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Circle.hpp"
#define circleNum 4

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxPanel gui;
    ofxFloatSlider radius;
    ofxFloatSlider minRadius;
    ofxIntSlider hue[circleNum];
    Circle circles[circleNum];
    
    float rotateSpeed[circleNum] = {0.4, 0.8,1.2, 1.6};
    float angle[circleNum];
    float theta = 0;
    int startPos[circleNum] = {0, 10, 20, 30};
    int rectAngle;
    
};
