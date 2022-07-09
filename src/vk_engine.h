#pragma once

#include <vk_types.h>

class VulkanEngine {
public:

	bool isInitialized = false;

	VkExtent2D _windowExtent = { 1700 , 900 };

	struct SDL_Window* _window = nullptr;

	//initializes everything in the engine
	void init();

	//shuts down the engine
	void cleanup();

	//draw loop
	void draw();

	//run main loop
	void run();
};
