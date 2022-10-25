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

install(TARGETS main DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

find_package(BLAS REQUIRED)
find_package(LAPACK REQUIRED)
find_package(FFTW REQUIRED)