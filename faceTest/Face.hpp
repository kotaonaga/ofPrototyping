#ifndef Face_hpp
#define Face_hpp

#include <stdio.h>
#include "ofMain.h"

class Face
{
private:
    enum Facemode
    {
        sad,
        normal,
        happy
    };
    Facemode facemode;

public:
    Face();
    int getFaceMode();
};
#endif /* Chat_hpp */
