set(headeradd adder.hpp)

add_library(adder SHARED adder.cpp)
#add_executable(adder1 SHARED adder.hpp)
set_target_properties(adder PROPERTIES PUBLIC_HEADER ${headeradd})

#install(TARGETS adder1 DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
install(TARGETS adder 
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/include
)