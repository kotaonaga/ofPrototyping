#pragma once

#include "ofMain.h"
#include "ofxCvHaarFinder.h"
#include "ofxGui.h"
#include "Word.hpp"

#define wordsNum 30

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
    
    ofVideoGrabber camera;
    
    ofxCvColorImage color;
    ofxCvGrayscaleImage gray;
    ofxCvHaarFinder haar;
    
    //GUI
    ofxPanel gui;
    ofxIntSlider fontSize;
    ofxIntSlider background;
    ofxVec2Slider posRandom;
    
    vector<Word> words;
};
