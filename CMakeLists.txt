cmake_minimum_required(VERSION 3.17)
project(untitled10)

include(pmm.cmake)

pmm(
        VERBOSE
        DEBUG
        VCPKG
        REVISION 2020.11-1
        REQUIRES raylib
)

#find_package(raylib CONFIG REQUIRED)

#find_package(raylib CONFIG REQUIRED)
#target_include_directories(untitled10 PRIVATE ${RAYLIB_INCLUDE_DIRS})
#target_link_libraries(untitled10 PRIVATE ${RAYLIB_LIBRARIES})

set(CMAKE_CXX_STANDARD 20)

find_package(raylib CONFIG REQUIRED)
target_include_directories(raylib PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_libraries(raylib PRIVATE ${RAYLIB_LIBRARIES})

add_executable(untitled10 main.cpp)
