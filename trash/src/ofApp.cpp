#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    ofBackground(239);
    ofSetWindowTitle("Insta");
    
    ofNoFill();
    ofSetColor(39);
    ofSetLineWidth(2);
    
    font_size = 100;
    font.loadFont("Canaro-LightDEMO.ttf", font_size, true, true, true);
    
    svg.load("pen-fancy-solid.svg");
}



//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//    cout << svg << endl;
    int time = ofGetElapsedTimeMillis() / 1000;
    ofTranslate(20, this->font_size + 20);
    
//       vector<string> charactors = { 'A', 'B', '&', 'D', 'E', 'F',
//                                   'G', 'H', 'I', 'J', 'K', 'L',
//                                   'M', 'N', 'O', 'P', 'Q', 'R',
//                                   'S', 'T', 'U', 'V', 'W', 'X',
//                                   'Y', 'Z', '!'};
    vector<char> charactors = {'k'};
       int sample_count = 180;
    //charactors配列分
       for (int charactor_index = 0; charactor_index < charactors.size(); charactor_index++) {
    //ofPathクラス型の変数pathにpointsとして文字の点を入れる。
           //点で作ったオブジェクトそのものが渡されている？
           //中身を見る方法はないか？ofPathとかofPolylineとか中身が見れないからイメージしずらい。
           ofPath path = font.getCharacterAsPoints(charactors[charactor_index], true, false);
           //polyline型の可変長配列outlineにoutlineをとったやつを入れる。コピー代入している。
           vector<ofPolyline> outline = path.getOutline();
    //outlineのサイズ分だけforを回す
           for (int outline_index = 0; outline_index < outline.size(); outline_index++) {
    //outlineの可変長配列にgetResampledByCountから帰ってきたものを入れる。点同士のスペーシングを調整している。sample_countが小さいほど、荒い文字になる。resampleするらしい。
               outline[outline_index] = outline[outline_index].getResampledByCount(sample_count);
               //outline配列に入ってるpolylineの頂点をとってくる。
               vector<glm::vec3> vertices = outline[outline_index].getVertices();
    
               ofBeginShape();
               for (int vertices_index = 0; vertices_index < vertices.size(); vertices_index++) {
    //ofPoint型のpointを初期化している？vec3型のクラス.pointはほんとに点って感じ。点オブジェクト
                   int tmp = ofRandom(4);
                   ofPoint point(vertices[vertices_index].x + sin(time), vertices[vertices_index].y, vertices[vertices_index].z);
                   cout << point << endl;
                   if (ofGetFrameNum() % (sample_count * 2) < sample_count) {
                       if (vertices_index < ofGetFrameNum() % sample_count) {
                           ofSetColor(34, 45 + vertices_index, 255);
//                           cout << "左" << ofGetFrameNum() % (sample_count * 2) << endl;
//                           cout << "sample_count" << sample_count << endl;
                           ofVertex(point);
                       }
//                   }
                   }else {

                       if (vertices_index > ofGetFrameNum() % sample_count) {
                           //beginShapeとendShapeの間で呼ばれる点。
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
    
               ofTranslate(this->font_size * -6, this->font_size * 1.4);
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
