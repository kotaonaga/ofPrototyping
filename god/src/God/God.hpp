//
//  God.hpp
//  god
//
//  Created by kota on 2020/06/24.
//

#ifndef God_hpp
#define God_hpp

#endif /* God_hpp */
#include "Pipe.hpp"
#include "ofMain.h"

class God{
private:
    Pipe pipe;
    float x;
    float y;
    float size;
public:
    God();
    void setup();
    void update();
    void draw();
};
