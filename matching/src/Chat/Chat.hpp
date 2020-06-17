//
//  Chat.hpp
//  matching
//
//  Created by kota on 2020/06/17.
//

#ifndef Chat_hpp
#define Chat_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Chat_hpp */

class Chat{
private:
    ofTrueTypeFont font;
    string textTyped;
public:
    Chat();
    void type(int _key);
    void display();
};
