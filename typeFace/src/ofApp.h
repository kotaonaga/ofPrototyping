#pragma once

#include "ofMain.h"
#include "ofxCvHaarFinder.h"
#include "ofxGui.h"

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
    
    ofTrueTypeFont font;
    
    //GUI
    ofxPanel gui;
    ofxIntSlider fontSize;
    ofxIntSlider wordsNum;
    ofxVec2Slider posRandom;
    
//    vector<string> words{"あああ","帰りたい","寝たい","休みたい","泣きたい", "きゃああ"};
    
//    ofColor clearTurquoise = ofColor(13,184,218);
//    ofColor brightYellow = ofColor(255,230,0);
//    ofColor springGreen = ofColor(163,202,15);
//    ofColor brightPink = ofColor(201,66,132);
//    ofColor brilliantOrange = ofColor(234,85,25);
    
//    vector<ofColor>
//    wordsColor{clearTurquoise, brightYellow,springGreen,brightPink,brilliantOrange};
};
