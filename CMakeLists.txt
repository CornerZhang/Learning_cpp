cmake_minimum_required(VERSION 2.6)

project(Learning_cpp)

aux_source_directory(source SRC_ROOT)
include_directories(source)

add_executable(Learning_cpp ${SRC_ROOT})