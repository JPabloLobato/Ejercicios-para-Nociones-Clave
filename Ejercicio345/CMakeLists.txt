cmake_minimum_required(VERSION 3.26)
project(Ejercicio345)

set(CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(NO_OUTPUT_DIRS)

add_executable(Ejercicio345 main.cpp)

target_link_libraries(Ejercicio345 $(CONAN_LIBS))
