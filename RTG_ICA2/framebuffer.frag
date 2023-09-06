#version 330 core

out vec4 FragColour;
in vec2 texCoords;

uniform sampler2D screenTexture;
uniform float gamma;

void main()
{
    vec4 fragment = texture(screenTexture, texCoords);
    FragColour.rgb = pow(fragment.rgb, vec3(1.0f / gamma));
}