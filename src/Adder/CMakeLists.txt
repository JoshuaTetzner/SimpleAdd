add_library(adder SHARED adder.cpp)

install(TARGETS adder DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)