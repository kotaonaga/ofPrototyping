//
//  Orb.cpp
//  god
//
//  Created by kota on 2020/06/25.
//

#include "Orb.hpp"

Orb::Orb(){
    x = 0;
    y = 0;
    size = 10;
}

void Orb::setup(){
}

void Orb::update(){
    x++;
    y++;
    if(x > 300){
        x = 0;
        y = 0;
    }
}

void Orb::draw(){
    ofSetColor(12, 22, 222);
    ofDrawCircle(x, y, size);
}
