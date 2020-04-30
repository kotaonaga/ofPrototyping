#pragma once

#include "ofMain.h"
//#include "ofxGui.h"
#include "Chat.hpp"
#include "Face.hpp"
#include "Eye.hpp"
#include "Tear.hpp"

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
    
//    ofImage img;
    
    Face face;
    Chat chat;
//    Eye eye;
    
    int textMode = 0;
    string textTyped;
    
    Tear tear;
    vector<Tear> rightTears;
    vector<Tear> leftTears;
    
//    ofxPanel gui;
//    ofxIntSlider rSlider;
//    ofxIntSlider aSlider;
    
};
