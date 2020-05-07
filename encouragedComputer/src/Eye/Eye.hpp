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
#include "Globals.hpp"
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
    
    shared_ptr<Globals::Mode> mode;
    unique_ptr<Tear> tear;
    
public:
    Eye(shared_ptr<Globals::Mode> _mode);
//        tear = make_unique<Tear>(mode);
//    };
    void dump();
//        Globals::dump_mode("Eye", mode);
//        tear->dump();
    void update();
    void draw();
    void setFaceMode(int _facemode);
    
};
#endif /* Eye_hpp */
