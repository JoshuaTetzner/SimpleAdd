cmake_minimum_required(VERSION 3.2)

project(TestAdder)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_libraries(${PROJECT_NAME} adder)

add_library(main SHARED main.cpp)
SET_SOURCE_FILES_PROPERTIES(
    adder.cpp PROPERTIES OBJECT_DEPENDS ${CMAKE_SOURCE_DIR}/linkerscript
)