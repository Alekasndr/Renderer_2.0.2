#include "vk_engine.h"

#include <SDL.h>
#include <SDL_vulkan.h>

#include <vk_types.h>
#include <vk_initializers.h>
#include <iostream>
#include <chrono>

void VulkanEngine::init()
{
	// We initialize SDL and create a window with it. 
	SDL_Init(SDL_INIT_VIDEO);

	SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE);
	
	_window = SDL_CreateWindow(
		"Renderer_2.0.1",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		_windowExtent.width,
		_windowExtent.height,
		window_flags
	);
	
	//everything went fine
	isInitialized = true;
}
void VulkanEngine::cleanup()
{	
	if (isInitialized) {
		
		SDL_DestroyWindow(_window);
	}
}

void VulkanEngine::draw()
{
	//nothing yet
}

void VulkanEngine::run()
{
	SDL_Event event;
	bool running = true;

	auto timer = std::chrono::steady_clock();
	auto last_time = timer.now();
	uint64_t frame_counter = 0;
	uint64_t fps = 0;

	//main loop
	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				running = false;
			}
			if (event.window.event == SDL_WINDOWEVENT_RESIZED)
			{
				//framebufferResized = true;
			}
		}

		++frame_counter;
		if (last_time + std::chrono::seconds(1) < timer.now()) {
			last_time = timer.now();
			fps = frame_counter;
			frame_counter = 0;
			std::cout << "FPS:" << fps << std::endl;
		}

		draw();
		// update game state, draw the current frame
	}
}

