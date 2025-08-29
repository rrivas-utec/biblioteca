cmake_minimum_required(VERSION 3.10)
project(biblioteca)

set(CMAKE_CXX_STANDARD 20)

add_executable(biblio main.cpp biblioteca.cpp libro.cpp)
target_include_directories(biblio PRIVATE .)
