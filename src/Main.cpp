// Example program:
// Using SDL2 to create an application window

#include "SDL.h"
#include <stdio.h>
#include <iostream>
#include "vk_engine.h"

using namespace std;

int main(int argc, char* argv[]) {

	VulkanEngine app;

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}