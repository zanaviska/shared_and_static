cmake_minimum_required(VERSION 3.16)

set(files main.cpp)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

if(WIN32)
else(WIN32)
    ADD_DEFINITIONS(-fPIC)
endif(WIN32)

add_library(static STATIC static.cpp)
add_library(dynamic SHARED dynamic.cpp)

add_executable(${PROJECT_NAME} ${files})

target_link_libraries(${PROJECT_NAME} static)
target_link_libraries(dynamic static)
target_link_libraries(${PROJECT_NAME} dynamic)