#include <stdio.h>
#include <iostream>
#include "vk_engine.h"

using namespace std;

int main(int argc, char* argv[]) {

	VulkanEngine engine;

	try {
		engine.initWindow();
		engine.mainLoop();
		engine.cleanup();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}