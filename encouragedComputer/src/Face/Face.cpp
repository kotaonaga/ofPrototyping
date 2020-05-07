#include "Face.hpp"


int Face::faceWidth = 0;
//Facemode Face::facemode = depression;

//Face::Face(){
////    shader.load("shader");
////    smileMouse.load("smile.png");
////    Eye();
//}

void Face::setFaceWidth(int _chatWidth){
    faceWidth = ofGetWidth() - _chatWidth;
}

int Face::getFaceWidth(){
    return faceWidth;
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
//
//void Face::setFaceMode(Facemode _facemode){
//    facemode = _facemode;
//}

//int Face::getFaceMode(){
//    return (int) facemode;
//}
//
//Facemode Face::getFaceMode(){
//
//}

void Face::goNextFaceMode(){
    //もともとfaceMode++で実装していた。なんかもっとうまい書き方がありそう。
//    switch(facemode){
//        case depression:
//            facemode = superCry;
//            break;
//        case superCry:
//            facemode = cry;
//            break;
//        case cry:
//            facemode = normal;
//            break;
//        case normal:
//            facemode = smile;
//            break;
//        case smile:
//            ofLog() << "yay!";
//            break;
//    }
}

void Face::update(){
//        if(facemode == depression){
//            hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.7 - 0.6) + 0.6;
//        }else if(facemode == superCry){
//            hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.6 - 0.4) + 0.4;
//        }else if(facemode == cry){
//            hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.4 - 0.3) + 0.3;
//        }else if(facemode == normal){
//            hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.3 - 0.15) + 0.15;
//        }else if(facemode == smile){
//            hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.10 - 0.0) + 0.0;
//        }else{
//            hue = abs(sin(ofGetElapsedTimef()) * 0.7) * (0.05 - 0.0) + 0.0;
//        }
        
        shader.begin();
        shader.setUniform1f("u_hue", hue);
        shader.end();
    
//    eye.update();
}



void Face::draw(){
    shader.begin();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    shader.end();
//    eye.draw();
}

int Face::testGetInt(){
    return 3;
}
