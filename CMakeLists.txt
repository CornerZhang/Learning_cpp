cmake_minimum_required(VERSION 3.8)

project(Learning_cpp)
# add_definitions("-std=c++17")

aux_source_directory(source SRC_ROOT)
include_directories(source)

add_executable(Learning_cpp ${SRC_ROOT})