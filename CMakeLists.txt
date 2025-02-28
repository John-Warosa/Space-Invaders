set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

cmake_minimum_required(VERSION 3.20)

project(Space-Invaders VERSION 1.0
DESCRIPTION "An emulator for the Space Invaders arcade machine"
LANGUAGES C)

file(GLOB_RECURSE space_invaders_src "src/*.c")

add_executable(space_invaders ${space_invaders_src})

find_package(raylib REQUIRED)

target_link_libraries(space_invaders PRIVATE raylib)
target_include_directories(space_invaders PRIVATE include)
target_compile_features(space_invaders PRIVATE c_std_99)
target_compile_options(space_invaders PRIVATE -Wall -Wextra -Wpedantic -O2)
