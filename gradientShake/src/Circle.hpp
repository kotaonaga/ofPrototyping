//
//  Circle.hpp
//  gradientShake
//
//  Created by kota on 2020/04/10.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

class Circle{
    
public:
    Circle();
    void draw();
    void setPos(int _posX, int _posY);
    void setRadius(float _radius);
    float getRadius();
    void setHue(int _hue);
    
private:
    int posX;
    int posY;
    float radius;
    ofColor circleColor;
};


#endif /* Circle_hpp */
