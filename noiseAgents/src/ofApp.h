#pragma once

#include "ofMain.h"
#include "Agent.hpp"
//#include "Gui.hpp"
#include "ofxGui.h"

#define agentsNum 10000

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
		
    Agent agents[agentsNum];
//    float overlayAlpha = 90;
    
    ofxPanel gui;
    ofxFloatSlider noiseScale;
    ofxFloatSlider noiseStrength;
    ofxFloatSlider agentsAlpha;
    ofxFloatSlider overlayAlpha;
    
};
