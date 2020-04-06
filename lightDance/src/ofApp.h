#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#define lightNum 8

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
    ofxFloatSlider rSlider;
    ofxIntSlider backGroundSlider;
    ofParameter <ofVec3f> uiPosition;
    
    
    ofEasyCam cam;
    ofLight light1;
    ofLight light2;
    
    ofLight lights[lightNum];
    
    ofColor lightColor;
    float colorHue;
    
    //球体の座標
    float x[lightNum];
    float y[lightNum];
    float angle = 0;
    float R = 100;
    float startPos[lightNum];
};
