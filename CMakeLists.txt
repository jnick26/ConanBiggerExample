cmake_minimum_required(VERSION 3.5)
project(ComplexComponent)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

message(INFO 'Conan libs: ${CONAN_LIBS}')

add_executable(ComplexComponentTest ComplexComponentTest.cpp)
target_link_libraries(ComplexComponentTest ${CONAN_LIBS})