//
//  Pipe.cpp
//  god
//
//  Created by kota on 2020/06/25.
//

#include "Pipe.hpp"

Pipe::Pipe(){
    
}

void Pipe::setup(){
    ofSetLineWidth(10);
}

void Pipe::update(){
    orb.update();
}

void Pipe::draw(){
    ofDrawLine(0, 0, 300, 300);
    orb.draw();
}
