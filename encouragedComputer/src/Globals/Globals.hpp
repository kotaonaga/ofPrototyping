//
//  Globals.hpp
//  encouragedComputer
//
//  Created by kota on 2020/05/05.
//
#pragma once

#ifndef Globals_hpp
#define Globals_hpp

#include <stdio.h>
#include "ofMain.h"

//namespace Globals {
////enum test{
////    sad, normal, happy
////};
//struct Test{
//    int hey;
//};

struct Test{
    enum Mode{
        sad, normal, happy
    };
    Mode mode;
    
//    int hey = 12;
    
//    void dumpMode(){
//        ofLog() << mode;
//    }
    
    void dumpMode(){
        ofLog() << "hello";
//        ofLog() << hey;
    }
    
    
};

#endif /* Globals_hpp */
