cmake_minimum_required(VERSION 3.22)

project(hangman)

set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_BUILD_TYPE Debug)

file(GLOB sources RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")

add_executable(hangman ${sources})
target_compile_options(hangman PRIVATE -Wsuggest-override)

# Copy resources
file(GLOB RESOURCE_FILES "${CMAKE_SOURCE_DIR}/resources/*")

foreach(res ${RESOURCE_FILES})
    configure_file(${res} ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
endforeach()