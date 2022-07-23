
# Add source to this project's executable.
add_executable (src 
  main.cpp
  UniformBufferObject.h
  vk_engine.cpp
  vk_engine.h
  vk_initializers.cpp
  vk_initializers.h
  vk_types.h
  vk_pipeline.h
  vk_pipeline.cpp
  vk_mesh.h
  vk_mesh.cpp)


set_property(TARGET src PROPERTY VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:src>)

target_include_directories(src PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(src glm tinyobjloader stb_image)

target_link_libraries(src Vulkan::Vulkan sdl2)
