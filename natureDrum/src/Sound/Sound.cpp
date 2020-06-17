//
//  Sound.cpp
//  natureDrum
//
//  Created by kota on 2020/06/14.
//

#include "Sound.hpp"

Sound::Sound(){
    rain.load("rain.mp3");
}

void Sound::play(){
    rain.play();
}
