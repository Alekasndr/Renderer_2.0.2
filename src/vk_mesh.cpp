#include <vk_mesh.h>

VertexInputDescription Vertex::getVertexDescription()
{
	VertexInputDescription description;

	VkVertexInputBindingDescription bindingDescription{};
	bindingDescription.binding = 0;
	bindingDescription.stride = sizeof(Vertex);
	bindingDescription.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;

	description.bindings.push_back(bindingDescription);

	//Position will be stored at Location 0
	VkVertexInputAttributeDescription positionAttribute = {};
	positionAttribute.binding = 0;
	positionAttribute.location = 0;
	positionAttribute.format = VK_FORMAT_R32G32B32_SFLOAT;
	positionAttribute.offset = offsetof(Vertex, pos);

	//Normal will be stored at Location 1
	VkVertexInputAttributeDescription colorAttribute = {};
	colorAttribute.binding = 0;
	colorAttribute.location = 1;
	colorAttribute.format = VK_FORMAT_R32G32B32_SFLOAT;
	colorAttribute.offset = offsetof(Vertex, color);

	//Color will be stored at Location 2
	VkVertexInputAttributeDescription texCoordAttribute = {};
	texCoordAttribute.binding = 0;
	texCoordAttribute.location = 2;
	texCoordAttribute.format = VK_FORMAT_R32G32_SFLOAT;
	texCoordAttribute.offset = offsetof(Vertex, texCoord);

	description.attributes.push_back(positionAttribute);
	description.attributes.push_back(colorAttribute);
	description.attributes.push_back(texCoordAttribute);

	return description;
}
