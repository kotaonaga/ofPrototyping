//
//  Face.hpp
//  enumStudy
//
//  Created by kota on 2020/05/05.
//

#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Globals.hpp"

class Face{
    
public:
    Face();
    void draw();
    shared_ptr<faceModeController> faceModePtr;
    
private:
    
    
};
#endif /* Face_hpp */
