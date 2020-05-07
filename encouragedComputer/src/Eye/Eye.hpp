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
    shared_ptr<Globals::Mode> mode;
    //顔系。ここにもFacemodeを作るのはよろしくない気がする。
//    enum Facemode
//    {
//        depression, superCry, cry, normal, smile
//    };
//    Facemode facemode;
    
    //涙
    vector<Tear> rightTears;
    vector<Tear> leftTears;
    
    //log用。消していい。
    Tear t;
    
public:
    Eye(shared_ptr<Globals::Mode> _mode) : mode(_mode){
        
    };
    void update();
    void draw();
    void setFaceMode(int _facemode);
    
};
#endif /* Eye_hpp */
