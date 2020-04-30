#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    img.load("smile.png");
    ofSetVerticalSync(true);
    ofSetLineWidth(10);
    ofSetWindowShape(800, 800);
//    face.setFaceWidth(chat.getChatWidth());
//    chat.setPos(face.getFaceWidth());
//    gui.setup();
//    gui.add(rSlider.setup("R",50, 0, 500));
//    gui.add(aSlider.setup("a",6, 0, 30));
    
    Tear rightTear;
    rightTear.setupRight();
    rightTears.push_back(rightTear);

    Tear leftTear;
    leftTear.setupLeft();
    leftTears.push_back(leftTear);
}

//--------------------------------------------------------------
void ofApp::update(){
    face.update();
    
    for(int i = 0; i < rightTears.size(); i++){
        rightTears[i].fallRight();
    }
    
    for(int i = 0; i < leftTears.size(); i++){
        leftTears[i].fallLeft();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    face.draw();
//    eye.draw();
//    face.drawEyes();
//涙系なのでいったんコメントアウト
    
//    if(faceMode == 0){
//        for(int i = 0; i < rightTears.size(); i++){
//            if(rightTears[i].getFallPosRight() == 240){
//                cout << rightTears[0].getFallPosRight() << endl;
//                Tear t;
//                t.setupRight();
//                rightTears.push_back(t);
//            }
//        }
//
//        for(int i = 0; i < leftTears.size(); i++){
//            if(leftTears[i].getFallPosLeft() == 240){
//                Tear t;
//                t.setupLeft();
//                leftTears.push_back(t);
//            }
//        }
//    }else if(faceMode == 1){
//        for(int i = 0; i < rightTears.size(); i++){
//            if(rightTears[i].getFallPosRight() == 660){
//                cout << rightTears[0].getFallPosRight() << endl;
//                Tear t;
//                t.setupRight();
//                rightTears.push_back(t);
//            }
//        }
//
//        for(int i = 0; i < leftTears.size(); i++){
//            if(leftTears[i].getFallPosLeft() == 660){
//                Tear t;
//                t.setupLeft();
//                leftTears.push_back(t);
//            }
//        }
//    }else if(faceMode == 2){
//        leftTears.clear();
//
//        for(int i = 0; i < rightTears.size(); i++){
//            if(rightTears[i].getFallPosRight() == 540){
//                cout << rightTears[0].getFallPosRight() << endl;
//                Tear t;
//                t.setupRight();
//                rightTears.push_back(t);
//            }
//        }
//    }else if(faceMode == 3){
//        rightTears.clear();
//    }else{
//        img.draw(0,0);
//    }
    
    for(int i = 0; i < rightTears.size(); i++){
        rightTears[i].drawRight();
    }
    
    for(int i = 0; i < leftTears.size(); i++){
            leftTears[i].drawLeft();
        }

    
    if(chat.getTextPos() > ofGetWidth()){
        textMode = 2;
        face.goNextFaceMode();
    }
    
    if(textMode == 0){
        chat.drawText();
    }else if(textMode == 1){
        chat.moveText();
        chat.drawText();
    }else if(textMode == 2){
        chat.resetTextPos();
        chat.setText(textTyped);
        textMode = 0;
    }
    
//    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case OF_KEY_BACKSPACE:
            if(textTyped.length() > 0){
                textTyped = textTyped.substr(0, MAX(0, textTyped.length() - 1));
            }
            chat.setText(textTyped);
            break;
        case OF_KEY_RETURN:
            break;
            
        default:
            textTyped += key;
            chat.setText(textTyped);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == OF_KEY_RETURN){
        textMode = 1;
        textTyped.erase(0, textTyped.length());
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
