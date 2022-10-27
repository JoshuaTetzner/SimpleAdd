//include "adder.hpp"

extern "C" {
float add(float a, float b);
}

float add(float a, float b){
    return (a + b);
}

int add(int a, int b){
    return (a + b);
}
