//
//  Walker.hpp
//  walker
//
//  Created by kota on 2020/05/29.
//

#ifndef Walker_hpp
#define Walker_hpp

#include "ofMain.h"

class Walker{
private:
    enum Direction{
        NORTH,
        NORTHEAST,
        EAST,
        SOUTHEAST,
        SOUTH,
        SOUTHWEST,
        WEST,
        NORTHWEST
    };
    
    Direction direction;
    
    int stepSize;
    int diameter;
    
    int posX, posY;
    ofColor color;
    
public:
    Walker();
    void setup();
    void update();
    void draw();
    void setColor(ofColor _color);
    void setHex(int _hexColor);
    
};
#endif /* Walker_hpp */
