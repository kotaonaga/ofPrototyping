//
//  Globals.hpp
//  enumStudy
//
//  Created by kota on 2020/05/05.
//

#ifndef Globals_hpp
#define Globals_hpp

#include <stdio.h>
#include "ofMain.h"



class faceModeController{
public:
    enum Mode{
        sad, cry, happy
    };

    Mode facemode = sad;
    Mode getFaceMode();
    void testLog();
};



namespace Globals {
    extern faceModeController faceModeCtrl;
};

#endif /* Globals_hpp */
