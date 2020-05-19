#include "Face.hpp"


Face::Face(){
    shader.load("shader");
    smileMouse.load("smile.png");
    
    mode = make_shared<Globals::Mode>();
    *mode = Globals::Mode::depression;
    eye = make_unique<Eye>(mode);
}


void Face::dump(){
    Globals::dump_mode("Face", mode);
    eye->dump();
}

void Face::randomize(){
    vector<int> rdm = {0, 1, 2, 3, 4};
    ofRandomize(rdm);
    if (rdm.front() == 0)
        *mode = Globals::Mode::depression;
    else if (rdm.front() == 1)
        *mode = Globals::Mode::superCry;
    else if (rdm.front() == 2)
        *mode = Globals::Mode::cry;
    else if (rdm.front() == 3)
        *mode = Globals::Mode::normal;
    else if (rdm.front() == 4)
        *mode = Globals::Mode::smile;
}

void Face::goNextFaceMode(){
    //もともとfaceMode++で実装していた。なんかもっとうまい書き方がありそう。
    if(*mode == Globals::Mode::depression){
        *mode = Globals::Mode::superCry;
    }else if(*mode == Globals::Mode::superCry){
        *mode = Globals::Mode::cry;
    }else if(*mode == Globals::Mode::cry){
        *mode = Globals::Mode::normal;
    }else if(*mode == Globals::Mode::normal){
        *mode = Globals::Mode::smile;
    }
}

void Face::update(){
    if(*mode == Globals::Mode::depression){
        hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.7 - 0.6) + 0.6;
    }else if(*mode == Globals::Mode::superCry){
        hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.6 - 0.4) + 0.4;
    }else if(*mode == Globals::Mode::cry){
        hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.4 - 0.3) + 0.3;
    }else if(*mode == Globals::Mode::normal){
        hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.3 - 0.15) + 0.15;
    }else if(*mode == Globals::Mode::smile){
        hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.10 - 0.0) + 0.0;
    }
    
    shader.begin();
    shader.setUniform1f("u_hue", hue);
    shader.end();
    
    eye->update();
}



void Face::draw(){
    shader.begin();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    shader.end();
    
    eye->draw();
}
