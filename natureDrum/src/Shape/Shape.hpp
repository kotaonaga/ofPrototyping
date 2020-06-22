//
//  Shape.hpp
//  natureDrum
//
//  Created by kota on 2020/06/14.
//

#ifndef Shape_hpp
#define Shape_hpp

#include "ofMain.h"

#endif /* Shape_hpp */

class Shape{
private:
    float posX;
    float posY;
    bool isDrawen;
public:
    Shape();
    void setIsDrawen(bool _isDrawen);
    void update();
    void draw();
};
