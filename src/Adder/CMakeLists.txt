set(headeradd adder.hpp)

add_library(adder SHARED adder.cpp)
set_target_properties(adder PROPERTIES PUBLIC_HEADER ${headeradd})

#install(TARGETS adder DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
INSTALL(TARGETS adder 
        LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
        PUBLIC_HEADER DESTINATION ${CMAKE_SOURCE_DIR}/include
)