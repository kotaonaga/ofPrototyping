//
//  God.cpp
//  god
//
//  Created by kota on 2020/06/24.
//

#include "God.hpp"

God::God(){
    x = 300;
    y = 300;
    size = 120;
}

void God::setup(){
    
}

void God::update(){
    pipe.update();
}

void God::draw(){
    ofSetColor(123,123,123);
    ofDrawCircle(x, y, size);
    pipe.draw();
}
