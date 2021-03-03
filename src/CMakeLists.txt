cmake_minimum_required(VERSION 3.19)

set(files main.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

add_executable(${PROJECT_NAME} ${files})
