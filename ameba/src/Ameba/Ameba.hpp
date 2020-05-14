//
//  Ameba.hpp
//  ameba
//
//  Created by kota on 2020/05/14.
//

#ifndef Ameba_hpp
#define Ameba_hpp

#include <stdio.h>
#include "ofMain.h"

class Ameba{
public:
    Ameba();
    void setup();
    void update();
    void show();
    float getPosX();
    float getPosY();
    
private:
    ofVec2f pos;
    ofVec2f vel;
    
};

#endif /* Ameba_hpp */
