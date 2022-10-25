//#include "adder.hpp"

extern "C" {
float add(float, float);
}

float add(float a, float b){
    return (a + b);
}
