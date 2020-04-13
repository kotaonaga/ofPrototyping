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
public:
    Chat();
    int getChatWidth();
    void draw();
};
#endif /* Chat_hpp */
