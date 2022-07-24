#pragma once

#include <vk_types.h>

namespace vkinit {
	VkCommandPoolCreateInfo commandPoolCreateInfo(uint32_t queueFamilyIndex, VkCommandPoolCreateFlags flags = 0);
	VkCommandBufferAllocateInfo commandBufferAllocateInfo(VkCommandPool pool, uint32_t count = 1, VkCommandBufferLevel level = VK_COMMAND_BUFFER_LEVEL_PRIMARY);

	VkPipelineShaderStageCreateInfo pipelineShaderStageCreateInfo(VkShaderStageFlagBits stage, VkShaderModule shaderModule);
	VkPipelineVertexInputStateCreateInfo vertexInputStateCreateInfo(std::vector<VkVertexInputBindingDescription>& bindingDescriptions, std::vector<VkVertexInputAttributeDescription>& attributeDescriptions);
	VkPipelineInputAssemblyStateCreateInfo inputAssemblyCreateInfo(VkPrimitiveTopology topology);
	VkPipelineRasterizationStateCreateInfo rasterizationStateCreateInfo(VkPolygonMode polygonMode);
	VkPipelineMultisampleStateCreateInfo multisamplingStateCreateInfo(VkSampleCountFlagBits& msaaSamples);
	VkPipelineDepthStencilStateCreateInfo depthStencilStateCreateInfo(bool bDepthTest, bool bDepthWrite, VkCompareOp compareOp);
	VkPipelineColorBlendAttachmentState colorBlendAttachmentState();

	VkPipelineLayoutCreateInfo pipelineLayoutCreateInfo(VkDescriptorSetLayout* descriptorSetLayout);

	VkImageCreateInfo imageCreateInfo(uint32_t width, uint32_t height, uint32_t mipLevels, VkSampleCountFlagBits numSamples, VkFormat format, VkImageTiling tiling, VkImageUsageFlags usage);
	VkImageViewCreateInfo imageviewCreateInfo(VkImage image, VkFormat format, VkImageAspectFlags aspectFlags, uint32_t mipLevels);
}