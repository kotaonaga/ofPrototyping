//
//  Square.hpp
//  squareColor
//
//  Created by kota on 2020/05/23.
//

#ifndef Square_hpp
#define Square_hpp

#include "ofMain.h"

#endif /* Square_hpp */

class Square{
private:
    int posX;
    int posY;
    int alpha;
    ofColor color;
    bool isShow;
    
public:
    Square();
    void setup(int _posX, int _posY);
    void update();
    void draw();
//    void setColor(ofColor _color);
    void setHsb(float _hue, float _saturation, float brightness);
    void decreaseAlpha();
    void setIsShow(bool _isShow);
    bool getIsShow();
    void setAlpha(int _alpha);
    int getAlpha();
    int getPosX();
};
