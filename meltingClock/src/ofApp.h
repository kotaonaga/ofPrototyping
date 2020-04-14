#pragma once

#include "ofMain.h"

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
    
    float time;
    ofTrueTypeFont font;
    int r = 300;
    int x = 0;
    int y = 0;
    int fall = 0;
    float pos = 0;
    float prevPos = 0;
    vector<string> dials{"12", "1", "2", "3","4", "5", "6","7", "8", "9","10", "11"};
    
    vector<string> fallenDials{"11", "12", "1", "2", "3","4", "5", "6","7", "8", "9","10"};
};
