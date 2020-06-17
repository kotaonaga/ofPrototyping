//
//  Chat.cpp
//  matching
//
//  Created by kota on 2020/06/17.
//

#include "Chat.hpp"

Chat::Chat(){
    font.load();
}

void Chat::type(int _key){
    switch(_key){
        case OF_KEY_BACKSPACE:
            if(textTyped.length() > 0){
                textTyped = textTyped.substr(0, MAX(0, textTyped.length() - 1));
            }
            break;
        case OF_KEY_RETURN:
            break;
        default:
            textTyped += _key;
    }
}


void Chat::display(){
    
}
