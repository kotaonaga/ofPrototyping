#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#define rectNum 40
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
    ofxIntSlider angle;
    ofxIntSlider size;
    ofxIntSlider hue;
    ofxIntSlider b;
    ofxIntSlider s;
    
    
    int width = ofGetWidth();
    int height = ofGetHeight();
    
    int rectSize[rectNum];
    int rectAngle[rectNum];
    int rotateAngle;
    ofColor rectColor;
    
};
