#pragma once
#include <vulkan/vulkan.h>
#include <deque>
#include <vector>

struct AllocatedBuffer {
    VkBuffer _buffer;
};

struct AllocatedImage {
    VkImage _image;
};

