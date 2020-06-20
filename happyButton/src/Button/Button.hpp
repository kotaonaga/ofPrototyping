//
//  Button.hpp
//  happyButton
//
//  Created by kota on 2020/06/21.
//

#ifndef Button_hpp
#define Button_hpp

#include "ofMain.h"
#include "Link.hpp"

#endif /* Button_hpp */

class Button{
private:
    float width;
    float height;
    float centerX;
    float cneterY;
    Link link;
public:
    Button();
    void draw();
    void drawLink();
};
