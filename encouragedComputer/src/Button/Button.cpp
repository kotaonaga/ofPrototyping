//
//  Button.cpp
//  encouragedComputer
//
//  Created by kota on 2020/04/13.
//

#include "Button.hpp"


Button::Button(){
    ofSetColor(0);
    svg.load("send.svg");
    for (ofPath p: svg.getPaths()){
        // svg defaults to non zero winding which doesn't look so good as contours
        p.setPolyWindingMode(OF_POLY_WINDING_ODD);
        const vector<ofPolyline>& lines = p.getOutline();
        for(const ofPolyline & line: lines){
            outlines.push_back(line.getResampledBySpacing(1));
        }
    }
}

void Button::draw(){
    ofSetColor(255);
    ofDrawCircle(ofGetWidth() - (radius+20), ofGetHeight() - (radius+20), radius);
    ofSetColor(255);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth() - 300, ofGetHeight() - 400);
    ofScale(.5, .5);
    svg.draw();
    ofPopMatrix();
//    if(ofGetMousePressed()) {
//        ofNoFill();
//        for (ofPolyline & line: outlines){
//            int num = step * line.size();
//
//            ofBeginShape();
//            for (int j = 0; j < num; j++){
//                ofVertex(line[j]);
//            }
//            ofEndShape();
//        }
//    } else {
//        svg.draw();
//    }
}
