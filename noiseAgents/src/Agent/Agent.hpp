//
//  Agent.hpp
//  noiseAgents
//
//  Created by kota on 2020/05/10.
//

#ifndef Agent_hpp
#define Agent_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Gui.hpp"

class Agent {
private:
    ofVec2f p, pOld;
    float stepSize;
    float angle;
    Boolean isOutside = false;
    float noiseScale = 500.0;
    float noiseStrength = 10.0;
    float agentsAlpha = 10.0;
//    Gui noiseCtrl;
    
public:
    Agent();
    void setup();
    void update();
    void draw();
    void setNoiseScale(float _noiseScale);
    void setNoiseStrength(float _noiseStrength);
};

#endif /* Agent_hpp */
