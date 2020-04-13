//
//  Chat.hpp
//  encouragedComputer
//
//  Created by kota on 2020/04/13.
//

#ifndef Chat_hpp
#define Chat_hpp

#include <stdio.h>
class Chat {
private:
    int chatWidth = 250;
    int posX = 0;
    
public:
    Chat();
    int getChatWidth();
    void setPos(int _faceWidth);
    void draw();
};
#endif /* Chat_hpp */
