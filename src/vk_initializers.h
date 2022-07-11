#pragma once

#include <vk_types.h>
#include <array>

namespace vkinit {
	VkCommandPoolCreateInfo commandPoolCreateInfo(uint32_t queueFamilyIndex, VkCommandPoolCreateFlags flags = 0);

	VkCommandBufferAllocateInfo commandBufferAllocateInfo(VkCommandPool pool, uint32_t count = 1, VkCommandBufferLevel level = VK_COMMAND_BUFFER_LEVEL_PRIMARY);

	VkPipelineShaderStageCreateInfo pipelineShaderStageCreateInfo(VkShaderStageFlagBits stage, VkShaderModule shaderModule);
	VkPipelineVertexInputStateCreateInfo vertexInputStateCreateInfo(VkVertexInputBindingDescription* bindingDescription, std::array<VkVertexInputAttributeDescription, 3>  attributeDescriptions);
	VkPipelineInputAssemblyStateCreateInfo inputAssemblyCreateInfo(VkPrimitiveTopology topology);
	VkPipelineRasterizationStateCreateInfo rasterizationStateCreateInfo(VkPolygonMode polygonMode);
	VkPipelineMultisampleStateCreateInfo multisamplingStateCreateInfo(VkSampleCountFlagBits& msaaSamples);
	VkPipelineDepthStencilStateCreateInfo depthStencilStateCreateInfo();
	VkPipelineColorBlendAttachmentState colorBlendAttachmentState();

	VkPipelineLayoutCreateInfo pipelineLayoutCreateInfo(VkDescriptorSetLayout* descriptorSetLayout);
}