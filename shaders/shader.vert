#version 450

layout(binding = 0) uniform CameraBuffer {
    mat4 view;
	mat4 proj;
	mat4 viewproj;
} cameraData;


layout(push_constant) uniform constants
{
	vec4 data;
	mat4 render_matrix;
} PushConstants;

layout(location = 0) in vec3 inPosition;
layout(location = 1) in vec3 inColor;
layout(location = 2) in vec2 inTexCoord;

layout(location = 0) out vec3 fragColor;
layout(location = 1) out vec2 fragTexCoord;

void main() {
	mat4 transformMatrix = (cameraData.viewproj * PushConstants.render_matrix);
    gl_Position = transformMatrix * vec4(inPosition, 1.0f);
    fragColor = inColor;
    fragTexCoord = inTexCoord;
}