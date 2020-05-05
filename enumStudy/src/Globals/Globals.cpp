//
//  Globals.cpp
//  enumStudy
//
//  Created by kota on 2020/05/05.
//

#include "Globals.hpp"

faceModeController::Mode faceModeController::getFaceMode(){
    return facemode;
}

void faceModeController::testLog(){
    ofLog() << "hello";
}

namespace Globals {
    faceModeController faceModeCtrl;
}


