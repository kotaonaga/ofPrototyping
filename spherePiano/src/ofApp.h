#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#define sphereNum 16
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
    
    //球系
    int radius;
    int radiusArray[sphereNum];
    int spherePos[sphereNum/2][sphereNum/2];
    int r;
    int b;
    
    ofEasyCam cam;
    
    ofSoundPlayer d;
    ofSoundPlayer re;
    ofSoundPlayer mi;
    ofSoundPlayer fa;
    ofSoundPlayer so;
    ofSoundPlayer ra;
    ofSoundPlayer si;
    ofSoundPlayer d1;
    ofSoundPlayer re2;
    ofSoundPlayer mi3;
    ofSoundPlayer fa4;
    ofSoundPlayer so5;
    ofSoundPlayer ra6;
    ofSoundPlayer si7;
    ofSoundPlayer d8;
    ofSoundPlayer am_chord;
    ofSoundPlayer c_chord;
    ofSoundPlayer drum2_cymbal;
    ofSoundPlayer drum2_hat;
    ofSoundPlayer drum2_snare;
    ofSoundPlayer drum2_tom1;
    ofSoundPlayer drum2_tom2;
    ofSoundPlayer drum2_tom3;
    ofSoundPlayer f_chord;
    ofSoundPlayer g_chord;
    ofSoundPlayer drum1_bassdrum1;
    
    float time;
    float keyPressedTime[sphereNum];
    Boolean reverberation[sphereNum];
    
    //GUI
    ofxPanel gui;
    ofxIntSlider backGroundSlider;
    ofxVec4Slider rgbSlider;
    
};
