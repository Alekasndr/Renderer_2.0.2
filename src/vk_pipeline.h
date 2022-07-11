#include <vk_types.h>
#include <vector>

class PipelineBuilder {
public:
	std::vector<VkPipelineShaderStageCreateInfo> shaderStages;
	VkPipelineVertexInputStateCreateInfo vertexInputInfo;
	VkPipelineInputAssemblyStateCreateInfo inputAssembly;

	VkViewport viewport;
	VkRect2D scissor;

	VkPipelineRasterizationStateCreateInfo rasterizer;
	VkPipelineColorBlendAttachmentState colorBlendAttachment;
	VkPipelineMultisampleStateCreateInfo multisampling;
	VkPipelineDepthStencilStateCreateInfo depthStencil;

	VkPipelineLayout pipelineLayout;

	VkPipeline buildPipeline(VkDevice device, VkRenderPass renderPass, std::vector<VkPipelineShaderStageCreateInfo> shaderStages);
};