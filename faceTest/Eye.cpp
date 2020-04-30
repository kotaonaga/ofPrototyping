#include "Eye.hpp"

Eye::Eye()
{
}

void Eye::update()
{
}

void Eye::draw()
{
    if (facemode == sad)
    {
        ofLog() << "sad";
    }
    else if (facemode == normal)
    {
        ofLog() << "normal";
    }
    else if (facemode == happy)
    {
        ofLog() << "happy";
    }
}
