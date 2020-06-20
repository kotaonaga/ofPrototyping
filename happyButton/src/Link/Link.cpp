//
//  Link.cpp
//  happyButton
//
//  Created by kota on 2020/06/21.
//

#include "Link.hpp"

Link::Link(){
    ofSetLineWidth(0.1);
    
}

void Link::draw(){
    ofSetColor(222, 222, 222);
    ofDrawLine(200, 200, 100, 100);
    ofDrawLine(400, 200, 500, 300);
    ofDrawLine(200, 300, 100, 500);
    ofDrawLine(400, 500, 200, 550);
}
