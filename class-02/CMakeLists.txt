cmake_minimum_required(VERSION 3.0.0)
project(class-02 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_compile_options(-Wall)
add_link_options(-lstdc++ -lgcc)

add_subdirectory(src)

set(${CMAKE_OUTPUT_ROOT_DIRECTORY} ${CMAKE_SOURCE_DIR}/build)

