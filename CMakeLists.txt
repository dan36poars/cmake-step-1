#cmake mininum required
cmake_minimum_required(VERSION 3.0.0)

# name project
project(Tutorial VERSION 1.4)

#set c++ standart
set(CMAKE_CXX_STANDART 11)
set(CMAKE_CXX_STANDART_REQUIRED true)

# config header file to pass a version number only
# configure_file(<origem> <destino>)
configure_file( "Config/TutorialConfig.h.in"  "Config/TutorialConfig.h")

# add subdirectory
add_subdirectory(Classes)

# add the executable
add_executable(Tutorial main.cpp)

# add link to executable
target_link_libraries(Tutorial PUBLIC Classes)

# add the binary tree to search path for include files
# so that we will find Tutorial.in.h
target_include_directories(
    Tutorial PUBLIC 
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/Classes"
    )
