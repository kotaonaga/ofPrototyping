//
//  GUI.hpp
//  noiseAgents
//
//  Created by kota on 2020/05/10.
//

#ifndef GUI_hpp
#define GUI_hpp

#include <stdio.h>
#include "ofxGui.h"

class Gui{
private:
    ofxPanel panel;
    ofxFloatSlider noiseScaleSlider;
    ofxFloatSlider noiseStrengthSlider;
    
public:
    Gui();
    float getNoiseScale();
    void draw();
};


#endif /* GUI_hpp */
