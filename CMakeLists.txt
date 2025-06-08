cmake_minimum_required(VERSION 3.30)
project(BasicPlayerMovement)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(raylib STATIC IMPORTED)
set_target_properties(raylib PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/lib/libraylib.a)
add_library(classes ${CMAKE_SOURCE_DIR}/src/classes.cpp)

add_executable(good src/main.cpp)
target_link_libraries(good raylib classes winmm opengl32 m pthread)