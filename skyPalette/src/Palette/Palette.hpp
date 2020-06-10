//
//  Palette.hpp
//  skyPalette
//
//  Created by kota on 2020/06/11.
//

#ifndef Palette_hpp
#define Palette_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Palette_hpp */

class Palette{
private:
    ofColor color;
    vector < ofColor > colors;
    
public:
    Palette();
    bool compareHue(const ofColor& c1, const ofColor& c2);
    void hueSort(vector<ofColor>& _colors);
};
