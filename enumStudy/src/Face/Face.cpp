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
    if(faceModePtr->getFaceMode() == faceModeController::sad){
        ofLog() << "sad face";
    }
    faceModePtr->testLog(); //testLog()はしっかり表示される。
}
