//
//  Eye.hpp
//  encouragedComputer
//
//  Created by kota on 2020/04/27.
//

#ifndef Eye_hpp
#define Eye_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Tear.hpp"

class Eye{
private:
    int openedTime;
    int closedTime;
    Boolean isClosed;
    int eyeSize;
    
    //涙
    vector<Tear> rightTears;
    vector<Tear> leftTears;
    
public:
    Eye();
    void update();
    void draw();
    
    
};
#endif /* Eye_hpp */
