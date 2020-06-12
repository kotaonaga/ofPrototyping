//
//  Egg.cpp
//  fogEgg
//
//  Created by kota on 2020/06/12.
//

#include "Egg.hpp"

Egg::Egg(){
    max = ofRandom(0.5, 1);
    step = 0.005;
    num = 200;
    radius = 0.9;
    inter = 0.9;
    maxNoise = 200;
}

void Egg::draw(){
    float r = ofRandom(1);
    for(int i = 0; i < num; i++){
        float alpha = 1 - (i / num);
        int size = radius + i * inter;
    }
}

//
//
//function draw() {
//  //background(25);
//  let r = random(1);
//  for (let i = 0; i < n; i++) {
//    let alpha = 1 - (i / n);
//
//    //stroke(255, alpha);
//
//    let size = radius + i * inter;
//    let k = Max * (i / n);
//    let noisiness = maxNoise * (i / n);
//
//    strokeWeight(0.3);
//    stroke(190, 40, 90);
//
//    //fill(60,40, 90, 0.04);
//    fill(10,40, 90, 0.04);
//    paint(size, width/2, height/2, k, i * step, i/noisiness);
//
//    stroke(255, alpha);
//    //fill(240,80, 50, 0.04);
//    fill(190,80, 50, 0.04);
//    paint(size, width/2, height/2, k, i * step, noisiness);
//  }
//}

