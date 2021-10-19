set(SOURCE_FILES
    main.cpp
)

# adding own self libraries
add_subdirectory( 
    Vectors 
)

add_executable(
    ${CMAKE_PROJECT_NAME} 
    ${SOURCE_FILES}
)

target_link_libraries(${CMAKE_PROJECT_NAME}
    PRIVATE 
    Vectors
)