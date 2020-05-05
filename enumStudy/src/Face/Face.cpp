//
//  Face.cpp
//  enumStudy
//
//  Created by kota on 2020/05/05.
//

#include "Face.hpp"

Face::Face(){
    
}

void Face::draw(){
    if(faceModePtr->facemode == faceModeController::sad){
        ofLog() << "something is drawen";
    }
    faceModePtr->testLog();
}
