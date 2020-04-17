#version 150

//uniform float u_time;
uniform float u_hue;
out vec4 outputColor;

vec3 hsb2rgb( in vec3 c ){
    vec3 rgb = clamp(abs(mod(c.x*6.0+vec3(0.0,4.0,2.0),
                             6.0)-3.0)-1.0,
                     0.0,
                     1.0 );
    rgb = rgb*rgb*(3.0-2.0*rgb);
    return c.z * mix(vec3(1.0), rgb, c.y);
}

void main(){
    float hue = u_hue;
    vec3 color = vec3(0.0);
    color = hsb2rgb(vec3(hue, 0.4, 0.8));
    outputColor = vec4(color, 1.0);
}
