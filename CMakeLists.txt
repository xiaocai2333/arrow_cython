cmake_minimum_required(VERSION 3.14)
project(cython_arrow)

set(CMAKE_CXX_STANDARD 14)

include_directories("/home/zc/CLionProjects/cython_arrow")
#include_directories("/home/zc/work")

#include_directories("/usr/include/python3.6")

#include_directories("/home/zc/venv/lib/python3.6/site-packages/pyarrow/include")

#include_directories("/home/zc/venv/lib/python3.6/site-packages/pyarrow")

#link_directories("/home/zc/lib")
#link_directories("/home/zc/venv/lib/python3.6/site-packages/pyarrow")

add_executable(cython_arrow main.cpp make_point.cpp gis_func.cpp)

target_link_libraries(cython_arrow arrow)