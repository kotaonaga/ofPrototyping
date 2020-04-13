#version 150

uniform float t;
out vec4 outputColor;

void main(){
    float r = abs(sin(t * 2.0));
    float g = 0.6;
    float b = 1.0;
    float a = 1.0;
    outputColor = vec4(r, g, b, a);
}
