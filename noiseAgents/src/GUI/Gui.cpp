//
//  GUI.cpp
//  noiseAgents
//
//  Created by kota on 2020/05/10.
//

#include "Gui.hpp"
Gui::Gui(){
    panel.setup();
    panel.add(noiseScaleSlider.setup("noiseScale",300.0, 1.0, 1000.0));
}

float Gui::getNoiseScale(){
    return noiseScaleSlider;
}

void Gui::draw(){
    panel.draw();
}
//
//sliders[si++] = controlP5.addSlider("agentsCount",1,10000,left,top+posY+0,len,15);
//posY += 30;
//
//sliders[si++] = controlP5.addSlider("noiseScale",1,1000,left,top+posY+0,len,15);
//sliders[si++] = controlP5.addSlider("noiseStrength",0,100,left,top+posY+20,len,15);
//posY += 50;
//
//sliders[si++] = controlP5.addSlider("strokeWidth",0,10,left,top+posY+0,len,15);
//posY += 30;
//
//sliders[si++] = controlP5.addSlider("agentsAlpha",0,255,left,top+posY+0,len,15);
//sliders[si++] = controlP5.addSlider("overlayAlpha",0,255,left,top+posY+20,len,15);
