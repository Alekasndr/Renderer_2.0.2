#include <vk_engine.h>
#include <exception>
#include <iostream>

int main(int argc, char* argv[])
{
	VulkanEngine engine;

	engine.init();	
	
	try {
		engine.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	engine.cleanup();	

	return EXIT_SUCCESS;
}
