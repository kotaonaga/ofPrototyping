//
//  Sound.cpp
//  natureDrum
//
//  Created by kota on 2020/06/14.
//

#include "Sound.hpp"

Sound::Sound(){
    for(int i = 0; i < beamNum; i++){
        ofSoundPlayer beam;
        beam.load("beam" + ofToString(i) + ".mp3");
        beams[i] = beam;
    }
    
    for(int i = 0; i < laserNum; i++){
        ofSoundPlayer laser;
        laser.load("laser" + ofToString(i) + ".mp3");
        lasers[i] = laser;
    }
}

void Sound::setSound(string _soundName){
    soundIndex = _soundName;
    if(soundIndex == "beam0") currentSound = beams[0];
}

void Sound::update(){
    
}

void Sound::play(){
    if(soundIndex == "beam0") beams[0].play();
    if(soundIndex == "beam1") beams[1].play();
    if(soundIndex == "beam2") beams[2].play();
    if(soundIndex == "beam3") beams[3].play();
    if(soundIndex == "beam4") beams[4].play();
}
