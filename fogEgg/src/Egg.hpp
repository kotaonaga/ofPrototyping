//
//  Egg.hpp
//  fogEgg
//
//  Created by kota on 2020/06/12.
//

#ifndef Egg_hpp
#define Egg_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Egg_hpp */

class Egg{
private:
    int max;
    float step;
    int num;
    int radius;
    int inter;
    float maxNoise;
    
public:
    Egg();
    void draw();
};


//function setup() {
//  createCanvas(windowWidth, windowHeight);
//  colorMode(HSB);
//  angleMode(DEGREES);
//  blendMode(OVERLAY);
//  background(8, 40, 90);

  //background(80, 40, 90);
//  noFill();
//  noLoop();
//  Max = random(0.5, 1);
//  step = 0.005;
//}

    //
    //
    //function paint(size, xCenter, yCenter, k, t, noisiness) {
    //  beginShape();
    //  let angleStep = 0.1;
    //  for (let j = 0; j < 360; j += angleStep) {
    //    
    //    let r1, r2;
    //    r1 = -cos(j) +1;
    //    r2 = sin(j) +1;
    //    let r = size + noise(k * r1, k * r2 , t) * noisiness;
    //    
    //    let x = xCenter + r * cos(j);
    //    let y = yCenter + r * sin(j);
    //    vertex(x, y);
    //  }
    //  
    //  endShape(CLOSE);
    //}
