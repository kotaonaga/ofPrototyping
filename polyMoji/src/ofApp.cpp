#include "ofApp.h"

//template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
//{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}


//--------------------------------------------------------------
void ofApp::setup(){
    
    //    ofSetFrameRate(1);
    ofBackground(239);
    
    ofNoFill();
    ofSetColor(39);
    ofSetLineWidth(2);
    
    font_size = 100;
    font.loadFont("Canaro-LightDEMO.ttf", font_size, true, true, true);
}



//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    int time = ofGetElapsedTimeMillis() / 1000;
    ofTranslate(20, font_size + 20);
    vector<char> charactors = {'O', 'F'};
    int sample_count = 200; //文字の荒さを設定
    
    for (int charactor_index = 0; charactor_index < charactors.size(); charactor_index++) {
        ofPath path = font.getCharacterAsPoints(charactors[charactor_index], true, false);
        vector<ofPolyline> outline = path.getOutline();
        
        for (int outline_index = 0; outline_index < outline.size(); outline_index++) {
            outline[outline_index] = outline[outline_index].getResampledByCount(sample_count);
            vector<glm::vec3> vertices = outline[outline_index].getVertices();
            
            ofBeginShape();
            for (int vertices_index = 0; vertices_index < vertices.size(); vertices_index++) {
                ofPoint point(vertices[vertices_index].x, vertices[vertices_index].y, vertices[vertices_index].z);
                if (ofGetFrameNum() % (sample_count * 2) < sample_count) {
                    
                    if (vertices_index < ofGetFrameNum() % sample_count) {
                        
                        ofSetColor(34, 45, 255);
                        ofVertex(point);
                    }
                }else {
                    if (vertices_index > ofGetFrameNum() % sample_count) {
                        ofVertex(point);
                    }
                }
                
                if (vertices_index == ofGetFrameNum() % sample_count) {
                    
                    ofDrawCircle(point, 3);
                }
                
            }
            ofEndShape();
        }
        if ((charactor_index + 1) % 6 == 0) {
            ofTranslate(this->font_size * 6, this->font_size * 1.4);
        }
        else {
            ofTranslate(this->font_size * 1.2, 0);
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
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
