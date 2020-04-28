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
    
//       vector<string> charactors = { 'A', 'B', '&', 'D', 'E', 'F',
//                                   'G', 'H', 'I', 'J', 'K', 'L',
//                                   'M', 'N', 'O', 'P', 'Q', 'R',
//                                   'S', 'T', 'U', 'V', 'W', 'X',
//                                   'Y', 'Z', '!'};
    vector<char> charactors = {'A'};
       int sample_count = 200; //文字の荒さを設定
    //charactors配列分
       for (int charactor_index = 0; charactor_index < charactors.size(); charactor_index++) {
    //ofPathクラス型の変数pathにpointsとして文字の点を入れる。
           //点で作ったオブジェクトそのものが渡されている？
           //中身を見る方法はないか？ofPathとかofPolylineとか中身が見れないからイメージしずらい。
           ofPath path = font.getCharacterAsPoints(charactors[charactor_index], true, false);
           //polyline型の可変長配列outlineにoutlineをとったやつを入れる。コピー代入している。
           vector<ofPolyline> outline = path.getOutline();
           
           for (int outline_index = 0; outline_index < outline.size(); outline_index++) {
               //outline_indexは0、1と表示される。
               
    //outlineの可変長配列にgetResampledByCountから帰ってきたものを入れる。点同士のスペーシングを調整している。sample_countが小さいほど、荒い文字になる。resampleするらしい。path/polyliensには[0]と[1]が入っている。[0]の中のpointsには[0]〜[8]が入っている。[1]の中のpointsには[0]〜[3]が入っている。outlineには[0][1]があって、[0]の中には[0]〜[7]が入っている。[1]の中には[0]〜[2]が入っている。
               outline[outline_index] = outline[outline_index].getResampledByCount(sample_count);
//               cout << "1" << outline[1] << endl;
               //outline配列に入ってるpolylineの頂点をとってくる。//データ構造がどうなっているのか知りたい。
               //outline/pointsの中に[0]-[199]入っていた。これはsample_countと関連している。
               vector<glm::vec3> vertices = outline[outline_index].getVertices();
               
               ofBeginShape();
               for (int vertices_index = 0; vertices_index < vertices.size(); vertices_index++) {
                   //verticesのsizeは200
//                   cout << "index: " << vertices_index << endl;
//                   cout << "frameNum%200: " << ofGetFrameNum() % sample_count << endl;
    //ofPoint型のpointを初期化している？vec3型のクラス.pointはほんとに点って感じ。点オブジェクト
                   ofPoint point(vertices[vertices_index].x, vertices[vertices_index].y, vertices[vertices_index].z);
                   if (ofGetFrameNum() % (sample_count * 2) < sample_count) {
//                       cout << "でかif: " << ofGetFrameNum() % (sample_count) << endl;
                       //vertices_index(0-199)
                       
                       
                       if (vertices_index < ofGetFrameNum() % sample_count) {
                           
                           ofSetColor(34, 45, 255);
//                           cout << "frameNum: " << ofGetFrameNum() << endl;
//                           cout << "%あり: " << ofGetFrameNum() % (sample_count) << endl;
                           ofVertex(point); //pointはofPoint型。vec3型。pointには点がたくさん入ってる。それがofVertex(point)一発で描かれるのが不思議。ソースをみたらvec3 & pだった。getPath().lineTo(p)でlineが描かれるらしいことはわかるけどよくわからん。
//                           cout << point << endl;
//                           cout << "if: " << ofGetFrameNum() % (sample_count) << endl;
                       }
                   }else {
                       if (vertices_index > ofGetFrameNum() % sample_count) {
//                           cout << "else: " << ofGetFrameNum() % (sample_count) << endl;
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
    
//           if ((charactor_index + 1) % 6 == 0) {
//
//               ofTranslate(this->font_size * -6, this->font_size * 1.4);
//           }
//           else {
//
//               ofTranslate(this->font_size * 1.2, 0);
//           }
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
