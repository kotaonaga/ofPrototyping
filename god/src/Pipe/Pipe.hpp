//
//  Pipe.hpp
//  god
//
//  Created by kota on 2020/06/25.
//

#ifndef Pipe_hpp
#define Pipe_hpp

#include "ofMain.h"
#include "orb.hpp"

#endif /* Pipe_hpp */

class Pipe{
private:
    Orb orb;
public:
    Pipe();
    void setup();
    void update();
    void draw();
};
