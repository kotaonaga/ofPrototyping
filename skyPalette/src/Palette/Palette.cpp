//
//  Palette.cpp
//  skyPalette
//
//  Created by kota on 2020/06/11.
//

#include "Palette.hpp"

Palette::Palette(){
    
};

bool Palette::compareHue(const ofColor& c1, const ofColor& c2){
    return c1.getHue() < c2.getHue();
}


void Palette::hueSort(vector<ofColor>& _colors){
//    ofSort(_colors, Palette::compareName);
}
