find_package(Vulkan REQUIRED)

add_library(glm INTERFACE)

add_library(stb_image INTERFACE)

add_library(tinyobjloader STATIC)

target_include_directories(glm INTERFACE glm)

target_sources(tinyobjloader PRIVATE 
  tinyobjloader/tiny_obj_loader.h
  tinyobjloader/tiny_obj_loader.cc
  )

target_include_directories(tinyobjloader PUBLIC tinyobjloader)

add_library(sdl2 INTERFACE)
set(sdl2_DIR "SDL_PATH" CACHE FILEPATH "Path to SDL2")

if (WIN32)
target_include_directories(sdl2 INTERFACE ${sdl2_DIR}/include ${sdl2_image_DIR}/include)
target_link_directories(sdl2 INTERFACE ${sdl2_DIR}/lib/x64 ${sdl2_image_DIR}/lib/x64)
elseif (UNIX)
target_include_directories(sdl2 INTERFACE ${sdl2_DIR}/include/SDL2 ${sdl2_image_DIR}/include/SDL2)
target_link_directories(sdl2 INTERFACE ${sdl2_DIR}/lib ${sdl2_image_DIR}/lib)
endif()

target_link_libraries(sdl2 INTERFACE SDL2 SDL2main)

target_include_directories(stb_image INTERFACE stb_image)