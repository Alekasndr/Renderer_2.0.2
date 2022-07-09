
# Add source to this project's executable.
add_executable (src 
  Main.cpp
  UniformBufferObject.h
  Vertex.h
  Vulkan.cpp
  Vulkan.h)


set_property(TARGET src PROPERTY VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:src>)

target_include_directories(src PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(src glm tinyobjloader stb_image)

target_link_libraries(src Vulkan::Vulkan sdl2)
